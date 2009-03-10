/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/
#ifndef _STEP_Referenced_h_
#define _STEP_Referenced_h_

#include "StepDLL.h"
#include "ClassType.h"

#include <vector>

#ifdef STEP_THREAD_SAFE
#include <OpenThreads/ScopedLock>
#include <OpenThreads/Mutex>
#endif

namespace Step {


    class Observer;

    /*!
    \short This class provides Reference counting objects. Instances should be used by RefPtr class
    */
    class STEP_DLL_DEF Referenced
    {

    public:

        /// Default constructor
        Referenced();

        /// Copy Constructor
        Referenced(const Referenced&);

        /// Overloaded assignment operator
        inline Referenced& operator = (const Referenced&) {
            return *this;
        }

        /**
		 * Returns the class type as a human readable std::string.
		 *
		 */
		virtual const std::string &type() const;
		/**
		 * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
		 *
		 */
		static const ClassType &getClassType();
		/**
		 * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
		 *
		 */
		virtual const ClassType &getType() const;
		/**
		 * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
		 *
		 * @param t
		 */
		virtual bool isOfType(const ClassType& t) const;


        /*!
        \short Explicitly increment the reference count by one.
        Increment the reference count by one, indicating that
        this object has another pointer which is referencing it.
        */
        inline void ref() const;

        /*!
        \short Explicitly  decrement the reference count by one.
        Decrement the reference count by one, indicating that
        a pointer to this object is referencing it.  If the
        reference count goes to zero, it is assumed that this object
        is no longer referenced and is automatically deleted.
        */
        inline void unref() const;

        /*! decrement the reference count by one, indicating that
        a pointer to this object is referencing it.  However, do
        not delete it, even if ref count goes to 0.  Warning, unref_nodelete()
        should only be called if the user knows exactly who will
        be responsible for, one should prefer unref() over unref_nodelete()
        as the later can lead to memory leaks.
        */
        void unref_nodelete() const;

        /*!
        \short return the number pointers currently referencing this object.
        */
        inline int referenceCount() const {
            return _refCount;
        }

        /** Add a Observer that is observing this object, notify the Observer when this object gets deleted.*/
        void addObserver(Observer* observer);

        /** Add a Observer that is observing this object, notify the Observer when this object gets deleted.*/
        void removeObserver(Observer* observer);

    protected:
        virtual ~Referenced();

#ifdef STEP_THREAD_SAFE
        mutable OpenThreads::Mutex   _refMutex;
#endif
        mutable int _refCount;
        void *      _observers;

    private:
        static Step::ClassType s_type;
    };

    void Referenced::ref() const
    {
#ifdef STEP_THREAD_SAFE
        OpenThreads::ScopedLock<OpenThreads::Mutex> lock(_refMutex);
#endif
        ++_refCount;
    }

    void Referenced::unref() const
    {
        {
#ifdef STEP_THREAD_SAFE
            OpenThreads::ScopedLock<OpenThreads::Mutex> lock(_refMutex);
#endif
            --_refCount;
        }
        if (_refCount<=0)
            delete this;
    }


    template <class T>
    class RefPtr {
    public:
        typedef T element_type;

        RefPtr() :_ptr(NULL) {}

        RefPtr(T* t):_ptr(t) {
            if (_ptr) _ptr->ref();
        }

        RefPtr(const RefPtr& rp):_ptr(rp._ptr) {
            if (_ptr) _ptr->ref();
        }

        template <class T2>
        RefPtr<T>(const RefPtr<T2>& rp) : _ptr(rp.get()) {
            if (_ptr) _ptr->ref();
        }

        ~RefPtr() {
            if (_ptr) _ptr->unref(); _ptr=NULL;
        }

        RefPtr& operator = (const RefPtr& rp) {
            if (_ptr==rp._ptr) return *this;
            Referenced* tmp_ptr = _ptr;
            _ptr = rp._ptr;
            if (_ptr) _ptr->ref();
            // unref second to prevent any deletion of any object which might
            // be Referenced by the other object. i.e rp is child of the
            // original _ptr.
            if (tmp_ptr) tmp_ptr->unref();
            return *this;
        }

        RefPtr& operator = (T* ptr) {
            if (_ptr==ptr) return *this;
            Referenced* tmp_ptr = _ptr;
            _ptr = ptr;
            if (_ptr) _ptr->ref();
            // unref second to prevent any deletion of any object which might
            // be Referenced by the other object. i.e rp is child of the
            // original _ptr.
            if (tmp_ptr) tmp_ptr->unref();
            return *this;
        }

        template <class T2>
        RefPtr<T>& operator=(const RefPtr<T2>& rp) {
            if (_ptr==rp.get()) return *this;
            Referenced* tmp_ptr = _ptr;
            _ptr = rp.get();
            if (_ptr) _ptr->ref();
            // unref second to prevent any deletion of any object which might
            // be Referenced by the other object. i.e rp is child of the
            // original _ptr.
            if (tmp_ptr) tmp_ptr->unref();
            return *this;
        }

