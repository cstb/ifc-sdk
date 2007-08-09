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

#ifndef IFC2X3_IFCADDRESS_H
#define IFC2X3_IFCADDRESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/BaseObject.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>

namespace ifc2x3 {

  class IfcOrganization;
  class IfcPerson;

  /**
   */
  class IFC2X3_DLL_DEF IfcAddress : public Step::BaseObject {
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
     * (non-const) Returns the value of the explicit attribute 'Purpose'.
     * 
     * @return the value of the explicit attribute 'Purpose'
     */
    IfcAddressTypeEnum getPurpose();
    /**
     * Sets the value of the explicit attribute 'Purpose'.
     * 
     * @param value
     */
    void setPurpose(IfcAddressTypeEnum value);
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
     * (non-const) Returns the value of the explicit attribute 'UserDefinedPurpose'.
     * 
     * @return the value of the explicit attribute 'UserDefinedPurpose'
     */
    IfcLabel getUserDefinedPurpose();
    /**
     * Sets the value of the explicit attribute 'UserDefinedPurpose'.
     * 
     * @param value
     */
    void setUserDefinedPurpose(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'OfPerson'.
     * 
     * @return the value of the explicit attribute 'OfPerson'
     */
    Step::StepSet< Step::RefPtr< IfcPerson > > &getOfPerson();
    /**
     * Sets the value of the explicit attribute 'OfPerson'.
     * 
     * @param value
     */
    void setOfPerson(const Step::StepSet< Step::RefPtr< IfcPerson > > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'OfOrganization'.
     * 
     * @return the value of the explicit attribute 'OfOrganization'
     */
    Step::StepSet< Step::RefPtr< IfcOrganization > > &getOfOrganization();
    /**
     * Sets the value of the explicit attribute 'OfOrganization'.
     * 
     * @param value
     */
    void setOfOrganization(const Step::StepSet< Step::RefPtr< IfcOrganization > > &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();

  protected:
    /**
     * @param args
     */
    IfcAddress(Step::SPFData *args);
    virtual ~IfcAddress();

  private:
    static Step::ClassType s_type;
    IfcAddressTypeEnum m_purpose;
    std::string m_description;
    std::string m_userDefinedPurpose;
    Step::StepSet< Step::RefPtr< IfcPerson > > m_ofPerson;
    Step::StepSet< Step::RefPtr< IfcOrganization > > m_ofOrganization;
    /**
     * @param c
     */
    IfcAddress(const IfcAddress &c);

  };

}

#endif // IFC2X3_IFCADDRESS_H
