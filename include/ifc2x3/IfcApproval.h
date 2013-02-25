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

#ifndef IFC2X3_IFCAPPROVAL_H
#define IFC2X3_IFCAPPROVAL_H
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
    class IfcDateTimeSelect;

    /**
     * Generated class for the IfcApproval Entity.
     * 
     */
    class IFC2X3_EXPORT IfcApproval : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'ApprovalDateTime'.
         * 
         */
        virtual IfcDateTimeSelect *getApprovalDateTime();
        /**
         * (const) Returns the value of the explicit attribute 'ApprovalDateTime'.
         * 
         * @return the value of the explicit attribute 'ApprovalDateTime'
         */
        virtual const IfcDateTimeSelect *getApprovalDateTime() const;
        /**
         * Sets the value of the explicit attribute 'ApprovalDateTime'.
         * 
         * @param value
         */
        virtual void setApprovalDateTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * unset the attribute 'ApprovalDateTime'.
         * 
         */
        virtual void unsetApprovalDateTime();
        /**
         * Test if the attribute 'ApprovalDateTime' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApprovalDateTime() const;
        /**
         * Gets the value of the explicit attribute 'ApprovalStatus'.
         * 
         */
        virtual IfcLabel getApprovalStatus();
        /**
         * (const) Returns the value of the explicit attribute 'ApprovalStatus'.
         * 
         * @return the value of the explicit attribute 'ApprovalStatus'
         */
        virtual const IfcLabel getApprovalStatus() const;
        /**
         * Sets the value of the explicit attribute 'ApprovalStatus'.
         * 
         * @param value
         */
        virtual void setApprovalStatus(const IfcLabel &value);
        /**
         * unset the attribute 'ApprovalStatus'.
         * 
         */
        virtual void unsetApprovalStatus();
        /**
         * Test if the attribute 'ApprovalStatus' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApprovalStatus() const;
        /**
         * Gets the value of the explicit attribute 'ApprovalLevel'.
         * 
         */
        virtual IfcLabel getApprovalLevel();
        /**
         * (const) Returns the value of the explicit attribute 'ApprovalLevel'.
         * 
         * @return the value of the explicit attribute 'ApprovalLevel'
         */
        virtual const IfcLabel getApprovalLevel() const;
        /**
         * Sets the value of the explicit attribute 'ApprovalLevel'.
         * 
         * @param value
         */
        virtual void setApprovalLevel(const IfcLabel &value);
        /**
         * unset the attribute 'ApprovalLevel'.
         * 
         */
        virtual void unsetApprovalLevel();
        /**
         * Test if the attribute 'ApprovalLevel' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApprovalLevel() const;
        /**
         * Gets the value of the explicit attribute 'ApprovalQualifier'.
         * 
         */
        virtual IfcText getApprovalQualifier();
        /**
         * (const) Returns the value of the explicit attribute 'ApprovalQualifier'.
         * 
         * @return the value of the explicit attribute 'ApprovalQualifier'
         */
        virtual const IfcText getApprovalQualifier() const;
        /**
         * Sets the value of the explicit attribute 'ApprovalQualifier'.
         * 
         * @param value
         */
        virtual void setApprovalQualifier(const IfcText &value);
        /**
         * unset the attribute 'ApprovalQualifier'.
         * 
         */
        virtual void unsetApprovalQualifier();
        /**
         * Test if the attribute 'ApprovalQualifier' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApprovalQualifier() const;
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
         * Gets the value of the explicit attribute 'Identifier'.
         * 
         */
        virtual IfcIdentifier getIdentifier();
        /**
         * (const) Returns the value of the explicit attribute 'Identifier'.
         * 
         * @return the value of the explicit attribute 'Identifier'
         */
        virtual const IfcIdentifier getIdentifier() const;
        /**
         * Sets the value of the explicit attribute 'Identifier'.
         * 
         * @param value
         */
        virtual void setIdentifier(const IfcIdentifier &value);
        /**
         * unset the attribute 'Identifier'.
         * 
         */
        virtual void unsetIdentifier();
        /**
         * Test if the attribute 'Identifier' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIdentifier() const;
        /**
         * Gets the value of the inverse attribute 'Actors'.
         * 
         */
        virtual Inverse_Set_IfcApprovalActorRelationship_0_n &getActors();
        /**
         * (const) Returns the value of the explicit attribute 'Actors'.
         * 
         * @return the value of the explicit attribute 'Actors'
         */
        const virtual Inverse_Set_IfcApprovalActorRelationship_0_n &getActors() const;
        /**
         * Test if the attribute 'Actors' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testActors() const;
        /**
         * Gets the value of the inverse attribute 'IsRelatedWith'.
         * 
         */
        virtual Inverse_Set_IfcApprovalRelationship_0_n &getIsRelatedWith();
        /**
         * (const) Returns the value of the explicit attribute 'IsRelatedWith'.
         * 
         * @return the value of the explicit attribute 'IsRelatedWith'
         */
        const virtual Inverse_Set_IfcApprovalRelationship_0_n &getIsRelatedWith() const;
        /**
         * Test if the attribute 'IsRelatedWith' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsRelatedWith() const;
        /**
         * Gets the value of the inverse attribute 'Relates'.
         * 
         */
        virtual Inverse_Set_IfcApprovalRelationship_0_n &getRelates();
        /**
         * (const) Returns the value of the explicit attribute 'Relates'.
         * 
         * @return the value of the explicit attribute 'Relates'
         */
        const virtual Inverse_Set_IfcApprovalRelationship_0_n &getRelates() const;
        /**
         * Test if the attribute 'Relates' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelates() const;
        friend class IfcApprovalRelationship;
        friend class IfcApprovalActorRelationship;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcApproval(Step::Id id, Step::SPFData *args);
        virtual ~IfcApproval();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcApproval &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_approvalDateTime;
        /**
         */
        Step::String m_approvalStatus;
        /**
         */
        Step::String m_approvalLevel;
        /**
         */
        Step::String m_approvalQualifier;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_identifier;
        /**
         */
        Inverse_Set_IfcApprovalActorRelationship_0_n m_actors;
        /**
         */
        Inverse_Set_IfcApprovalRelationship_0_n m_isRelatedWith;
        /**
         */
        Inverse_Set_IfcApprovalRelationship_0_n m_relates;

    };

}

#endif // IFC2X3_IFCAPPROVAL_H
