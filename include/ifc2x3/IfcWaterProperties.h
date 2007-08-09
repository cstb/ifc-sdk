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

#ifndef IFC2X3_IFCWATERPROPERTIES_H
#define IFC2X3_IFCWATERPROPERTIES_H
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

  class IfcWaterProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcWaterProperties : public Step::InstantiatableEntity, public IfcMaterialProperties {
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
     * (non-const) Returns the value of the explicit attribute 'IsPotable'.
     * 
     * @return the value of the explicit attribute 'IsPotable'
     */
    Bool getIsPotable();
    /**
     * Sets the value of the explicit attribute 'IsPotable'.
     * 
     * @param value
     */
    void setIsPotable(Bool value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Hardness'.
     * 
     * @return the value of the explicit attribute 'Hardness'
     */
    IfcIonConcentrationMeasure getHardness();
    /**
     * Sets the value of the explicit attribute 'Hardness'.
     * 
     * @param value
     */
    void setHardness(IfcIonConcentrationMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AlkalinityConcentration'.
     * 
     * @return the value of the explicit attribute 'AlkalinityConcentration'
     */
    IfcIonConcentrationMeasure getAlkalinityConcentration();
    /**
     * Sets the value of the explicit attribute 'AlkalinityConcentration'.
     * 
     * @param value
     */
    void setAlkalinityConcentration(IfcIonConcentrationMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AcidityConcentration'.
     * 
     * @return the value of the explicit attribute 'AcidityConcentration'
     */
    IfcIonConcentrationMeasure getAcidityConcentration();
    /**
     * Sets the value of the explicit attribute 'AcidityConcentration'.
     * 
     * @param value
     */
    void setAcidityConcentration(IfcIonConcentrationMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ImpuritiesContent'.
     * 
     * @return the value of the explicit attribute 'ImpuritiesContent'
     */
    IfcNormalisedRatioMeasure getImpuritiesContent();
    /**
     * Sets the value of the explicit attribute 'ImpuritiesContent'.
     * 
     * @param value
     */
    void setImpuritiesContent(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PHLevel'.
     * 
     * @return the value of the explicit attribute 'PHLevel'
     */
    IfcPHMeasure getPHLevel();
    /**
     * Sets the value of the explicit attribute 'PHLevel'.
     * 
     * @param value
     */
    void setPHLevel(IfcPHMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'DissolvedSolidsContent'.
     * 
     * @return the value of the explicit attribute 'DissolvedSolidsContent'
     */
    IfcNormalisedRatioMeasure getDissolvedSolidsContent();
    /**
     * Sets the value of the explicit attribute 'DissolvedSolidsContent'.
     * 
     * @param value
     */
    void setDissolvedSolidsContent(IfcNormalisedRatioMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcWaterProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcWaterProperties(Step::SPFData *args);
    virtual ~IfcWaterProperties();

  private:
    static Step::ClassType s_type;
    Bool m_isPotable;
    Real m_hardness;
    Real m_alkalinityConcentration;
    Real m_acidityConcentration;
    Real m_impuritiesContent;
    Real m_pHLevel;
    Real m_dissolvedSolidsContent;
    /**
     * @param c
     */
    IfcWaterProperties(const IfcWaterProperties &c);

  };

  class IfcWaterProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcWaterProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcWaterProperties_Factory();
    virtual ~IfcWaterProperties_Factory();
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
    IfcWaterProperties *get(Step::StepId id);
    /**
     */
    IfcWaterProperties *generate();
    /**
     * @param id
     */
    IfcWaterProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCWATERPROPERTIES_H
