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

#ifndef IFC2X3_IFCPOSTALADDRESS_H
#define IFC2X3_IFCPOSTALADDRESS_H
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
     * Generated class for the IfcPostalAddress Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPostalAddress : public IfcAddress {
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
         * Gets the value of the explicit attribute 'InternalLocation'.
         * 
         */
        virtual IfcLabel getInternalLocation();
        /**
         * (const) Returns the value of the explicit attribute 'InternalLocation'.
         * 
         * @return the value of the explicit attribute 'InternalLocation'
         */
        virtual const IfcLabel getInternalLocation() const;
        /**
         * Sets the value of the explicit attribute 'InternalLocation'.
         * 
         * @param value
         */
        virtual void setInternalLocation(const IfcLabel &value);
        /**
         * unset the attribute 'InternalLocation'.
         * 
         */
        virtual void unsetInternalLocation();
        /**
         * Test if the attribute 'InternalLocation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testInternalLocation() const;
        /**
         * Gets the value of the explicit attribute 'AddressLines'.
         * 
         */
        virtual List_IfcLabel_1_n &getAddressLines();
        /**
         * (const) Returns the value of the explicit attribute 'AddressLines'.
         * 
         * @return the value of the explicit attribute 'AddressLines'
         */
        virtual const List_IfcLabel_1_n &getAddressLines() const;
        /**
         * Sets the value of the explicit attribute 'AddressLines'.
         * 
         * @param value
         */
        virtual void setAddressLines(const List_IfcLabel_1_n &value);
        /**
         * unset the attribute 'AddressLines'.
         * 
         */
        virtual void unsetAddressLines();
        /**
         * Test if the attribute 'AddressLines' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAddressLines() const;
        /**
         * Gets the value of the explicit attribute 'PostalBox'.
         * 
         */
        virtual IfcLabel getPostalBox();
        /**
         * (const) Returns the value of the explicit attribute 'PostalBox'.
         * 
         * @return the value of the explicit attribute 'PostalBox'
         */
        virtual const IfcLabel getPostalBox() const;
        /**
         * Sets the value of the explicit attribute 'PostalBox'.
         * 
         * @param value
         */
        virtual void setPostalBox(const IfcLabel &value);
        /**
         * unset the attribute 'PostalBox'.
         * 
         */
        virtual void unsetPostalBox();
        /**
         * Test if the attribute 'PostalBox' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPostalBox() const;
        /**
         * Gets the value of the explicit attribute 'Town'.
         * 
         */
        virtual IfcLabel getTown();
        /**
         * (const) Returns the value of the explicit attribute 'Town'.
         * 
         * @return the value of the explicit attribute 'Town'
         */
        virtual const IfcLabel getTown() const;
        /**
         * Sets the value of the explicit attribute 'Town'.
         * 
         * @param value
         */
        virtual void setTown(const IfcLabel &value);
        /**
         * unset the attribute 'Town'.
         * 
         */
        virtual void unsetTown();
        /**
         * Test if the attribute 'Town' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTown() const;
        /**
         * Gets the value of the explicit attribute 'Region'.
         * 
         */
        virtual IfcLabel getRegion();
        /**
         * (const) Returns the value of the explicit attribute 'Region'.
         * 
         * @return the value of the explicit attribute 'Region'
         */
        virtual const IfcLabel getRegion() const;
        /**
         * Sets the value of the explicit attribute 'Region'.
         * 
         * @param value
         */
        virtual void setRegion(const IfcLabel &value);
        /**
         * unset the attribute 'Region'.
         * 
         */
        virtual void unsetRegion();
        /**
         * Test if the attribute 'Region' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRegion() const;
        /**
         * Gets the value of the explicit attribute 'PostalCode'.
         * 
         */
        virtual IfcLabel getPostalCode();
        /**
         * (const) Returns the value of the explicit attribute 'PostalCode'.
         * 
         * @return the value of the explicit attribute 'PostalCode'
         */
        virtual const IfcLabel getPostalCode() const;
        /**
         * Sets the value of the explicit attribute 'PostalCode'.
         * 
         * @param value
         */
        virtual void setPostalCode(const IfcLabel &value);
        /**
         * unset the attribute 'PostalCode'.
         * 
         */
        virtual void unsetPostalCode();
        /**
         * Test if the attribute 'PostalCode' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPostalCode() const;
        /**
         * Gets the value of the explicit attribute 'Country'.
         * 
         */
        virtual IfcLabel getCountry();
        /**
         * (const) Returns the value of the explicit attribute 'Country'.
         * 
         * @return the value of the explicit attribute 'Country'
         */
        virtual const IfcLabel getCountry() const;
        /**
         * Sets the value of the explicit attribute 'Country'.
         * 
         * @param value
         */
        virtual void setCountry(const IfcLabel &value);
        /**
         * unset the attribute 'Country'.
         * 
         */
        virtual void unsetCountry();
        /**
         * Test if the attribute 'Country' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCountry() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPostalAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcPostalAddress();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPostalAddress &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_internalLocation;
        /**
         */
        List_IfcLabel_1_n m_addressLines;
        /**
         */
        Step::String m_postalBox;
        /**
         */
        Step::String m_town;
        /**
         */
        Step::String m_region;
        /**
         */
        Step::String m_postalCode;
        /**
         */
        Step::String m_country;

    };

}

#endif // IFC2X3_IFCPOSTALADDRESS_H
