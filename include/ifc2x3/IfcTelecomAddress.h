#pragma once

// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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


#include <ifc2x3/Export.h>

#include <ifc2x3/IfcAddress.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcTelecomAddress Entity.
     *
     */
    class IFC2X3_EXPORT IfcTelecomAddress : public IfcAddress
    {

        // Attributes
        List_IfcLabel_1_n m_TelephoneNumbers;
        List_IfcLabel_1_n m_FacsimileNumbers;
        IfcLabel m_PagerNumber;
        List_IfcLabel_1_n m_ElectronicMailAddresses;
        IfcLabel m_WWWHomePageURL;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute TelephoneNumbers
        /// @{
        virtual List_IfcLabel_1_n &getTelephoneNumbers();
        virtual const List_IfcLabel_1_n &getTelephoneNumbers() const;
        virtual void setTelephoneNumbers(const List_IfcLabel_1_n &value);
        virtual void unsetTelephoneNumbers();
        virtual bool testTelephoneNumbers() const;
        /// @}

        /// Attribute FacsimileNumbers
        /// @{
        virtual List_IfcLabel_1_n &getFacsimileNumbers();
        virtual const List_IfcLabel_1_n &getFacsimileNumbers() const;
        virtual void setFacsimileNumbers(const List_IfcLabel_1_n &value);
        virtual void unsetFacsimileNumbers();
        virtual bool testFacsimileNumbers() const;
        /// @}

        /// Attribute PagerNumber
        /// @{
        virtual IfcLabel getPagerNumber();
        virtual const IfcLabel getPagerNumber() const;
        virtual void setPagerNumber(const IfcLabel &value);
        virtual void unsetPagerNumber();
        virtual bool testPagerNumber() const;
        /// @}

        /// Attribute ElectronicMailAddresses
        /// @{
        virtual List_IfcLabel_1_n &getElectronicMailAddresses();
        virtual const List_IfcLabel_1_n &getElectronicMailAddresses() const;
        virtual void setElectronicMailAddresses(const List_IfcLabel_1_n &value);
        virtual void unsetElectronicMailAddresses();
        virtual bool testElectronicMailAddresses() const;
        /// @}

        /// Attribute WWWHomePageURL
        /// @{
        virtual IfcLabel getWWWHomePageURL();
        virtual const IfcLabel getWWWHomePageURL() const;
        virtual void setWWWHomePageURL(const IfcLabel &value);
        virtual void unsetWWWHomePageURL();
        virtual bool testWWWHomePageURL() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcTelecomAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcTelecomAddress();

        virtual bool init();

        virtual void copy(const IfcTelecomAddress &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3