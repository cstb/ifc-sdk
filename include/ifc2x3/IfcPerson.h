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

#ifndef IFC2X3_IFCPERSON_H
#define IFC2X3_IFCPERSON_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <stdexcept>
#include <string>

namespace ifc2x3 {

    class IfcAddress;
    class IfcPerson;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcPerson_Addresses_type : public List_IfcAddress_1_n {
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
        virtual void push_back(const Step::RefPtr< IfcAddress > &value) throw(std::out_of_range);
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

    class CopyOp;

    /**
     * Generated class for the IfcPerson Entity.
     * 
     */
    class IFC2X3_EXPORT IfcPerson : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Id'.
         * 
         */
        virtual IfcIdentifier getId();
        /**
         * (const) Returns the value of the explicit attribute 'Id'.
         * 
         * @return the value of the explicit attribute 'Id'
         */
        virtual const IfcIdentifier getId() const;
        /**
         * Sets the value of the explicit attribute 'Id'.
         * 
         * @param value
         */
        virtual void setId(const IfcIdentifier &value);
        /**
         * unset the attribute 'Id'.
         * 
         */
        virtual void unsetId();
        /**
         * Test if the attribute 'Id' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testId() const;
        /**
         * Gets the value of the explicit attribute 'FamilyName'.
         * 
         */
        virtual IfcLabel getFamilyName();
        /**
         * (const) Returns the value of the explicit attribute 'FamilyName'.
         * 
         * @return the value of the explicit attribute 'FamilyName'
         */
        virtual const IfcLabel getFamilyName() const;
        /**
         * Sets the value of the explicit attribute 'FamilyName'.
         * 
         * @param value
         */
        virtual void setFamilyName(const IfcLabel &value);
        /**
         * unset the attribute 'FamilyName'.
         * 
         */
        virtual void unsetFamilyName();
        /**
         * Test if the attribute 'FamilyName' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testFamilyName() const;
        /**
         * Gets the value of the explicit attribute 'GivenName'.
         * 
         */
        virtual IfcLabel getGivenName();
        /**
         * (const) Returns the value of the explicit attribute 'GivenName'.
         * 
         * @return the value of the explicit attribute 'GivenName'
         */
        virtual const IfcLabel getGivenName() const;
        /**
         * Sets the value of the explicit attribute 'GivenName'.
         * 
         * @param value
         */
        virtual void setGivenName(const IfcLabel &value);
        /**
         * unset the attribute 'GivenName'.
         * 
         */
        virtual void unsetGivenName();
        /**
         * Test if the attribute 'GivenName' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testGivenName() const;
        /**
         * Gets the value of the explicit attribute 'MiddleNames'.
         * 
         */
        virtual List_IfcLabel_1_n &getMiddleNames();
        /**
         * (const) Returns the value of the explicit attribute 'MiddleNames'.
         * 
         * @return the value of the explicit attribute 'MiddleNames'
         */
        virtual const List_IfcLabel_1_n &getMiddleNames() const;
        /**
         * Sets the value of the explicit attribute 'MiddleNames'.
         * 
         * @param value
         */
        virtual void setMiddleNames(const List_IfcLabel_1_n &value);
        /**
         * unset the attribute 'MiddleNames'.
         * 
         */
        virtual void unsetMiddleNames();
        /**
         * Test if the attribute 'MiddleNames' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMiddleNames() const;
        /**
         * Gets the value of the explicit attribute 'PrefixTitles'.
         * 
         */
        virtual List_IfcLabel_1_n &getPrefixTitles();
        /**
         * (const) Returns the value of the explicit attribute 'PrefixTitles'.
         * 
         * @return the value of the explicit attribute 'PrefixTitles'
         */
        virtual const List_IfcLabel_1_n &getPrefixTitles() const;
        /**
         * Sets the value of the explicit attribute 'PrefixTitles'.
         * 
         * @param value
         */
        virtual void setPrefixTitles(const List_IfcLabel_1_n &value);
        /**
         * unset the attribute 'PrefixTitles'.
         * 
         */
        virtual void unsetPrefixTitles();
        /**
         * Test if the attribute 'PrefixTitles' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPrefixTitles() const;
        /**
         * Gets the value of the explicit attribute 'SuffixTitles'.
         * 
         */
        virtual List_IfcLabel_1_n &getSuffixTitles();
        /**
         * (const) Returns the value of the explicit attribute 'SuffixTitles'.
         * 
         * @return the value of the explicit attribute 'SuffixTitles'
         */
        virtual const List_IfcLabel_1_n &getSuffixTitles() const;
        /**
         * Sets the value of the explicit attribute 'SuffixTitles'.
         * 
         * @param value
         */
        virtual void setSuffixTitles(const List_IfcLabel_1_n &value);
        /**
         * unset the attribute 'SuffixTitles'.
         * 
         */
        virtual void unsetSuffixTitles();
        /**
         * Test if the attribute 'SuffixTitles' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSuffixTitles() const;
        /**
         * Gets the value of the explicit attribute 'Roles'.
         * 
         */
        virtual List_IfcActorRole_1_n &getRoles();
        /**
         * (const) Returns the value of the explicit attribute 'Roles'.
         * 
         * @return the value of the explicit attribute 'Roles'
         */
        virtual const List_IfcActorRole_1_n &getRoles() const;
        /**
         * Sets the value of the explicit attribute 'Roles'.
         * 
         * @param value
         */
        virtual void setRoles(const List_IfcActorRole_1_n &value);
        /**
         * unset the attribute 'Roles'.
         * 
         */
        virtual void unsetRoles();
        /**
         * Test if the attribute 'Roles' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRoles() const;
        /**
         * Gets the value of the explicit attribute 'Addresses'.
         * 
         */
        virtual List_IfcAddress_1_n &getAddresses();
        /**
         * (const) Returns the value of the explicit attribute 'Addresses'.
         * 
         * @return the value of the explicit attribute 'Addresses'
         */
        virtual const List_IfcAddress_1_n &getAddresses() const;
        /**
         * unset the attribute 'Addresses'.
         * 
         */
        virtual void unsetAddresses();
        /**
         * Test if the attribute 'Addresses' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testAddresses() const;
        /**
         * Gets the value of the inverse attribute 'EngagedIn'.
         * 
         */
        virtual Inverse_Set_IfcPersonAndOrganization_0_n &getEngagedIn();
        /**
         * (const) Returns the value of the explicit attribute 'EngagedIn'.
         * 
         * @return the value of the explicit attribute 'EngagedIn'
         */
        const virtual Inverse_Set_IfcPersonAndOrganization_0_n &getEngagedIn() const;
        /**
         * Test if the attribute 'EngagedIn' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEngagedIn() const;
        friend class ExpressDataSet;
        friend class IfcPersonAndOrganization;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPerson(Step::Id id, Step::SPFData *args);
        virtual ~IfcPerson();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPerson &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_id;
        /**
         */
        Step::String m_familyName;
        /**
         */
        Step::String m_givenName;
        /**
         */
        List_IfcLabel_1_n m_middleNames;
        /**
         */
        List_IfcLabel_1_n m_prefixTitles;
        /**
         */
        List_IfcLabel_1_n m_suffixTitles;
        /**
         */
        List_IfcActorRole_1_n m_roles;
        /**
         */
        Inverted_IfcPerson_Addresses_type m_addresses;
        /**
         */
        Inverse_Set_IfcPersonAndOrganization_0_n m_engagedIn;

    };

}

#endif // IFC2X3_IFCPERSON_H
