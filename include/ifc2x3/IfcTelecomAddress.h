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

#ifndef IFC2X3_IFCTELECOMADDRESS_H
#define IFC2X3_IFCTELECOMADDRESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcAddress.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcTelecomAddress_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcTelecomAddress : public Step::InstantiatableEntity, public IfcAddress {
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
     * (non-const) Returns the value of the explicit attribute 'TelephoneNumbers'.
     * 
     * @return the value of the explicit attribute 'TelephoneNumbers'
     */
    Step::StepList< IfcLabel > &getTelephoneNumbers();
    /**
     * Sets the value of the explicit attribute 'TelephoneNumbers'.
     * 
     * @param value
     */
    void setTelephoneNumbers(const Step::StepList< IfcLabel > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'FacsimileNumbers'.
     * 
     * @return the value of the explicit attribute 'FacsimileNumbers'
     */
    Step::StepList< IfcLabel > &getFacsimileNumbers();
    /**
     * Sets the value of the explicit attribute 'FacsimileNumbers'.
     * 
     * @param value
     */
    void setFacsimileNumbers(const Step::StepList< IfcLabel > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PagerNumber'.
     * 
     * @return the value of the explicit attribute 'PagerNumber'
     */
    IfcLabel getPagerNumber();
    /**
     * Sets the value of the explicit attribute 'PagerNumber'.
     * 
     * @param value
     */
    void setPagerNumber(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'ElectronicMailAddresses'.
     * 
     * @return the value of the explicit attribute 'ElectronicMailAddresses'
     */
    Step::StepList< IfcLabel > &getElectronicMailAddresses();
    /**
     * Sets the value of the explicit attribute 'ElectronicMailAddresses'.
     * 
     * @param value
     */
    void setElectronicMailAddresses(const Step::StepList< IfcLabel > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'WWWHomePageURL'.
     * 
     * @return the value of the explicit attribute 'WWWHomePageURL'
     */
    IfcLabel getWWWHomePageURL();
    /**
     * Sets the value of the explicit attribute 'WWWHomePageURL'.
     * 
     * @param value
     */
    void setWWWHomePageURL(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcTelecomAddress_Factory;

  protected:
    /**
     * @param args
     */
    IfcTelecomAddress(Step::SPFData *args);
    virtual ~IfcTelecomAddress();

  private:
    static Step::ClassType s_type;
    Step::StepList< IfcLabel > m_telephoneNumbers;
    Step::StepList< IfcLabel > m_facsimileNumbers;
    std::string m_pagerNumber;
    Step::StepList< IfcLabel > m_electronicMailAddresses;
    std::string m_wWWHomePageURL;
    /**
     * @param c
     */
    IfcTelecomAddress(const IfcTelecomAddress &c);

  };

  class IfcTelecomAddress;

  /**
   */
  class IFC2X3_DLL_DEF IfcTelecomAddress_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcTelecomAddress_Factory();
    virtual ~IfcTelecomAddress_Factory();
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
    IfcTelecomAddress *get(Step::StepId id);
    /**
     */
    IfcTelecomAddress *generate();
    /**
     * @param id
     */
    IfcTelecomAddress *find(Step::StepId id);

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

#endif // IFC2X3_IFCTELECOMADDRESS_H
