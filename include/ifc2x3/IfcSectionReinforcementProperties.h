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
     * Generated class for the IfcSectionReinforcementProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcSectionReinforcementProperties : public Step::BaseEntity
    {

        // Attributes
        IfcLengthMeasure m_LongitudinalStartPosition;
        IfcLengthMeasure m_LongitudinalEndPosition;
        IfcLengthMeasure m_TransversePosition;
        IfcReinforcingBarRoleEnum m_ReinforcementRole;
        Step::RefPtr< IfcSectionProperties > m_SectionDefinition;
        Set_IfcReinforcementBarProperties_1_n m_CrossSectionReinforcementDefinitions;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute LongitudinalStartPosition
        /// @{
        virtual IfcLengthMeasure getLongitudinalStartPosition();
        virtual IfcLengthMeasure getLongitudinalStartPosition() const;
        virtual void setLongitudinalStartPosition(IfcLengthMeasure value);
        virtual void unsetLongitudinalStartPosition();
        virtual bool testLongitudinalStartPosition() const;
        /// @}

        /// Attribute LongitudinalEndPosition
        /// @{
        virtual IfcLengthMeasure getLongitudinalEndPosition();
        virtual IfcLengthMeasure getLongitudinalEndPosition() const;
        virtual void setLongitudinalEndPosition(IfcLengthMeasure value);
        virtual void unsetLongitudinalEndPosition();
        virtual bool testLongitudinalEndPosition() const;
        /// @}

        /// Attribute TransversePosition
        /// @{
        virtual IfcLengthMeasure getTransversePosition();
        virtual IfcLengthMeasure getTransversePosition() const;
        virtual void setTransversePosition(IfcLengthMeasure value);
        virtual void unsetTransversePosition();
        virtual bool testTransversePosition() const;
        /// @}

        /// Attribute ReinforcementRole
        /// @{
        virtual IfcReinforcingBarRoleEnum getReinforcementRole();
        virtual IfcReinforcingBarRoleEnum getReinforcementRole() const;
        virtual void setReinforcementRole(IfcReinforcingBarRoleEnum value);
        virtual void unsetReinforcementRole();
        virtual bool testReinforcementRole() const;
        /// @}

        /// Attribute SectionDefinition
        /// @{
        virtual IfcSectionProperties *getSectionDefinition();
        virtual const IfcSectionProperties *getSectionDefinition() const;
        virtual void setSectionDefinition(const Step::RefPtr< IfcSectionProperties > &value);
        virtual void unsetSectionDefinition();
        virtual bool testSectionDefinition() const;
        /// @}

        /// Attribute CrossSectionReinforcementDefinitions
        /// @{
        virtual Set_IfcReinforcementBarProperties_1_n &getCrossSectionReinforcementDefinitions();
        virtual const Set_IfcReinforcementBarProperties_1_n &getCrossSectionReinforcementDefinitions() const;
        virtual void setCrossSectionReinforcementDefinitions(const Set_IfcReinforcementBarProperties_1_n &value);
        virtual void unsetCrossSectionReinforcementDefinitions();
        virtual bool testCrossSectionReinforcementDefinitions() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSectionReinforcementProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSectionReinforcementProperties();

        virtual bool init();

        virtual void copy(const IfcSectionReinforcementProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3