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

#ifndef IFC2X3_IFCPOSTALADDRESS_H
#define IFC2X3_IFCPOSTALADDRESS_H
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

  class IfcPostalAddress_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcPostalAddress : public Step::InstantiatableEntity, public IfcAddress {
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
     * (non-const) Returns the value of the explicit attribute 'InternalLocation'.
     * 
     * @return the value of the explicit attribute 'InternalLocation'
     */
    IfcLabel getInternalLocation();
    /**
     * Sets the value of the explicit attribute 'InternalLocation'.
     * 
     * @param value
     */
    void setInternalLocation(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'AddressLines'.
     * 
     * @return the value of the explicit attribute 'AddressLines'
     */
    Step::StepList< IfcLabel > &getAddressLines();
    /**
     * Sets the value of the explicit attribute 'AddressLines'.
     * 
     * @param value
     */
    void setAddressLines(const Step::StepList< IfcLabel > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PostalBox'.
     * 
     * @return the value of the explicit attribute 'PostalBox'
     */
    IfcLabel getPostalBox();
    /**
     * Sets the value of the explicit attribute 'PostalBox'.
     * 
     * @param value
     */
    void setPostalBox(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Town'.
     * 
     * @return the value of the explicit attribute 'Town'
     */
    IfcLabel getTown();
    /**
     * Sets the value of the explicit attribute 'Town'.
     * 
     * @param value
     */
    void setTown(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Region'.
     * 
     * @return the value of the explicit attribute 'Region'
     */
    IfcLabel getRegion();
    /**
     * Sets the value of the explicit attribute 'Region'.
     * 
     * @param value
     */
    void setRegion(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'PostalCode'.
     * 
     * @return the value of the explicit attribute 'PostalCode'
     */
    IfcLabel getPostalCode();
    /**
     * Sets the value of the explicit attribute 'PostalCode'.
     * 
     * @param value
     */
    void setPostalCode(const IfcLabel &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Country'.
     * 
     * @return the value of the explicit attribute 'Country'
     */
    IfcLabel getCountry();
    /**
     * Sets the value of the explicit attribute 'Country'.
     * 
     * @param value
     */
    void setCountry(const IfcLabel &value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcPostalAddress_Factory;

  protected:
    /**
     * @param args
     */
    IfcPostalAddress(Step::SPFData *args);
    virtual ~IfcPostalAddress();

  private:
    static Step::ClassType s_type;
    std::string m_internalLocation;
    Step::StepList< IfcLabel > m_addressLines;
    std::string m_postalBox;
    std::string m_town;
    std::string m_region;
    std::string m_postalCode;
    std::string m_country;
    /**
     * @param c
     */
    IfcPostalAddress(const IfcPostalAddress &c);

  };

  class IfcPostalAddress;

  /**
   */
  class IFC2X3_DLL_DEF IfcPostalAddress_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcPostalAddress_Factory();
    virtual ~IfcPostalAddress_Factory();
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
    IfcPostalAddress *get(Step::StepId id);
    /**
     */
    IfcPostalAddress *generate();
    /**
     * @param id
     */
    IfcPostalAddress *find(Step::StepId id);

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

#endif // IFC2X3_IFCPOSTALADDRESS_H
