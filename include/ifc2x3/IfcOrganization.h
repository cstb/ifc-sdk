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

#ifndef IFC2X3_IFCORGANIZATION_H
#define IFC2X3_IFCORGANIZATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcActorRole;
  class IfcAddress;
  class IfcOrganizationRelationship;
  class IfcOrganization_Factory;
  class IfcPersonAndOrganization;

  /**
   */
  class IFC2X3_DLL_DEF IfcOrganization : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'Id'.
     * 
     * @return the value of the explicit attribute 'Id'
     */
    IfcIdentifier getId();
    /**
     * Sets the value of the explicit attribute 'Id'.
     * 
     * @param value
     */
    void setId(const IfcIdentifier &value);
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
     * (non-const) Returns the value of the explicit attribute 'Addresses'.
     * 
     * @return the value of the explicit attribute 'Addresses'
     */
    Step::StepList< Step::RefPtr< IfcAddress > > &getAddresses();
    /**
     * Sets the value of the explicit attribute 'Addresses'.
     * 
     * @param value
     */
    void setAddresses(const Step::StepList< Step::RefPtr< IfcAddress > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'IsRelatedBy'.
     * 
     * @return the value of the explicit attribute 'IsRelatedBy'
     */
    Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > &getIsRelatedBy();
    /**
     * Sets the value of the explicit attribute 'IsRelatedBy'.
     * 
     * @param value
     */
    void setIsRelatedBy(const Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Relates'.
     * 
     * @return the value of the explicit attribute 'Relates'
     */
    Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > &getRelates();
    /**
     * Sets the value of the explicit attribute 'Relates'.
     * 
     * @param value
     */
    void setRelates(const Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Engages'.
     * 
     * @return the value of the explicit attribute 'Engages'
     */
    Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > &getEngages();
    /**
     * Sets the value of the explicit attribute 'Engages'.
     * 
     * @param value
     */
    void setEngages(const Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcOrganization_Factory;

  protected:
    /**
     * @param args
     */
    IfcOrganization(Step::SPFData *args);
    virtual ~IfcOrganization();

  private:
    static Step::ClassType s_type;
    std::string m_id;
    std::string m_name;
    std::string m_description;
    Step::StepList< Step::RefPtr< IfcActorRole > > m_roles;
    Step::StepList< Step::RefPtr< IfcAddress > > m_addresses;
    Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > m_isRelatedBy;
    Step::StepSet< Step::RefPtr< IfcOrganizationRelationship > > m_relates;
    Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > m_engages;
    /**
     * @param c
     */
    IfcOrganization(const IfcOrganization &c);

  };

  class IfcOrganization;

  /**
   */
  class IFC2X3_DLL_DEF IfcOrganization_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcOrganization_Factory();
    virtual ~IfcOrganization_Factory();
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
    IfcOrganization *get(Step::StepId id);
    /**
     */
    IfcOrganization *generate();
    /**
     * @param id
     */
    IfcOrganization *find(Step::StepId id);

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

#endif // IFC2X3_IFCORGANIZATION_H
