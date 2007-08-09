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

#ifndef IFC2X3_IFCACTORROLE_H
#define IFC2X3_IFCACTORROLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorRole_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcActorRole : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'Role'.
     * 
     * @return the value of the explicit attribute 'Role'
     */
    IfcRoleEnum getRole();
    /**
     * Sets the value of the explicit attribute 'Role'.
     * 
     * @param value
     */
    void setRole(IfcRoleEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'UserDefinedRole'.
     * 
     * @return the value of the explicit attribute 'UserDefinedRole'
     */
    IfcLabel getUserDefinedRole();
    /**
     * Sets the value of the explicit attribute 'UserDefinedRole'.
     * 
     * @param value
     */
    void setUserDefinedRole(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Description'.
     * 
     * @return the value of the explicit attribute 'Description'
     */
    IfcText getDescription();
    /**
     * Sets the value of the explicit attribute 'Description'.
     * 
     * @param value
     */
    void setDescription(const IfcText &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcActorRole_Factory;

  protected:
    /**
     * @param args
     */
    IfcActorRole(Step::SPFData *args);
    virtual ~IfcActorRole();

  private:
    static Step::ClassType s_type;
    IfcRoleEnum m_role;
    std::string m_userDefinedRole;
    std::string m_description;
    /**
     * @param c
     */
    IfcActorRole(const IfcActorRole &c);

  };

  class IfcActorRole;

  /**
   */
  class IFC2X3_DLL_DEF IfcActorRole_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcActorRole_Factory();
    virtual ~IfcActorRole_Factory();
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
    IfcActorRole *get(Step::StepId id);
    /**
     */
    IfcActorRole *generate();
    /**
     * @param id
     */
    IfcActorRole *find(Step::StepId id);

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

#endif // IFC2X3_IFCACTORROLE_H
