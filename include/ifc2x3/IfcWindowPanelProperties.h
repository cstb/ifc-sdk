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

#ifndef IFC2X3_IFCWINDOWPANELPROPERTIES_H
#define IFC2X3_IFCWINDOWPANELPROPERTIES_H
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
  class IfcWindowPanelProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcWindowPanelProperties : public Step::InstantiatableEntity, public IfcPropertySetDefinition {
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
     * (non-const) Returns the value of the explicit attribute 'OperationType'.
     * 
     * @return the value of the explicit attribute 'OperationType'
     */
    IfcWindowPanelOperationEnum getOperationType();
    /**
     * Sets the value of the explicit attribute 'OperationType'.
     * 
     * @param value
     */
    void setOperationType(IfcWindowPanelOperationEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PanelPosition'.
     * 
     * @return the value of the explicit attribute 'PanelPosition'
     */
    IfcWindowPanelPositionEnum getPanelPosition();
    /**
     * Sets the value of the explicit attribute 'PanelPosition'.
     * 
     * @param value
     */
    void setPanelPosition(IfcWindowPanelPositionEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FrameDepth'.
     * 
     * @return the value of the explicit attribute 'FrameDepth'
     */
    IfcPositiveLengthMeasure getFrameDepth();
    /**
     * Sets the value of the explicit attribute 'FrameDepth'.
     * 
     * @param value
     */
    void setFrameDepth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FrameThickness'.
     * 
     * @return the value of the explicit attribute 'FrameThickness'
     */
    IfcPositiveLengthMeasure getFrameThickness();
    /**
     * Sets the value of the explicit attribute 'FrameThickness'.
     * 
     * @param value
     */
    void setFrameThickness(IfcPositiveLengthMeasure value);
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
    friend class IfcWindowPanelProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcWindowPanelProperties(Step::SPFData *args);
    virtual ~IfcWindowPanelProperties();

  private:
    static Step::ClassType s_type;
    IfcWindowPanelOperationEnum m_operationType;
    IfcWindowPanelPositionEnum m_panelPosition;
    Real m_frameDepth;
    Real m_frameThickness;
    Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;
    /**
     * @param c
     */
    IfcWindowPanelProperties(const IfcWindowPanelProperties &c);

  };

  class IfcWindowPanelProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcWindowPanelProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcWindowPanelProperties_Factory();
    virtual ~IfcWindowPanelProperties_Factory();
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
    IfcWindowPanelProperties *get(Step::StepId id);
    /**
     */
    IfcWindowPanelProperties *generate();
    /**
     * @param id
     */
    IfcWindowPanelProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCWINDOWPANELPROPERTIES_H
