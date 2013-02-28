// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCTELECOMADDRESS_H
#define IFC2X3_IFCTELECOMADDRESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <ifc2x3/IfcAddress.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcTelecomAddress Entity.
     * 
     */
    class IFC2X3_EXPORT IfcTelecomAddress : public IfcAddress {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'TelephoneNumbers'.
         * 
         */
        virtual List_IfcLabel_1_n &getTelephoneNumbers();
        /**
         * (const) Returns the value of the explicit attribute 'TelephoneNumbers'.
         * 
         * @return the value of the explicit attribute 'TelephoneNumbers'
         */
        virtual const List_IfcLabel_1_n &getTelephoneNumbers() const;
        /**
         * Sets the value of the explicit attribute 'TelephoneNumbers'.
         * 
         * @param value
         */
        virtual void setTelephoneNumbers(const List_IfcLabel_1_n &value);
        /**
         * unset the attribute 'TelephoneNumbers'.
         * 
         */
        virtual void unsetTelephoneNumbers();
        /**
         * Test if the attribute 'TelephoneNumbers' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTelephoneNumbers() const;
        /**
         * Gets the value of the explicit attribute 'FacsimileNumbers'.
         * 
         */
        virtual List_IfcLabel_1_n &getFacsimileNumbers();
        /**
         * (const) Returns the value of the explicit attribute 'FacsimileNumbers'.
         * 
         * @return the value of the explicit attribute 'FacsimileNumbers'
         */
        virtual const List_IfcLabel_1_n &getFacsimileNumbers() const;
        /**
         * Sets the value of the explicit attribute 'FacsimileNumbers'.
         * 
         * @param value
         */
        virtual void setFacsimileNumbers(const List_IfcLabel_1_n &value);
        /**
         * unset the attribute 'FacsimileNumbers'.
         * 
         */
        virtual void unsetFacsimileNumbers();
        /**
         * Test if the attribute 'FacsimileNumbers' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFacsimileNumbers() const;
        /**
         * Gets the value of the explicit attribute 'PagerNumber'.
         * 
         */
        virtual IfcLabel getPagerNumber();
        /**
         * (const) Returns the value of the explicit attribute 'PagerNumber'.
         * 
         * @return the value of the explicit attribute 'PagerNumber'
         */
        virtual const IfcLabel getPagerNumber() const;
        /**
         * Sets the value of the explicit attribute 'PagerNumber'.
         * 
         * @param value
         */
        virtual void setPagerNumber(const IfcLabel &value);
        /**
         * unset the attribute 'PagerNumber'.
         * 
         */
        virtual void unsetPagerNumber();
        /**
         * Test if the attribute 'PagerNumber' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPagerNumber() const;
        /**
         * Gets the value of the explicit attribute 'ElectronicMailAddresses'.
         * 
         */
        virtual List_IfcLabel_1_n &getElectronicMailAddresses();
        /**
         * (const) Returns the value of the explicit attribute 'ElectronicMailAddresses'.
         * 
         * @return the value of the explicit attribute 'ElectronicMailAddresses'
         */
        virtual const List_IfcLabel_1_n &getElectronicMailAddresses() const;
        /**
         * Sets the value of the explicit attribute 'ElectronicMailAddresses'.
         * 
         * @param value
         */
        virtual void setElectronicMailAddresses(const List_IfcLabel_1_n &value);
        /**
         * unset the attribute 'ElectronicMailAddresses'.
         * 
         */
        virtual void unsetElectronicMailAddresses();
        /**
         * Test if the attribute 'ElectronicMailAddresses' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testElectronicMailAddresses() const;
        /**
         * Gets the value of the explicit attribute 'WWWHomePageURL'.
         * 
         */
        virtual IfcLabel getWWWHomePageURL();
        /**
         * (const) Returns the value of the explicit attribute 'WWWHomePageURL'.
         * 
         * @return the value of the explicit attribute 'WWWHomePageURL'
         */
        virtual const IfcLabel getWWWHomePageURL() const;
        /**
         * Sets the value of the explicit attribute 'WWWHomePageURL'.
         * 
         * @param value
         */
        virtual void setWWWHomePageURL(const IfcLabel &value);
        /**
         * unset the attribute 'WWWHomePageURL'.
         * 
         */
        virtual void unsetWWWHomePageURL();
        /**
         * Test if the attribute 'WWWHomePageURL' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWWWHomePageURL() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTelecomAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcTelecomAddress();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTelecomAddress &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcLabel_1_n m_telephoneNumbers;
        /**
         */
        List_IfcLabel_1_n m_facsimileNumbers;
        /**
         */
        Step::String m_pagerNumber;
        /**
         */
        List_IfcLabel_1_n m_electronicMailAddresses;
        /**
         */
        Step::String m_wWWHomePageURL;

    };

}

#endif // IFC2X3_IFCTELECOMADDRESS_H
