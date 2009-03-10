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
#ifndef STEP_BaseSPFObject_H
#define STEP_BaseSPFObject_H

#include "StepDLL.h"
#include "BaseEntity.h"

namespace Step {
    class SPFData;

    /*!
    \short Base Object of a STEP-21 file.
    It belongs to lazy loading concepts. A non-initialized object is an instance from BaseSPFObject.
    */
    class STEP_DLL_DEF BaseSPFObject : public BaseEntity
    {

    public:

        /*!
        \short Get the type identifier of this class (static)
        */
        static const ClassType& getClassType();

        /*!
        \short Virtual destructor. It does nothing.
        */
        virtual ~BaseSPFObject() {}

        /*!
        \short Get the type identifier of this instance (BaseSPFObject).
        */
        virtual const ClassType& getType() const;

        /*!
        \short Check if this instance is of type t
        @param t the reference type
        */
        virtual bool isOfType(const ClassType &t) const ;

        /**
         * Returns the class type as a human readable std::string.
         *
         */
        virtual const std::string &type() const;

    protected:
        /*!
        \short Constructor. It needs SPF arguments and the entity Type
        @param id The assigned Step ID
        @param data The parameters (from STEP-21 file) of this entity
        */
        BaseSPFObject(Id id, SPFData* data);

        /*!
        \short Get the function to create the real object
        @return A pointer to the allocation function
        */
        AllocateFuncType getAllocateFunction() {
            return m_allocFuncType;
        }

        /*!
        \short Set the function to create the real object
        @param type A pointer to the allocation function
        */
        void setAllocateFunction(AllocateFuncType type) {
            m_allocFuncType = type;
        }

        /*!
        \short Initialize the instance (Lazy loading concept)
        */
        virtual bool init();

        AllocateFuncType m_allocFuncType;

    private:

        static ClassType s_type;

        friend class BaseSPFReader;
        friend class BaseExpressDataSet;
    };
}

#endif

