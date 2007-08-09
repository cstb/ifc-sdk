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

#ifndef IFC2X3_IFCPERSONANDORGANIZATION_H
#define IFC2X3_IFCPERSONANDORGANIZATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorRole;
  class IfcOrganization;
  class IfcPerson;
  class IfcPersonAndOrganization_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcPersonAndOrganization : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'ThePerson'.
     * 
     * @return the value of the explicit attribute 'ThePerson'
     */
    IfcPerson *getThePerson();
    /**
     * Sets the value of the explicit attribute 'ThePerson'.
     * 
     * @param value
     */
    void setThePerson(const Step::RefPtr< IfcPerson > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'TheOrganization'.
     * 
     * @return the value of the explicit attribute 'TheOrganization'
     */
    IfcOrganization *getTheOrganization();
    /**
     * Sets the value of the explicit attribute 'TheOrganization'.
     * 
     * @param value
     */
    void setTheOrganization(const Step::RefPtr< IfcOrganization > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Roles'.
     * 
     * @return the value of the explicit attribute 'Roles'
     */
    Step::StepList< Step::RefPtr< IfcActorRole > > &getRoles();
    /**
     * Sets the value of the explicit attribute 'Roles'.
     * 
     * @param value
     */
    void setRoles(const Step::StepList< Step::RefPtr< IfcActorRole > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcPersonAndOrganization_Factory;

  protected:
    /**
     * @param args
     */
    IfcPersonAndOrganization(Step::SPFData *args);
    virtual ~IfcPersonAndOrganization();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcPerson > m_thePerson;
    Step::RefPtr< IfcOrganization > m_theOrganization;
    Step::StepList< Step::RefPtr< IfcActorRole > > m_roles;
    /**
     * @param c
     */
    IfcPersonAndOrganization(const IfcPersonAndOrganization &c);

  };

  class IfcPersonAndOrganization;

  /**
   */
  class IFC2X3_DLL_DEF IfcPersonAndOrganization_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcPersonAndOrganization_Factory();
    virtual ~IfcPersonAndOrganization_Factory();
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
    IfcPersonAndOrganization *get(Step::StepId id);
    /**
     */
    IfcPersonAndOrganization *generate();
    /**
     * @param id
     */
    IfcPersonAndOrganization *find(Step::StepId id);

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

#endif // IFC2X3_IFCPERSONANDORGANIZATION_H
