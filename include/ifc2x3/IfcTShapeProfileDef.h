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

#ifndef IFC2X3_IFCTSHAPEPROFILEDEF_H
#define IFC2X3_IFCTSHAPEPROFILEDEF_H
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

  class IfcTShapeProfileDef_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcTShapeProfileDef : public Step::InstantiatableEntity, public IfcParameterizedProfileDef {
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
     * (non-const) Returns the value of the explicit attribute 'FlangeWidth'.
     * 
     * @return the value of the explicit attribute 'FlangeWidth'
     */
    IfcPositiveLengthMeasure getFlangeWidth();
    /**
     * Sets the value of the explicit attribute 'FlangeWidth'.
     * 
     * @param value
     */
    void setFlangeWidth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WebThickness'.
     * 
     * @return the value of the explicit attribute 'WebThickness'
     */
    IfcPositiveLengthMeasure getWebThickness();
    /**
     * Sets the value of the explicit attribute 'WebThickness'.
     * 
     * @param value
     */
    void setWebThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FlangeThickness'.
     * 
     * @return the value of the explicit attribute 'FlangeThickness'
     */
    IfcPositiveLengthMeasure getFlangeThickness();
    /**
     * Sets the value of the explicit attribute 'FlangeThickness'.
     * 
     * @param value
     */
    void setFlangeThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FilletRadius'.
     * 
     * @return the value of the explicit attribute 'FilletRadius'
     */
    IfcPositiveLengthMeasure getFilletRadius();
    /**
     * Sets the value of the explicit attribute 'FilletRadius'.
     * 
     * @param value
     */
    void setFilletRadius(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FlangeEdgeRadius'.
     * 
     * @return the value of the explicit attribute 'FlangeEdgeRadius'
     */
    IfcPositiveLengthMeasure getFlangeEdgeRadius();
    /**
     * Sets the value of the explicit attribute 'FlangeEdgeRadius'.
     * 
     * @param value
     */
    void setFlangeEdgeRadius(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WebEdgeRadius'.
     * 
     * @return the value of the explicit attribute 'WebEdgeRadius'
     */
    IfcPositiveLengthMeasure getWebEdgeRadius();
    /**
     * Sets the value of the explicit attribute 'WebEdgeRadius'.
     * 
     * @param value
     */
    void setWebEdgeRadius(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WebSlope'.
     * 
     * @return the value of the explicit attribute 'WebSlope'
     */
    IfcPlaneAngleMeasure getWebSlope();
    /**
     * Sets the value of the explicit attribute 'WebSlope'.
     * 
     * @param value
     */
    void setWebSlope(IfcPlaneAngleMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FlangeSlope'.
     * 
     * @return the value of the explicit attribute 'FlangeSlope'
     */
    IfcPlaneAngleMeasure getFlangeSlope();
    /**
     * Sets the value of the explicit attribute 'FlangeSlope'.
     * 
     * @param value
     */
    void setFlangeSlope(IfcPlaneAngleMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CentreOfGravityInY'.
     * 
     * @return the value of the explicit attribute 'CentreOfGravityInY'
     */
    IfcPositiveLengthMeasure getCentreOfGravityInY();
    /**
     * Sets the value of the explicit attribute 'CentreOfGravityInY'.
     * 
     * @param value
     */
    void setCentreOfGravityInY(IfcPositiveLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcTShapeProfileDef_Factory;

  protected:
    /**
     * @param args
     */
    IfcTShapeProfileDef(Step::SPFData *args);
    virtual ~IfcTShapeProfileDef();

  private:
    static Step::ClassType s_type;
    Real m_depth;
    Real m_flangeWidth;
    Real m_webThickness;
    Real m_flangeThickness;
    Real m_filletRadius;
    Real m_flangeEdgeRadius;
    Real m_webEdgeRadius;
    Real m_webSlope;
    Real m_flangeSlope;
    Real m_centreOfGravityInY;
    /**
     * @param c
     */
    IfcTShapeProfileDef(const IfcTShapeProfileDef &c);

  };

  class IfcTShapeProfileDef;

  /**
   */
  class IFC2X3_DLL_DEF IfcTShapeProfileDef_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcTShapeProfileDef_Factory();
    virtual ~IfcTShapeProfileDef_Factory();
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
    IfcTShapeProfileDef *get(Step::StepId id);
    /**
     */
    IfcTShapeProfileDef *generate();
    /**
     * @param id
     */
    IfcTShapeProfileDef *find(Step::StepId id);

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

#endif // IFC2X3_IFCTSHAPEPROFILEDEF_H
