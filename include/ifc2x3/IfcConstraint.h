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

#ifndef IFC2X3_IFCCONSTRAINT_H
#define IFC2X3_IFCCONSTRAINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include <Step/ClassType.h>
#include <Step/BaseEntity.h>
#include <string>
#include <Step/Aggregation.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcConstraintAggregationRelationship;
    class IfcConstraintClassificationRelationship;
    class IfcConstraintRelationship;
    class IfcDateTimeSelect;
    class IfcPropertyConstraintRelationship;

    /**
     */
    class IFC2X3_DLL_DEF IfcConstraint : public Step::BaseEntity {
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
        IfcConstraintEnum getConstraintGrade();
        /**
         * Sets the value of the explicit attribute 'ConstraintGrade'.
         * 
         * @param value
         */
        void setConstraintGrade(IfcConstraintEnum value);
        /**
         */
        IfcLabel getConstraintSource();
        /**
         * Sets the value of the explicit attribute 'ConstraintSource'.
         * 
         * @param value
         */
        void setConstraintSource(const IfcLabel &value);
        /**
         */
        IfcActorSelect *getCreatingActor();
        /**
         * Sets the value of the explicit attribute 'CreatingActor'.
         * 
         * @param value
         */
        void setCreatingActor(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        IfcDateTimeSelect *getCreationTime();
        /**
         * Sets the value of the explicit attribute 'CreationTime'.
         * 
         * @param value
         */
        void setCreationTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         */
        IfcLabel getUserDefinedGrade();
        /**
         * Sets the value of the explicit attribute 'UserDefinedGrade'.
         * 
         * @param value
         */
        void setUserDefinedGrade(const IfcLabel &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintClassificationRelationship > > &getClassifiedAs();
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintRelationship > > &getRelatesConstraints();
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintRelationship > > &getIsRelatedWith();
        /**
         */
        Step::Set< Step::ObsPtr< IfcPropertyConstraintRelationship > > &getPropertiesForConstraint();
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintAggregationRelationship > > &getAggregates();
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintAggregationRelationship > > &getIsAggregatedIn();
        /**
         */
        virtual void release();
        friend class IfcConstraintAggregationRelationship;
        friend class IfcConstraintClassificationRelationship;
        friend class ExpressDataSet;
        friend class IfcPropertyConstraintRelationship;
        friend class IfcConstraintRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcConstraint(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraint();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcConstraint &obj, const CopyOp &copyop);

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
        IfcConstraintEnum m_constraintGrade;
        /**
         */
        std::string m_constraintSource;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_creatingActor;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_creationTime;
        /**
         */
        std::string m_userDefinedGrade;
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintClassificationRelationship > > m_classifiedAs;
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintRelationship > > m_relatesConstraints;
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintRelationship > > m_isRelatedWith;
        /**
         */
        Step::Set< Step::ObsPtr< IfcPropertyConstraintRelationship > > m_propertiesForConstraint;
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintAggregationRelationship > > m_aggregates;
        /**
         */
        Step::Set< Step::ObsPtr< IfcConstraintAggregationRelationship > > m_isAggregatedIn;

    };

}

#endif // IFC2X3_IFCCONSTRAINT_H
