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

#ifndef IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
#define IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcReinforcementBarProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcReinforcementBarProperties : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'TotalCrossSectionArea'.
     * 
     * @return the value of the explicit attribute 'TotalCrossSectionArea'
     */
    IfcAreaMeasure getTotalCrossSectionArea();
    /**
     * Sets the value of the explicit attribute 'TotalCrossSectionArea'.
     * 
     * @param value
     */
    void setTotalCrossSectionArea(IfcAreaMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SteelGrade'.
     * 
     * @return the value of the explicit attribute 'SteelGrade'
     */
    IfcLabel getSteelGrade();
    /**
     * Sets the value of the explicit attribute 'SteelGrade'.
     * 
     * @param value
     */
    void setSteelGrade(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'BarSurface'.
     * 
     * @return the value of the explicit attribute 'BarSurface'
     */
    IfcReinforcingBarSurfaceEnum getBarSurface();
    /**
     * Sets the value of the explicit attribute 'BarSurface'.
     * 
     * @param value
     */
    void setBarSurface(IfcReinforcingBarSurfaceEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'EffectiveDepth'.
     * 
     * @return the value of the explicit attribute 'EffectiveDepth'
     */
    IfcLengthMeasure getEffectiveDepth();
    /**
     * Sets the value of the explicit attribute 'EffectiveDepth'.
     * 
     * @param value
     */
    void setEffectiveDepth(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'NominalBarDiameter'.
     * 
     * @return the value of the explicit attribute 'NominalBarDiameter'
     */
    IfcPositiveLengthMeasure getNominalBarDiameter();
    /**
     * Sets the value of the explicit attribute 'NominalBarDiameter'.
     * 
     * @param value
     */
    void setNominalBarDiameter(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'BarCount'.
     * 
     * @return the value of the explicit attribute 'BarCount'
     */
    IfcCountMeasure getBarCount();
    /**
     * Sets the value of the explicit attribute 'BarCount'.
     * 
     * @param value
     */
    void setBarCount(IfcCountMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcReinforcementBarProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcReinforcementBarProperties(Step::SPFData *args);
    virtual ~IfcReinforcementBarProperties();

  private:
    static Step::ClassType s_type;
    Real m_totalCrossSectionArea;
    std::string m_steelGrade;
    IfcReinforcingBarSurfaceEnum m_barSurface;
    Real m_effectiveDepth;
    Real m_nominalBarDiameter;
    Integer m_barCount;
    /**
     * @param c
     */
    IfcReinforcementBarProperties(const IfcReinforcementBarProperties &c);

  };

  class IfcReinforcementBarProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcReinforcementBarProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcReinforcementBarProperties_Factory();
    virtual ~IfcReinforcementBarProperties_Factory();
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
    IfcReinforcementBarProperties *get(Step::StepId id);
    /**
     */
    IfcReinforcementBarProperties *generate();
    /**
     * @param id
     */
    IfcReinforcementBarProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCREINFORCEMENTBARPROPERTIES_H
