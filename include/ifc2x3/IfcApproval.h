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
     * Generated class for the IfcApproval Entity.
     *
     */
    class IFC2X3_EXPORT IfcApproval : public Step::BaseEntity
    {

        // Attributes
        IfcText m_Description;
        Step::RefPtr< IfcDateTimeSelect > m_ApprovalDateTime;
        IfcLabel m_ApprovalStatus;
        IfcLabel m_ApprovalLevel;
        IfcText m_ApprovalQualifier;
        IfcLabel m_Name;
        IfcIdentifier m_Identifier;
        // InverseAttributes
        Inverse_Set_IfcApprovalRelationship_0_n m_IsRelatedWith;
        Inverse_Set_IfcApprovalActorRelationship_0_n m_Actors;
        Inverse_Set_IfcApprovalRelationship_0_n m_Relates;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}

        /// Attribute ApprovalDateTime
        /// @{
        virtual IfcDateTimeSelect *getApprovalDateTime();
        virtual const IfcDateTimeSelect *getApprovalDateTime() const;
        virtual void setApprovalDateTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        virtual void unsetApprovalDateTime();
        virtual bool testApprovalDateTime() const;
        /// @}

        /// Attribute ApprovalStatus
        /// @{
        virtual IfcLabel getApprovalStatus();
        virtual const IfcLabel getApprovalStatus() const;
        virtual void setApprovalStatus(const IfcLabel &value);
        virtual void unsetApprovalStatus();
        virtual bool testApprovalStatus() const;
        /// @}

        /// Attribute ApprovalLevel
        /// @{
        virtual IfcLabel getApprovalLevel();
        virtual const IfcLabel getApprovalLevel() const;
        virtual void setApprovalLevel(const IfcLabel &value);
        virtual void unsetApprovalLevel();
        virtual bool testApprovalLevel() const;
        /// @}

        /// Attribute ApprovalQualifier
        /// @{
        virtual IfcText getApprovalQualifier();
        virtual const IfcText getApprovalQualifier() const;
        virtual void setApprovalQualifier(const IfcText &value);
        virtual void unsetApprovalQualifier();
        virtual bool testApprovalQualifier() const;
        /// @}

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Identifier
        /// @{
        virtual IfcIdentifier getIdentifier();
        virtual const IfcIdentifier getIdentifier() const;
        virtual void setIdentifier(const IfcIdentifier &value);
        virtual void unsetIdentifier();
        virtual bool testIdentifier() const;
        /// @}

        /// Inverse attribute IsRelatedWith
        /// @{
        virtual Inverse_Set_IfcApprovalRelationship_0_n &getIsRelatedWith();
        virtual const Inverse_Set_IfcApprovalRelationship_0_n &getIsRelatedWith() const;
        virtual bool testIsRelatedWith() const;

        friend class IfcApprovalRelationship;
        /// @}

        /// Inverse attribute Actors
        /// @{
        virtual Inverse_Set_IfcApprovalActorRelationship_0_n &getActors();
        virtual const Inverse_Set_IfcApprovalActorRelationship_0_n &getActors() const;
        virtual bool testActors() const;

        friend class IfcApprovalActorRelationship;
        /// @}

        /// Inverse attribute Relates
        /// @{
        virtual Inverse_Set_IfcApprovalRelationship_0_n &getRelates();
        virtual const Inverse_Set_IfcApprovalRelationship_0_n &getRelates() const;
        virtual bool testRelates() const;

        friend class IfcApprovalRelationship;
        /// @}





        friend class ExpressDataSet;

    protected:

        IfcApproval(Step::Id id, Step::SPFData *args);
        virtual ~IfcApproval();

        virtual bool init();

        virtual void copy(const IfcApproval &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3