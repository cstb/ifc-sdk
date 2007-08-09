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

#ifndef IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
#define IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
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

  class IfcSpaceThermalLoadProperties_Factory;
  class IfcTimeSeries;

  /**
   */
  class IFC2X3_DLL_DEF IfcSpaceThermalLoadProperties : public Step::InstantiatableEntity, public IfcPropertySetDefinition {
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
     * (non-const) Returns the value of the explicit attribute 'ApplicableValueRatio'.
     * 
     * @return the value of the explicit attribute 'ApplicableValueRatio'
     */
    IfcPositiveRatioMeasure getApplicableValueRatio();
    /**
     * Sets the value of the explicit attribute 'ApplicableValueRatio'.
     * 
     * @param value
     */
    void setApplicableValueRatio(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThermalLoadSource'.
     * 
     * @return the value of the explicit attribute 'ThermalLoadSource'
     */
    IfcThermalLoadSourceEnum getThermalLoadSource();
    /**
     * Sets the value of the explicit attribute 'ThermalLoadSource'.
     * 
     * @param value
     */
    void setThermalLoadSource(IfcThermalLoadSourceEnum value);
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
     * (non-const) Returns the value of the explicit attribute 'SourceDescription'.
     * 
     * @return the value of the explicit attribute 'SourceDescription'
     */
    IfcText getSourceDescription();
    /**
     * Sets the value of the explicit attribute 'SourceDescription'.
     * 
     * @param value
     */
    void setSourceDescription(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MaximumValue'.
     * 
     * @return the value of the explicit attribute 'MaximumValue'
     */
    IfcPowerMeasure getMaximumValue();
    /**
     * Sets the value of the explicit attribute 'MaximumValue'.
     * 
     * @param value
     */
    void setMaximumValue(IfcPowerMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MinimumValue'.
     * 
     * @return the value of the explicit attribute 'MinimumValue'
     */
    IfcPowerMeasure getMinimumValue();
    /**
     * Sets the value of the explicit attribute 'MinimumValue'.
     * 
     * @param value
     */
    void setMinimumValue(IfcPowerMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
     * 
     * @return the value of the explicit attribute 'ThermalLoadTimeSeriesValues'
     */
    IfcTimeSeries *getThermalLoadTimeSeriesValues();
    /**
     * Sets the value of the explicit attribute 'ThermalLoadTimeSeriesValues'.
     * 
     * @param value
     */
    void setThermalLoadTimeSeriesValues(const Step::RefPtr< IfcTimeSeries > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedThermalLoadSource'.
     * 
     * @return the value of the explicit attribute 'UserDefinedThermalLoadSource'
     */
    IfcLabel getUserDefinedThermalLoadSource();
    /**
     * Sets the value of the explicit attribute 'UserDefinedThermalLoadSource'.
     * 
     * @param value
     */
    void setUserDefinedThermalLoadSource(const IfcLabel &value);
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
     * (non-const) Returns the value of the explicit attribute 'ThermalLoadType'.
     * 
     * @return the value of the explicit attribute 'ThermalLoadType'
     */
    IfcThermalLoadTypeEnum getThermalLoadType();
    /**
     * Sets the value of the explicit attribute 'ThermalLoadType'.
     * 
     * @param value
     */
    void setThermalLoadType(IfcThermalLoadTypeEnum value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcSpaceThermalLoadProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcSpaceThermalLoadProperties(Step::SPFData *args);
    virtual ~IfcSpaceThermalLoadProperties();

  private:
    static Step::ClassType s_type;
    Real m_applicableValueRatio;
    IfcThermalLoadSourceEnum m_thermalLoadSource;
    IfcPropertySourceEnum m_propertySource;
    std::string m_sourceDescription;
    Real m_maximumValue;
    Real m_minimumValue;
    Step::RefPtr< IfcTimeSeries > m_thermalLoadTimeSeriesValues;
    std::string m_userDefinedThermalLoadSource;
    std::string m_userDefinedPropertySource;
    IfcThermalLoadTypeEnum m_thermalLoadType;
    /**
     * @param c
     */
    IfcSpaceThermalLoadProperties(const IfcSpaceThermalLoadProperties &c);

  };

  class IfcSpaceThermalLoadProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcSpaceThermalLoadProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcSpaceThermalLoadProperties_Factory();
    virtual ~IfcSpaceThermalLoadProperties_Factory();
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
    IfcSpaceThermalLoadProperties *get(Step::StepId id);
    /**
     */
    IfcSpaceThermalLoadProperties *generate();
    /**
     * @param id
     */
    IfcSpaceThermalLoadProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCSPACETHERMALLOADPROPERTIES_H