        template <class T2>
        RefPtr<T>& operator=(T2* ptr) {
            if (_ptr==ptr) return *this;
            Referenced* tmp_ptr = _ptr;
            _ptr = ptr;
            if (_ptr) _ptr->ref();
            // unref second to prevent any deletion of any object which might
            // be Referenced by the other object. i.e rp is child of the
            // original _ptr.
            if (tmp_ptr) tmp_ptr->unref();
            return *this;
        }


        // comparison operators for ObsPtr.
        inline bool operator == (const RefPtr& rp) const {
            return (_ptr==rp._ptr);
        }
        inline bool operator != (const RefPtr& rp) const {
            return (_ptr!=rp._ptr);
        }
        inline bool operator < (const RefPtr& rp) const {
            return (_ptr<rp._ptr);
        }
        inline bool operator > (const RefPtr& rp) const {
            return (_ptr>rp._ptr);
        }

        // comparison operator for const T*.
        inline bool operator == (const T* ptr) const {
            return (_ptr==ptr);
        }
        inline bool operator != (const T* ptr) const {
            return (_ptr!=ptr);
        }
        inline bool operator < (const T* ptr) const {
            return (_ptr<ptr);
        }
        inline bool operator > (const T* ptr) const {
            return (_ptr>ptr);
        }

        T& operator*() const {
            return *(static_cast<T*>(_ptr));
        }
        T* operator->() const {
            return static_cast<T*>(_ptr);
        }
        T* get() const {
            return static_cast<T*>(_ptr);
        }
        // is ambiguous operator T* () const { return static_cast<T*>(_ptr); }

        bool operator!() const {
            return _ptr==NULL;
        }
        bool valid() const {
            return _ptr!=NULL;
        }


        /*!
        ** take control over the object pointed to by RefPtr, unReferenced but do not delete even if ref count goes to 0,
        ** return the pointer to the object.
        ** Note, do not use this unless you are 100% sure your code handles the deletion of the object correctly, and
        ** only use when absolutely required.
        */
        T* release() {
            T* tmp=static_cast<T*>(_ptr);
            if (_ptr)
                _ptr->unref_nodelete();
            _ptr=NULL;
            return tmp;
        }

        void swap(RefPtr& rp) {
            T* tmp=_ptr; _ptr=rp._ptr; rp._ptr=tmp;
        }

    private:
        Referenced* _ptr;
    };

    class Observer
    {
    public:
        virtual ~Observer() {}
        virtual void objectDeleted(void*) {}
    };

    /** Smart pointer for observed objects, that automatically set pointers to them to null when they deleted.*/
    template<class T>
    class ObsPtr : public Observer
    {

    public:
        typedef T element_type;

        ObsPtr() :_ptr(0L)                            {}
        ObsPtr(Referenced* t):_ptr(t)                          {
            if (_ptr) _ptr->addObserver(this);
        }
        ObsPtr(const ObsPtr& rp):Observer(), _ptr(rp._ptr)  {
            if (_ptr) _ptr->addObserver(this);
        }
        ~ObsPtr()                                     {
            if (_ptr) _ptr->removeObserver(this); _ptr=0;
        }

        inline ObsPtr& operator = (const ObsPtr& rp)
        {
            if (_ptr==rp._ptr) return *this;
            if (_ptr) _ptr->removeObserver(this);

            _ptr = rp._ptr;
            if (_ptr) _ptr->addObserver(this);
            return *this;
        }

        inline ObsPtr& operator = (Referenced* ptr)
        {
            if (_ptr==ptr) return *this;
            if (_ptr) _ptr->removeObserver(this);

            _ptr = ptr;
            if (_ptr) _ptr->addObserver(this);

            return *this;
        }

        virtual void objectDeleted(void*)
        {
            _ptr = 0;
        }

        // comparison operators for ObsPtr.
        inline bool operator == (const ObsPtr& rp) const {
            return (_ptr==rp._ptr);
        }
        inline bool operator != (const ObsPtr& rp) const {
            return (_ptr!=rp._ptr);
        }
        inline bool operator < (const ObsPtr& rp) const {
            return (_ptr<rp._ptr);
        }
        inline bool operator > (const ObsPtr& rp) const {
            return (_ptr>rp._ptr);
        }

        // comparison operator for const T*.
        inline bool operator == (const T* ptr) const {
            return (_ptr==ptr);
        }
        inline bool operator != (const T* ptr) const {
            return (_ptr!=ptr);
        }
        inline bool operator < (const T* ptr) const {
            return (_ptr<ptr);
        }
        inline bool operator > (const T* ptr) const {
            return (_ptr>ptr);
        }


        inline T& operator*()  {
            return *static_cast<T*>(_ptr);
        }

        inline const T& operator*() const {
            return *static_cast<T*>(_ptr);
        }

        inline T* operator->() {
            return static_cast<T*>(_ptr);
        }

        inline const T* operator->() const   {
            return static_cast<T*>(_ptr);
        }

        inline bool operator!() const   {
            return _ptr==0L;
        }

        inline bool valid() const       {
            return _ptr!=0L;
        }

        inline T* get() {
            return static_cast<T*>(_ptr);
        }

        inline const T* get() const {
            return static_cast<T*>(_ptr);
        }

    private:
        Referenced* _ptr;
    };

}

#endif
