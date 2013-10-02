// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef Step_Referenced_h
#define Step_Referenced_h

#include <Step/Export.h>
#include <Step/ClassType.h>

#include <vector>

#ifdef STEP_THREAD_SAFE
#include <OpenThreads/ScopedLock>
#include <OpenThreads/Mutex>
#endif

namespace Step {

    class Observer;

    /*!
     \short This class provides Reference counting objects. Instances should be used by the RefPtr class
     */
    class STEP_EXPORT Referenced
    {
        ClassType_definitions()

    public:

        /// Default constructor
        Referenced();

        /// Copy Constructor
        Referenced(const Referenced&);

        /// Overloaded assignment operator
        inline Referenced& operator =(const Referenced&)
        {
            return *this;
        }

        /*!
         \short Explicitly increment the reference count by one.
         Increment the reference count by one, indicating that
         this object has another pointer which is referencing it.
         */
        inline void ref() const
        {
        #ifdef STEP_THREAD_SAFE
            OpenThreads::ScopedLock<OpenThreads::Mutex> lock(_refMutex);
        #endif
            ++_refCount;
        }

        /*!
         \short Explicitly  decrement the reference count by one.
         Decrement the reference count by one, indicating that
         a pointer to this object is referencing it.  If the
         reference count goes to zero, it is assumed that this object
         is no longer referenced and is automatically deleted.
         */
        inline void unref() const
        {
            {
        #ifdef STEP_THREAD_SAFE
                OpenThreads::ScopedLock<OpenThreads::Mutex> lock(_refMutex);
        #endif
                --_refCount;
            }
            if (_refCount <= 0)
                delete this;
        }

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
        inline int referenceCount() const
        {
            return _refCount;
        }

        /**
         *  Add a Observer that is observing this object, notify the Observer when this object gets deleted.
         *  \param observer The observer to add.
         */
        void addObserver(Observer* observer);

        /**
         *  Add a Observer that is observing this object, notify the Observer when this object gets deleted.
         *  \param observer The observer to remove.
         */
        void removeObserver(Observer* observer);

    protected:
        virtual ~Referenced();

    private:
#ifdef STEP_THREAD_SAFE
        mutable OpenThreads::Mutex _refMutex;
#endif
        mutable int _refCount;
        void * _observers;

    };


    /*!
     * \short This class provides the means to keep a reference on Referenced objects
     *
     * example of use :
     * \code
     * class A : public Referenced {  [...] }
     *
     * RefPtr<A> a1 = new A;    // a1->referenceCount() == 1;
     * RefPtr<A> a2 = a1.get(); // a2->referenceCount == 2;
     * a2 = 0;                  // a1->referenceCount == 1;
     * a1 = 0;                  // A::~A() is called;
     * \endcode
     */
    template<class T>
    class RefPtr
    {
    public:
        //! a typedef to our element type
        typedef T element_type;

        //! default constructor
        RefPtr() :
            _ptr(NULL)
        {
        }

        /*!
         * constructor with a pointer to the object to reference
         * \param ptr the object to keep a reference on
         */
        RefPtr(Referenced * ptr) :
            _ptr(ptr)
        {
            if (_ptr)
                _ptr->ref();
        }

        /*!
         * constructor with a reference to the object to reference
         * \param rp the reference of the object to keep a reference on
         */
        RefPtr(const RefPtr& rp) :
            _ptr(rp._ptr)
        {
            if (_ptr)
                _ptr->ref();
        }

        /*!
         * constructor with a reference (of another type, must be a subtype) to the object to reference
         * \param rp the reference of the object to keep a reference on
         */
        template<class T2>
        RefPtr<T> (const RefPtr<T2>& rp) :
            _ptr(rp.get())
        {
            if (_ptr)
                _ptr->ref();
        }

        ~RefPtr()
        {
            if (_ptr)
                _ptr->unref();
            _ptr = NULL;
        }

        /*!
         * Assignment operator with a reference to the object to reference
         * \param rp the reference of the object to keep a reference on
         */
        RefPtr& operator =(const RefPtr& rp)
        {
            if (_ptr == rp._ptr)
                return *this;
            Referenced* tmp_ptr = _ptr;
            _ptr = rp._ptr;
            if (_ptr)
                _ptr->ref();
            // unref second to prevent any deletion of any object which might
            // be Referenced by the other object. i.e rp is child of the
            // original _ptr.
            if (tmp_ptr)
                tmp_ptr->unref();
            return *this;
        }

