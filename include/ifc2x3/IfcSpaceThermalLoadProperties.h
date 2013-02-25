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

#ifndef IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
#define IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcPropertySetDefinition.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcTimeSeries;

    /**
     * Generated class for the IfcSpaceThermalLoadProperties Entity.
     * 
     */
    class IFC2X3_EXPORT IfcSpaceThermalLoadProperties : public IfcPropertySetDefinition {
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
         * Gets the value of the explicit attribute 'ApplicableValueRatio'.
         * 
         */
        virtual IfcPositiveRatioMeasure getApplicableValueRatio();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicableValueRatio'.
         * 
         * @return the value of the explicit attribute 'ApplicableValueRatio'
         */
        virtual const IfcPositiveRatioMeasure getApplicableValueRatio() const;
        /**
         * Sets the value of the explicit attribute 'ApplicableValueRatio'.
         * 
         * @param value
         */
        virtual void setApplicableValueRatio(IfcPositiveRatioMeasure value);
        /**
         * unset the attribute 'ApplicableValueRatio'.
         * 
         */
        virtual void unsetApplicableValueRatio();
        /**
         * Test if the attribute 'ApplicableValueRatio' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApplicableValueRatio() const;
        /**
         * Gets the value of the explicit attribute 'ThermalLoadSource'.
         * 
         */
        virtual IfcThermalLoadSourceEnum getThermalLoadSource();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalLoadSource'.
         * 
         * @return the value of the explicit attribute 'ThermalLoadSource'
         */
        virtual const IfcThermalLoadSourceEnum getThermalLoadSource() const;
        /**
         * Sets the value of the explicit attribute 'ThermalLoadSource'.
         * 
         * @param value
         */
        virtual void setThermalLoadSource(IfcThermalLoadSourceEnum value);
        /**
         * unset the attribute 'ThermalLoadSource'.
         * 
         */
        virtual void unsetThermalLoadSource();
        /**
         * Test if the attribute 'ThermalLoadSource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalLoadSource() const;
        /**
         * Gets the value of the explicit attribute 'PropertySource'.
         * 
         */
        virtual IfcPropertySourceEnum getPropertySource();
        /**
         * (const) Returns the value of the explicit attribute 'PropertySource'.
         * 
         * @return the value of the explicit attribute 'PropertySource'
         */
        virtual const IfcPropertySourceEnum getPropertySource() const;
        /**
         * Sets the value of the explicit attribute 'PropertySource'.
         * 
         * @param value
         */
        virtual void setPropertySource(IfcPropertySourceEnum value);
        /**
         * unset the attribute 'PropertySource'.
         * 
         */
        virtual void unsetPropertySource();
        /**
         * Test if the attribute 'PropertySource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPropertySource() const;
        /**
         * Gets the value of the explicit attribute 'SourceDescription'.
         * 
         */
        virtual IfcText getSourceDescription();
        /**
         * (const) Returns the value of the explicit attribute 'SourceDescription'.
         * 
         * @return the value of the explicit attribute 'SourceDescription'
         */
        virtual const IfcText getSourceDescription() const;
        /**
         * Sets the value of the explicit attribute 'SourceDescription'.
         * 
         * @param value
         */
        virtual void setSourceDescription(const IfcText &value);
        /**
         * unset the attribute 'SourceDescription'.
         * 
         */
        virtual void unsetSourceDescription();
        /**
         * Test if the attribute 'SourceDescription' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSourceDescription() const;
        /**
         * Gets the value of the explicit attribute 'MaximumValue'.
         * 
         */
        virtual IfcPowerMeasure getMaximumValue();
        /**
         * (const) Returns the value of the explicit attribute 'MaximumValue'.
         * 
         * @return the value of the explicit attribute 'MaximumValue'
         */
        virtual const IfcPowerMeasure getMaximumValue() const;
        /**
         * Sets the value of the explicit attribute 'MaximumValue'.
         * 
         * @param value
         */
        virtual void setMaximumValue(IfcPowerMeasure value);
        /**
         * unset the attribute 'MaximumValue'.
         * 
         */
        virtual void unsetMaximumValue();
        /**
         * Test if the attribute 'MaximumValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMaximumValue() const;
        /**
         * Gets the value of the explicit attribute 'MinimumValue'.
         * 
         */
        virtual IfcPowerMeasure getMinimumValue();
        /**
         * (const) Returns the value of the explicit attribute 'MinimumValue'.
         * 
         * @return the value of the explicit attribute 'MinimumValue'
         */
        virtual const IfcPowerMeasure getMinimumValue() const;
        /**
         * Sets the value of the explicit attribute 'MinimumValue'.
         * 
         * @param value
         */
        virtual void setMinimumValue(IfcPowerMeasure value);
        /**
         * unset the attribute 'MinimumValue'.
         * 
         */
        virtual void unsetMinimumValue();
        /**
         * Test if the attribute 'MinimumValue' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMinimumValue() const;
        /**
         * Gets the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
         * 
         */
        virtual IfcTimeSeries *getThermalLoadTimeSeriesValues();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
         * 
         * @return the value of the explicit attribute 'ThermalLoadTimeSeriesValues'
         */
        virtual const IfcTimeSeries *getThermalLoadTimeSeriesValues() const;
        /**
         * Sets the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
         * 
         * @param value
         */
        virtual void setThermalLoadTimeSeriesValues(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * unset the attribute 'ThermalLoadTimeSeriesValues'.
         * 
         */
        virtual void unsetThermalLoadTimeSeriesValues();
        /**
         * Test if the attribute 'ThermalLoadTimeSeriesValues' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalLoadTimeSeriesValues() const;
        /**
         * Gets the value of the explicit attribute 'UserDefinedThermalLoadSource'.
         * 
         */
        virtual IfcLabel getUserDefinedThermalLoadSource();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedThermalLoadSource'.
         * 
         * @return the value of the explicit attribute 'UserDefinedThermalLoadSource'
         */
        virtual const IfcLabel getUserDefinedThermalLoadSource() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedThermalLoadSource'.
         * 
         * @param value
         */
        virtual void setUserDefinedThermalLoadSource(const IfcLabel &value);
        /**
         * unset the attribute 'UserDefinedThermalLoadSource'.
         * 
         */
        virtual void unsetUserDefinedThermalLoadSource();
        /**
         * Test if the attribute 'UserDefinedThermalLoadSource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedThermalLoadSource() const;
        /**
         * Gets the value of the explicit attribute 'UserDefinedPropertySource'.
         * 
         */
        virtual IfcLabel getUserDefinedPropertySource();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedPropertySource'.
         * 
         * @return the value of the explicit attribute 'UserDefinedPropertySource'
         */
        virtual const IfcLabel getUserDefinedPropertySource() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedPropertySource'.
         * 
         * @param value
         */
        virtual void setUserDefinedPropertySource(const IfcLabel &value);
        /**
         * unset the attribute 'UserDefinedPropertySource'.
         * 
         */
        virtual void unsetUserDefinedPropertySource();
        /**
         * Test if the attribute 'UserDefinedPropertySource' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedPropertySource() const;
        /**
         * Gets the value of the explicit attribute 'ThermalLoadType'.
         * 
         */
        virtual IfcThermalLoadTypeEnum getThermalLoadType();
        /**
         * (const) Returns the value of the explicit attribute 'ThermalLoadType'.
         * 
         * @return the value of the explicit attribute 'ThermalLoadType'
         */
        virtual const IfcThermalLoadTypeEnum getThermalLoadType() const;
        /**
         * Sets the value of the explicit attribute 'ThermalLoadType'.
         * 
         * @param value
         */
        virtual void setThermalLoadType(IfcThermalLoadTypeEnum value);
        /**
         * unset the attribute 'ThermalLoadType'.
         * 
         */
        virtual void unsetThermalLoadType();
        /**
         * Test if the attribute 'ThermalLoadType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testThermalLoadType() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSpaceThermalLoadProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpaceThermalLoadProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_applicableValueRatio;
        /**
         */
        IfcThermalLoadSourceEnum m_thermalLoadSource;
        /**
         */
        IfcPropertySourceEnum m_propertySource;
        /**
         */
        Step::String m_sourceDescription;
        /**
         */
        Step::Real m_maximumValue;
        /**
         */
        Step::Real m_minimumValue;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_thermalLoadTimeSeriesValues;
        /**
         */
        Step::String m_userDefinedThermalLoadSource;
        /**
         */
        Step::String m_userDefinedPropertySource;
        /**
         */
        IfcThermalLoadTypeEnum m_thermalLoadType;

    };

}

#endif // IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
