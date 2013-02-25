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

#ifndef Step_BaseEntity_h
#define Step_BaseEntity_h

#include <Step/BaseObject.h>

namespace Step {

    /*!
     ** Base Class for every entity from the STEP data model
     */
    class STEP_EXPORT BaseEntity: public BaseObject
    {
        ClassType_definitions();
    public:

        /**
         * Accepts a read/write Step::BaseVisitor.
         *
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(BaseVisitor *visitor);

        /**
         * Destructor (virtual)
         */
        virtual ~BaseEntity();

        /**
         Gets the Step ID of the entity
         */
        Id getKey() const;
    protected:

        /**
         Protected constructor from an id and a SPFData
         @param id the Step ID
         @param data the data from Step-21 file
         */
        BaseEntity(Id id, SPFData* data);

        /**
         * copy the entity obj into this one using the copyop Copy Operator
         * \param obj the object to copy
         * \param copyop the copy operator to use
         */
        virtual void copy(const BaseEntity &obj, const BaseCopyOp& copyop);

        /**
         Sets the Step ID of the entity
         @param id the Step Id
         */
        void setKey(Id id);

        /**
         The Step ID property
         */
        Id mId;

#ifdef STEP_THREAD_SAFE
        mutable OpenThreads::Mutex m_mutex;
#endif

        friend class BaseExpressDataSet;
    };

    bool STEP_EXPORT keySort(Step::BaseEntity* i, Step::BaseEntity* j);
}

#endif
