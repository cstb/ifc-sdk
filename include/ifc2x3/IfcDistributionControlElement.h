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

#ifndef IFC2X3_IFCDISTRIBUTIONCONTROLELEMENT_H
#define IFC2X3_IFCDISTRIBUTIONCONTROLELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <ifc2x3/IfcDistributionElement.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcDistributionControlElement_Factory;
  class IfcRelFlowControlElements;

  /**
   */
  class IFC2X3_DLL_DEF IfcDistributionControlElement : public IfcDistributionElement {
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
     * (non-const) Returns the value of the explicit attribute 'ControlElementId'.
     * 
     * @return the value of the explicit attribute 'ControlElementId'
     */
    IfcIdentifier getControlElementId();
    /**
     * Sets the value of the explicit attribute 'ControlElementId'.
     * 
     * @param value
     */
    void setControlElementId(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AssignedToFlowElement'.
     * 
     * @return the value of the explicit attribute 'AssignedToFlowElement'
     */
    Step::StepSet< Step::RefPtr< IfcRelFlowControlElements > > &getAssignedToFlowElement();
    /**
     * Sets the value of the explicit attribute 'AssignedToFlowElement'.
     * 
     * @param value
     */
    void setAssignedToFlowElement(const Step::StepSet< Step::RefPtr< IfcRelFlowControlElements > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcDistributionControlElement_Factory;

  protected:
    /**
     * @param args
     */
    IfcDistributionControlElement(Step::SPFData *args);
    virtual ~IfcDistributionControlElement();

  private:
    static Step::ClassType s_type;
    std::string m_controlElementId;
    Step::StepSet< Step::RefPtr< IfcRelFlowControlElements > > m_assignedToFlowElement;
    /**
     * @param c
     */
    IfcDistributionControlElement(const IfcDistributionControlElement &c);

  };

  class IfcDistributionControlElement;

  /**
   */
  class IFC2X3_DLL_DEF IfcDistributionControlElement_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcDistributionControlElement_Factory();
    virtual ~IfcDistributionControlElement_Factory();
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
    IfcDistributionControlElement *get(Step::StepId id);
    /**
     */
    IfcDistributionControlElement *generate();
    /**
     * @param id
     */
    IfcDistributionControlElement *find(Step::StepId id);

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

#endif // IFC2X3_IFCDISTRIBUTIONCONTROLELEMENT_H
