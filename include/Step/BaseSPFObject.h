/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
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
#ifndef Step_BaseSPFObject_h
#define Step_BaseSPFObject_h

#include "StepDLL.h"

#include "BaseEntity.h"

namespace Step {
    class SPFData;

    /*!
     \short Base Object of a STEP-21 file.
     It belongs to lazy loading concepts. A non-initialized object is an instance from BaseSPFObject.
     */
    class STEP_DLL_DEF BaseSPFObject: public BaseEntity
    {
        ClassType_definitions();
    public:
        /*!
         * Virtual destructor.
         */
        virtual ~BaseSPFObject();

    protected:
        /*!
         * Constructor. It needs SPF arguments and the entity Type
         * @param id The assigned Step ID
         * @param data The parameters (from STEP-21 file) of this entity
         */
        BaseSPFObject(Id id, SPFData* data);

        /*!
         * Get the function to create the real object
         * A pointer to the allocation function
         */
        AllocateFuncType getAllocateFunction();

        /*!
         * Set the function to create the real object
         * @param type A pointer to the allocation function
         */
        void setAllocateFunction(AllocateFuncType type);

        /*!
         * Initialize the instance (Lazy loading concept)
         */
        virtual bool init();

        /*!
         * allocating function type
         */
        AllocateFuncType m_allocFuncType;

    private:

        friend class BaseSPFReader;
        friend class BaseExpressDataSet;
    };
}

#endif

