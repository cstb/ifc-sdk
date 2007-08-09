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

#ifndef IFC2X3_IFCDOORPANELPROPERTIES_H
#define IFC2X3_IFCDOORPANELPROPERTIES_H
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

  class IfcDoorPanelProperties_Factory;
  class IfcShapeAspect;

  /**
   */
  class IFC2X3_DLL_DEF IfcDoorPanelProperties : public Step::InstantiatableEntity, public IfcPropertySetDefinition {
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
     * (non-const) Returns the value of the explicit attribute 'PanelDepth'.
     * 
     * @return the value of the explicit attribute 'PanelDepth'
     */
    IfcPositiveLengthMeasure getPanelDepth();
    /**
     * Sets the value of the explicit attribute 'PanelDepth'.
     * 
     * @param value
     */
    void setPanelDepth(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PanelOperation'.
     * 
     * @return the value of the explicit attribute 'PanelOperation'
     */
    IfcDoorPanelOperationEnum getPanelOperation();
    /**
     * Sets the value of the explicit attribute 'PanelOperation'.
     * 
     * @param value
     */
    void setPanelOperation(IfcDoorPanelOperationEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PanelWidth'.
     * 
     * @return the value of the explicit attribute 'PanelWidth'
     */
    IfcNormalisedRatioMeasure getPanelWidth();
    /**
     * Sets the value of the explicit attribute 'PanelWidth'.
     * 
     * @param value
     */
    void setPanelWidth(IfcNormalisedRatioMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PanelPosition'.
     * 
     * @return the value of the explicit attribute 'PanelPosition'
     */
    IfcDoorPanelPositionEnum getPanelPosition();
    /**
     * Sets the value of the explicit attribute 'PanelPosition'.
     * 
     * @param value
     */
    void setPanelPosition(IfcDoorPanelPositionEnum value);
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
    friend class IfcDoorPanelProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcDoorPanelProperties(Step::SPFData *args);
    virtual ~IfcDoorPanelProperties();

  private:
    static Step::ClassType s_type;
    Real m_panelDepth;
    IfcDoorPanelOperationEnum m_panelOperation;
    Real m_panelWidth;
    IfcDoorPanelPositionEnum m_panelPosition;
    Step::RefPtr< IfcShapeAspect > m_shapeAspectStyle;
    /**
     * @param c
     */
    IfcDoorPanelProperties(const IfcDoorPanelProperties &c);

  };

  class IfcDoorPanelProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcDoorPanelProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcDoorPanelProperties_Factory();
    virtual ~IfcDoorPanelProperties_Factory();
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
    IfcDoorPanelProperties *get(Step::StepId id);
    /**
     */
    IfcDoorPanelProperties *generate();
    /**
     * @param id
     */
    IfcDoorPanelProperties *find(Step::StepId id);

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

#endif // IFC2X3_IFCDOORPANELPROPERTIES_H
