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

#ifndef IFC2X3_IFCAPPROVALRELATIONSHIP_H
#define IFC2X3_IFCAPPROVALRELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <Step/InstantiatableEntity.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcApproval;
  class IfcApprovalRelationship_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcApprovalRelationship : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'RelatedApproval'.
     * 
     * @return the value of the explicit attribute 'RelatedApproval'
     */
    IfcApproval *getRelatedApproval();
    /**
     * Sets the value of the explicit attribute 'RelatedApproval'.
     * 
     * @param value
     */
    void setRelatedApproval(const Step::RefPtr< IfcApproval > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'RelatingApproval'.
     * 
     * @return the value of the explicit attribute 'RelatingApproval'
     */
    IfcApproval *getRelatingApproval();
    /**
     * Sets the value of the explicit attribute 'RelatingApproval'.
     * 
     * @param value
     */
    void setRelatingApproval(const Step::RefPtr< IfcApproval > &value);
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
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcApprovalRelationship_Factory;

  protected:
    /**
     * @param args
     */
    IfcApprovalRelationship(Step::SPFData *args);
    virtual ~IfcApprovalRelationship();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcApproval > m_relatedApproval;
    Step::RefPtr< IfcApproval > m_relatingApproval;
    std::string m_description;
    std::string m_name;
    /**
     * @param c
     */
    IfcApprovalRelationship(const IfcApprovalRelationship &c);

  };

  class IfcApprovalRelationship;

  /**
   */
  class IFC2X3_DLL_DEF IfcApprovalRelationship_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcApprovalRelationship_Factory();
    virtual ~IfcApprovalRelationship_Factory();
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
    IfcApprovalRelationship *get(Step::StepId id);
    /**
     */
    IfcApprovalRelationship *generate();
    /**
     * @param id
     */
    IfcApprovalRelationship *find(Step::StepId id);

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

#endif // IFC2X3_IFCAPPROVALRELATIONSHIP_H
