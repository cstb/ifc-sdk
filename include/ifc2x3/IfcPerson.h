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
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcPerson_Addresses_type : public List_IfcAddress_1_n
    {

    public:
        /**
         */
        typedef List_IfcAddress_1_n::iterator iterator;

        /**
         */
        Inverted_IfcPerson_Addresses_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void push_back(const Step::RefPtr< IfcAddress > &value) throw(std::out_of_range);
    #else
        virtual void push_back(const Step::RefPtr< IfcAddress > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual iterator erase(const Step::RefPtr< IfcAddress > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcPerson;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcPerson *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcPerson *owner);
    };


    /**
     * Generated class for the IfcPerson Entity.
     *
     */
    class IFC2X3_EXPORT IfcPerson : public Step::BaseEntity
    {

        // Attributes
        IfcIdentifier m_Id;
        IfcLabel m_FamilyName;
        IfcLabel m_GivenName;
        List_IfcLabel_1_n m_MiddleNames;
        List_IfcLabel_1_n m_PrefixTitles;
        List_IfcLabel_1_n m_SuffixTitles;
        List_IfcActorRole_1_n m_Roles;
        // InvertedAttributes
        Inverted_IfcPerson_Addresses_type m_Addresses;
        // InverseAttributes
        Inverse_Set_IfcPersonAndOrganization_0_n m_EngagedIn;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Id
        /// @{
        virtual IfcIdentifier getId();
        virtual const IfcIdentifier getId() const;
        virtual void setId(const IfcIdentifier &value);
        virtual void unsetId();
        virtual bool testId() const;
        /// @}

        /// Attribute FamilyName
        /// @{
        virtual IfcLabel getFamilyName();
        virtual const IfcLabel getFamilyName() const;
        virtual void setFamilyName(const IfcLabel &value);
        virtual void unsetFamilyName();
        virtual bool testFamilyName() const;
        /// @}

        /// Attribute GivenName
        /// @{
        virtual IfcLabel getGivenName();
        virtual const IfcLabel getGivenName() const;
        virtual void setGivenName(const IfcLabel &value);
        virtual void unsetGivenName();
        virtual bool testGivenName() const;
        /// @}

        /// Attribute MiddleNames
        /// @{
        virtual List_IfcLabel_1_n &getMiddleNames();
        virtual const List_IfcLabel_1_n &getMiddleNames() const;
        virtual void setMiddleNames(const List_IfcLabel_1_n &value);
        virtual void unsetMiddleNames();
        virtual bool testMiddleNames() const;
        /// @}

        /// Attribute PrefixTitles
        /// @{
        virtual List_IfcLabel_1_n &getPrefixTitles();
        virtual const List_IfcLabel_1_n &getPrefixTitles() const;
        virtual void setPrefixTitles(const List_IfcLabel_1_n &value);
        virtual void unsetPrefixTitles();
        virtual bool testPrefixTitles() const;
        /// @}

        /// Attribute SuffixTitles
        /// @{
        virtual List_IfcLabel_1_n &getSuffixTitles();
        virtual const List_IfcLabel_1_n &getSuffixTitles() const;
        virtual void setSuffixTitles(const List_IfcLabel_1_n &value);
        virtual void unsetSuffixTitles();
        virtual bool testSuffixTitles() const;
        /// @}

        /// Attribute Roles
        /// @{
        virtual List_IfcActorRole_1_n &getRoles();
        virtual const List_IfcActorRole_1_n &getRoles() const;
        virtual void setRoles(const List_IfcActorRole_1_n &value);
        virtual void unsetRoles();
        virtual bool testRoles() const;
        /// @}

        /// Attribute Addresses
        /// @{
        virtual List_IfcAddress_1_n &getAddresses();
        virtual const List_IfcAddress_1_n &getAddresses() const;
        virtual void unsetAddresses();
        virtual bool testAddresses() const;
        /// @}

        /// Inverse attribute EngagedIn
        /// @{
        virtual Inverse_Set_IfcPersonAndOrganization_0_n &getEngagedIn();
        virtual const Inverse_Set_IfcPersonAndOrganization_0_n &getEngagedIn() const;
        virtual bool testEngagedIn() const;

        friend class IfcPersonAndOrganization;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcPerson(Step::Id id, Step::SPFData *args);
        virtual ~IfcPerson();

        virtual bool init();

        virtual void copy(const IfcPerson &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3