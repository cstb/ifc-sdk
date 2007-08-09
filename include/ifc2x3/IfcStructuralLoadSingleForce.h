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

#ifndef IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
#define IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcStructuralLoadStatic.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcStructuralLoadSingleForce_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralLoadSingleForce : public Step::InstantiatableEntity, public IfcStructuralLoadStatic {
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
     * (non-const) Returns the value of the explicit attribute 'ForceX'.
     * 
     * @return the value of the explicit attribute 'ForceX'
     */
    IfcForceMeasure getForceX();
    /**
     * Sets the value of the explicit attribute 'ForceX'.
     * 
     * @param value
     */
    void setForceX(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ForceY'.
     * 
     * @return the value of the explicit attribute 'ForceY'
     */
    IfcForceMeasure getForceY();
    /**
     * Sets the value of the explicit attribute 'ForceY'.
     * 
     * @param value
     */
    void setForceY(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ForceZ'.
     * 
     * @return the value of the explicit attribute 'ForceZ'
     */
    IfcForceMeasure getForceZ();
    /**
     * Sets the value of the explicit attribute 'ForceZ'.
     * 
     * @param value
     */
    void setForceZ(IfcForceMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MomentX'.
     * 
     * @return the value of the explicit attribute 'MomentX'
     */
    IfcTorqueMeasure getMomentX();
    /**
     * Sets the value of the explicit attribute 'MomentX'.
     * 
     * @param value
     */
    void setMomentX(IfcTorqueMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MomentY'.
     * 
     * @return the value of the explicit attribute 'MomentY'
     */
    IfcTorqueMeasure getMomentY();
    /**
     * Sets the value of the explicit attribute 'MomentY'.
     * 
     * @param value
     */
    void setMomentY(IfcTorqueMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MomentZ'.
     * 
     * @return the value of the explicit attribute 'MomentZ'
     */
    IfcTorqueMeasure getMomentZ();
    /**
     * Sets the value of the explicit attribute 'MomentZ'.
     * 
     * @param value
     */
    void setMomentZ(IfcTorqueMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcStructuralLoadSingleForce_Factory;

  protected:
    /**
     * @param args
     */
    IfcStructuralLoadSingleForce(Step::SPFData *args);
    virtual ~IfcStructuralLoadSingleForce();

  private:
    static Step::ClassType s_type;
    Real m_forceX;
    Real m_forceY;
    Real m_forceZ;
    Real m_momentX;
    Real m_momentY;
    Real m_momentZ;
    /**
     * @param c
     */
    IfcStructuralLoadSingleForce(const IfcStructuralLoadSingleForce &c);

  };

  class IfcStructuralLoadSingleForce;

  /**
   */
  class IFC2X3_DLL_DEF IfcStructuralLoadSingleForce_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcStructuralLoadSingleForce_Factory();
    virtual ~IfcStructuralLoadSingleForce_Factory();
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
    IfcStructuralLoadSingleForce *get(Step::StepId id);
    /**
     */
    IfcStructuralLoadSingleForce *generate();
    /**
     * @param id
     */
    IfcStructuralLoadSingleForce *find(Step::StepId id);

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

#endif // IFC2X3_IFCSTRUCTURALLOADSINGLEFORCE_H
