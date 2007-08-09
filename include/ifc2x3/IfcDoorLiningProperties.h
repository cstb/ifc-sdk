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

#ifndef IFC2X3_IFCDOORLININGPROPERTIES_H
#define IFC2X3_IFCDOORLININGPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcDoorLiningProperties_Factory;
  class IfcShapeAspect;

  /**
   */
  class IFC2X3_DLL_DEF IfcDoorLiningProperties : public Step::InstantiatableEntity, public IfcPropertySetDefinition {
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
     * (non-const) Returns the value of the explicit attribute 'LiningDepth'.
     * 
     * @return the value of the explicit attribute 'LiningDepth'
     */
    IfcPositiveLengthMeasure getLiningDepth();
    /**
     * Sets the value of the explicit attribute 'LiningDepth'.
     * 
     * @param value
     */
    void setLiningDepth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LiningThickness'.
     * 
     * @return the value of the explicit attribute 'LiningThickness'
     */
    IfcPositiveLengthMeasure getLiningThickness();
    /**
     * Sets the value of the explicit attribute 'LiningThickness'.
     * 
     * @param value
     */
    void setLiningThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThresholdDepth'.
     * 
     * @return the value of the explicit attribute 'ThresholdDepth'
     */
    IfcPositiveLengthMeasure getThresholdDepth();
    /**
     * Sets the value of the explicit attribute 'ThresholdDepth'.
     * 
     * @param value
     */
    void setThresholdDepth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThresholdThickness'.
     * 
     * @return the value of the explicit attribute 'ThresholdThickness'
     */
    IfcPositiveLengthMeasure getThresholdThickness();
    /**
     * Sets the value of the explicit attribute 'ThresholdThickness'.
     * 
     * @param value
     */
    void setThresholdThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TransomThickness'.
     * 
     * @return the value of the explicit attribute 'TransomThickness'
     */
    IfcPositiveLengthMeasure getTransomThickness();
    /**
     * Sets the value of the explicit attribute 'TransomThickness'.
     * 
     * @param value
     */
    void setTransomThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TransomOffset'.
     * 
     * @return the value of the explicit attribute 'TransomOffset'
     */
    IfcLengthMeasure getTransomOffset();
    /**
     * Sets the value of the explicit attribute 'TransomOffset'.
     * 
     * @param value
     */
    void setTransomOffset(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LiningOffset'.
     * 
     * @return the value of the explicit attribute 'LiningOffset'
     */
    IfcLengthMeasure getLiningOffset();
    /**
     * Sets the value of the explicit attribute 'LiningOffset'.
     * 
     * @param value
     */
    void setLiningOffset(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ThresholdOffset'.
     * 
     * @return the value of the explicit attribute 'ThresholdOffset'
     */
    IfcLengthMeasure getThresholdOffset();
    /**
     * Sets the value of the explicit attribute 'ThresholdOffset'.
     * 
     * @param value
     */
    void setThresholdOffset(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CasingThickness'.
     * 
     * @return the value of the explicit attribute 'CasingThickness'
     */
    IfcPositiveLengthMeasure getCasingThickness();
    /**
     * Sets the value of the explicit attribute 'CasingThickness'.
     * 
     * @param value
     */
    void setCasingThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CasingDepth'.
     * 
     * @return the value of the explicit attribute 'CasingDepth'
     */
    IfcPositiveLengthMeasure getCasingDepth();
    /**
     * Sets the value of the explicit attribute 'CasingDepth'.
     * 
     * @param value
     */
    void setCasingDepth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ShapeAspectStyle'.
     * 
     * @return the value of the explicit attribute 'ShapeAspectStyle'
     */
    IfcShapeAspect *getShapeAspectStyle();
    /**
     * Sets the value of the explicit attribute 'ShapeAspectStyle'.
     * 
     * @param value
     */
    void setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcDoorLiningProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcDoorLiningProperties(Step::SPFData *args);
    virtual ~IfcDoorLiningProperties();

  private:
    static Step::ClassType s_type;
    Real m_liningDepth;
    Real m_liningThickness;
    Real m_thresholdDepth;
    Real m_thresholdThickness;
    Real m_transomThickness;
    Real m_transomOffset;
    Real m_liningOffset;
    Real m_thresholdOffset;
    Real m_casingThickness;
    Real m_casingDepth;
    Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;
    /**
     * @param c
     */
    IfcDoorLiningProperties(const IfcDoorLiningProperties &c);

  };

  class IfcDoorLiningProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcDoorLiningProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcDoorLiningProperties_Factory();
    virtual ~IfcDoorLiningProperties_Factory();
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
    IfcDoorLiningProperties *get(Step::StepId id);
    /**
     */
    IfcDoorLiningProperties *generate();
    /**
     * @param id
     */
    IfcDoorLiningProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCDOORLININGPROPERTIES_H
