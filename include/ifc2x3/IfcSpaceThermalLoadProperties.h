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
     * Generated class for the IfcSpaceThermalLoadProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcSpaceThermalLoadProperties : public IfcPropertySetDefinition
    {

        // Attributes
        IfcPositiveRatioMeasure m_ApplicableValueRatio;
        IfcThermalLoadSourceEnum m_ThermalLoadSource;
        IfcPropertySourceEnum m_PropertySource;
        IfcText m_SourceDescription;
        IfcPowerMeasure m_MaximumValue;
        IfcPowerMeasure m_MinimumValue;
        Step::RefPtr< IfcTimeSeries > m_ThermalLoadTimeSeriesValues;
        IfcLabel m_UserDefinedThermalLoadSource;
        IfcLabel m_UserDefinedPropertySource;
        IfcThermalLoadTypeEnum m_ThermalLoadType;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute ApplicableValueRatio
        /// @{
        virtual IfcPositiveRatioMeasure getApplicableValueRatio();
        virtual IfcPositiveRatioMeasure getApplicableValueRatio() const;
        virtual void setApplicableValueRatio(IfcPositiveRatioMeasure value);
        virtual void unsetApplicableValueRatio();
        virtual bool testApplicableValueRatio() const;
        /// @}

        /// Attribute ThermalLoadSource
        /// @{
        virtual IfcThermalLoadSourceEnum getThermalLoadSource();
        virtual IfcThermalLoadSourceEnum getThermalLoadSource() const;
        virtual void setThermalLoadSource(IfcThermalLoadSourceEnum value);
        virtual void unsetThermalLoadSource();
        virtual bool testThermalLoadSource() const;
        /// @}

        /// Attribute PropertySource
        /// @{
        virtual IfcPropertySourceEnum getPropertySource();
        virtual IfcPropertySourceEnum getPropertySource() const;
        virtual void setPropertySource(IfcPropertySourceEnum value);
        virtual void unsetPropertySource();
        virtual bool testPropertySource() const;
        /// @}

        /// Attribute SourceDescription
        /// @{
        virtual IfcText getSourceDescription();
        virtual const IfcText getSourceDescription() const;
        virtual void setSourceDescription(const IfcText &value);
        virtual void unsetSourceDescription();
        virtual bool testSourceDescription() const;
        /// @}

        /// Attribute MaximumValue
        /// @{
        virtual IfcPowerMeasure getMaximumValue();
        virtual IfcPowerMeasure getMaximumValue() const;
        virtual void setMaximumValue(IfcPowerMeasure value);
        virtual void unsetMaximumValue();
        virtual bool testMaximumValue() const;
        /// @}

        /// Attribute MinimumValue
        /// @{
        virtual IfcPowerMeasure getMinimumValue();
        virtual IfcPowerMeasure getMinimumValue() const;
        virtual void setMinimumValue(IfcPowerMeasure value);
        virtual void unsetMinimumValue();
        virtual bool testMinimumValue() const;
        /// @}

        /// Attribute ThermalLoadTimeSeriesValues
        /// @{
        virtual IfcTimeSeries *getThermalLoadTimeSeriesValues();
        virtual const IfcTimeSeries *getThermalLoadTimeSeriesValues() const;
        virtual void setThermalLoadTimeSeriesValues(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetThermalLoadTimeSeriesValues();
        virtual bool testThermalLoadTimeSeriesValues() const;
        /// @}

        /// Attribute UserDefinedThermalLoadSource
        /// @{
        virtual IfcLabel getUserDefinedThermalLoadSource();
        virtual const IfcLabel getUserDefinedThermalLoadSource() const;
        virtual void setUserDefinedThermalLoadSource(const IfcLabel &value);
        virtual void unsetUserDefinedThermalLoadSource();
        virtual bool testUserDefinedThermalLoadSource() const;
        /// @}

        /// Attribute UserDefinedPropertySource
        /// @{
        virtual IfcLabel getUserDefinedPropertySource();
        virtual const IfcLabel getUserDefinedPropertySource() const;
        virtual void setUserDefinedPropertySource(const IfcLabel &value);
        virtual void unsetUserDefinedPropertySource();
        virtual bool testUserDefinedPropertySource() const;
        /// @}

        /// Attribute ThermalLoadType
        /// @{
        virtual IfcThermalLoadTypeEnum getThermalLoadType();
        virtual IfcThermalLoadTypeEnum getThermalLoadType() const;
        virtual void setThermalLoadType(IfcThermalLoadTypeEnum value);
        virtual void unsetThermalLoadType();
        virtual bool testThermalLoadType() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcSpaceThermalLoadProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcSpaceThermalLoadProperties();

        virtual bool init();

        virtual void copy(const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3