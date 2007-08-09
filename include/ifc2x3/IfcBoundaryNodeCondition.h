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

#ifndef IFC2X3_IFCBOUNDARYNODECONDITION_H
#define IFC2X3_IFCBOUNDARYNODECONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcBoundaryCondition.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcBoundaryNodeCondition_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcBoundaryNodeCondition : public Step::InstantiatableEntity, public IfcBoundaryCondition {
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
     * (non-const) Returns the value of the explicit attribute 'LinearStiffnessX'.
     * 
     * @return the value of the explicit attribute 'LinearStiffnessX'
     */
    IfcLinearStiffnessMeasure getLinearStiffnessX();
    /**
     * Sets the value of the explicit attribute 'LinearStiffnessX'.
     * 
     * @param value
     */
    void setLinearStiffnessX(IfcLinearStiffnessMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LinearStiffnessY'.
     * 
     * @return the value of the explicit attribute 'LinearStiffnessY'
     */
    IfcLinearStiffnessMeasure getLinearStiffnessY();
    /**
     * Sets the value of the explicit attribute 'LinearStiffnessY'.
     * 
     * @param value
     */
    void setLinearStiffnessY(IfcLinearStiffnessMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LinearStiffnessZ'.
     * 
     * @return the value of the explicit attribute 'LinearStiffnessZ'
     */
    IfcLinearStiffnessMeasure getLinearStiffnessZ();
    /**
     * Sets the value of the explicit attribute 'LinearStiffnessZ'.
     * 
     * @param value
     */
    void setLinearStiffnessZ(IfcLinearStiffnessMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RotationalStiffnessX'.
     * 
     * @return the value of the explicit attribute 'RotationalStiffnessX'
     */
    IfcRotationalStiffnessMeasure getRotationalStiffnessX();
    /**
     * Sets the value of the explicit attribute 'RotationalStiffnessX'.
     * 
     * @param value
     */
    void setRotationalStiffnessX(IfcRotationalStiffnessMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RotationalStiffnessY'.
     * 
     * @return the value of the explicit attribute 'RotationalStiffnessY'
     */
    IfcRotationalStiffnessMeasure getRotationalStiffnessY();
    /**
     * Sets the value of the explicit attribute 'RotationalStiffnessY'.
     * 
     * @param value
     */
    void setRotationalStiffnessY(IfcRotationalStiffnessMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RotationalStiffnessZ'.
     * 
     * @return the value of the explicit attribute 'RotationalStiffnessZ'
     */
    IfcRotationalStiffnessMeasure getRotationalStiffnessZ();
    /**
     * Sets the value of the explicit attribute 'RotationalStiffnessZ'.
     * 
     * @param value
     */
    void setRotationalStiffnessZ(IfcRotationalStiffnessMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcBoundaryNodeCondition_Factory;

  protected:
    /**
     * @param args
     */
    IfcBoundaryNodeCondition(Step::SPFData *args);
    virtual ~IfcBoundaryNodeCondition();

  private:
    static Step::ClassType s_type;
    Real m_linearStiffnessX;
    Real m_linearStiffnessY;
    Real m_linearStiffnessZ;
    Real m_rotationalStiffnessX;
    Real m_rotationalStiffnessY;
    Real m_rotationalStiffnessZ;
    /**
     * @param c
     */
    IfcBoundaryNodeCondition(const IfcBoundaryNodeCondition &c);

  };

  class IfcBoundaryNodeCondition;

  /**
   */
  class IFC2X3_DLL_DEF IfcBoundaryNodeCondition_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcBoundaryNodeCondition_Factory();
    virtual ~IfcBoundaryNodeCondition_Factory();
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
    IfcBoundaryNodeCondition *get(Step::StepId id);
    /**
     */
    IfcBoundaryNodeCondition *generate();
    /**
     * @param id
     */
    IfcBoundaryNodeCondition *find(Step::StepId id);

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

#endif // IFC2X3_IFCBOUNDARYNODECONDITION_H
