#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcConstraint Entity.
     *
     */
    class IFC2X3_EXPORT IfcConstraint : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_Name;
        IfcText m_Description;
        IfcConstraintEnum m_ConstraintGrade;
        IfcLabel m_ConstraintSource;
        Step::RefPtr< IfcActorSelect > m_CreatingActor;
        Step::RefPtr< IfcDateTimeSelect > m_CreationTime;
        IfcLabel m_UserDefinedGrade;
        // InverseAttributes
        Inverse_Set_IfcConstraintRelationship_0_n m_IsRelatedWith;
        Inverse_Set_IfcConstraintRelationship_0_n m_RelatesConstraints;
        Inverse_Set_IfcPropertyConstraintRelationship_0_n m_PropertiesForConstraint;
        Inverse_Set_IfcConstraintAggregationRelationship_0_n m_Aggregates;
        Inverse_Set_IfcConstraintClassificationRelationship_0_n m_ClassifiedAs;
        Inverse_Set_IfcConstraintAggregationRelationship_0_n m_IsAggregatedIn;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}

        /// Attribute ConstraintGrade
        /// @{
        virtual IfcConstraintEnum getConstraintGrade();
        virtual IfcConstraintEnum getConstraintGrade() const;
        virtual void setConstraintGrade(IfcConstraintEnum value);
        virtual void unsetConstraintGrade();
        virtual bool testConstraintGrade() const;
        /// @}

        /// Attribute ConstraintSource
        /// @{
        virtual IfcLabel getConstraintSource();
        virtual const IfcLabel getConstraintSource() const;
        virtual void setConstraintSource(const IfcLabel &value);
        virtual void unsetConstraintSource();
        virtual bool testConstraintSource() const;
        /// @}

        /// Attribute CreatingActor
        /// @{
        virtual IfcActorSelect *getCreatingActor();
        virtual const IfcActorSelect *getCreatingActor() const;
        virtual void setCreatingActor(const Step::RefPtr< IfcActorSelect > &value);
        virtual void unsetCreatingActor();
        virtual bool testCreatingActor() const;
        /// @}

        /// Attribute CreationTime
        /// @{
        virtual IfcDateTimeSelect *getCreationTime();
        virtual const IfcDateTimeSelect *getCreationTime() const;
        virtual void setCreationTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetCreationTime();
        virtual bool testCreationTime() const;
        /// @}

        /// Attribute UserDefinedGrade
        /// @{
        virtual IfcLabel getUserDefinedGrade();
        virtual const IfcLabel getUserDefinedGrade() const;
        virtual void setUserDefinedGrade(const IfcLabel &value);
        virtual void unsetUserDefinedGrade();
        virtual bool testUserDefinedGrade() const;
        /// @}

        /// Inverse attribute IsRelatedWith
        /// @{
        virtual Inverse_Set_IfcConstraintRelationship_0_n &getIsRelatedWith();
        virtual const Inverse_Set_IfcConstraintRelationship_0_n &getIsRelatedWith() const;
        virtual bool testIsRelatedWith() const;

        friend class IfcConstraintRelationship;
        /// @}

        /// Inverse attribute RelatesConstraints
        /// @{
        virtual Inverse_Set_IfcConstraintRelationship_0_n &getRelatesConstraints();
        virtual const Inverse_Set_IfcConstraintRelationship_0_n &getRelatesConstraints() const;
        virtual bool testRelatesConstraints() const;

        friend class IfcConstraintRelationship;
        /// @}

        /// Inverse attribute PropertiesForConstraint
        /// @{
        virtual Inverse_Set_IfcPropertyConstraintRelationship_0_n &getPropertiesForConstraint();
        virtual const Inverse_Set_IfcPropertyConstraintRelationship_0_n &getPropertiesForConstraint() const;
        virtual bool testPropertiesForConstraint() const;

        friend class IfcPropertyConstraintRelationship;
        /// @}

        /// Inverse attribute Aggregates
        /// @{
        virtual Inverse_Set_IfcConstraintAggregationRelationship_0_n &getAggregates();
        virtual const Inverse_Set_IfcConstraintAggregationRelationship_0_n &getAggregates() const;
        virtual bool testAggregates() const;

        friend class IfcConstraintAggregationRelationship;
        /// @}

        /// Inverse attribute ClassifiedAs
        /// @{
        virtual Inverse_Set_IfcConstraintClassificationRelationship_0_n &getClassifiedAs();
        virtual const Inverse_Set_IfcConstraintClassificationRelationship_0_n &getClassifiedAs() const;
        virtual bool testClassifiedAs() const;

        friend class IfcConstraintClassificationRelationship;
        /// @}

        /// Inverse attribute IsAggregatedIn
        /// @{
        virtual Inverse_Set_IfcConstraintAggregationRelationship_0_n &getIsAggregatedIn();
        virtual const Inverse_Set_IfcConstraintAggregationRelationship_0_n &getIsAggregatedIn() const;
        virtual bool testIsAggregatedIn() const;

        friend class IfcConstraintAggregationRelationship;
        /// @}



        friend class Inverted_IfcConstraintRelationship_RelatedConstraints_type;
        friend class Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type;


        friend class ExpressDataSet;

    protected:

        IfcConstraint(Step::Id id, Step::SPFData *args);
        virtual ~IfcConstraint();

        virtual bool init();

        virtual void copy(const IfcConstraint &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3