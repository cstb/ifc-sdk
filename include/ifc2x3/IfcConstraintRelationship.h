/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#ifndef IFC2X3_IFCCONSTRAINTRELATIONSHIP_H
#define IFC2X3_IFCCONSTRAINTRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Aggregation.h>
#include <Step/SPFData.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcConstraint;

    /**
     */
    class IFC2X3_DLL_DEF IfcConstraintRelationship : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        IfcConstraint *getRelatingConstraint();
        /**
         * Sets the value of the explicit attribute 'RelatingConstraint'.
         * 
         * @param value
         */
        void setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcConstraint > > &getRelatedConstraints();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        /**
         */
        class Inverted_RelatedConstraints_type : public Step::Set< Step::RefPtr< IfcConstraint > > {
        public:
            /**
             */
            IfcConstraintRelationship *mOwner;
            /**
             */
            Inverted_RelatedConstraints_type();
            /**
             * @param owner
             */
            void setOwner(IfcConstraintRelationship *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcConstraint > &value);

        };


    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstraintRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraintRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstraintRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Step::RefPtr< IfcConstraint > m_relatingConstraint;
        /**
         */
        Inverted_RelatedConstraints_type m_relatedConstraints;

    };

}

#endif // IFC2X3_IFCCONSTRAINTRELATIONSHIP_H
