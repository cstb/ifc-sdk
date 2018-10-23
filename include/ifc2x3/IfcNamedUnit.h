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
     * Generated class for the IfcNamedUnit Entity.
     *
     */
    class IFC2X3_EXPORT IfcNamedUnit : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcDimensionalExponents > m_Dimensions;
        IfcUnitEnum m_UnitType;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Dimensions
        /// @{
        virtual IfcDimensionalExponents *getDimensions();
        virtual const IfcDimensionalExponents *getDimensions() const;
        virtual void setDimensions(const Step::RefPtr< IfcDimensionalExponents > &value);
        virtual void unsetDimensions();
        virtual bool testDimensions() const;
        /// @}

        /// Attribute UnitType
        /// @{
        virtual IfcUnitEnum getUnitType();
        virtual IfcUnitEnum getUnitType() const;
        virtual void setUnitType(IfcUnitEnum value);
        virtual void unsetUnitType();
        virtual bool testUnitType() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcNamedUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcNamedUnit();

        virtual bool init();

        virtual void copy(const IfcNamedUnit &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3