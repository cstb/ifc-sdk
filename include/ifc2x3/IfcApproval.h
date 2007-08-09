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

#ifndef IFC2X3_IFCAPPROVAL_H
#define IFC2X3_IFCAPPROVAL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcApprovalActorRelationship;
  class IfcApprovalRelationship;
  class IfcApproval_Factory;
  class IfcDateTimeSelect;

  /**
   */
  class IFC2X3_DLL_DEF IfcApproval : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'ApprovalDateTime'.
     * 
     * @return the value of the explicit attribute 'ApprovalDateTime'
     */
    IfcDateTimeSelect *getApprovalDateTime();
    /**
     * Sets the value of the explicit attribute 'ApprovalDateTime'.
     * 
     * @param value
     */
    void setApprovalDateTime(const Step::RefPtr< IfcDateTimeSelect > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ApprovalStatus'.
     * 
     * @return the value of the explicit attribute 'ApprovalStatus'
     */
    IfcLabel getApprovalStatus();
    /**
     * Sets the value of the explicit attribute 'ApprovalStatus'.
     * 
     * @param value
     */
    void setApprovalStatus(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ApprovalLevel'.
     * 
     * @return the value of the explicit attribute 'ApprovalLevel'
     */
    IfcLabel getApprovalLevel();
    /**
     * Sets the value of the explicit attribute 'ApprovalLevel'.
     * 
     * @param value
     */
    void setApprovalLevel(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ApprovalQualifier'.
     * 
     * @return the value of the explicit attribute 'ApprovalQualifier'
     */
    IfcText getApprovalQualifier();
    /**
     * Sets the value of the explicit attribute 'ApprovalQualifier'.
     * 
     * @param value
     */
    void setApprovalQualifier(const IfcText &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Name'.
     * 
     * @return the value of the explicit attribute 'Name'
     */
    IfcLabel getName();
    /**
     * Sets the value of the explicit attribute 'Name'.
     * 
     * @param value
     */
    void setName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Identifier'.
     * 
     * @return the value of the explicit attribute 'Identifier'
     */
    IfcIdentifier getIdentifier();
    /**
     * Sets the value of the explicit attribute 'Identifier'.
     * 
     * @param value
     */
    void setIdentifier(const IfcIdentifier &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Actors'.
     * 
     * @return the value of the explicit attribute 'Actors'
     */
    Step::StepSet< Step::RefPtr< IfcApprovalActorRelationship > > &getActors();
    /**
     * Sets the value of the explicit attribute 'Actors'.
     * 
     * @param value
     */
    void setActors(const Step::StepSet< Step::RefPtr< IfcApprovalActorRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsRelatedWith'.
     * 
     * @return the value of the explicit attribute 'IsRelatedWith'
     */
    Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > &getIsRelatedWith();
    /**
     * Sets the value of the explicit attribute 'IsRelatedWith'.
     * 
     * @param value
     */
    void setIsRelatedWith(const Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Relates'.
     * 
     * @return the value of the explicit attribute 'Relates'
     */
    Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > &getRelates();
    /**
     * Sets the value of the explicit attribute 'Relates'.
     * 
     * @param value
     */
    void setRelates(const Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcApproval_Factory;

  protected:
    /**
     * @param args
     */
    IfcApproval(Step::SPFData *args);
    virtual ~IfcApproval();

  private:
    static Step::ClassType s_type;
    std::string m_description;
    Step::RefPtr< IfcDateTimeSelect > m_approvalDateTime;
    std::string m_approvalStatus;
    std::string m_approvalLevel;
    std::string m_approvalQualifier;
    std::string m_name;
    std::string m_identifier;
    Step::StepSet< Step::RefPtr< IfcApprovalActorRelationship > > m_actors;
    Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > m_isRelatedWith;
    Step::StepSet< Step::RefPtr< IfcApprovalRelationship > > m_relates;
    /**
     * @param c
     */
    IfcApproval(const IfcApproval &c);

  };

  class IfcApproval;

  /**
   */
  class IFC2X3_DLL_DEF IfcApproval_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcApproval_Factory();
    virtual ~IfcApproval_Factory();
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
    IfcApproval *get(Step::StepId id);
    /**
     */
    IfcApproval *generate();
    /**
     * @param id
     */
    IfcApproval *find(Step::StepId id);

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

#endif // IFC2X3_IFCAPPROVAL_H
