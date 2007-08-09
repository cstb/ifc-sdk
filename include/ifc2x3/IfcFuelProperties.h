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

#ifndef IFC2X3_IFCFUELPROPERTIES_H
#define IFC2X3_IFCFUELPROPERTIES_H
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

  class IfcFuelProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcFuelProperties : public Step::InstantiatableEntity, public IfcMaterialProperties {
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
     * (non-const) Returns the value of the explicit attribute 'CombustionTemperature'.
     * 
     * @return the value of the explicit attribute 'CombustionTemperature'
     */
    IfcThermodynamicTemperatureMeasure getCombustionTemperature();
    /**
     * Sets the value of the explicit attribute 'CombustionTemperature'.
     * 
     * @param value
     */
    void setCombustionTemperature(IfcThermodynamicTemperatureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CarbonContent'.
     * 
     * @return the value of the explicit attribute 'CarbonContent'
     */
    IfcPositiveRatioMeasure getCarbonContent();
    /**
     * Sets the value of the explicit attribute 'CarbonContent'.
     * 
     * @param value
     */
    void setCarbonContent(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LowerHeatingValue'.
     * 
     * @return the value of the explicit attribute 'LowerHeatingValue'
     */
    IfcHeatingValueMeasure getLowerHeatingValue();
    /**
     * Sets the value of the explicit attribute 'LowerHeatingValue'.
     * 
     * @param value
     */
    void setLowerHeatingValue(IfcHeatingValueMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HigherHeatingValue'.
     * 
     * @return the value of the explicit attribute 'HigherHeatingValue'
     */
    IfcHeatingValueMeasure getHigherHeatingValue();
    /**
     * Sets the value of the explicit attribute 'HigherHeatingValue'.
     * 
     * @param value
     */
    void setHigherHeatingValue(IfcHeatingValueMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcFuelProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcFuelProperties(Step::SPFData *args);
    virtual ~IfcFuelProperties();

  private:
    static Step::ClassType s_type;
    Real m_combustionTemperature;
    Real m_carbonContent;
    Real m_lowerHeatingValue;
    Real m_higherHeatingValue;
    /**
     * @param c
     */
    IfcFuelProperties(const IfcFuelProperties &c);

  };

  class IfcFuelProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcFuelProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcFuelProperties_Factory();
    virtual ~IfcFuelProperties_Factory();
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
    IfcFuelProperties *get(Step::StepId id);
    /**
     */
    IfcFuelProperties *generate();
    /**
     * @param id
     */
    IfcFuelProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCFUELPROPERTIES_H
