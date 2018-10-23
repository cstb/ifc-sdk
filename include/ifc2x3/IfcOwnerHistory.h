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
     * Generated class for the IfcOwnerHistory Entity.
     *
     */
    class IFC2X3_EXPORT IfcOwnerHistory : public Step::BaseEntity
    {

        // Attributes
        Step::RefPtr< IfcPersonAndOrganization > m_OwningUser;
        Step::RefPtr< IfcApplication > m_OwningApplication;
        IfcStateEnum m_State;
        IfcChangeActionEnum m_ChangeAction;
        IfcTimeStamp m_LastModifiedDate;
        Step::RefPtr< IfcPersonAndOrganization > m_LastModifyingUser;
        Step::RefPtr< IfcApplication > m_LastModifyingApplication;
        IfcTimeStamp m_CreationDate;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute OwningUser
        /// @{
        virtual IfcPersonAndOrganization *getOwningUser();
        virtual const IfcPersonAndOrganization *getOwningUser() const;
        virtual void setOwningUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
        virtual void unsetOwningUser();
        virtual bool testOwningUser() const;
        /// @}

        /// Attribute OwningApplication
        /// @{
        virtual IfcApplication *getOwningApplication();
        virtual const IfcApplication *getOwningApplication() const;
        virtual void setOwningApplication(const Step::RefPtr< IfcApplication > &value);
        virtual void unsetOwningApplication();
        virtual bool testOwningApplication() const;
        /// @}

        /// Attribute State
        /// @{
        virtual IfcStateEnum getState();
        virtual IfcStateEnum getState() const;
        virtual void setState(IfcStateEnum value);
        virtual void unsetState();
        virtual bool testState() const;
        /// @}

        /// Attribute ChangeAction
        /// @{
        virtual IfcChangeActionEnum getChangeAction();
        virtual IfcChangeActionEnum getChangeAction() const;
        virtual void setChangeAction(IfcChangeActionEnum value);
        virtual void unsetChangeAction();
        virtual bool testChangeAction() const;
        /// @}

        /// Attribute LastModifiedDate
        /// @{
        virtual IfcTimeStamp getLastModifiedDate();
        virtual IfcTimeStamp getLastModifiedDate() const;
        virtual void setLastModifiedDate(IfcTimeStamp value);
        virtual void unsetLastModifiedDate();
        virtual bool testLastModifiedDate() const;
        /// @}

        /// Attribute LastModifyingUser
        /// @{
        virtual IfcPersonAndOrganization *getLastModifyingUser();
        virtual const IfcPersonAndOrganization *getLastModifyingUser() const;
        virtual void setLastModifyingUser(const Step::RefPtr< IfcPersonAndOrganization > &value);
        virtual void unsetLastModifyingUser();
        virtual bool testLastModifyingUser() const;
        /// @}

        /// Attribute LastModifyingApplication
        /// @{
        virtual IfcApplication *getLastModifyingApplication();
        virtual const IfcApplication *getLastModifyingApplication() const;
        virtual void setLastModifyingApplication(const Step::RefPtr< IfcApplication > &value);
        virtual void unsetLastModifyingApplication();
        virtual bool testLastModifyingApplication() const;
        /// @}

        /// Attribute CreationDate
        /// @{
        virtual IfcTimeStamp getCreationDate();
        virtual IfcTimeStamp getCreationDate() const;
        virtual void setCreationDate(IfcTimeStamp value);
        virtual void unsetCreationDate();
        virtual bool testCreationDate() const;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcOwnerHistory(Step::Id id, Step::SPFData *args);
        virtual ~IfcOwnerHistory();

        virtual bool init();

        virtual void copy(const IfcOwnerHistory &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3