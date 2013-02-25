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

#ifndef IFC2X3_IFCACTORROLE_H
#define IFC2X3_IFCACTORROLE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcActorRole Entity.
     * 
     */
    class IFC2X3_EXPORT IfcActorRole : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Role'.
         * 
         */
        virtual IfcRoleEnum getRole();
        /**
         * (const) Returns the value of the explicit attribute 'Role'.
         * 
         * @return the value of the explicit attribute 'Role'
         */
        virtual const IfcRoleEnum getRole() const;
        /**
         * Sets the value of the explicit attribute 'Role'.
         * 
         * @param value
         */
        virtual void setRole(IfcRoleEnum value);
        /**
         * unset the attribute 'Role'.
         * 
         */
        virtual void unsetRole();
        /**
         * Test if the attribute 'Role' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRole() const;
        /**
         * Gets the value of the explicit attribute 'UserDefinedRole'.
         * 
         */
        virtual IfcLabel getUserDefinedRole();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedRole'.
         * 
         * @return the value of the explicit attribute 'UserDefinedRole'
         */
        virtual const IfcLabel getUserDefinedRole() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedRole'.
         * 
         * @param value
         */
        virtual void setUserDefinedRole(const IfcLabel &value);
        /**
         * unset the attribute 'UserDefinedRole'.
         * 
         */
        virtual void unsetUserDefinedRole();
        /**
         * Test if the attribute 'UserDefinedRole' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedRole() const;
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
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcActorRole(Step::Id id, Step::SPFData *args);
        virtual ~IfcActorRole();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcActorRole &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcRoleEnum m_role;
        /**
         */
        Step::String m_userDefinedRole;
        /**
         */
        Step::String m_description;

    };

}

#endif // IFC2X3_IFCACTORROLE_H
