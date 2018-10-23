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
     * Generated class for the IfcAppliedValue Entity.
     *
     */
    class IFC2X3_EXPORT IfcAppliedValue : public Step::BaseEntity
    {

        // Attributes
        IfcLabel m_Name;
        IfcText m_Description;
        Step::RefPtr< IfcAppliedValueSelect > m_AppliedValue;
        Step::RefPtr< IfcMeasureWithUnit > m_UnitBasis;
        Step::RefPtr< IfcDateTimeSelect > m_ApplicableDate;
        Step::RefPtr< IfcDateTimeSelect > m_FixedUntilDate;
        // InverseAttributes
        Inverse_Set_IfcReferencesValueDocument_0_n m_ValuesReferenced;
        Inverse_Set_IfcAppliedValueRelationship_0_n m_IsComponentIn;
        Inverse_Set_IfcAppliedValueRelationship_0_n m_ValueOfComponents;

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

        /// Attribute AppliedValue
        /// @{
        virtual IfcAppliedValueSelect *getAppliedValue();
        virtual const IfcAppliedValueSelect *getAppliedValue() const;
        virtual void setAppliedValue(const Step::RefPtr< IfcAppliedValueSelect > &value);
        virtual void unsetAppliedValue();
        virtual bool testAppliedValue() const;
        /// @}

        /// Attribute UnitBasis
        /// @{
        virtual IfcMeasureWithUnit *getUnitBasis();
        virtual const IfcMeasureWithUnit *getUnitBasis() const;
        virtual void setUnitBasis(const Step::RefPtr< IfcMeasureWithUnit > &value);
        virtual void unsetUnitBasis();
        virtual bool testUnitBasis() const;
        /// @}

        /// Attribute ApplicableDate
        /// @{
        virtual IfcDateTimeSelect *getApplicableDate();
        virtual const IfcDateTimeSelect *getApplicableDate() const;
        virtual void setApplicableDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetApplicableDate();
        virtual bool testApplicableDate() const;
        /// @}

        /// Attribute FixedUntilDate
        /// @{
        virtual IfcDateTimeSelect *getFixedUntilDate();
        virtual const IfcDateTimeSelect *getFixedUntilDate() const;
        virtual void setFixedUntilDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetFixedUntilDate();
        virtual bool testFixedUntilDate() const;
        /// @}

        /// Inverse attribute ValuesReferenced
        /// @{
        virtual Inverse_Set_IfcReferencesValueDocument_0_n &getValuesReferenced();
        virtual const Inverse_Set_IfcReferencesValueDocument_0_n &getValuesReferenced() const;
        virtual bool testValuesReferenced() const;

        friend class IfcReferencesValueDocument;
        /// @}

        /// Inverse attribute IsComponentIn
        /// @{
        virtual Inverse_Set_IfcAppliedValueRelationship_0_n &getIsComponentIn();
        virtual const Inverse_Set_IfcAppliedValueRelationship_0_n &getIsComponentIn() const;
        virtual bool testIsComponentIn() const;

        friend class IfcAppliedValueRelationship;
        /// @}

        /// Inverse attribute ValueOfComponents
        /// @{
        virtual Inverse_Set_IfcAppliedValueRelationship_0_n &getValueOfComponents();
        virtual const Inverse_Set_IfcAppliedValueRelationship_0_n &getValueOfComponents() const;
        virtual bool testValueOfComponents() const;

        friend class IfcAppliedValueRelationship;
        /// @}



        friend class Inverted_IfcReferencesValueDocument_ReferencingValues_type;
        friend class Inverted_IfcAppliedValueRelationship_Components_type;


        friend class ExpressDataSet;

    protected:

        IfcAppliedValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcAppliedValue();

        virtual bool init();

        virtual void copy(const IfcAppliedValue &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3