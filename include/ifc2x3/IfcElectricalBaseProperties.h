// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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

#ifndef IFC2X3_IFCELECTRICALBASEPROPERTIES_H
#define IFC2X3_IFCELECTRICALBASEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcEnergyProperties.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcElectricalBaseProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcElectricalBaseProperties : public IfcEnergyProperties {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'ElectricCurrentType'.
         * 
         */
        virtual IfcElectricCurrentEnum getElectricCurrentType();
        /**
         * (const) Returns the value of the explicit attribute 'ElectricCurrentType'.
         * 
         * @return the value of the explicit attribute 'ElectricCurrentType'
         */
        virtual const IfcElectricCurrentEnum getElectricCurrentType() const;
        /**
         * Sets the value of the explicit attribute 'ElectricCurrentType'.
         * 
         * @param value
         */
        virtual void setElectricCurrentType(IfcElectricCurrentEnum value);
        /**
         * unset the attribute 'ElectricCurrentType'.
         * 
         */
        virtual void unsetElectricCurrentType();
        /**
         * Test if the attribute 'ElectricCurrentType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testElectricCurrentType() const;
        /**
         * Gets the value of the explicit attribute 'InputVoltage'.
         * 
         */
        virtual IfcElectricVoltageMeasure getInputVoltage();
        /**
         * (const) Returns the value of the explicit attribute 'InputVoltage'.
         * 
         * @return the value of the explicit attribute 'InputVoltage'
         */
        virtual const IfcElectricVoltageMeasure getInputVoltage() const;
        /**
         * Sets the value of the explicit attribute 'InputVoltage'.
         * 
         * @param value
         */
        virtual void setInputVoltage(IfcElectricVoltageMeasure value);
        /**
         * unset the attribute 'InputVoltage'.
         * 
         */
        virtual void unsetInputVoltage();
        /**
         * Test if the attribute 'InputVoltage' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInputVoltage() const;
        /**
         * Gets the value of the explicit attribute 'InputFrequency'.
         * 
         */
        virtual IfcFrequencyMeasure getInputFrequency();
        /**
         * (const) Returns the value of the explicit attribute 'InputFrequency'.
         * 
         * @return the value of the explicit attribute 'InputFrequency'
         */
        virtual const IfcFrequencyMeasure getInputFrequency() const;
        /**
         * Sets the value of the explicit attribute 'InputFrequency'.
         * 
         * @param value
         */
        virtual void setInputFrequency(IfcFrequencyMeasure value);
        /**
         * unset the attribute 'InputFrequency'.
         * 
         */
        virtual void unsetInputFrequency();
        /**
         * Test if the attribute 'InputFrequency' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInputFrequency() const;
        /**
         * Gets the value of the explicit attribute 'FullLoadCurrent'.
         * 
         */
        virtual IfcElectricCurrentMeasure getFullLoadCurrent();
        /**
         * (const) Returns the value of the explicit attribute 'FullLoadCurrent'.
         * 
         * @return the value of the explicit attribute 'FullLoadCurrent'
         */
        virtual const IfcElectricCurrentMeasure getFullLoadCurrent() const;
        /**
         * Sets the value of the explicit attribute 'FullLoadCurrent'.
         * 
         * @param value
         */
        virtual void setFullLoadCurrent(IfcElectricCurrentMeasure value);
        /**
         * unset the attribute 'FullLoadCurrent'.
         * 
         */
        virtual void unsetFullLoadCurrent();
        /**
         * Test if the attribute 'FullLoadCurrent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFullLoadCurrent() const;
        /**
         * Gets the value of the explicit attribute 'MinimumCircuitCurrent'.
         * 
         */
        virtual IfcElectricCurrentMeasure getMinimumCircuitCurrent();
        /**
         * (const) Returns the value of the explicit attribute 'MinimumCircuitCurrent'.
         * 
         * @return the value of the explicit attribute 'MinimumCircuitCurrent'
         */
        virtual const IfcElectricCurrentMeasure getMinimumCircuitCurrent() const;
        /**
         * Sets the value of the explicit attribute 'MinimumCircuitCurrent'.
         * 
         * @param value
         */
        virtual void setMinimumCircuitCurrent(IfcElectricCurrentMeasure value);
        /**
         * unset the attribute 'MinimumCircuitCurrent'.
         * 
         */
        virtual void unsetMinimumCircuitCurrent();
        /**
         * Test if the attribute 'MinimumCircuitCurrent' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinimumCircuitCurrent() const;
        /**
         * Gets the value of the explicit attribute 'MaximumPowerInput'.
         * 
         */
        virtual IfcPowerMeasure getMaximumPowerInput();
        /**
         * (const) Returns the value of the explicit attribute 'MaximumPowerInput'.
         * 
         * @return the value of the explicit attribute 'MaximumPowerInput'
         */
        virtual const IfcPowerMeasure getMaximumPowerInput() const;
        /**
         * Sets the value of the explicit attribute 'MaximumPowerInput'.
         * 
         * @param value
         */
        virtual void setMaximumPowerInput(IfcPowerMeasure value);
        /**
         * unset the attribute 'MaximumPowerInput'.
         * 
         */
        virtual void unsetMaximumPowerInput();
        /**
         * Test if the attribute 'MaximumPowerInput' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaximumPowerInput() const;
        /**
         * Gets the value of the explicit attribute 'RatedPowerInput'.
         * 
         */
        virtual IfcPowerMeasure getRatedPowerInput();
        /**
         * (const) Returns the value of the explicit attribute 'RatedPowerInput'.
         * 
         * @return the value of the explicit attribute 'RatedPowerInput'
         */
        virtual const IfcPowerMeasure getRatedPowerInput() const;
        /**
         * Sets the value of the explicit attribute 'RatedPowerInput'.
         * 
         * @param value
         */
        virtual void setRatedPowerInput(IfcPowerMeasure value);
        /**
         * unset the attribute 'RatedPowerInput'.
         * 
         */
        virtual void unsetRatedPowerInput();
        /**
         * Test if the attribute 'RatedPowerInput' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRatedPowerInput() const;
        /**
         * Gets the value of the explicit attribute 'InputPhase'.
         * 
         */
        virtual Step::Integer getInputPhase();
        /**
         * (const) Returns the value of the explicit attribute 'InputPhase'.
         * 
         * @return the value of the explicit attribute 'InputPhase'
         */
        virtual const Step::Integer getInputPhase() const;
        /**
         * Sets the value of the explicit attribute 'InputPhase'.
         * 
         * @param value
         */
        virtual void setInputPhase(Step::Integer value);
        /**
         * unset the attribute 'InputPhase'.
         * 
         */
        virtual void unsetInputPhase();
        /**
         * Test if the attribute 'InputPhase' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInputPhase() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcElectricalBaseProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcElectricalBaseProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcElectricalBaseProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcElectricCurrentEnum m_electricCurrentType;
        /**
         */
        Step::Real m_inputVoltage;
        /**
         */
        Step::Real m_inputFrequency;
        /**
         */
        Step::Real m_fullLoadCurrent;
        /**
         */
        Step::Real m_minimumCircuitCurrent;
        /**
         */
        Step::Real m_maximumPowerInput;
        /**
         */
        Step::Real m_ratedPowerInput;
        /**
         */
        Step::Integer m_inputPhase;

    };

}

#endif // IFC2X3_IFCELECTRICALBASEPROPERTIES_H
