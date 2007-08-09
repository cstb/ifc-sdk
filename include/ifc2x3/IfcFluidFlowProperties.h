/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
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
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcDerivedMeasureValue;
  class IfcFluidFlowProperties_Factory;
  class IfcMaterial;
  class IfcTimeSeries;

  /**
   */
  class IFC2X3_DLL_DEF IfcFluidFlowProperties : public Step::InstantiatableEntity, public IfcPropertySetDefinition {
  public:
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
    /**
     */
    virtual const char *type();
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
     * (non-const) Returns the value of the explicit attribute 'PropertySource'.
     * 
     * @return the value of the explicit attribute 'PropertySource'
     */
    IfcPropertySourceEnum getPropertySource();
    /**
     * Sets the value of the explicit attribute 'PropertySource'.
     * 
     * @param value
     */
    void setPropertySource(IfcPropertySourceEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FlowConditionTimeSeries'.
     * 
     * @return the value of the explicit attribute 'FlowConditionTimeSeries'
     */
    IfcTimeSeries *getFlowConditionTimeSeries();
    /**
     * Sets the value of the explicit attribute 'FlowConditionTimeSeries'.
     * 
     * @param value
     */
    void setFlowConditionTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'VelocityTimeSeries'.
     * 
     * @return the value of the explicit attribute 'VelocityTimeSeries'
     */
    IfcTimeSeries *getVelocityTimeSeries();
    /**
     * Sets the value of the explicit attribute 'VelocityTimeSeries'.
     * 
     * @param value
     */
    void setVelocityTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FlowrateTimeSeries'.
     * 
     * @return the value of the explicit attribute 'FlowrateTimeSeries'
     */
    IfcTimeSeries *getFlowrateTimeSeries();
    /**
     * Sets the value of the explicit attribute 'FlowrateTimeSeries'.
     * 
     * @param value
     */
    void setFlowrateTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Fluid'.
     * 
     * @return the value of the explicit attribute 'Fluid'
     */
    IfcMaterial *getFluid();
    /**
     * Sets the value of the explicit attribute 'Fluid'.
     * 
     * @param value
     */
    void setFluid(const Step::RefPtr< IfcMaterial > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PressureTimeSeries'.
     * 
     * @return the value of the explicit attribute 'PressureTimeSeries'
     */
    IfcTimeSeries *getPressureTimeSeries();
    /**
     * Sets the value of the explicit attribute 'PressureTimeSeries'.
     * 
     * @param value
     */
    void setPressureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedPropertySource'.
     * 
     * @return the value of the explicit attribute 'UserDefinedPropertySource'
     */
    IfcLabel getUserDefinedPropertySource();
    /**
     * Sets the value of the explicit attribute 'UserDefinedPropertySource'.
     * 
     * @param value
     */
    void setUserDefinedPropertySource(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TemperatureSingleValue'.
     * 
     * @return the value of the explicit attribute 'TemperatureSingleValue'
     */
    IfcThermodynamicTemperatureMeasure getTemperatureSingleValue();
    /**
     * Sets the value of the explicit attribute 'TemperatureSingleValue'.
     * 
     * @param value
     */
    void setTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WetBulbTemperatureSingleValue'.
     * 
     * @return the value of the explicit attribute 'WetBulbTemperatureSingleValue'
     */
    IfcThermodynamicTemperatureMeasure getWetBulbTemperatureSingleValue();
    /**
     * Sets the value of the explicit attribute 'WetBulbTemperatureSingleValue'.
     * 
     * @param value
     */
    void setWetBulbTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WetBulbTemperatureTimeSeries'.
     * 
     * @return the value of the explicit attribute 'WetBulbTemperatureTimeSeries'
     */
    IfcTimeSeries *getWetBulbTemperatureTimeSeries();
    /**
     * Sets the value of the explicit attribute 'WetBulbTemperatureTimeSeries'.
     * 
     * @param value
     */
    void setWetBulbTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TemperatureTimeSeries'.
     * 
     * @return the value of the explicit attribute 'TemperatureTimeSeries'
     */
    IfcTimeSeries *getTemperatureTimeSeries();
    /**
     * Sets the value of the explicit attribute 'TemperatureTimeSeries'.
     * 
     * @param value
     */
    void setTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FlowrateSingleValue'.
     * 
     * @return the value of the explicit attribute 'FlowrateSingleValue'
     */
    IfcDerivedMeasureValue *getFlowrateSingleValue();
    /**
     * Sets the value of the explicit attribute 'FlowrateSingleValue'.
     * 
     * @param value
     */
    void setFlowrateSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FlowConditionSingleValue'.
     * 
     * @return the value of the explicit attribute 'FlowConditionSingleValue'
     */
    IfcPositiveRatioMeasure getFlowConditionSingleValue();
    /**
     * Sets the value of the explicit attribute 'FlowConditionSingleValue'.
     * 
     * @param value
     */
    void setFlowConditionSingleValue(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'VelocitySingleValue'.
     * 
     * @return the value of the explicit attribute 'VelocitySingleValue'
     */
    IfcLinearVelocityMeasure getVelocitySingleValue();
    /**
     * Sets the value of the explicit attribute 'VelocitySingleValue'.
     * 
     * @param value
     */
    void setVelocitySingleValue(IfcLinearVelocityMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PressureSingleValue'.
     * 
     * @return the value of the explicit attribute 'PressureSingleValue'
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
    /**
     */
    virtual bool init();
    friend class IfcFluidFlowProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcFluidFlowProperties(Step::SPFData *args);
    virtual ~IfcFluidFlowProperties();

  private:
    static Step::ClassType s_type;
    IfcPropertySourceEnum m_propertySource;
    Step::RefPtr< IfcTimeSeries > m_flowConditionTimeSeries;
    Step::RefPtr< IfcTimeSeries > m_velocityTimeSeries;
    Step::RefPtr< IfcTimeSeries > m_flowrateTimeSeries;
    Step::RefPtr< IfcMaterial > m_fluid;
    Step::RefPtr< IfcTimeSeries > m_pressureTimeSeries;
    std::string m_userDefinedPropertySource;
    Real m_temperatureSingleValue;
    Real m_wetBulbTemperatureSingleValue;
    Step::RefPtr< IfcTimeSeries > m_wetBulbTemperatureTimeSeries;
    Step::RefPtr< IfcTimeSeries > m_temperatureTimeSeries;
    Step::RefPtr< IfcDerivedMeasureValue > m_flowrateSingleValue;
    Real m_flowConditionSingleValue;
    Real m_velocitySingleValue;
    Real m_pressureSingleValue;
    /**
     * @param c
     */
    IfcFluidFlowProperties(const IfcFluidFlowProperties &c);

  };

  class IfcFluidFlowProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcFluidFlowProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcFluidFlowProperties_Factory();
    virtual ~IfcFluidFlowProperties_Factory();
    /**
     * @param b
     */
    void clear(bool b);
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator begin();
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator end();
    /**
     * @param id
     */
    IfcFluidFlowProperties *get(Step::StepId id);
    /**
     */
    IfcFluidFlowProperties *generate();
    /**
     * @param id
     */
    IfcFluidFlowProperties *find(Step::StepId id);

  protected:
    /**
     * @param id
     */
    virtual Step::BaseObject *create(Step::StepId id);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(std::map<Step::StepId, Step::BaseObject*>::iterator it);

  };

}

#endif // IFC2X3_IFCFLUIDFLOWPROPERTIES_H
