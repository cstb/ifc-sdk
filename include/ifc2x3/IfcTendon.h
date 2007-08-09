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

#ifndef IFC2X3_IFCTENDON_H
#define IFC2X3_IFCTENDON_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcReinforcingElement.h>
#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcTendon_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcTendon : public Step::InstantiatableEntity, public IfcReinforcingElement {
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
     * (non-const) Returns the value of the explicit attribute 'PredefinedType'.
     * 
     * @return the value of the explicit attribute 'PredefinedType'
     */
    IfcTendonTypeEnum getPredefinedType();
    /**
     * Sets the value of the explicit attribute 'PredefinedType'.
     * 
     * @param value
     */
    void setPredefinedType(IfcTendonTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'NominalDiameter'.
     * 
     * @return the value of the explicit attribute 'NominalDiameter'
     */
    IfcPositiveLengthMeasure getNominalDiameter();
    /**
     * Sets the value of the explicit attribute 'NominalDiameter'.
     * 
     * @param value
     */
    void setNominalDiameter(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CrossSectionArea'.
     * 
     * @return the value of the explicit attribute 'CrossSectionArea'
     */
    IfcAreaMeasure getCrossSectionArea();
    /**
     * Sets the value of the explicit attribute 'CrossSectionArea'.
     * 
     * @param value
     */
    void setCrossSectionArea(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TensionForce'.
     * 
     * @return the value of the explicit attribute 'TensionForce'
     */
    IfcForceMeasure getTensionForce();
    /**
     * Sets the value of the explicit attribute 'TensionForce'.
     * 
     * @param value
     */
    void setTensionForce(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PreStress'.
     * 
     * @return the value of the explicit attribute 'PreStress'
     */
    IfcPressureMeasure getPreStress();
    /**
     * Sets the value of the explicit attribute 'PreStress'.
     * 
     * @param value
     */
    void setPreStress(IfcPressureMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FrictionCoefficient'.
     * 
     * @return the value of the explicit attribute 'FrictionCoefficient'
     */
    IfcNormalisedRatioMeasure getFrictionCoefficient();
    /**
     * Sets the value of the explicit attribute 'FrictionCoefficient'.
     * 
     * @param value
     */
    void setFrictionCoefficient(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AnchorageSlip'.
     * 
     * @return the value of the explicit attribute 'AnchorageSlip'
     */
    IfcPositiveLengthMeasure getAnchorageSlip();
    /**
     * Sets the value of the explicit attribute 'AnchorageSlip'.
     * 
     * @param value
     */
    void setAnchorageSlip(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MinCurvatureRadius'.
     * 
     * @return the value of the explicit attribute 'MinCurvatureRadius'
     */
    IfcPositiveLengthMeasure getMinCurvatureRadius();
    /**
     * Sets the value of the explicit attribute 'MinCurvatureRadius'.
     * 
     * @param value
     */
    void setMinCurvatureRadius(IfcPositiveLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcTendon_Factory;

  protected:
    /**
     * @param args
     */
    IfcTendon(Step::SPFData *args);
    virtual ~IfcTendon();

  private:
    static Step::ClassType s_type;
    IfcTendonTypeEnum m_predefinedType;
    Real m_nominalDiameter;
    Real m_crossSectionArea;
    Real m_tensionForce;
    Real m_preStress;
    Real m_frictionCoefficient;
    Real m_anchorageSlip;
    Real m_minCurvatureRadius;
    /**
     * @param c
     */
    IfcTendon(const IfcTendon &c);

  };

  class IfcTendon;

  /**
   */
  class IFC2X3_DLL_DEF IfcTendon_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcTendon_Factory();
    virtual ~IfcTendon_Factory();
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
    IfcTendon *get(Step::StepId id);
    /**
     */
    IfcTendon *generate();
    /**
     * @param id
     */
    IfcTendon *find(Step::StepId id);

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

#endif // IFC2X3_IFCTENDON_H
