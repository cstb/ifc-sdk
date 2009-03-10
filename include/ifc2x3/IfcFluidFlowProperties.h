/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCFLUIDFLOWPROPERTIES_H
#define IFC2X3_IFCFLUIDFLOWPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include "ifc2x3/IfcPropertySetDefinition.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDerivedMeasureValue;
    class IfcMaterial;
    class IfcTimeSeries;

    /**
     */
    class IFC2X3_DLL_DEF IfcFluidFlowProperties : public IfcPropertySetDefinition {
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
         * Gets the value of the explicit attribute 'FlowConditionTimeSeries'.
         * 
         */
        virtual IfcTimeSeries *getFlowConditionTimeSeries();
        /**
         * (const) Returns the value of the explicit attribute 'FlowConditionTimeSeries'.
         * 
         * @return the value of the explicit attribute 'FlowConditionTimeSeries'
         */
        virtual const IfcTimeSeries *getFlowConditionTimeSeries() const;
        /**
         * Sets the value of the explicit attribute 'FlowConditionTimeSeries'.
         * 
         * @param value
         */
        virtual void setFlowConditionTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * Gets the value of the explicit attribute 'VelocityTimeSeries'.
         * 
         */
        virtual IfcTimeSeries *getVelocityTimeSeries();
        /**
         * (const) Returns the value of the explicit attribute 'VelocityTimeSeries'.
         * 
         * @return the value of the explicit attribute 'VelocityTimeSeries'
         */
        virtual const IfcTimeSeries *getVelocityTimeSeries() const;
        /**
         * Sets the value of the explicit attribute 'VelocityTimeSeries'.
         * 
         * @param value
         */
        virtual void setVelocityTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * Gets the value of the explicit attribute 'FlowrateTimeSeries'.
         * 
         */
        virtual IfcTimeSeries *getFlowrateTimeSeries();
        /**
         * (const) Returns the value of the explicit attribute 'FlowrateTimeSeries'.
         * 
         * @return the value of the explicit attribute 'FlowrateTimeSeries'
         */
        virtual const IfcTimeSeries *getFlowrateTimeSeries() const;
        /**
         * Sets the value of the explicit attribute 'FlowrateTimeSeries'.
         * 
         * @param value
         */
        virtual void setFlowrateTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * Gets the value of the explicit attribute 'Fluid'.
         * 
         */
        virtual IfcMaterial *getFluid();
        /**
         * (const) Returns the value of the explicit attribute 'Fluid'.
         * 
         * @return the value of the explicit attribute 'Fluid'
         */
        virtual const IfcMaterial *getFluid() const;
        /**
         * Sets the value of the explicit attribute 'Fluid'.
         * 
         * @param value
         */
        virtual void setFluid(const Step::RefPtr< IfcMaterial > &value);
        /**
         * Gets the value of the explicit attribute 'PressureTimeSeries'.
         * 
         */
        virtual IfcTimeSeries *getPressureTimeSeries();
        /**
         * (const) Returns the value of the explicit attribute 'PressureTimeSeries'.
         * 
         * @return the value of the explicit attribute 'PressureTimeSeries'
         */
        virtual const IfcTimeSeries *getPressureTimeSeries() const;
        /**
         * Sets the value of the explicit attribute 'PressureTimeSeries'.
         * 
         * @param value
         */
        virtual void setPressureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
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
         * Gets the value of the explicit attribute 'TemperatureSingleValue'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getTemperatureSingleValue();
        /**
         * (const) Returns the value of the explicit attribute 'TemperatureSingleValue'.
         * 
         * @return the value of the explicit attribute 'TemperatureSingleValue'
         */
        virtual const IfcThermodynamicTemperatureMeasure getTemperatureSingleValue() const;
        /**
         * Sets the value of the explicit attribute 'TemperatureSingleValue'.
         * 
         * @param value
         */
        virtual void setTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value);
        /**
         * Gets the value of the explicit attribute 'WetBulbTemperatureSingleValue'.
         * 
         */
        virtual IfcThermodynamicTemperatureMeasure getWetBulbTemperatureSingleValue();
        /**
         * (const) Returns the value of the explicit attribute 'WetBulbTemperatureSingleValue'.
         * 
         * @return the value of the explicit attribute 'WetBulbTemperatureSingleValue'
         */
        virtual const IfcThermodynamicTemperatureMeasure getWetBulbTemperatureSingleValue() const;
        /**
         * Sets the value of the explicit attribute 'WetBulbTemperatureSingleValue'.
         * 
         * @param value
         */
        virtual void setWetBulbTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value);
        /**
         * Gets the value of the explicit attribute 'WetBulbTemperatureTimeSeries'.
         * 
         */
        virtual IfcTimeSeries *getWetBulbTemperatureTimeSeries();
        /**
         * (const) Returns the value of the explicit attribute 'WetBulbTemperatureTimeSeries'.
         * 
         * @return the value of the explicit attribute 'WetBulbTemperatureTimeSeries'
         */
        virtual const IfcTimeSeries *getWetBulbTemperatureTimeSeries() const;
        /**
         * Sets the value of the explicit attribute 'WetBulbTemperatureTimeSeries'.
         * 
         * @param value
         */
        virtual void setWetBulbTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * Gets the value of the explicit attribute 'TemperatureTimeSeries'.
         * 
         */
        virtual IfcTimeSeries *getTemperatureTimeSeries();
        /**
         * (const) Returns the value of the explicit attribute 'TemperatureTimeSeries'.
         * 
         * @return the value of the explicit attribute 'TemperatureTimeSeries'
         */
        virtual const IfcTimeSeries *getTemperatureTimeSeries() const;
        /**
         * Sets the value of the explicit attribute 'TemperatureTimeSeries'.
         * 
         * @param value
         */
        virtual void setTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         * Gets the value of the explicit attribute 'FlowrateSingleValue'.
         * 
         */
        virtual IfcDerivedMeasureValue *getFlowrateSingleValue();
        /**
         * (const) Returns the value of the explicit attribute 'FlowrateSingleValue'.
         * 
         * @return the value of the explicit attribute 'FlowrateSingleValue'
         */
        virtual const IfcDerivedMeasureValue *getFlowrateSingleValue() const;
        /**
         * Sets the value of the explicit attribute 'FlowrateSingleValue'.
         * 
         * @param value
         */
        virtual void setFlowrateSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value);
        /**
         * Gets the value of the explicit attribute 'FlowConditionSingleValue'.
         * 
         */
        virtual IfcPositiveRatioMeasure getFlowConditionSingleValue();
        /**
         * (const) Returns the value of the explicit attribute 'FlowConditionSingleValue'.
         * 
         * @return the value of the explicit attribute 'FlowConditionSingleValue'
         */
        virtual const IfcPositiveRatioMeasure getFlowConditionSingleValue() const;
        /**
         * Sets the value of the explicit attribute 'FlowConditionSingleValue'.
         * 
         * @param value
         */
        virtual void setFlowConditionSingleValue(IfcPositiveRatioMeasure value);
        /**
         * Gets the value of the explicit attribute 'VelocitySingleValue'.
         * 
         */
        virtual IfcLinearVelocityMeasure getVelocitySingleValue();
        /**
         * (const) Returns the value of the explicit attribute 'VelocitySingleValue'.
         * 
         * @return the value of the explicit attribute 'VelocitySingleValue'
         */
        virtual const IfcLinearVelocityMeasure getVelocitySingleValue() const;
        /**
         * Sets the value of the explicit attribute 'VelocitySingleValue'.
         * 
         * @param value
         */
        virtual void setVelocitySingleValue(IfcLinearVelocityMeasure value);
        /**
         * Gets the value of the explicit attribute 'PressureSingleValue'.
         * 
         */
        virtual IfcPressureMeasure getPressureSingleValue();
        /**
         * (const) Returns the value of the explicit attribute 'PressureSingleValue'.
         * 
         * @return the value of the explicit attribute 'PressureSingleValue'
         */
        virtual const IfcPressureMeasure getPressureSingleValue() const;
        /**
         * Sets the value of the explicit attribute 'PressureSingleValue'.
         * 
         * @param value
         */
        virtual void setPressureSingleValue(IfcPressureMeasure value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcFluidFlowProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcFluidFlowProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcFluidFlowProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcPropertySourceEnum m_propertySource;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_flowConditionTimeSeries;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_velocityTimeSeries;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_flowrateTimeSeries;
        /**
         */
        Step::RefPtr< IfcMaterial > m_fluid;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_pressureTimeSeries;
        /**
         */
        Step::String m_userDefinedPropertySource;
        /**
         */
        Step::Real m_temperatureSingleValue;
        /**
         */
        Step::Real m_wetBulbTemperatureSingleValue;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_wetBulbTemperatureTimeSeries;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_temperatureTimeSeries;
        /**
         */
        Step::RefPtr< IfcDerivedMeasureValue > m_flowrateSingleValue;
        /**
         */
        Step::Real m_flowConditionSingleValue;
        /**
         */
        Step::Real m_velocitySingleValue;
        /**
         */
        Step::Real m_pressureSingleValue;

    };

}

#endif // IFC2X3_IFCFLUIDFLOWPROPERTIES_H
