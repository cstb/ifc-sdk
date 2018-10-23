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

#include <ifc2x3/IfcDistributionElement.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcDistributionFlowElement Entity.
     *
     */
    class IFC2X3_EXPORT IfcDistributionFlowElement : public IfcDistributionElement
    {

        // InverseAttributes
        Inverse_Set_IfcRelFlowControlElements_0_1 m_HasControlElements;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Inverse attribute HasControlElements
        /// @{
        virtual Inverse_Set_IfcRelFlowControlElements_0_1 &getHasControlElements();
        virtual const Inverse_Set_IfcRelFlowControlElements_0_1 &getHasControlElements() const;
        virtual bool testHasControlElements() const;

        friend class IfcRelFlowControlElements;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcDistributionFlowElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcDistributionFlowElement();

        virtual bool init();

        virtual void copy(const IfcDistributionFlowElement &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3