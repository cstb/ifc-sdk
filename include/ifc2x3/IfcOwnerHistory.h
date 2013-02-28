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

#ifndef IFC2X3_IFCOWNERHISTORY_H
#define IFC2X3_IFCOWNERHISTORY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/Export.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcApplication;
    class IfcPersonAndOrganization;

    /**
     * Generated class for the IfcOwnerHistory Entity.
     * 
     */
    class IFC2X3_EXPORT IfcOwnerHistory : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'OwningUser'.
         * 
         */
        virtual IfcPersonAndOrganization *getOwningUser();
        /**
         * (const) Returns the value of the explicit attribute 'OwningUser'.
         * 
         * @return the value of the explicit attribute 'OwningUser'
         */
        virtual const IfcPersonAndOrganization *getOwningUser() const;
        /**
         * Sets the value of the explicit attribute 'OwningUser'.
         * 
         * @param value
         */
        virtual void setOwningUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
        /**
         * unset the attribute 'OwningUser'.
         * 
         */
        virtual void unsetOwningUser();
        /**
         * Test if the attribute 'OwningUser' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOwningUser() const;
        /**
         * Gets the value of the explicit attribute 'OwningApplication'.
         * 
         */
        virtual IfcApplication *getOwningApplication();
        /**
         * (const) Returns the value of the explicit attribute 'OwningApplication'.
         * 
         * @return the value of the explicit attribute 'OwningApplication'
         */
        virtual const IfcApplication *getOwningApplication() const;
        /**
         * Sets the value of the explicit attribute 'OwningApplication'.
         * 
         * @param value
         */
        virtual void setOwningApplication(const Step::RefPtr< IfcApplication > &value);
        /**
         * unset the attribute 'OwningApplication'.
         * 
         */
        virtual void unsetOwningApplication();
        /**
         * Test if the attribute 'OwningApplication' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOwningApplication() const;
        /**
         * Gets the value of the explicit attribute 'State'.
         * 
         */
        virtual IfcStateEnum getState();
        /**
         * (const) Returns the value of the explicit attribute 'State'.
         * 
         * @return the value of the explicit attribute 'State'
         */
        virtual const IfcStateEnum getState() const;
        /**
         * Sets the value of the explicit attribute 'State'.
         * 
         * @param value
         */
        virtual void setState(IfcStateEnum value);
        /**
         * unset the attribute 'State'.
         * 
         */
        virtual void unsetState();
        /**
         * Test if the attribute 'State' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testState() const;
        /**
         * Gets the value of the explicit attribute 'ChangeAction'.
         * 
         */
        virtual IfcChangeActionEnum getChangeAction();
        /**
         * (const) Returns the value of the explicit attribute 'ChangeAction'.
         * 
         * @return the value of the explicit attribute 'ChangeAction'
         */
        virtual const IfcChangeActionEnum getChangeAction() const;
        /**
         * Sets the value of the explicit attribute 'ChangeAction'.
         * 
         * @param value
         */
        virtual void setChangeAction(IfcChangeActionEnum value);
        /**
         * unset the attribute 'ChangeAction'.
         * 
         */
        virtual void unsetChangeAction();
        /**
         * Test if the attribute 'ChangeAction' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testChangeAction() const;
        /**
         * Gets the value of the explicit attribute 'LastModifiedDate'.
         * 
         */
        virtual IfcTimeStamp getLastModifiedDate();
        /**
         * (const) Returns the value of the explicit attribute 'LastModifiedDate'.
         * 
         * @return the value of the explicit attribute 'LastModifiedDate'
         */
        virtual const IfcTimeStamp getLastModifiedDate() const;
        /**
         * Sets the value of the explicit attribute 'LastModifiedDate'.
         * 
         * @param value
         */
        virtual void setLastModifiedDate(IfcTimeStamp value);
        /**
         * unset the attribute 'LastModifiedDate'.
         * 
         */
        virtual void unsetLastModifiedDate();
        /**
         * Test if the attribute 'LastModifiedDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLastModifiedDate() const;
        /**
         * Gets the value of the explicit attribute 'LastModifyingUser'.
         * 
         */
        virtual IfcPersonAndOrganization *getLastModifyingUser();
        /**
         * (const) Returns the value of the explicit attribute 'LastModifyingUser'.
         * 
         * @return the value of the explicit attribute 'LastModifyingUser'
         */
        virtual const IfcPersonAndOrganization *getLastModifyingUser() const;
        /**
         * Sets the value of the explicit attribute 'LastModifyingUser'.
         * 
         * @param value
         */
        virtual void setLastModifyingUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
        /**
         * unset the attribute 'LastModifyingUser'.
         * 
         */
        virtual void unsetLastModifyingUser();
        /**
         * Test if the attribute 'LastModifyingUser' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLastModifyingUser() const;
        /**
         * Gets the value of the explicit attribute 'LastModifyingApplication'.
         * 
         */
        virtual IfcApplication *getLastModifyingApplication();
        /**
         * (const) Returns the value of the explicit attribute 'LastModifyingApplication'.
         * 
         * @return the value of the explicit attribute 'LastModifyingApplication'
         */
        virtual const IfcApplication *getLastModifyingApplication() const;
        /**
         * Sets the value of the explicit attribute 'LastModifyingApplication'.
         * 
         * @param value
         */
        virtual void setLastModifyingApplication(const Step::RefPtr< IfcApplication > &value);
        /**
         * unset the attribute 'LastModifyingApplication'.
         * 
         */
        virtual void unsetLastModifyingApplication();
        /**
         * Test if the attribute 'LastModifyingApplication' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLastModifyingApplication() const;
        /**
         * Gets the value of the explicit attribute 'CreationDate'.
         * 
         */
        virtual IfcTimeStamp getCreationDate();
        /**
         * (const) Returns the value of the explicit attribute 'CreationDate'.
         * 
         * @return the value of the explicit attribute 'CreationDate'
         */
        virtual const IfcTimeStamp getCreationDate() const;
        /**
         * Sets the value of the explicit attribute 'CreationDate'.
         * 
         * @param value
         */
        virtual void setCreationDate(IfcTimeStamp value);
        /**
         * unset the attribute 'CreationDate'.
         * 
         */
        virtual void unsetCreationDate();
        /**
         * Test if the attribute 'CreationDate' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCreationDate() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOwnerHistory(Step::Id id, Step::SPFData *args);
        virtual ~IfcOwnerHistory();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOwnerHistory &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPersonAndOrganization > m_owningUser;
        /**
         */
        Step::RefPtr< IfcApplication > m_owningApplication;
        /**
         */
        IfcStateEnum m_state;
        /**
         */
        IfcChangeActionEnum m_changeAction;
        /**
         */
        Step::Integer m_lastModifiedDate;
        /**
         */
        Step::RefPtr< IfcPersonAndOrganization > m_lastModifyingUser;
        /**
         */
        Step::RefPtr< IfcApplication > m_lastModifyingApplication;
        /**
         */
        Step::Integer m_creationDate;

    };

}

#endif // IFC2X3_IFCOWNERHISTORY_H
