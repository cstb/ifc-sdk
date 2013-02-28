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

#ifndef IFC2X3_IFCCONSTRAINT_H
#define IFC2X3_IFCCONSTRAINT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcDateTimeSelect;

    /**
     * Generated class for the IfcConstraint Entity.
     * 
     */
    class IFC2X3_EXPORT IfcConstraint : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * unset the attribute 'Description'.
         * 
         */
        virtual void unsetDescription();
        /**
         * Test if the attribute 'Description' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDescription() const;
        /**
         * Gets the value of the explicit attribute 'ConstraintGrade'.
         * 
         */
        virtual IfcConstraintEnum getConstraintGrade();
        /**
         * (const) Returns the value of the explicit attribute 'ConstraintGrade'.
         * 
         * @return the value of the explicit attribute 'ConstraintGrade'
         */
        virtual const IfcConstraintEnum getConstraintGrade() const;
        /**
         * Sets the value of the explicit attribute 'ConstraintGrade'.
         * 
         * @param value
         */
        virtual void setConstraintGrade(IfcConstraintEnum value);
        /**
         * unset the attribute 'ConstraintGrade'.
         * 
         */
        virtual void unsetConstraintGrade();
        /**
         * Test if the attribute 'ConstraintGrade' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConstraintGrade() const;
        /**
         * Gets the value of the explicit attribute 'ConstraintSource'.
         * 
         */
        virtual IfcLabel getConstraintSource();
        /**
         * (const) Returns the value of the explicit attribute 'ConstraintSource'.
         * 
         * @return the value of the explicit attribute 'ConstraintSource'
         */
        virtual const IfcLabel getConstraintSource() const;
        /**
         * Sets the value of the explicit attribute 'ConstraintSource'.
         * 
         * @param value
         */
        virtual void setConstraintSource(const IfcLabel &value);
        /**
         * unset the attribute 'ConstraintSource'.
         * 
         */
        virtual void unsetConstraintSource();
        /**
         * Test if the attribute 'ConstraintSource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConstraintSource() const;
        /**
         * Gets the value of the explicit attribute 'CreatingActor'.
         * 
         */
        virtual IfcActorSelect *getCreatingActor();
        /**
         * (const) Returns the value of the explicit attribute 'CreatingActor'.
         * 
         * @return the value of the explicit attribute 'CreatingActor'
         */
        virtual const IfcActorSelect *getCreatingActor() const;
        /**
         * Sets the value of the explicit attribute 'CreatingActor'.
         * 
         * @param value
         */
        virtual void setCreatingActor(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * unset the attribute 'CreatingActor'.
         * 
         */
        virtual void unsetCreatingActor();
        /**
         * Test if the attribute 'CreatingActor' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCreatingActor() const;
        /**
         * Gets the value of the explicit attribute 'CreationTime'.
         * 
         */
        virtual IfcDateTimeSelect *getCreationTime();
        /**
         * (const) Returns the value of the explicit attribute 'CreationTime'.
         * 
         * @return the value of the explicit attribute 'CreationTime'
         */
        virtual const IfcDateTimeSelect *getCreationTime() const;
        /**
         * Sets the value of the explicit attribute 'CreationTime'.
         * 
         * @param value
         */
        virtual void setCreationTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * unset the attribute 'CreationTime'.
         * 
         */
        virtual void unsetCreationTime();
        /**
         * Test if the attribute 'CreationTime' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCreationTime() const;
        /**
         * Gets the value of the explicit attribute 'UserDefinedGrade'.
         * 
         */
        virtual IfcLabel getUserDefinedGrade();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedGrade'.
         * 
         * @return the value of the explicit attribute 'UserDefinedGrade'
         */
        virtual const IfcLabel getUserDefinedGrade() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedGrade'.
         * 
         * @param value
         */
        virtual void setUserDefinedGrade(const IfcLabel &value);
        /**
         * unset the attribute 'UserDefinedGrade'.
         * 
         */
        virtual void unsetUserDefinedGrade();
        /**
         * Test if the attribute 'UserDefinedGrade' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedGrade() const;
        /**
         * Gets the value of the inverse attribute 'ClassifiedAs'.
         * 
         */
        virtual Inverse_Set_IfcConstraintClassificationRelationship_0_n &getClassifiedAs();
        /**
         * (const) Returns the value of the explicit attribute 'ClassifiedAs'.
         * 
         * @return the value of the explicit attribute 'ClassifiedAs'
         */
        const virtual Inverse_Set_IfcConstraintClassificationRelationship_0_n &getClassifiedAs() const;
        /**
         * Test if the attribute 'ClassifiedAs' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testClassifiedAs() const;
        /**
         * Gets the value of the inverse attribute 'RelatesConstraints'.
         * 
         */
        virtual Inverse_Set_IfcConstraintRelationship_0_n &getRelatesConstraints();
        /**
         * (const) Returns the value of the explicit attribute 'RelatesConstraints'.
         * 
         * @return the value of the explicit attribute 'RelatesConstraints'
         */
        const virtual Inverse_Set_IfcConstraintRelationship_0_n &getRelatesConstraints() const;
        /**
         * Test if the attribute 'RelatesConstraints' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatesConstraints() const;
        /**
         * Gets the value of the inverse attribute 'IsRelatedWith'.
         * 
         */
        virtual Inverse_Set_IfcConstraintRelationship_0_n &getIsRelatedWith();
        /**
         * (const) Returns the value of the explicit attribute 'IsRelatedWith'.
         * 
         * @return the value of the explicit attribute 'IsRelatedWith'
         */
        const virtual Inverse_Set_IfcConstraintRelationship_0_n &getIsRelatedWith() const;
        /**
         * Test if the attribute 'IsRelatedWith' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsRelatedWith() const;
        /**
         * Gets the value of the inverse attribute 'PropertiesForConstraint'.
         * 
         */
        virtual Inverse_Set_IfcPropertyConstraintRelationship_0_n &getPropertiesForConstraint();
        /**
         * (const) Returns the value of the explicit attribute 'PropertiesForConstraint'.
         * 
         * @return the value of the explicit attribute 'PropertiesForConstraint'
         */
        const virtual Inverse_Set_IfcPropertyConstraintRelationship_0_n &getPropertiesForConstraint() const;
        /**
         * Test if the attribute 'PropertiesForConstraint' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPropertiesForConstraint() const;
        /**
         * Gets the value of the inverse attribute 'Aggregates'.
         * 
         */
        virtual Inverse_Set_IfcConstraintAggregationRelationship_0_n &getAggregates();
        /**
         * (const) Returns the value of the explicit attribute 'Aggregates'.
         * 
         * @return the value of the explicit attribute 'Aggregates'
         */
        const virtual Inverse_Set_IfcConstraintAggregationRelationship_0_n &getAggregates() const;
        /**
         * Test if the attribute 'Aggregates' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAggregates() const;
        /**
         * Gets the value of the inverse attribute 'IsAggregatedIn'.
         * 
         */
        virtual Inverse_Set_IfcConstraintAggregationRelationship_0_n &getIsAggregatedIn();
        /**
         * (const) Returns the value of the explicit attribute 'IsAggregatedIn'.
         * 
         * @return the value of the explicit attribute 'IsAggregatedIn'
         */
        const virtual Inverse_Set_IfcConstraintAggregationRelationship_0_n &getIsAggregatedIn() const;
        /**
         * Test if the attribute 'IsAggregatedIn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsAggregatedIn() const;
        friend class Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type;
        friend class IfcConstraintAggregationRelationship;
        friend class Inverted_IfcConstraintRelationship_RelatedConstraints_type;
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
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        IfcConstraintEnum m_constraintGrade;
        /**
         */
        Step::String m_constraintSource;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_creatingActor;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_creationTime;
        /**
         */
        Step::String m_userDefinedGrade;
        /**
         */
        Inverse_Set_IfcConstraintClassificationRelationship_0_n m_classifiedAs;
        /**
         */
        Inverse_Set_IfcConstraintRelationship_0_n m_relatesConstraints;
        /**
         */
        Inverse_Set_IfcConstraintRelationship_0_n m_isRelatedWith;
        /**
         */
        Inverse_Set_IfcPropertyConstraintRelationship_0_n m_propertiesForConstraint;
        /**
         */
        Inverse_Set_IfcConstraintAggregationRelationship_0_n m_aggregates;
        /**
         */
        Inverse_Set_IfcConstraintAggregationRelationship_0_n m_isAggregatedIn;

    };

}

#endif // IFC2X3_IFCCONSTRAINT_H
