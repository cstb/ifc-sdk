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

#include <ifc2x3/IfcMaterialProperties.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcProductsOfCombustionProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcProductsOfCombustionProperties : public IfcMaterialProperties
    {

        // Attributes
        IfcSpecificHeatCapacityMeasure m_SpecificHeatCapacity;
        IfcPositiveRatioMeasure m_N20Content;
        IfcPositiveRatioMeasure m_COContent;
        IfcPositiveRatioMeasure m_CO2Content;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute SpecificHeatCapacity
        /// @{
        virtual IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity();
        virtual IfcSpecificHeatCapacityMeasure getSpecificHeatCapacity() const;
        virtual void setSpecificHeatCapacity(IfcSpecificHeatCapacityMeasure value);
        virtual void unsetSpecificHeatCapacity();
        virtual bool testSpecificHeatCapacity() const;
        /// @}

        /// Attribute N20Content
        /// @{
        virtual IfcPositiveRatioMeasure getN20Content();
        virtual IfcPositiveRatioMeasure getN20Content() const;
        virtual void setN20Content(IfcPositiveRatioMeasure value);
        virtual void unsetN20Content();
        virtual bool testN20Content() const;
        /// @}

        /// Attribute COContent
        /// @{
        virtual IfcPositiveRatioMeasure getCOContent();
        virtual IfcPositiveRatioMeasure getCOContent() const;
        virtual void setCOContent(IfcPositiveRatioMeasure value);
        virtual void unsetCOContent();
        virtual bool testCOContent() const;
        /// @}

        /// Attribute CO2Content
        /// @{
        virtual IfcPositiveRatioMeasure getCO2Content();
        virtual IfcPositiveRatioMeasure getCO2Content() const;
        virtual void setCO2Content(IfcPositiveRatioMeasure value);
        virtual void unsetCO2Content();
        virtual bool testCO2Content() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcProductsOfCombustionProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcProductsOfCombustionProperties();

        virtual bool init();

        virtual void copy(const IfcProductsOfCombustionProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3