        /*!
         * Assignment operator with a pointer to the object to reference
         * \param ptr the pointer of the object to keep a reference on
         */
        RefPtr& operator =(T* ptr)
        {
            if (_ptr == ptr)
                return *this;
            Referenced* tmp_ptr = _ptr;
            _ptr = ptr;
            if (_ptr)
                _ptr->ref();
            // unref second to prevent any deletion of any object which might
            // be Referenced by the other object. i.e rp is child of the
            // original _ptr.
            if (tmp_ptr)
                tmp_ptr->unref();
            return *this;
        }

        /*!
         * Assignement with a reference (of another type, must be a subtype) to the object to reference
         * \param rp the reference of the object to keep a reference on
         */
        template<class T2>
        RefPtr<T>& operator=(const RefPtr<T2>& rp)
        {
            if (_ptr == rp.get())
                return *this;
            Referenced* tmp_ptr = _ptr;
            _ptr = rp.get();
            if (_ptr)
                _ptr->ref();
            // unref second to prevent any deletion of any object which might
            // be Referenced by the other object. i.e rp is child of the
            // original _ptr.
            if (tmp_ptr)
                tmp_ptr->unref();
            return *this;
        }
        /*!
         * Assignement with a pointer (of another type, must be a subtype) to the object to reference
         * \param ptr the reference of the object to keep a reference on
         */

        template<class T2>
        RefPtr<T>& operator=(T2* ptr)
        {
            if (_ptr == ptr)
                return *this;
            Referenced* tmp_ptr = _ptr;
            _ptr = ptr;
            if (_ptr)
                _ptr->ref();
            // unref second to prevent any deletion of any object which might
            // be Referenced by the other object. i.e rp is child of the
            // original _ptr.
            if (tmp_ptr)
                tmp_ptr->unref();
            return *this;
        }

        /*!
         * comparison operators for RefPtr. It compares the Referenced pointers
         * \param rhs RefPtr to compare to
         * \{
         */
        inline bool operator ==(const RefPtr& rhs) const
        {
            return (_ptr == rhs._ptr);
        }
        inline bool operator !=(const RefPtr& rhs) const
        {
            return (_ptr != rhs._ptr);
        }
        inline bool operator <(const RefPtr& rhs) const
        {
            return (_ptr < rhs._ptr);
        }
        inline bool operator >(const RefPtr& rhs) const
        {
            return (_ptr > rhs._ptr);
        }

        //! \}

        /*!
         *  comparison operator for const T*.
         *  \param ptr pointer to compare to
         * \{
         */
        inline bool operator ==(const T* ptr) const
        {
            return (_ptr == ptr);
        }
        inline bool operator !=(const T* ptr) const
        {
            return (_ptr != ptr);
        }
        inline bool operator <(const T* ptr) const
        {
            return (_ptr < ptr);
        }
        inline bool operator >(const T* ptr) const
        {
            return (_ptr > ptr);
        }
        //! \}

        /*!
         *  getters
         * \{
         */
        T& operator*() const
        {
            return *(static_cast<T*> (_ptr));
        }
        T* operator->() const
        {
            return static_cast<T*> (_ptr);
        }
        T* get() const
        {
            return static_cast<T*> (_ptr);
        }
        //! \}

        /*!
         *  to test the validity of the reference
         * \{
         */
        bool operator!() const
        {
            return _ptr == NULL;
        }

        bool valid() const
        {
            return _ptr != NULL;
        }
        //! \}

        /*!
         * take control over the object pointed to by RefPtr, unReferenced but do not delete even if ref count goes to 0,
         * return the pointer to the object.
         * Note, do not use this unless you are 100% sure your code handles the deletion of the object correctly, and
         * only use when absolutely required.
         */
        T* release()
        {
            T* tmp = static_cast<T*> (_ptr);
            if (_ptr)
            {
                _ptr->unref_nodelete();
            }
            _ptr = NULL;
            return tmp;
        }

        /*!
         * to exchange two Referenced objects
         * \param rp the RefPtr to swap with
         */
        void swap(RefPtr& rp)
        {
            T* tmp = _ptr;
            _ptr = rp._ptr;
            rp._ptr = tmp;
        }

