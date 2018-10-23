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

#include <ifc2x3/IfcEnergyProperties.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcElectricalBaseProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcElectricalBaseProperties : public IfcEnergyProperties
    {

        // Attributes
        IfcElectricCurrentEnum m_ElectricCurrentType;
        IfcElectricVoltageMeasure m_InputVoltage;
        IfcFrequencyMeasure m_InputFrequency;
        IfcElectricCurrentMeasure m_FullLoadCurrent;
        IfcElectricCurrentMeasure m_MinimumCircuitCurrent;
        IfcPowerMeasure m_MaximumPowerInput;
        IfcPowerMeasure m_RatedPowerInput;
        Step::Integer m_InputPhase;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ElectricCurrentType
        /// @{
        virtual IfcElectricCurrentEnum getElectricCurrentType();
        virtual IfcElectricCurrentEnum getElectricCurrentType() const;
        virtual void setElectricCurrentType(IfcElectricCurrentEnum value);
        virtual void unsetElectricCurrentType();
        virtual bool testElectricCurrentType() const;
        /// @}

        /// Attribute InputVoltage
        /// @{
        virtual IfcElectricVoltageMeasure getInputVoltage();
        virtual IfcElectricVoltageMeasure getInputVoltage() const;
        virtual void setInputVoltage(IfcElectricVoltageMeasure value);
        virtual void unsetInputVoltage();
        virtual bool testInputVoltage() const;
        /// @}

        /// Attribute InputFrequency
        /// @{
        virtual IfcFrequencyMeasure getInputFrequency();
        virtual IfcFrequencyMeasure getInputFrequency() const;
        virtual void setInputFrequency(IfcFrequencyMeasure value);
        virtual void unsetInputFrequency();
        virtual bool testInputFrequency() const;
        /// @}

        /// Attribute FullLoadCurrent
        /// @{
        virtual IfcElectricCurrentMeasure getFullLoadCurrent();
        virtual IfcElectricCurrentMeasure getFullLoadCurrent() const;
        virtual void setFullLoadCurrent(IfcElectricCurrentMeasure value);
        virtual void unsetFullLoadCurrent();
        virtual bool testFullLoadCurrent() const;
        /// @}

        /// Attribute MinimumCircuitCurrent
        /// @{
        virtual IfcElectricCurrentMeasure getMinimumCircuitCurrent();
        virtual IfcElectricCurrentMeasure getMinimumCircuitCurrent() const;
        virtual void setMinimumCircuitCurrent(IfcElectricCurrentMeasure value);
        virtual void unsetMinimumCircuitCurrent();
        virtual bool testMinimumCircuitCurrent() const;
        /// @}

        /// Attribute MaximumPowerInput
        /// @{
        virtual IfcPowerMeasure getMaximumPowerInput();
        virtual IfcPowerMeasure getMaximumPowerInput() const;
        virtual void setMaximumPowerInput(IfcPowerMeasure value);
        virtual void unsetMaximumPowerInput();
        virtual bool testMaximumPowerInput() const;
        /// @}

        /// Attribute RatedPowerInput
        /// @{
        virtual IfcPowerMeasure getRatedPowerInput();
        virtual IfcPowerMeasure getRatedPowerInput() const;
        virtual void setRatedPowerInput(IfcPowerMeasure value);
        virtual void unsetRatedPowerInput();
        virtual bool testRatedPowerInput() const;
        /// @}

        /// Attribute InputPhase
        /// @{
        virtual Step::Integer getInputPhase();
        virtual Step::Integer getInputPhase() const;
        virtual void setInputPhase(Step::Integer value);
        virtual void unsetInputPhase();
        virtual bool testInputPhase() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcElectricalBaseProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcElectricalBaseProperties();

        virtual bool init();

        virtual void copy(const IfcElectricalBaseProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3