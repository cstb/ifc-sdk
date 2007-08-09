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

#ifndef IFC2X3_IFCPERSON_H
#define IFC2X3_IFCPERSON_H
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

  class IfcActorRole;
  class IfcAddress;
  class IfcPersonAndOrganization;
  class IfcPerson_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcPerson : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'FamilyName'.
     * 
     * @return the value of the explicit attribute 'FamilyName'
     */
    IfcLabel getFamilyName();
    /**
     * Sets the value of the explicit attribute 'FamilyName'.
     * 
     * @param value
     */
    void setFamilyName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'GivenName'.
     * 
     * @return the value of the explicit attribute 'GivenName'
     */
    IfcLabel getGivenName();
    /**
     * Sets the value of the explicit attribute 'GivenName'.
     * 
     * @param value
     */
    void setGivenName(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MiddleNames'.
     * 
     * @return the value of the explicit attribute 'MiddleNames'
     */
    Step::StepList< IfcLabel > &getMiddleNames();
    /**
     * Sets the value of the explicit attribute 'MiddleNames'.
     * 
     * @param value
     */
    void setMiddleNames(const Step::StepList< IfcLabel > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PrefixTitles'.
     * 
     * @return the value of the explicit attribute 'PrefixTitles'
     */
    Step::StepList< IfcLabel > &getPrefixTitles();
    /**
     * Sets the value of the explicit attribute 'PrefixTitles'.
     * 
     * @param value
     */
    void setPrefixTitles(const Step::StepList< IfcLabel > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SuffixTitles'.
     * 
     * @return the value of the explicit attribute 'SuffixTitles'
     */
    Step::StepList< IfcLabel > &getSuffixTitles();
    /**
     * Sets the value of the explicit attribute 'SuffixTitles'.
     * 
     * @param value
     */
    void setSuffixTitles(const Step::StepList< IfcLabel > &value);
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
     * (non-const) Returns the value of the explicit attribute 'EngagedIn'.
     * 
     * @return the value of the explicit attribute 'EngagedIn'
     */
    Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > &getEngagedIn();
    /**
     * Sets the value of the explicit attribute 'EngagedIn'.
     * 
     * @param value
     */
    void setEngagedIn(const Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcPerson_Factory;

  protected:
    /**
     * @param args
     */
    IfcPerson(Step::SPFData *args);
    virtual ~IfcPerson();

  private:
    static Step::ClassType s_type;
    std::string m_id;
    std::string m_familyName;
    std::string m_givenName;
    Step::StepList< IfcLabel > m_middleNames;
    Step::StepList< IfcLabel > m_prefixTitles;
    Step::StepList< IfcLabel > m_suffixTitles;
    Step::StepList< Step::RefPtr< IfcActorRole > > m_roles;
    Step::StepList< Step::RefPtr< IfcAddress > > m_addresses;
    Step::StepSet< Step::RefPtr< IfcPersonAndOrganization > > m_engagedIn;
    /**
     * @param c
     */
    IfcPerson(const IfcPerson &c);

  };

  class IfcPerson;

  /**
   */
  class IFC2X3_DLL_DEF IfcPerson_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcPerson_Factory();
    virtual ~IfcPerson_Factory();
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
    IfcPerson *get(Step::StepId id);
    /**
     */
    IfcPerson *generate();
    /**
     * @param id
     */
    IfcPerson *find(Step::StepId id);

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

#endif // IFC2X3_IFCPERSON_H
