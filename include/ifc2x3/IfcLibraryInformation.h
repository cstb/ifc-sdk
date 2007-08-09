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

#ifndef IFC2X3_IFCLIBRARYINFORMATION_H
#define IFC2X3_IFCLIBRARYINFORMATION_H
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

  class IfcCalendarDate;
  class IfcLibraryInformation_Factory;
  class IfcLibraryReference;
  class IfcOrganization;

  /**
   */
  class IFC2X3_DLL_DEF IfcLibraryInformation : public Step::InstantiatableEntity, public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'Version'.
     * 
     * @return the value of the explicit attribute 'Version'
     */
    IfcLabel getVersion();
    /**
     * Sets the value of the explicit attribute 'Version'.
     * 
     * @param value
     */
    void setVersion(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Publisher'.
     * 
     * @return the value of the explicit attribute 'Publisher'
     */
    IfcOrganization *getPublisher();
    /**
     * Sets the value of the explicit attribute 'Publisher'.
     * 
     * @param value
     */
    void setPublisher(const Step::RefPtr< IfcOrganization > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'VersionDate'.
     * 
     * @return the value of the explicit attribute 'VersionDate'
     */
    IfcCalendarDate *getVersionDate();
    /**
     * Sets the value of the explicit attribute 'VersionDate'.
     * 
     * @param value
     */
    void setVersionDate(const Step::RefPtr< IfcCalendarDate > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'LibraryReference'.
     * 
     * @return the value of the explicit attribute 'LibraryReference'
     */
    Step::StepSet< Step::RefPtr< IfcLibraryReference > > &getLibraryReference();
    /**
     * Sets the value of the explicit attribute 'LibraryReference'.
     * 
     * @param value
     */
    void setLibraryReference(const Step::StepSet< Step::RefPtr< IfcLibraryReference > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcLibraryInformation_Factory;

  protected:
    /**
     * @param args
     */
    IfcLibraryInformation(Step::SPFData *args);
    virtual ~IfcLibraryInformation();

  private:
    static Step::ClassType s_type;
    std::string m_name;
    std::string m_version;
    Step::RefPtr< IfcOrganization > m_publisher;
    Step::RefPtr< IfcCalendarDate > m_versionDate;
    Step::StepSet< Step::RefPtr< IfcLibraryReference > > m_libraryReference;
    /**
     * @param c
     */
    IfcLibraryInformation(const IfcLibraryInformation &c);

  };

  class IfcLibraryInformation;

  /**
   */
  class IFC2X3_DLL_DEF IfcLibraryInformation_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcLibraryInformation_Factory();
    virtual ~IfcLibraryInformation_Factory();
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
    IfcLibraryInformation *get(Step::StepId id);
    /**
     */
    IfcLibraryInformation *generate();
    /**
     * @param id
     */
    IfcLibraryInformation *find(Step::StepId id);

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

#endif // IFC2X3_IFCLIBRARYINFORMATION_H
