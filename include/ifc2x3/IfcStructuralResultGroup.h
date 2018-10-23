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
     * Generated class for the IfcStructuralResultGroup Entity.
     *
     */
    class IFC2X3_EXPORT IfcStructuralResultGroup : public IfcGroup
    {

        // Attributes
        IfcAnalysisTheoryTypeEnum m_TheoryType;
        Step::Boolean m_IsLinear;
        // InvertedAttributes
        Step::RefPtr< IfcStructuralLoadGroup > m_ResultForLoadGroup;
        // InverseAttributes
        Inverse_Set_IfcStructuralAnalysisModel_0_1 m_ResultGroupFor;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TheoryType
        /// @{
        virtual IfcAnalysisTheoryTypeEnum getTheoryType();
        virtual IfcAnalysisTheoryTypeEnum getTheoryType() const;
        virtual void setTheoryType(IfcAnalysisTheoryTypeEnum value);
        virtual void unsetTheoryType();
        virtual bool testTheoryType() const;
        /// @}

        /// Attribute IsLinear
        /// @{
        virtual Step::Boolean getIsLinear();
        virtual Step::Boolean getIsLinear() const;
        virtual void setIsLinear(Step::Boolean value);
        virtual void unsetIsLinear();
        virtual bool testIsLinear() const;
        /// @}

        /// Attribute ResultForLoadGroup
        /// @{
        virtual IfcStructuralLoadGroup *getResultForLoadGroup();
        virtual const IfcStructuralLoadGroup *getResultForLoadGroup() const;
        virtual void setResultForLoadGroup(const Step::RefPtr< IfcStructuralLoadGroup > &value);
        virtual void unsetResultForLoadGroup();
        virtual bool testResultForLoadGroup() const;
        /// @}

        /// Inverse attribute ResultGroupFor
        /// @{
        virtual Inverse_Set_IfcStructuralAnalysisModel_0_1 &getResultGroupFor();
        virtual const Inverse_Set_IfcStructuralAnalysisModel_0_1 &getResultGroupFor() const;
        virtual bool testResultGroupFor() const;

        friend class IfcStructuralAnalysisModel;
        /// @}



        friend class Inverted_IfcStructuralAnalysisModel_HasResults_type;


        friend class ExpressDataSet;

    protected:

        IfcStructuralResultGroup(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralResultGroup();

        virtual bool init();

        virtual void copy(const IfcStructuralResultGroup &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3