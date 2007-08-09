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

#ifndef IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
#define IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
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

  class IfcCraneRailFShapeProfileDef_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcCraneRailFShapeProfileDef : public Step::InstantiatableEntity, public IfcParameterizedProfileDef {
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
     * (non-const) Returns the value of the explicit attribute 'OverallHeight'.
     * 
     * @return the value of the explicit attribute 'OverallHeight'
     */
    IfcPositiveLengthMeasure getOverallHeight();
    /**
     * Sets the value of the explicit attribute 'OverallHeight'.
     * 
     * @param value
     */
    void setOverallHeight(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HeadWidth'.
     * 
     * @return the value of the explicit attribute 'HeadWidth'
     */
    IfcPositiveLengthMeasure getHeadWidth();
    /**
     * Sets the value of the explicit attribute 'HeadWidth'.
     * 
     * @param value
     */
    void setHeadWidth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Radius'.
     * 
     * @return the value of the explicit attribute 'Radius'
     */
    IfcPositiveLengthMeasure getRadius();
    /**
     * Sets the value of the explicit attribute 'Radius'.
     * 
     * @param value
     */
    void setRadius(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HeadDepth2'.
     * 
     * @return the value of the explicit attribute 'HeadDepth2'
     */
    IfcPositiveLengthMeasure getHeadDepth2();
    /**
     * Sets the value of the explicit attribute 'HeadDepth2'.
     * 
     * @param value
     */
    void setHeadDepth2(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'HeadDepth3'.
     * 
     * @return the value of the explicit attribute 'HeadDepth3'
     */
    IfcPositiveLengthMeasure getHeadDepth3();
    /**
     * Sets the value of the explicit attribute 'HeadDepth3'.
     * 
     * @param value
     */
    void setHeadDepth3(IfcPositiveLengthMeasure value);
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
     * (non-const) Returns the value of the explicit attribute 'BaseDepth1'.
     * 
     * @return the value of the explicit attribute 'BaseDepth1'
     */
    IfcPositiveLengthMeasure getBaseDepth1();
    /**
     * Sets the value of the explicit attribute 'BaseDepth1'.
     * 
     * @param value
     */
    void setBaseDepth1(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'BaseDepth2'.
     * 
     * @return the value of the explicit attribute 'BaseDepth2'
     */
    IfcPositiveLengthMeasure getBaseDepth2();
    /**
     * Sets the value of the explicit attribute 'BaseDepth2'.
     * 
     * @param value
     */
    void setBaseDepth2(IfcPositiveLengthMeasure value);
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
    friend class IfcCraneRailFShapeProfileDef_Factory;

  protected:
    /**
     * @param args
     */
    IfcCraneRailFShapeProfileDef(Step::SPFData *args);
    virtual ~IfcCraneRailFShapeProfileDef();

  private:
    static Step::ClassType s_type;
    Real m_overallHeight;
    Real m_headWidth;
    Real m_radius;
    Real m_headDepth2;
    Real m_headDepth3;
    Real m_webThickness;
    Real m_baseDepth1;
    Real m_baseDepth2;
    Real m_centreOfGravityInY;
    /**
     * @param c
     */
    IfcCraneRailFShapeProfileDef(const IfcCraneRailFShapeProfileDef &c);

  };

  class IfcCraneRailFShapeProfileDef;

  /**
   */
  class IFC2X3_DLL_DEF IfcCraneRailFShapeProfileDef_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcCraneRailFShapeProfileDef_Factory();
    virtual ~IfcCraneRailFShapeProfileDef_Factory();
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
    IfcCraneRailFShapeProfileDef *get(Step::StepId id);
    /**
     */
    IfcCraneRailFShapeProfileDef *generate();
    /**
     * @param id
     */
    IfcCraneRailFShapeProfileDef *find(Step::StepId id);

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

#endif // IFC2X3_IFCCRANERAILFSHAPEPROFILEDEF_H
