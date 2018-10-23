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
     * Generated class for the IfcFluidFlowProperties Entity.
     *
     */
    class IFC2X3_EXPORT IfcFluidFlowProperties : public IfcPropertySetDefinition
    {

        // Attributes
        IfcPropertySourceEnum m_PropertySource;
        Step::RefPtr< IfcTimeSeries > m_FlowConditionTimeSeries;
        Step::RefPtr< IfcTimeSeries > m_VelocityTimeSeries;
        Step::RefPtr< IfcTimeSeries > m_FlowrateTimeSeries;
        Step::RefPtr< IfcMaterial > m_Fluid;
        Step::RefPtr< IfcTimeSeries > m_PressureTimeSeries;
        IfcLabel m_UserDefinedPropertySource;
        IfcThermodynamicTemperatureMeasure m_TemperatureSingleValue;
        IfcThermodynamicTemperatureMeasure m_WetBulbTemperatureSingleValue;
        Step::RefPtr< IfcTimeSeries > m_WetBulbTemperatureTimeSeries;
        Step::RefPtr< IfcTimeSeries > m_TemperatureTimeSeries;
        Step::RefPtr< IfcDerivedMeasureValue > m_FlowrateSingleValue;
        IfcPositiveRatioMeasure m_FlowConditionSingleValue;
        IfcLinearVelocityMeasure m_VelocitySingleValue;
        IfcPressureMeasure m_PressureSingleValue;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute PropertySource
        /// @{
        virtual IfcPropertySourceEnum getPropertySource();
        virtual IfcPropertySourceEnum getPropertySource() const;
        virtual void setPropertySource(IfcPropertySourceEnum value);
        virtual void unsetPropertySource();
        virtual bool testPropertySource() const;
        /// @}

        /// Attribute FlowConditionTimeSeries
        /// @{
        virtual IfcTimeSeries *getFlowConditionTimeSeries();
        virtual const IfcTimeSeries *getFlowConditionTimeSeries() const;
        virtual void setFlowConditionTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetFlowConditionTimeSeries();
        virtual bool testFlowConditionTimeSeries() const;
        /// @}

        /// Attribute VelocityTimeSeries
        /// @{
        virtual IfcTimeSeries *getVelocityTimeSeries();
        virtual const IfcTimeSeries *getVelocityTimeSeries() const;
        virtual void setVelocityTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetVelocityTimeSeries();
        virtual bool testVelocityTimeSeries() const;
        /// @}

        /// Attribute FlowrateTimeSeries
        /// @{
        virtual IfcTimeSeries *getFlowrateTimeSeries();
        virtual const IfcTimeSeries *getFlowrateTimeSeries() const;
        virtual void setFlowrateTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetFlowrateTimeSeries();
        virtual bool testFlowrateTimeSeries() const;
        /// @}

        /// Attribute Fluid
        /// @{
        virtual IfcMaterial *getFluid();
        virtual const IfcMaterial *getFluid() const;
        virtual void setFluid(const Step::RefPtr< IfcMaterial > &value);
        virtual void unsetFluid();
        virtual bool testFluid() const;
        /// @}

        /// Attribute PressureTimeSeries
        /// @{
        virtual IfcTimeSeries *getPressureTimeSeries();
        virtual const IfcTimeSeries *getPressureTimeSeries() const;
        virtual void setPressureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetPressureTimeSeries();
        virtual bool testPressureTimeSeries() const;
        /// @}

        /// Attribute UserDefinedPropertySource
        /// @{
        virtual IfcLabel getUserDefinedPropertySource();
        virtual const IfcLabel getUserDefinedPropertySource() const;
        virtual void setUserDefinedPropertySource(const IfcLabel &value);
        virtual void unsetUserDefinedPropertySource();
        virtual bool testUserDefinedPropertySource() const;
        /// @}

        /// Attribute TemperatureSingleValue
        /// @{
        virtual IfcThermodynamicTemperatureMeasure getTemperatureSingleValue();
        virtual IfcThermodynamicTemperatureMeasure getTemperatureSingleValue() const;
        virtual void setTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value);
        virtual void unsetTemperatureSingleValue();
        virtual bool testTemperatureSingleValue() const;
        /// @}

        /// Attribute WetBulbTemperatureSingleValue
        /// @{
        virtual IfcThermodynamicTemperatureMeasure getWetBulbTemperatureSingleValue();
        virtual IfcThermodynamicTemperatureMeasure getWetBulbTemperatureSingleValue() const;
        virtual void setWetBulbTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value);
        virtual void unsetWetBulbTemperatureSingleValue();
        virtual bool testWetBulbTemperatureSingleValue() const;
        /// @}

        /// Attribute WetBulbTemperatureTimeSeries
        /// @{
        virtual IfcTimeSeries *getWetBulbTemperatureTimeSeries();
        virtual const IfcTimeSeries *getWetBulbTemperatureTimeSeries() const;
        virtual void setWetBulbTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetWetBulbTemperatureTimeSeries();
        virtual bool testWetBulbTemperatureTimeSeries() const;
        /// @}

        /// Attribute TemperatureTimeSeries
        /// @{
        virtual IfcTimeSeries *getTemperatureTimeSeries();
        virtual const IfcTimeSeries *getTemperatureTimeSeries() const;
        virtual void setTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        virtual void unsetTemperatureTimeSeries();
        virtual bool testTemperatureTimeSeries() const;
        /// @}

        /// Attribute FlowrateSingleValue
        /// @{
        virtual IfcDerivedMeasureValue *getFlowrateSingleValue();
        virtual const IfcDerivedMeasureValue *getFlowrateSingleValue() const;
        virtual void setFlowrateSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value);
        virtual void unsetFlowrateSingleValue();
        virtual bool testFlowrateSingleValue() const;
        /// @}

        /// Attribute FlowConditionSingleValue
        /// @{
        virtual IfcPositiveRatioMeasure getFlowConditionSingleValue();
        virtual IfcPositiveRatioMeasure getFlowConditionSingleValue() const;
        virtual void setFlowConditionSingleValue(IfcPositiveRatioMeasure value);
        virtual void unsetFlowConditionSingleValue();
        virtual bool testFlowConditionSingleValue() const;
        /// @}

        /// Attribute VelocitySingleValue
        /// @{
        virtual IfcLinearVelocityMeasure getVelocitySingleValue();
        virtual IfcLinearVelocityMeasure getVelocitySingleValue() const;
        virtual void setVelocitySingleValue(IfcLinearVelocityMeasure value);
        virtual void unsetVelocitySingleValue();
        virtual bool testVelocitySingleValue() const;
        /// @}

        /// Attribute PressureSingleValue
        /// @{
        virtual IfcPressureMeasure getPressureSingleValue();
        virtual IfcPressureMeasure getPressureSingleValue() const;
        virtual void setPressureSingleValue(IfcPressureMeasure value);
        virtual void unsetPressureSingleValue();
        virtual bool testPressureSingleValue() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcFluidFlowProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcFluidFlowProperties();

        virtual bool init();

        virtual void copy(const IfcFluidFlowProperties &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3