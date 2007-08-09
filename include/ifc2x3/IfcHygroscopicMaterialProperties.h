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

#ifndef IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
#define IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
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

  class IfcHygroscopicMaterialProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcHygroscopicMaterialProperties : public Step::InstantiatableEntity, public IfcMaterialProperties {
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
     * (non-const) Returns the value of the explicit attribute 'UpperVaporResistanceFactor'.
     * 
     * @return the value of the explicit attribute 'UpperVaporResistanceFactor'
     */
    IfcPositiveRatioMeasure getUpperVaporResistanceFactor();
    /**
     * Sets the value of the explicit attribute 'UpperVaporResistanceFactor'.
     * 
     * @param value
     */
    void setUpperVaporResistanceFactor(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LowerVaporResistanceFactor'.
     * 
     * @return the value of the explicit attribute 'LowerVaporResistanceFactor'
     */
    IfcPositiveRatioMeasure getLowerVaporResistanceFactor();
    /**
     * Sets the value of the explicit attribute 'LowerVaporResistanceFactor'.
     * 
     * @param value
     */
    void setLowerVaporResistanceFactor(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsothermalMoistureCapacity'.
     * 
     * @return the value of the explicit attribute 'IsothermalMoistureCapacity'
     */
    IfcIsothermalMoistureCapacityMeasure getIsothermalMoistureCapacity();
    /**
     * Sets the value of the explicit attribute 'IsothermalMoistureCapacity'.
     * 
     * @param value
     */
    void setIsothermalMoistureCapacity(IfcIsothermalMoistureCapacityMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'VaporPermeability'.
     * 
     * @return the value of the explicit attribute 'VaporPermeability'
     */
    IfcVaporPermeabilityMeasure getVaporPermeability();
    /**
     * Sets the value of the explicit attribute 'VaporPermeability'.
     * 
     * @param value
     */
    void setVaporPermeability(IfcVaporPermeabilityMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MoistureDiffusivity'.
     * 
     * @return the value of the explicit attribute 'MoistureDiffusivity'
     */
    IfcMoistureDiffusivityMeasure getMoistureDiffusivity();
    /**
     * Sets the value of the explicit attribute 'MoistureDiffusivity'.
     * 
     * @param value
     */
    void setMoistureDiffusivity(IfcMoistureDiffusivityMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcHygroscopicMaterialProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcHygroscopicMaterialProperties(Step::SPFData *args);
    virtual ~IfcHygroscopicMaterialProperties();

  private:
    static Step::ClassType s_type;
    Real m_upperVaporResistanceFactor;
    Real m_lowerVaporResistanceFactor;
    Real m_isothermalMoistureCapacity;
    Real m_vaporPermeability;
    Real m_moistureDiffusivity;
    /**
     * @param c
     */
    IfcHygroscopicMaterialProperties(const IfcHygroscopicMaterialProperties &c);

  };

  class IfcHygroscopicMaterialProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcHygroscopicMaterialProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcHygroscopicMaterialProperties_Factory();
    virtual ~IfcHygroscopicMaterialProperties_Factory();
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
    IfcHygroscopicMaterialProperties *get(Step::StepId id);
    /**
     */
    IfcHygroscopicMaterialProperties *generate();
    /**
     * @param id
     */
    IfcHygroscopicMaterialProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCHYGROSCOPICMATERIALPROPERTIES_H
