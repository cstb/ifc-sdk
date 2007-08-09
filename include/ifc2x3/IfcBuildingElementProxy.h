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

#ifndef IFC2X3_IFCBUILDINGELEMENTPROXY_H
#define IFC2X3_IFCBUILDINGELEMENTPROXY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <ifc2x3/IfcBuildingElement.h>
#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcBuildingElementProxy_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcBuildingElementProxy : public Step::InstantiatableEntity, public IfcBuildingElement {
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
     * (non-const) Returns the value of the explicit attribute 'CompositionType'.
     * 
     * @return the value of the explicit attribute 'CompositionType'
     */
    IfcElementCompositionEnum getCompositionType();
    /**
     * Sets the value of the explicit attribute 'CompositionType'.
     * 
     * @param value
     */
    void setCompositionType(IfcElementCompositionEnum value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcBuildingElementProxy_Factory;

  protected:
    /**
     * @param args
     */
    IfcBuildingElementProxy(Step::SPFData *args);
    virtual ~IfcBuildingElementProxy();

  private:
    static Step::ClassType s_type;
    IfcElementCompositionEnum m_compositionType;
    /**
     * @param c
     */
    IfcBuildingElementProxy(const IfcBuildingElementProxy &c);

  };

  class IfcBuildingElementProxy;

  /**
   */
  class IFC2X3_DLL_DEF IfcBuildingElementProxy_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcBuildingElementProxy_Factory();
    virtual ~IfcBuildingElementProxy_Factory();
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
    IfcBuildingElementProxy *get(Step::StepId id);
    /**
     */
    IfcBuildingElementProxy *generate();
    /**
     * @param id
     */
    IfcBuildingElementProxy *find(Step::StepId id);

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

#endif // IFC2X3_IFCBUILDINGELEMENTPROXY_H
