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

#ifndef IFC2X3_IFCORGANIZATION_H
#define IFC2X3_IFCORGANIZATION_H
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
    class IfcOrganization;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcOrganization_Addresses_type : public List_IfcAddress_1_n {
    public:
        /**
         */
        typedef List_IfcAddress_1_n::iterator iterator;

        /**
         */
        Inverted_IfcOrganization_Addresses_type();
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
        friend class IfcOrganization;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcOrganization *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcOrganization *owner);

    };

    class CopyOp;

    /**
     * Generated class for the IfcOrganization Entity.
     * 
     */
    class IFC2X3_EXPORT IfcOrganization : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * unset the attribute 'Description'.
         * 
         */
        virtual void unsetDescription();
        /**
         * Test if the attribute 'Description' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDescription() const;
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
         * Gets the value of the inverse attribute 'IsRelatedBy'.
         * 
         */
        virtual Inverse_Set_IfcOrganizationRelationship_0_n &getIsRelatedBy();
        /**
         * (const) Returns the value of the explicit attribute 'IsRelatedBy'.
         * 
         * @return the value of the explicit attribute 'IsRelatedBy'
         */
        const virtual Inverse_Set_IfcOrganizationRelationship_0_n &getIsRelatedBy() const;
        /**
         * Test if the attribute 'IsRelatedBy' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsRelatedBy() const;
        /**
         * Gets the value of the inverse attribute 'Relates'.
         * 
         */
        virtual Inverse_Set_IfcOrganizationRelationship_0_n &getRelates();
        /**
         * (const) Returns the value of the explicit attribute 'Relates'.
         * 
         * @return the value of the explicit attribute 'Relates'
         */
        const virtual Inverse_Set_IfcOrganizationRelationship_0_n &getRelates() const;
        /**
         * Test if the attribute 'Relates' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelates() const;
        /**
         * Gets the value of the inverse attribute 'Engages'.
         * 
         */
        virtual Inverse_Set_IfcPersonAndOrganization_0_n &getEngages();
        /**
         * (const) Returns the value of the explicit attribute 'Engages'.
         * 
         * @return the value of the explicit attribute 'Engages'
         */
        const virtual Inverse_Set_IfcPersonAndOrganization_0_n &getEngages() const;
        /**
         * Test if the attribute 'Engages' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEngages() const;
        friend class Inverted_IfcOrganizationRelationship_RelatedOrganizations_type;
        friend class ExpressDataSet;
        friend class IfcPersonAndOrganization;
        friend class IfcOrganizationRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOrganization(Step::Id id, Step::SPFData *args);
        virtual ~IfcOrganization();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOrganization &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_id;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        List_IfcActorRole_1_n m_roles;
        /**
         */
        Inverted_IfcOrganization_Addresses_type m_addresses;
        /**
         */
        Inverse_Set_IfcOrganizationRelationship_0_n m_isRelatedBy;
        /**
         */
        Inverse_Set_IfcOrganizationRelationship_0_n m_relates;
        /**
         */
        Inverse_Set_IfcPersonAndOrganization_0_n m_engages;

    };

}

#endif // IFC2X3_IFCORGANIZATION_H
