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

#ifndef IFC2X3_IFCPROXY_H
#define IFC2X3_IFCPROXY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcProduct.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcProxy_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcProxy : public Step::InstantiatableEntity, public IfcProduct {
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
     * (non-const) Returns the value of the explicit attribute 'ProxyType'.
     * 
     * @return the value of the explicit attribute 'ProxyType'
     */
    IfcObjectTypeEnum getProxyType();
    /**
     * Sets the value of the explicit attribute 'ProxyType'.
     * 
     * @param value
     */
    void setProxyType(IfcObjectTypeEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Tag'.
     * 
     * @return the value of the explicit attribute 'Tag'
     */
    IfcLabel getTag();
    /**
     * Sets the value of the explicit attribute 'Tag'.
     * 
     * @param value
     */
    void setTag(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcProxy_Factory;

  protected:
    /**
     * @param args
     */
    IfcProxy(Step::SPFData *args);
    virtual ~IfcProxy();

  private:
    static Step::ClassType s_type;
    IfcObjectTypeEnum m_proxyType;
    std::string m_tag;
    /**
     * @param c
     */
    IfcProxy(const IfcProxy &c);

  };

  class IfcProxy;

  /**
   */
  class IFC2X3_DLL_DEF IfcProxy_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcProxy_Factory();
    virtual ~IfcProxy_Factory();
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
    IfcProxy *get(Step::StepId id);
    /**
     */
    IfcProxy *generate();
    /**
     * @param id
     */
    IfcProxy *find(Step::StepId id);

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

#endif // IFC2X3_IFCPROXY_H
