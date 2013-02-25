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

#ifndef IFC2X3_IFCLIBRARYINFORMATION_H
#define IFC2X3_IFCLIBRARYINFORMATION_H
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

    class IfcLibraryInformation;
    class IfcLibraryReference;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcLibraryInformation_LibraryReference_type : public Set_IfcLibraryReference_1_n {
    public:
        /**
         */
        typedef Set_IfcLibraryReference_1_n::size_type size_type;

        /**
         */
        Inverted_IfcLibraryInformation_LibraryReference_type();
        /**
         * Insert a value in the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual void insert(const Step::RefPtr< IfcLibraryReference > &value) throw(std::out_of_range);
        /**
         * Remove a value from the aggregate.
         * 
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcLibraryReference > &value);
        /**
         * Remove all values from the aggregate.
         * 
         */
        void clear();
        friend class IfcLibraryInformation;

    protected:
        /**
         * The owner of this inverted aggregate.
         * 
         */
        IfcLibraryInformation *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcLibraryInformation *owner);

    };

    class CopyOp;
    class IfcCalendarDate;
    class IfcOrganization;

    /**
     * Generated class for the IfcLibraryInformation Entity.
     * 
     */
    class IFC2X3_EXPORT IfcLibraryInformation : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Version'.
         * 
         */
        virtual IfcLabel getVersion();
        /**
         * (const) Returns the value of the explicit attribute 'Version'.
         * 
         * @return the value of the explicit attribute 'Version'
         */
        virtual const IfcLabel getVersion() const;
        /**
         * Sets the value of the explicit attribute 'Version'.
         * 
         * @param value
         */
        virtual void setVersion(const IfcLabel &value);
        /**
         * unset the attribute 'Version'.
         * 
         */
        virtual void unsetVersion();
        /**
         * Test if the attribute 'Version' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVersion() const;
        /**
         * Gets the value of the explicit attribute 'Publisher'.
         * 
         */
        virtual IfcOrganization *getPublisher();
        /**
         * (const) Returns the value of the explicit attribute 'Publisher'.
         * 
         * @return the value of the explicit attribute 'Publisher'
         */
        virtual const IfcOrganization *getPublisher() const;
        /**
         * Sets the value of the explicit attribute 'Publisher'.
         * 
         * @param value
         */
        virtual void setPublisher(const Step::RefPtr< IfcOrganization > &value);
        /**
         * unset the attribute 'Publisher'.
         * 
         */
        virtual void unsetPublisher();
        /**
         * Test if the attribute 'Publisher' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPublisher() const;
        /**
         * Gets the value of the explicit attribute 'VersionDate'.
         * 
         */
        virtual IfcCalendarDate *getVersionDate();
        /**
         * (const) Returns the value of the explicit attribute 'VersionDate'.
         * 
         * @return the value of the explicit attribute 'VersionDate'
         */
        virtual const IfcCalendarDate *getVersionDate() const;
        /**
         * Sets the value of the explicit attribute 'VersionDate'.
         * 
         * @param value
         */
        virtual void setVersionDate(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         * unset the attribute 'VersionDate'.
         * 
         */
        virtual void unsetVersionDate();
        /**
         * Test if the attribute 'VersionDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVersionDate() const;
        /**
         * Gets the value of the explicit attribute 'LibraryReference'.
         * 
         */
        virtual Set_IfcLibraryReference_1_n &getLibraryReference();
        /**
         * (const) Returns the value of the explicit attribute 'LibraryReference'.
         * 
         * @return the value of the explicit attribute 'LibraryReference'
         */
        virtual const Set_IfcLibraryReference_1_n &getLibraryReference() const;
        /**
         * unset the attribute 'LibraryReference'.
         * 
         */
        virtual void unsetLibraryReference();
        /**
         * Test if the attribute 'LibraryReference' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLibraryReference() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLibraryInformation(Step::Id id, Step::SPFData *args);
        virtual ~IfcLibraryInformation();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLibraryInformation &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_version;
        /**
         */
        Step::RefPtr< IfcOrganization > m_publisher;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_versionDate;
        /**
         */
        Inverted_IfcLibraryInformation_LibraryReference_type m_libraryReference;

    };

}

#endif // IFC2X3_IFCLIBRARYINFORMATION_H
