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

#ifndef IFC2X3_IFCCSHAPEPROFILEDEF_H
#define IFC2X3_IFCCSHAPEPROFILEDEF_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcCShapeProfileDef_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcCShapeProfileDef : public Step::InstantiatableEntity, public IfcParameterizedProfileDef {
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
     * (non-const) Returns the value of the explicit attribute 'Depth'.
     * 
     * @return the value of the explicit attribute 'Depth'
     */
    IfcPositiveLengthMeasure getDepth();
    /**
     * Sets the value of the explicit attribute 'Depth'.
     * 
     * @param value
     */
    void setDepth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Width'.
     * 
     * @return the value of the explicit attribute 'Width'
     */
    IfcPositiveLengthMeasure getWidth();
    /**
     * Sets the value of the explicit attribute 'Width'.
     * 
     * @param value
     */
    void setWidth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WallThickness'.
     * 
     * @return the value of the explicit attribute 'WallThickness'
     */
    IfcPositiveLengthMeasure getWallThickness();
    /**
     * Sets the value of the explicit attribute 'WallThickness'.
     * 
     * @param value
     */
    void setWallThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Girth'.
     * 
     * @return the value of the explicit attribute 'Girth'
     */
    IfcPositiveLengthMeasure getGirth();
    /**
     * Sets the value of the explicit attribute 'Girth'.
     * 
     * @param value
     */
    void setGirth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'InternalFilletRadius'.
     * 
     * @return the value of the explicit attribute 'InternalFilletRadius'
     */
    IfcPositiveLengthMeasure getInternalFilletRadius();
    /**
     * Sets the value of the explicit attribute 'InternalFilletRadius'.
     * 
     * @param value
     */
    void setInternalFilletRadius(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CentreOfGravityInX'.
     * 
     * @return the value of the explicit attribute 'CentreOfGravityInX'
     */
    IfcPositiveLengthMeasure getCentreOfGravityInX();
    /**
     * Sets the value of the explicit attribute 'CentreOfGravityInX'.
     * 
     * @param value
     */
    void setCentreOfGravityInX(IfcPositiveLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcCShapeProfileDef_Factory;

  protected:
    /**
     * @param args
     */
    IfcCShapeProfileDef(Step::SPFData *args);
    virtual ~IfcCShapeProfileDef();

  private:
    static Step::ClassType s_type;
    Real m_depth;
    Real m_width;
    Real m_wallThickness;
    Real m_girth;
    Real m_internalFilletRadius;
    Real m_centreOfGravityInX;
    /**
     * @param c
     */
    IfcCShapeProfileDef(const IfcCShapeProfileDef &c);

  };

  class IfcCShapeProfileDef;

  /**
   */
  class IFC2X3_DLL_DEF IfcCShapeProfileDef_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcCShapeProfileDef_Factory();
    virtual ~IfcCShapeProfileDef_Factory();
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
    IfcCShapeProfileDef *get(Step::StepId id);
    /**
     */
    IfcCShapeProfileDef *generate();
    /**
     * @param id
     */
    IfcCShapeProfileDef *find(Step::StepId id);

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

#endif // IFC2X3_IFCCSHAPEPROFILEDEF_H
