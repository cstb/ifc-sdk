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
#ifndef STEPBASEENTITY_H
#define STEPBASEENTITY_H

#include "BaseObject.h"

namespace Step {

    /**
    * Base Class for every entity from the STEP data model
    */
    class STEP_DLL_DEF BaseEntity : public BaseObject
    {
    public:

        /**
         * Accepts a read/write Step::BaseVisitor.
         *
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(BaseVisitor *visitor);
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

        /**
         * Destructor (virtual)
         */
        virtual ~BaseEntity() {}

        /**
        Gets the Step ID of the entity
        */
        Id getKey() const {
            return mId;
        }



    protected:

        /**
        The type identifier of this class (static)
        */
        static ClassType s_type;

        /**
        Protected constructor from an id and a SPFData
        @param id the Step ID
        @param data the data from Step-21 file
        */
        BaseEntity(Id id, SPFData* data)
                : BaseObject(data), mId(id) {}

        /**
         */
        virtual void copy(const BaseEntity &obj, const BaseCopyOp& copyop)
        {
            BaseObject::copy(obj,copyop);
        }

        /**
        Sets the Step ID of the entity
        @param id the Step Id
        */
        void setKey(Id id) {
            mId = id;
        }


        /**
        The Step ID property
        */
        Id mId;



#ifdef STEP_THREAD_SAFE
        mutable OpenThreads::Mutex   m_mutex;
#endif

        friend class BaseExpressDataSet;
    };

}

#endif
