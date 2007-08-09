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

#ifndef IFC2X3_IFCREINFORCINGBAR_H
#define IFC2X3_IFCREINFORCINGBAR_H
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

  class IfcReinforcingBar_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcReinforcingBar : public Step::InstantiatableEntity, public IfcReinforcingElement {
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
     * (non-const) Returns the value of the explicit attribute 'BarLength'.
     * 
     * @return the value of the explicit attribute 'BarLength'
     */
    IfcPositiveLengthMeasure getBarLength();
    /**
     * Sets the value of the explicit attribute 'BarLength'.
     * 
     * @param value
     */
    void setBarLength(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'BarRole'.
     * 
     * @return the value of the explicit attribute 'BarRole'
     */
    IfcReinforcingBarRoleEnum getBarRole();
    /**
     * Sets the value of the explicit attribute 'BarRole'.
     * 
     * @param value
     */
    void setBarRole(IfcReinforcingBarRoleEnum value);
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
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcReinforcingBar_Factory;

  protected:
    /**
     * @param args
     */
    IfcReinforcingBar(Step::SPFData *args);
    virtual ~IfcReinforcingBar();

  private:
    static Step::ClassType s_type;
    Real m_nominalDiameter;
    Real m_crossSectionArea;
    Real m_barLength;
    IfcReinforcingBarRoleEnum m_barRole;
    IfcReinforcingBarSurfaceEnum m_barSurface;
    /**
     * @param c
     */
    IfcReinforcingBar(const IfcReinforcingBar &c);

  };

  class IfcReinforcingBar;

  /**
   */
  class IFC2X3_DLL_DEF IfcReinforcingBar_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcReinforcingBar_Factory();
    virtual ~IfcReinforcingBar_Factory();
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
    IfcReinforcingBar *get(Step::StepId id);
    /**
     */
    IfcReinforcingBar *generate();
    /**
     * @param id
     */
    IfcReinforcingBar *find(Step::StepId id);

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

#endif // IFC2X3_IFCREINFORCINGBAR_H