    private:
        //! the pointer to our referenced object
        Referenced* _ptr;
    };
    /*!
     \short This class provides a common interface to all observers
     */
    class Observer
    {
    public:
        virtual ~Observer()
        {
        }

        /*!
         * Called by Referenced::~Referenced().
         * Implement to perform some actions when this objects gets deleted.
         */
        virtual void objectDeleted(void*) = 0;
    };

    /*!
     *  Smart pointer for observed objects, that automatically set pointers to them to null when they deleted.
     */
    template<class T>
    class ObsPtr: public Observer
    {

    public:
        //! typedef to our element_type
        typedef T element_type;

        ObsPtr() : _ptr(0L)
        {
        }
        /*!
         * contructor
         * \param t pointer to a Referenced object
         */
        ObsPtr(Referenced* t) : _ptr(t)
        {
            if (_ptr)
                _ptr->addObserver(this);
        }

        /*!
         * copy contructor
         * \param rp reference to the ObsPtr to copy
         */
        ObsPtr(const ObsPtr& rp) :
            Observer(), _ptr(rp._ptr)
        {
            if (_ptr)
                _ptr->addObserver(this);
        }
        ~ObsPtr()
        {
            if (_ptr)
                _ptr->removeObserver(this);
            _ptr = 0;
        }

        /*!
         * Assignment operator
         * \param rhs the ObsPtr to assign
         * \return a reference to this ObsPtr
         */
        inline ObsPtr& operator =(const ObsPtr& rhs)
        {
            if (_ptr == rhs._ptr)
            {
                return *this;
            }
            if (_ptr)
            {
                _ptr->removeObserver(this);
            }

            _ptr = rhs._ptr;

            if (_ptr)
            {
                _ptr->addObserver(this);
            }
            return *this;
        }

        /*!
         * Assignment operator
         * \param ptr the Referenced object to assign
         * \return a reference to this ObsPtr
         */
        inline ObsPtr& operator =(Referenced* ptr)
        {
            if (_ptr == ptr)
            {
                return *this;
            }
            if (_ptr)
            {
                _ptr->removeObserver(this);
            }

            _ptr = ptr;

            if (_ptr)
            {
                _ptr->addObserver(this);
            }
            return *this;
        }

        /*!
         * remove our reference to the Referenced object
         */
        virtual void objectDeleted(void*)
        {
            _ptr = 0;
        }

        /*!
         * comparison operators for ObsPtr. It compares the Referenced pointers
         * \param rhs ObsPtr to compare to
         * \return success
         * \{
         */
        inline bool operator ==(const ObsPtr& rhs) const
        {
            return (_ptr == rhs._ptr);
        }
        inline bool operator !=(const ObsPtr& rhs) const
        {
            return (_ptr != rhs._ptr);
        }
        inline bool operator <(const ObsPtr& rhs) const
        {
            return (_ptr < rhs._ptr);
        }
        inline bool operator >(const ObsPtr& rhs) const
        {
            return (_ptr > rhs._ptr);
        }
        //! \}

        /*!
         * comparison operator for const T*.
         * \param ptr pointer to compare to
         * \return success
         * \{
         */
        inline bool operator ==(const T* ptr) const
        {
            return (_ptr == ptr);
        }
        inline bool operator !=(const T* ptr) const
        {
            return (_ptr != ptr);
        }
        inline bool operator <(const T* ptr) const
        {
            return (_ptr < ptr);
        }
        inline bool operator >(const T* ptr) const
        {
            return (_ptr > ptr);
        }
        //! \}

        /*!
         *  getters
         * \{
         */
        inline T& operator*()
        {
            return *static_cast<T*> (_ptr);
        }

        inline const T& operator*() const
        {
            return *static_cast<T*> (_ptr);
        }

        inline T* operator->()
        {
            return static_cast<T*> (_ptr);
        }

        inline const T* operator->() const
        {
            return static_cast<T*> (_ptr);
        }

        inline T* get()
        {
            return static_cast<T*> (_ptr);
        }

        inline const T* get() const
        {
            return static_cast<T*> (_ptr);
        }
        //! \}

        /*!
         *  to test the validity of the reference
         * \{
         */
        inline bool valid() const
        {
            return _ptr != 0L;
        }

        inline bool operator!() const
        {
            return _ptr == 0L;
        }
        //! \}

    private:
        Referenced* _ptr;
    };

}

#endif
