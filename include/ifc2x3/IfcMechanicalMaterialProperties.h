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

#ifndef IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
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

  class IfcMechanicalMaterialProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcMechanicalMaterialProperties : public Step::InstantiatableEntity, public IfcMaterialProperties {
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
     * (non-const) Returns the value of the explicit attribute 'DynamicViscosity'.
     * 
     * @return the value of the explicit attribute 'DynamicViscosity'
     */
    IfcDynamicViscosityMeasure getDynamicViscosity();
    /**
     * Sets the value of the explicit attribute 'DynamicViscosity'.
     * 
     * @param value
     */
    void setDynamicViscosity(IfcDynamicViscosityMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'YoungModulus'.
     * 
     * @return the value of the explicit attribute 'YoungModulus'
     */
    IfcModulusOfElasticityMeasure getYoungModulus();
    /**
     * Sets the value of the explicit attribute 'YoungModulus'.
     * 
     * @param value
     */
    void setYoungModulus(IfcModulusOfElasticityMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ShearModulus'.
     * 
     * @return the value of the explicit attribute 'ShearModulus'
     */
    IfcModulusOfElasticityMeasure getShearModulus();
    /**
     * Sets the value of the explicit attribute 'ShearModulus'.
     * 
     * @param value
     */
    void setShearModulus(IfcModulusOfElasticityMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PoissonRatio'.
     * 
     * @return the value of the explicit attribute 'PoissonRatio'
     */
    IfcPositiveRatioMeasure getPoissonRatio();
    /**
     * Sets the value of the explicit attribute 'PoissonRatio'.
     * 
     * @param value
     */
    void setPoissonRatio(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThermalExpansionCoefficient'.
     * 
     * @return the value of the explicit attribute 'ThermalExpansionCoefficient'
     */
    IfcThermalExpansionCoefficientMeasure getThermalExpansionCoefficient();
    /**
     * Sets the value of the explicit attribute 'ThermalExpansionCoefficient'.
     * 
     * @param value
     */
    void setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcMechanicalMaterialProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcMechanicalMaterialProperties(Step::SPFData *args);
    virtual ~IfcMechanicalMaterialProperties();

  private:
    static Step::ClassType s_type;
    Real m_dynamicViscosity;
    Real m_youngModulus;
    Real m_shearModulus;
    Real m_poissonRatio;
    Real m_thermalExpansionCoefficient;
    /**
     * @param c
     */
    IfcMechanicalMaterialProperties(const IfcMechanicalMaterialProperties &c);

  };

  class IfcMechanicalMaterialProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcMechanicalMaterialProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcMechanicalMaterialProperties_Factory();
    virtual ~IfcMechanicalMaterialProperties_Factory();
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
    IfcMechanicalMaterialProperties *get(Step::StepId id);
    /**
     */
    IfcMechanicalMaterialProperties *generate();
    /**
     * @param id
     */
    IfcMechanicalMaterialProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCMECHANICALMATERIALPROPERTIES_H
