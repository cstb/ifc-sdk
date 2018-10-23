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
     * Generated class for the IfcPostalAddress Entity.
     *
     */
    class IFC2X3_EXPORT IfcPostalAddress : public IfcAddress
    {

        // Attributes
        IfcLabel m_InternalLocation;
        List_IfcLabel_1_n m_AddressLines;
        IfcLabel m_PostalBox;
        IfcLabel m_Town;
        IfcLabel m_Region;
        IfcLabel m_PostalCode;
        IfcLabel m_Country;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute InternalLocation
        /// @{
        virtual IfcLabel getInternalLocation();
        virtual const IfcLabel getInternalLocation() const;
        virtual void setInternalLocation(const IfcLabel &value);
        virtual void unsetInternalLocation();
        virtual bool testInternalLocation() const;
        /// @}

        /// Attribute AddressLines
        /// @{
        virtual List_IfcLabel_1_n &getAddressLines();
        virtual const List_IfcLabel_1_n &getAddressLines() const;
        virtual void setAddressLines(const List_IfcLabel_1_n &value);
        virtual void unsetAddressLines();
        virtual bool testAddressLines() const;
        /// @}

        /// Attribute PostalBox
        /// @{
        virtual IfcLabel getPostalBox();
        virtual const IfcLabel getPostalBox() const;
        virtual void setPostalBox(const IfcLabel &value);
        virtual void unsetPostalBox();
        virtual bool testPostalBox() const;
        /// @}

        /// Attribute Town
        /// @{
        virtual IfcLabel getTown();
        virtual const IfcLabel getTown() const;
        virtual void setTown(const IfcLabel &value);
        virtual void unsetTown();
        virtual bool testTown() const;
        /// @}

        /// Attribute Region
        /// @{
        virtual IfcLabel getRegion();
        virtual const IfcLabel getRegion() const;
        virtual void setRegion(const IfcLabel &value);
        virtual void unsetRegion();
        virtual bool testRegion() const;
        /// @}

        /// Attribute PostalCode
        /// @{
        virtual IfcLabel getPostalCode();
        virtual const IfcLabel getPostalCode() const;
        virtual void setPostalCode(const IfcLabel &value);
        virtual void unsetPostalCode();
        virtual bool testPostalCode() const;
        /// @}

        /// Attribute Country
        /// @{
        virtual IfcLabel getCountry();
        virtual const IfcLabel getCountry() const;
        virtual void setCountry(const IfcLabel &value);
        virtual void unsetCountry();
        virtual bool testCountry() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPostalAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcPostalAddress();

        virtual bool init();

        virtual void copy(const IfcPostalAddress &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3