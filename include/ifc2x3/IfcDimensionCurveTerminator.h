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

#include <ifc2x3/IfcTerminatorSymbol.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcDimensionCurveTerminator Entity.
     *
     */
    class IFC2X3_EXPORT IfcDimensionCurveTerminator : public IfcTerminatorSymbol
    {

        // Attributes
        IfcDimensionExtentUsage m_Role;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Role
        /// @{
        virtual IfcDimensionExtentUsage getRole();
        virtual IfcDimensionExtentUsage getRole() const;
        virtual void setRole(IfcDimensionExtentUsage value);
        virtual void unsetRole();
        virtual bool testRole() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcDimensionCurveTerminator(Step::Id id, Step::SPFData *args);
        virtual ~IfcDimensionCurveTerminator();

        virtual bool init();

        virtual void copy(const IfcDimensionCurveTerminator &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3