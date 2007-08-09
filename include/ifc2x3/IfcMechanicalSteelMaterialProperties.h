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

#ifndef IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
#define IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcMechanicalMaterialProperties.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcMechanicalSteelMaterialProperties_Factory;
  class IfcRelaxation;

  /**
   */
  class IFC2X3_DLL_DEF IfcMechanicalSteelMaterialProperties : public IfcMechanicalMaterialProperties {
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
     * (non-const) Returns the value of the explicit attribute 'YieldStress'.
     * 
     * @return the value of the explicit attribute 'YieldStress'
     */
    IfcPressureMeasure getYieldStress();
    /**
     * Sets the value of the explicit attribute 'YieldStress'.
     * 
     * @param value
     */
    void setYieldStress(IfcPressureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UltimateStress'.
     * 
     * @return the value of the explicit attribute 'UltimateStress'
     */
    IfcPressureMeasure getUltimateStress();
    /**
     * Sets the value of the explicit attribute 'UltimateStress'.
     * 
     * @param value
     */
    void setUltimateStress(IfcPressureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UltimateStrain'.
     * 
     * @return the value of the explicit attribute 'UltimateStrain'
     */
    IfcPositiveRatioMeasure getUltimateStrain();
    /**
     * Sets the value of the explicit attribute 'UltimateStrain'.
     * 
     * @param value
     */
    void setUltimateStrain(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HardeningModule'.
     * 
     * @return the value of the explicit attribute 'HardeningModule'
     */
    IfcModulusOfElasticityMeasure getHardeningModule();
    /**
     * Sets the value of the explicit attribute 'HardeningModule'.
     * 
     * @param value
     */
    void setHardeningModule(IfcModulusOfElasticityMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ProportionalStress'.
     * 
     * @return the value of the explicit attribute 'ProportionalStress'
     */
    IfcPressureMeasure getProportionalStress();
    /**
     * Sets the value of the explicit attribute 'ProportionalStress'.
     * 
     * @param value
     */
    void setProportionalStress(IfcPressureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PlasticStrain'.
     * 
     * @return the value of the explicit attribute 'PlasticStrain'
     */
    IfcPositiveRatioMeasure getPlasticStrain();
    /**
     * Sets the value of the explicit attribute 'PlasticStrain'.
     * 
     * @param value
     */
    void setPlasticStrain(IfcPositiveRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Relaxations'.
     * 
     * @return the value of the explicit attribute 'Relaxations'
     */
    Step::StepSet< Step::RefPtr< IfcRelaxation > > &getRelaxations();
    /**
     * Sets the value of the explicit attribute 'Relaxations'.
     * 
     * @param value
     */
    void setRelaxations(const Step::StepSet< Step::RefPtr< IfcRelaxation > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcMechanicalSteelMaterialProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcMechanicalSteelMaterialProperties(Step::SPFData *args);
    virtual ~IfcMechanicalSteelMaterialProperties();

  private:
    static Step::ClassType s_type;
    Real m_yieldStress;
    Real m_ultimateStress;
    Real m_ultimateStrain;
    Real m_hardeningModule;
    Real m_proportionalStress;
    Real m_plasticStrain;
    Step::StepSet< Step::RefPtr< IfcRelaxation > > m_relaxations;
    /**
     * @param c
     */
    IfcMechanicalSteelMaterialProperties(const IfcMechanicalSteelMaterialProperties &c);

  };

  class IfcMechanicalSteelMaterialProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcMechanicalSteelMaterialProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcMechanicalSteelMaterialProperties_Factory();
    virtual ~IfcMechanicalSteelMaterialProperties_Factory();
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
    IfcMechanicalSteelMaterialProperties *get(Step::StepId id);
    /**
     */
    IfcMechanicalSteelMaterialProperties *generate();
    /**
     * @param id
     */
    IfcMechanicalSteelMaterialProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCMECHANICALSTEELMATERIALPROPERTIES_H
