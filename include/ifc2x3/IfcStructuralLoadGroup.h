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

#include <ifc2x3/IfcGroup.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcStructuralLoadGroup Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralLoadGroup : public IfcGroup
    {

        // Attributes
        IfcLoadGroupTypeEnum m_PredefinedType;
        IfcActionTypeEnum m_ActionType;
        IfcActionSourceTypeEnum m_ActionSource;
        IfcRatioMeasure m_Coefficient;
        IfcLabel m_Purpose;
        // InverseAttributes
        Inverse_Set_IfcStructuralResultGroup_0_1 m_SourceOfResultGroup;
        Inverse_Set_IfcStructuralAnalysisModel_0_n m_LoadGroupFor;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PredefinedType
        /// @{
        virtual IfcLoadGroupTypeEnum getPredefinedType();
        virtual IfcLoadGroupTypeEnum getPredefinedType() const;
        virtual void setPredefinedType(IfcLoadGroupTypeEnum value);
        virtual void unsetPredefinedType();
        virtual bool testPredefinedType() const;
        /// @}

        /// Attribute ActionType
        /// @{
        virtual IfcActionTypeEnum getActionType();
        virtual IfcActionTypeEnum getActionType() const;
        virtual void setActionType(IfcActionTypeEnum value);
        virtual void unsetActionType();
        virtual bool testActionType() const;
        /// @}

        /// Attribute ActionSource
        /// @{
        virtual IfcActionSourceTypeEnum getActionSource();
        virtual IfcActionSourceTypeEnum getActionSource() const;
        virtual void setActionSource(IfcActionSourceTypeEnum value);
        virtual void unsetActionSource();
        virtual bool testActionSource() const;
        /// @}

        /// Attribute Coefficient
        /// @{
        virtual IfcRatioMeasure getCoefficient();
        virtual IfcRatioMeasure getCoefficient() const;
        virtual void setCoefficient(IfcRatioMeasure value);
        virtual void unsetCoefficient();
        virtual bool testCoefficient() const;
        /// @}

        /// Attribute Purpose
        /// @{
        virtual IfcLabel getPurpose();
        virtual const IfcLabel getPurpose() const;
        virtual void setPurpose(const IfcLabel &value);
        virtual void unsetPurpose();
        virtual bool testPurpose() const;
        /// @}

        /// Inverse attribute SourceOfResultGroup
        /// @{
        virtual Inverse_Set_IfcStructuralResultGroup_0_1 &getSourceOfResultGroup();
        virtual const Inverse_Set_IfcStructuralResultGroup_0_1 &getSourceOfResultGroup() const;
        virtual bool testSourceOfResultGroup() const;

        friend class IfcStructuralResultGroup;
        /// @}

        /// Inverse attribute LoadGroupFor
        /// @{
        virtual Inverse_Set_IfcStructuralAnalysisModel_0_n &getLoadGroupFor();
        virtual const Inverse_Set_IfcStructuralAnalysisModel_0_n &getLoadGroupFor() const;
        virtual bool testLoadGroupFor() const;

        friend class IfcStructuralAnalysisModel;
        /// @}



        friend class Inverted_IfcStructuralAnalysisModel_LoadedBy_type;


        friend class ExpressDataSet;

    protected:

        IfcStructuralLoadGroup(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadGroup();

        virtual bool init();

        virtual void copy(const IfcStructuralLoadGroup &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3