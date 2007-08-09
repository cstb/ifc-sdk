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

#ifndef IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
#define IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcMaterialProperties.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcOpticalMaterialProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcOpticalMaterialProperties : public Step::InstantiatableEntity, public IfcMaterialProperties {
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
     * (non-const) Returns the value of the explicit attribute 'VisibleTransmittance'.
     * 
     * @return the value of the explicit attribute 'VisibleTransmittance'
     */
    IfcPositiveRatioMeasure getVisibleTransmittance();
    /**
     * Sets the value of the explicit attribute 'VisibleTransmittance'.
     * 
     * @param value
     */
    void setVisibleTransmittance(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SolarTransmittance'.
     * 
     * @return the value of the explicit attribute 'SolarTransmittance'
     */
    IfcPositiveRatioMeasure getSolarTransmittance();
    /**
     * Sets the value of the explicit attribute 'SolarTransmittance'.
     * 
     * @param value
     */
    void setSolarTransmittance(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThermalIrTransmittance'.
     * 
     * @return the value of the explicit attribute 'ThermalIrTransmittance'
     */
    IfcPositiveRatioMeasure getThermalIrTransmittance();
    /**
     * Sets the value of the explicit attribute 'ThermalIrTransmittance'.
     * 
     * @param value
     */
    void setThermalIrTransmittance(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThermalIrEmissivityBack'.
     * 
     * @return the value of the explicit attribute 'ThermalIrEmissivityBack'
     */
    IfcPositiveRatioMeasure getThermalIrEmissivityBack();
    /**
     * Sets the value of the explicit attribute 'ThermalIrEmissivityBack'.
     * 
     * @param value
     */
    void setThermalIrEmissivityBack(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThermalIrEmissivityFront'.
     * 
     * @return the value of the explicit attribute 'ThermalIrEmissivityFront'
     */
    IfcPositiveRatioMeasure getThermalIrEmissivityFront();
    /**
     * Sets the value of the explicit attribute 'ThermalIrEmissivityFront'.
     * 
     * @param value
     */
    void setThermalIrEmissivityFront(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'VisibleReflectanceBack'.
     * 
     * @return the value of the explicit attribute 'VisibleReflectanceBack'
     */
    IfcPositiveRatioMeasure getVisibleReflectanceBack();
    /**
     * Sets the value of the explicit attribute 'VisibleReflectanceBack'.
     * 
     * @param value
     */
    void setVisibleReflectanceBack(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'VisibleReflectanceFront'.
     * 
     * @return the value of the explicit attribute 'VisibleReflectanceFront'
     */
    IfcPositiveRatioMeasure getVisibleReflectanceFront();
    /**
     * Sets the value of the explicit attribute 'VisibleReflectanceFront'.
     * 
     * @param value
     */
    void setVisibleReflectanceFront(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SolarReflectanceFront'.
     * 
     * @return the value of the explicit attribute 'SolarReflectanceFront'
     */
    IfcPositiveRatioMeasure getSolarReflectanceFront();
    /**
     * Sets the value of the explicit attribute 'SolarReflectanceFront'.
     * 
     * @param value
     */
    void setSolarReflectanceFront(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SolarReflectanceBack'.
     * 
     * @return the value of the explicit attribute 'SolarReflectanceBack'
     */
    IfcPositiveRatioMeasure getSolarReflectanceBack();
    /**
     * Sets the value of the explicit attribute 'SolarReflectanceBack'.
     * 
     * @param value
     */
    void setSolarReflectanceBack(IfcPositiveRatioMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcOpticalMaterialProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcOpticalMaterialProperties(Step::SPFData *args);
    virtual ~IfcOpticalMaterialProperties();

  private:
    static Step::ClassType s_type;
    Real m_visibleTransmittance;
    Real m_solarTransmittance;
    Real m_thermalIrTransmittance;
    Real m_thermalIrEmissivityBack;
    Real m_thermalIrEmissivityFront;
    Real m_visibleReflectanceBack;
    Real m_visibleReflectanceFront;
    Real m_solarReflectanceFront;
    Real m_solarReflectanceBack;
    /**
     * @param c
     */
    IfcOpticalMaterialProperties(const IfcOpticalMaterialProperties &c);

  };

  class IfcOpticalMaterialProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcOpticalMaterialProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcOpticalMaterialProperties_Factory();
    virtual ~IfcOpticalMaterialProperties_Factory();
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
    IfcOpticalMaterialProperties *get(Step::StepId id);
    /**
     */
    IfcOpticalMaterialProperties *generate();
    /**
     * @param id
     */
    IfcOpticalMaterialProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCOPTICALMATERIALPROPERTIES_H
