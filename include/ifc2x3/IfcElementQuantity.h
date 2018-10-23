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

#include <ifc2x3/IfcPropertySetDefinition.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcElementQuantity Entity.
     *
     */
    class IFC2X3_EXPORT IfcElementQuantity : public IfcPropertySetDefinition
    {

        // Attributes
        IfcLabel m_MethodOfMeasurement;
        Set_IfcPhysicalQuantity_1_n m_Quantities;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute MethodOfMeasurement
        /// @{
        virtual IfcLabel getMethodOfMeasurement();
        virtual const IfcLabel getMethodOfMeasurement() const;
        virtual void setMethodOfMeasurement(const IfcLabel &value);
        virtual void unsetMethodOfMeasurement();
        virtual bool testMethodOfMeasurement() const;
        /// @}

        /// Attribute Quantities
        /// @{
        virtual Set_IfcPhysicalQuantity_1_n &getQuantities();
        virtual const Set_IfcPhysicalQuantity_1_n &getQuantities() const;
        virtual void setQuantities(const Set_IfcPhysicalQuantity_1_n &value);
        virtual void unsetQuantities();
        virtual bool testQuantities() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcElementQuantity(Step::Id id, Step::SPFData *args);
        virtual ~IfcElementQuantity();

        virtual bool init();

        virtual void copy(const IfcElementQuantity &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3