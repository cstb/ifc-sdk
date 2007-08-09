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

#ifndef IFC2X3_IFCWINDOWLININGPROPERTIES_H
#define IFC2X3_IFCWINDOWLININGPROPERTIES_H
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

  class IfcShapeAspect;
  class IfcWindowLiningProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcWindowLiningProperties : public Step::InstantiatableEntity, public IfcPropertySetDefinition {
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
     * (non-const) Returns the value of the explicit attribute 'MullionThickness'.
     * 
     * @return the value of the explicit attribute 'MullionThickness'
     */
    IfcPositiveLengthMeasure getMullionThickness();
    /**
     * Sets the value of the explicit attribute 'MullionThickness'.
     * 
     * @param value
     */
    void setMullionThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FirstTransomOffset'.
     * 
     * @return the value of the explicit attribute 'FirstTransomOffset'
     */
    IfcNormalisedRatioMeasure getFirstTransomOffset();
    /**
     * Sets the value of the explicit attribute 'FirstTransomOffset'.
     * 
     * @param value
     */
    void setFirstTransomOffset(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SecondTransomOffset'.
     * 
     * @return the value of the explicit attribute 'SecondTransomOffset'
     */
    IfcNormalisedRatioMeasure getSecondTransomOffset();
    /**
     * Sets the value of the explicit attribute 'SecondTransomOffset'.
     * 
     * @param value
     */
    void setSecondTransomOffset(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FirstMullionOffset'.
     * 
     * @return the value of the explicit attribute 'FirstMullionOffset'
     */
    IfcNormalisedRatioMeasure getFirstMullionOffset();
    /**
     * Sets the value of the explicit attribute 'FirstMullionOffset'.
     * 
     * @param value
     */
    void setFirstMullionOffset(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SecondMullionOffset'.
     * 
     * @return the value of the explicit attribute 'SecondMullionOffset'
     */
    IfcNormalisedRatioMeasure getSecondMullionOffset();
    /**
     * Sets the value of the explicit attribute 'SecondMullionOffset'.
     * 
     * @param value
     */
    void setSecondMullionOffset(IfcNormalisedRatioMeasure value);
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
    friend class IfcWindowLiningProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcWindowLiningProperties(Step::SPFData *args);
    virtual ~IfcWindowLiningProperties();

  private:
    static Step::ClassType s_type;
    Real m_liningDepth;
    Real m_liningThickness;
    Real m_transomThickness;
    Real m_mullionThickness;
    Real m_firstTransomOffset;
    Real m_secondTransomOffset;
    Real m_firstMullionOffset;
    Real m_secondMullionOffset;
    Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;
    /**
     * @param c
     */
    IfcWindowLiningProperties(const IfcWindowLiningProperties &c);

  };

  class IfcWindowLiningProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcWindowLiningProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcWindowLiningProperties_Factory();
    virtual ~IfcWindowLiningProperties_Factory();
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
    IfcWindowLiningProperties *get(Step::StepId id);
    /**
     */
    IfcWindowLiningProperties *generate();
    /**
     * @param id
     */
    IfcWindowLiningProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCWINDOWLININGPROPERTIES_H
