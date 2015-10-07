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

#ifndef Step_BaseExpressDataSet_h
#define Step_BaseExpressDataSet_h

#include <Step/Export.h>

#include <Step/Types.h>
#include <Step/ClassType.h>
#include <Step/SPFHeader.h>
#include <Step/CallBack.h>
#include <Step/StepLogger.h>

#include <map>
#include <string>

namespace Step {
    class BaseObject;
    class BaseSPFObject;
    class SPFData;

    /*!
     \short Base definition of a STEP ExpressDataSet
     */
    class STEP_EXPORT BaseExpressDataSet: public Referenced
    {
    public:

        /*!
         \short Default Constructor
         */
        BaseExpressDataSet();

        /*!
         \short Virtual destructor which destroys every instantiated object
         */
        virtual ~BaseExpressDataSet();

        /*!
         \short Get an object using the STEP-21 ID. If the object is not inited, it becomes inited
         @param id ID of the entity
         */
        virtual BaseEntity* get(Id id);

        /// Get all objects from the model
        /*!
         @return The list of every instance from the model
         */
        MapOfEntities& getAll();

        /*!
         \short Returns true if an object with a specified id exists
         @param id Id (integer)
         @return true if an object with a specified id exists
         */
        bool exists(Step::Id id) const;

        /*!
         \short Get an object using the STEP-21 ID. If the object is not inited, it returns a BaseSPFObject
         @param id ID of the entity
         @return an entity instance
         */
        BaseEntity* find(Id id);

        /*!
         \short Get the SPF arguments of an entity
         @param id id of the entity
         @return The parameters from the STEP-21 file
         */
        SPFData* getArgs(Id id);

        /*!
         \short Get the header information (STEP-21)
         @return A reference to the header
         */
        SPFHeader& getHeader();

        /*!
         \short Set the header information (STEP-21)
         @param header A reference to the header
         */
        void setHeader(SPFHeader& header);

        /*!
         \short Inits all entities (as opposed to the lazy loading concept)
         */
        void instantiateAll(CallBack *callback =0);

        void setLogger(StepLogger *logger);

    protected:

        /*!
         \short Returns a new id for an entity
         */
        Id getNewId();

        /*!
         \short Store an object with its Id.
         @param id ID of the entity
         @param obj a pointer to the entity
         */
        bool registerObject(Id id, BaseEntity* obj);

        /*!
         \short Returns the greater id already defined
         @return the greater already defined Step ID
         */
        Id maxId();

        /*!
         \short updates the greater already defined Step ID
         */
        void updateMaxId(Id id);

        /*!
         * \short Returns the non-initiated entity, if it exists. otherwise, it returns NULL
         * \param id the Id of the object to get
         * \return A pointer to a non-initiated entity
         */
        virtual BaseSPFObject* getSPFObject(Id id);

        /*!
         \short Returns the allocate function of a SPFObject
         @param spfObj A non-inited object
         @return A function pointer of the allocation function
         */
        AllocateFuncType getAllocateFunction(BaseSPFObject* spfObj);

    private:

        Id m_maxId;
        MapOfEntities m_Id2BaseEntity;
        SPFHeader m_header;
        RefPtr<StepLogger> m_logger;

        friend class BaseSPFReader;
    };
}

#endif
