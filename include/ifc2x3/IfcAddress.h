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

#include <ifc2x3/DefinedTypes.h>

#include <Step/BaseEntity.h>

namespace ifc2x3
{


    /**
     * Generated class for the IfcAddress Entity.
     *
     */
    class IFC2X3_EXPORT IfcAddress : public Step::BaseEntity
    {

        // Attributes
        IfcAddressTypeEnum m_Purpose;
        IfcText m_Description;
        IfcLabel m_UserDefinedPurpose;
        // InverseAttributes
        Inverse_Set_IfcOrganization_0_n m_OfOrganization;
        Inverse_Set_IfcPerson_0_n m_OfPerson;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Purpose
        /// @{
        virtual IfcAddressTypeEnum getPurpose();
        virtual IfcAddressTypeEnum getPurpose() const;
        virtual void setPurpose(IfcAddressTypeEnum value);
        virtual void unsetPurpose();
        virtual bool testPurpose() const;
        /// @}

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}

        /// Attribute UserDefinedPurpose
        /// @{
        virtual IfcLabel getUserDefinedPurpose();
        virtual const IfcLabel getUserDefinedPurpose() const;
        virtual void setUserDefinedPurpose(const IfcLabel &value);
        virtual void unsetUserDefinedPurpose();
        virtual bool testUserDefinedPurpose() const;
        /// @}

        /// Inverse attribute OfOrganization
        /// @{
        virtual Inverse_Set_IfcOrganization_0_n &getOfOrganization();
        virtual const Inverse_Set_IfcOrganization_0_n &getOfOrganization() const;
        virtual bool testOfOrganization() const;

        friend class IfcOrganization;
        /// @}

        /// Inverse attribute OfPerson
        /// @{
        virtual Inverse_Set_IfcPerson_0_n &getOfPerson();
        virtual const Inverse_Set_IfcPerson_0_n &getOfPerson() const;
        virtual bool testOfPerson() const;

        friend class IfcPerson;
        /// @}



        friend class Inverted_IfcPerson_Addresses_type;
        friend class Inverted_IfcOrganization_Addresses_type;


        friend class ExpressDataSet;

    protected:

        IfcAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcAddress();

        virtual bool init();

        virtual void copy(const IfcAddress &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3