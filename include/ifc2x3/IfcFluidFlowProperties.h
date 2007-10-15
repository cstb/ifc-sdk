/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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
#include <Step/SPFData.h>
#include <string>
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
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcPropertySourceEnum getPropertySource();
        /**
         * Sets the value of the explicit attribute 'PropertySource'.
         * 
         * @param value
         */
        void setPropertySource(IfcPropertySourceEnum value);
        /**
         */
        IfcTimeSeries *getFlowConditionTimeSeries();
        /**
         * Sets the value of the explicit attribute 'FlowConditionTimeSeries'.
         * 
         * @param value
         */
        void setFlowConditionTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        IfcTimeSeries *getVelocityTimeSeries();
        /**
         * Sets the value of the explicit attribute 'VelocityTimeSeries'.
         * 
         * @param value
         */
        void setVelocityTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        IfcTimeSeries *getFlowrateTimeSeries();
        /**
         * Sets the value of the explicit attribute 'FlowrateTimeSeries'.
         * 
         * @param value
         */
        void setFlowrateTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        IfcMaterial *getFluid();
        /**
         * Sets the value of the explicit attribute 'Fluid'.
         * 
         * @param value
         */
        void setFluid(const Step::RefPtr< IfcMaterial > &value);
        /**
         */
        IfcTimeSeries *getPressureTimeSeries();
        /**
         * Sets the value of the explicit attribute 'PressureTimeSeries'.
         * 
         * @param value
         */
        void setPressureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        IfcLabel getUserDefinedPropertySource();
        /**
         * Sets the value of the explicit attribute 'UserDefinedPropertySource'.
         * 
         * @param value
         */
        void setUserDefinedPropertySource(const IfcLabel &value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getTemperatureSingleValue();
        /**
         * Sets the value of the explicit attribute 'TemperatureSingleValue'.
         * 
         * @param value
         */
        void setTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcThermodynamicTemperatureMeasure getWetBulbTemperatureSingleValue();
        /**
         * Sets the value of the explicit attribute 'WetBulbTemperatureSingleValue'.
         * 
         * @param value
         */
        void setWetBulbTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value);
        /**
         */
        IfcTimeSeries *getWetBulbTemperatureTimeSeries();
        /**
         * Sets the value of the explicit attribute 'WetBulbTemperatureTimeSeries'.
         * 
         * @param value
         */
        void setWetBulbTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        IfcTimeSeries *getTemperatureTimeSeries();
        /**
         * Sets the value of the explicit attribute 'TemperatureTimeSeries'.
         * 
         * @param value
         */
        void setTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        IfcDerivedMeasureValue *getFlowrateSingleValue();
        /**
         * Sets the value of the explicit attribute 'FlowrateSingleValue'.
         * 
         * @param value
         */
        void setFlowrateSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value);
        /**
         */
        IfcPositiveRatioMeasure getFlowConditionSingleValue();
        /**
         * Sets the value of the explicit attribute 'FlowConditionSingleValue'.
         * 
         * @param value
         */
        void setFlowConditionSingleValue(IfcPositiveRatioMeasure value);
        /**
         */
        IfcLinearVelocityMeasure getVelocitySingleValue();
        /**
         * Sets the value of the explicit attribute 'VelocitySingleValue'.
         * 
         * @param value
         */
        void setVelocitySingleValue(IfcLinearVelocityMeasure value);
        /**
         */
        IfcPressureMeasure getPressureSingleValue();
        /**
         * Sets the value of the explicit attribute 'PressureSingleValue'.
         * 
         * @param value
         */
        void setPressureSingleValue(IfcPressureMeasure value);
        /**
         */
        virtual void release();
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
        std::string m_userDefinedPropertySource;
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
