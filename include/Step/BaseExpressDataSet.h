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
#ifndef STEP_EXPRESSDATASET
#define STEP_EXPRESSDATASET

#include "StepDLL.h"
#include "Types.h"
#include "ClassType.h"
#include "SPFHeader.h"

#include <map>
#include <string>

namespace Step
{
    class BaseObject;
    class BaseSPFObject;
    class SPFData;

    /*!
     \short Base definition of a STEP ExpressDataSet
     */
    class STEP_DLL_DEF BaseExpressDataSet : public Referenced
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
        /*! Warning : This methods calls instantiateAll() before returning the objects so this method
         could be time-consuming
         @return The list of every instance from the model
         */
        const MapOfEntities& getAll();

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
        void instantiateAll();

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
         \short Returns the non-inited entity, if it exists. otherwise, it returns NULL
         @return A pointer to a non-inited entity
         */
        virtual BaseSPFObject* getSPFObject(Id id);

        /*!
         \short Returns the allocate function of a SPFObject
         @param spfObj A non-inited object
         @return A function pointer of the allocation function
         */
        AllocateFuncType getAllocateFunction(BaseSPFObject* spfObj);

        Id m_maxId;
        MapOfEntities m_Id2BaseObject;
        SPFHeader m_header;

        friend class BaseSPFReader;
    };
}

#endif
