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

#ifndef Step_BaseSPFObject_h
#define Step_BaseSPFObject_h

#include <Step/Export.h>

#include <Step/BaseEntity.h>

namespace Step {
    class SPFData;

    /*!
     \short Base Object of a STEP-21 file.
     It belongs to lazy loading concepts. A non-initialized object is an instance from BaseSPFObject.
     */
    class STEP_EXPORT BaseSPFObject: public BaseEntity
    {
        ClassType_definitions()
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

