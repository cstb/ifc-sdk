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
     * Generated class for the IfcOpticalMaterialProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcOpticalMaterialProperties : public IfcMaterialProperties
    {

        // Attributes
        IfcPositiveRatioMeasure m_VisibleTransmittance;
        IfcPositiveRatioMeasure m_SolarTransmittance;
        IfcPositiveRatioMeasure m_ThermalIrTransmittance;
        IfcPositiveRatioMeasure m_ThermalIrEmissivityBack;
        IfcPositiveRatioMeasure m_ThermalIrEmissivityFront;
        IfcPositiveRatioMeasure m_VisibleReflectanceBack;
        IfcPositiveRatioMeasure m_VisibleReflectanceFront;
        IfcPositiveRatioMeasure m_SolarReflectanceFront;
        IfcPositiveRatioMeasure m_SolarReflectanceBack;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute VisibleTransmittance
        /// @{
        virtual IfcPositiveRatioMeasure getVisibleTransmittance();
        virtual IfcPositiveRatioMeasure getVisibleTransmittance() const;
        virtual void setVisibleTransmittance(IfcPositiveRatioMeasure value);
        virtual void unsetVisibleTransmittance();
        virtual bool testVisibleTransmittance() const;
        /// @}

        /// Attribute SolarTransmittance
        /// @{
        virtual IfcPositiveRatioMeasure getSolarTransmittance();
        virtual IfcPositiveRatioMeasure getSolarTransmittance() const;
        virtual void setSolarTransmittance(IfcPositiveRatioMeasure value);
        virtual void unsetSolarTransmittance();
        virtual bool testSolarTransmittance() const;
        /// @}

        /// Attribute ThermalIrTransmittance
        /// @{
        virtual IfcPositiveRatioMeasure getThermalIrTransmittance();
        virtual IfcPositiveRatioMeasure getThermalIrTransmittance() const;
        virtual void setThermalIrTransmittance(IfcPositiveRatioMeasure value);
        virtual void unsetThermalIrTransmittance();
        virtual bool testThermalIrTransmittance() const;
        /// @}

        /// Attribute ThermalIrEmissivityBack
        /// @{
        virtual IfcPositiveRatioMeasure getThermalIrEmissivityBack();
        virtual IfcPositiveRatioMeasure getThermalIrEmissivityBack() const;
        virtual void setThermalIrEmissivityBack(IfcPositiveRatioMeasure value);
        virtual void unsetThermalIrEmissivityBack();
        virtual bool testThermalIrEmissivityBack() const;
        /// @}

        /// Attribute ThermalIrEmissivityFront
        /// @{
        virtual IfcPositiveRatioMeasure getThermalIrEmissivityFront();
        virtual IfcPositiveRatioMeasure getThermalIrEmissivityFront() const;
        virtual void setThermalIrEmissivityFront(IfcPositiveRatioMeasure value);
        virtual void unsetThermalIrEmissivityFront();
        virtual bool testThermalIrEmissivityFront() const;
        /// @}

        /// Attribute VisibleReflectanceBack
        /// @{
        virtual IfcPositiveRatioMeasure getVisibleReflectanceBack();
        virtual IfcPositiveRatioMeasure getVisibleReflectanceBack() const;
        virtual void setVisibleReflectanceBack(IfcPositiveRatioMeasure value);
        virtual void unsetVisibleReflectanceBack();
        virtual bool testVisibleReflectanceBack() const;
        /// @}

        /// Attribute VisibleReflectanceFront
        /// @{
        virtual IfcPositiveRatioMeasure getVisibleReflectanceFront();
        virtual IfcPositiveRatioMeasure getVisibleReflectanceFront() const;
        virtual void setVisibleReflectanceFront(IfcPositiveRatioMeasure value);
        virtual void unsetVisibleReflectanceFront();
        virtual bool testVisibleReflectanceFront() const;
        /// @}

        /// Attribute SolarReflectanceFront
        /// @{
        virtual IfcPositiveRatioMeasure getSolarReflectanceFront();
        virtual IfcPositiveRatioMeasure getSolarReflectanceFront() const;
        virtual void setSolarReflectanceFront(IfcPositiveRatioMeasure value);
        virtual void unsetSolarReflectanceFront();
        virtual bool testSolarReflectanceFront() const;
        /// @}

        /// Attribute SolarReflectanceBack
        /// @{
        virtual IfcPositiveRatioMeasure getSolarReflectanceBack();
        virtual IfcPositiveRatioMeasure getSolarReflectanceBack() const;
        virtual void setSolarReflectanceBack(IfcPositiveRatioMeasure value);
        virtual void unsetSolarReflectanceBack();
        virtual bool testSolarReflectanceBack() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcOpticalMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcOpticalMaterialProperties();

        virtual bool init();

        virtual void copy(const IfcOpticalMaterialProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3