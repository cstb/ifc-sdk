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

#ifndef IFC2X3_IFCOWNERHISTORY_H
#define IFC2X3_IFCOWNERHISTORY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcApplication;
  class IfcOwnerHistory_Factory;
  class IfcPersonAndOrganization;

  /**
   */
  class IFC2X3_DLL_DEF IfcOwnerHistory : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'OwningUser'.
     * 
     * @return the value of the explicit attribute 'OwningUser'
     */
    IfcPersonAndOrganization *getOwningUser();
    /**
     * Sets the value of the explicit attribute 'OwningUser'.
     * 
     * @param value
     */
    void setOwningUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'OwningApplication'.
     * 
     * @return the value of the explicit attribute 'OwningApplication'
     */
    IfcApplication *getOwningApplication();
    /**
     * Sets the value of the explicit attribute 'OwningApplication'.
     * 
     * @param value
     */
    void setOwningApplication(const Step::RefPtr< IfcApplication > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'State'.
     * 
     * @return the value of the explicit attribute 'State'
     */
    IfcStateEnum getState();
    /**
     * Sets the value of the explicit attribute 'State'.
     * 
     * @param value
     */
    void setState(IfcStateEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ChangeAction'.
     * 
     * @return the value of the explicit attribute 'ChangeAction'
     */
    IfcChangeActionEnum getChangeAction();
    /**
     * Sets the value of the explicit attribute 'ChangeAction'.
     * 
     * @param value
     */
    void setChangeAction(IfcChangeActionEnum value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LastModifiedDate'.
     * 
     * @return the value of the explicit attribute 'LastModifiedDate'
     */
    IfcTimeStamp getLastModifiedDate();
    /**
     * Sets the value of the explicit attribute 'LastModifiedDate'.
     * 
     * @param value
     */
    void setLastModifiedDate(IfcTimeStamp value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LastModifyingUser'.
     * 
     * @return the value of the explicit attribute 'LastModifyingUser'
     */
    IfcPersonAndOrganization *getLastModifyingUser();
    /**
     * Sets the value of the explicit attribute 'LastModifyingUser'.
     * 
     * @param value
     */
    void setLastModifyingUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LastModifyingApplication'.
     * 
     * @return the value of the explicit attribute 'LastModifyingApplication'
     */
    IfcApplication *getLastModifyingApplication();
    /**
     * Sets the value of the explicit attribute 'LastModifyingApplication'.
     * 
     * @param value
     */
    void setLastModifyingApplication(const Step::RefPtr< IfcApplication > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CreationDate'.
     * 
     * @return the value of the explicit attribute 'CreationDate'
     */
    IfcTimeStamp getCreationDate();
    /**
     * Sets the value of the explicit attribute 'CreationDate'.
     * 
     * @param value
     */
    void setCreationDate(IfcTimeStamp value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcOwnerHistory_Factory;

  protected:
    /**
     * @param args
     */
    IfcOwnerHistory(Step::SPFData *args);
    virtual ~IfcOwnerHistory();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcPersonAndOrganization > m_owningUser;
    Step::RefPtr< IfcApplication > m_owningApplication;
    IfcStateEnum m_state;
    IfcChangeActionEnum m_changeAction;
    Integer m_lastModifiedDate;
    Step::RefPtr< IfcPersonAndOrganization > m_lastModifyingUser;
    Step::RefPtr< IfcApplication > m_lastModifyingApplication;
    Integer m_creationDate;
    /**
     * @param c
     */
    IfcOwnerHistory(const IfcOwnerHistory &c);

  };

  class IfcOwnerHistory;

  /**
   */
  class IFC2X3_DLL_DEF IfcOwnerHistory_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcOwnerHistory_Factory();
    virtual ~IfcOwnerHistory_Factory();
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
    IfcOwnerHistory *get(Step::StepId id);
    /**
     */
    IfcOwnerHistory *generate();
    /**
     * @param id
     */
    IfcOwnerHistory *find(Step::StepId id);

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

#endif // IFC2X3_IFCOWNERHISTORY_H
