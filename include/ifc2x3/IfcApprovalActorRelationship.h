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

#ifndef IFC2X3_IFCAPPROVALACTORRELATIONSHIP_H
#define IFC2X3_IFCAPPROVALACTORRELATIONSHIP_H
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
    class IfcActorRole;
    class IfcActorSelect;
    class IfcApproval;

    /**
     * Generated class for the IfcApprovalActorRelationship Entity.
     * 
     */
    class IFC2X3_EXPORT IfcApprovalActorRelationship : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Actor'.
         * 
         */
        virtual IfcActorSelect *getActor();
        /**
         * (const) Returns the value of the explicit attribute 'Actor'.
         * 
         * @return the value of the explicit attribute 'Actor'
         */
        virtual const IfcActorSelect *getActor() const;
        /**
         * Sets the value of the explicit attribute 'Actor'.
         * 
         * @param value
         */
        virtual void setActor(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * unset the attribute 'Actor'.
         * 
         */
        virtual void unsetActor();
        /**
         * Test if the attribute 'Actor' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testActor() const;
        /**
         * Gets the value of the explicit attribute 'Approval'.
         * 
         */
        virtual IfcApproval *getApproval();
        /**
         * (const) Returns the value of the explicit attribute 'Approval'.
         * 
         * @return the value of the explicit attribute 'Approval'
         */
        virtual const IfcApproval *getApproval() const;
        /**
         * Sets the value of the explicit attribute 'Approval'.
         * 
         * @param value
         */
        virtual void setApproval(const Step::RefPtr< IfcApproval > &value);
        /**
         * unset the attribute 'Approval'.
         * 
         */
        virtual void unsetApproval();
        /**
         * Test if the attribute 'Approval' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testApproval() const;
        /**
         * Gets the value of the explicit attribute 'Role'.
         * 
         */
        virtual IfcActorRole *getRole();
        /**
         * (const) Returns the value of the explicit attribute 'Role'.
         * 
         * @return the value of the explicit attribute 'Role'
         */
        virtual const IfcActorRole *getRole() const;
        /**
         * Sets the value of the explicit attribute 'Role'.
         * 
         * @param value
         */
        virtual void setRole(const Step::RefPtr< IfcActorRole > &value);
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
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcApprovalActorRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcApprovalActorRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcApprovalActorRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_actor;
        /**
         */
        Step::RefPtr< IfcApproval > m_approval;
        /**
         */
        Step::RefPtr< IfcActorRole > m_role;

    };

}

#endif // IFC2X3_IFCAPPROVALACTORRELATIONSHIP_H
