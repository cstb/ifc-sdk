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

#ifndef IFC2X3_IFCAPPLICATION_H
#define IFC2X3_IFCAPPLICATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcOrganization;

    /**
     * Generated class for the IfcApplication Entity.
     * 
     */
    class IFC2X3_EXPORT IfcApplication : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ApplicationDeveloper'.
         * 
         */
        virtual IfcOrganization *getApplicationDeveloper();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicationDeveloper'.
         * 
         * @return the value of the explicit attribute 'ApplicationDeveloper'
         */
        virtual const IfcOrganization *getApplicationDeveloper() const;
        /**
         * Sets the value of the explicit attribute 'ApplicationDeveloper'.
         * 
         * @param value
         */
        virtual void setApplicationDeveloper(const Step::RefPtr< IfcOrganization > &value);
        /**
         * unset the attribute 'ApplicationDeveloper'.
         * 
         */
        virtual void unsetApplicationDeveloper();
        /**
         * Test if the attribute 'ApplicationDeveloper' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApplicationDeveloper() const;
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
         * Gets the value of the explicit attribute 'ApplicationFullName'.
         * 
         */
        virtual IfcLabel getApplicationFullName();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicationFullName'.
         * 
         * @return the value of the explicit attribute 'ApplicationFullName'
         */
        virtual const IfcLabel getApplicationFullName() const;
        /**
         * Sets the value of the explicit attribute 'ApplicationFullName'.
         * 
         * @param value
         */
        virtual void setApplicationFullName(const IfcLabel &value);
        /**
         * unset the attribute 'ApplicationFullName'.
         * 
         */
        virtual void unsetApplicationFullName();
        /**
         * Test if the attribute 'ApplicationFullName' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApplicationFullName() const;
        /**
         * Gets the value of the explicit attribute 'ApplicationIdentifier'.
         * 
         */
        virtual IfcIdentifier getApplicationIdentifier();
        /**
         * (const) Returns the value of the explicit attribute 'ApplicationIdentifier'.
         * 
         * @return the value of the explicit attribute 'ApplicationIdentifier'
         */
        virtual const IfcIdentifier getApplicationIdentifier() const;
        /**
         * Sets the value of the explicit attribute 'ApplicationIdentifier'.
         * 
         * @param value
         */
        virtual void setApplicationIdentifier(const IfcIdentifier &value);
        /**
         * unset the attribute 'ApplicationIdentifier'.
         * 
         */
        virtual void unsetApplicationIdentifier();
        /**
         * Test if the attribute 'ApplicationIdentifier' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApplicationIdentifier() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcApplication(Step::Id id, Step::SPFData *args);
        virtual ~IfcApplication();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcApplication &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcOrganization > m_applicationDeveloper;
        /**
         */
        Step::String m_version;
        /**
         */
        Step::String m_applicationFullName;
        /**
         */
        Step::String m_applicationIdentifier;

    };

}

#endif // IFC2X3_IFCAPPLICATION_H
