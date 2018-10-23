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
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     *
     */
    class Inverted_IfcDocumentInformation_DocumentReferences_type : public Set_IfcDocumentReference_1_n
    {

    public:
        /**
         */
        typedef Set_IfcDocumentReference_1_n::size_type size_type;

        /**
         */
        Inverted_IfcDocumentInformation_DocumentReferences_type();
        
        /**
         * Insert a value in the aggregate.
         *
         * @param value The object to act upon.
         */
    #ifdef STEP_CHECK_RANGE
        virtual void insert(const Step::RefPtr< IfcDocumentReference > &value) throw(std::out_of_range);
    #else
        virtual void insert(const Step::RefPtr< IfcDocumentReference > &value);
    #endif

        /**
         * Remove a value from the aggregate.
         *
         * @param value The object to act upon.
         */
        virtual size_type erase(const Step::RefPtr< IfcDocumentReference > &value);
        
        /**
         * Remove all values from the aggregate.
         *
         */
        void clear();
        friend class IfcDocumentInformation;

    protected:
        /**
         * The owner of this inverted aggregate.
         *
         */
       IfcDocumentInformation *mOwner;
        /**
         * @param owner The owner of this inverted aggregate.
         */
        void setOwner(IfcDocumentInformation *owner);
    };


    /**
     * Generated class for the IfcDocumentInformation Entity.
     *
     */
    class IFC2X3_EXPORT IfcDocumentInformation : public Step::BaseEntity
    {

        // Attributes
        IfcIdentifier m_DocumentId;
        IfcLabel m_Name;
        IfcText m_Description;
        IfcText m_Purpose;
        IfcText m_IntendedUse;
        IfcText m_Scope;
        IfcLabel m_Revision;
        Step::RefPtr< IfcActorSelect > m_DocumentOwner;
        Set_IfcActorSelect_1_n m_Editors;
        Step::RefPtr< IfcDateAndTime > m_CreationTime;
        Step::RefPtr< IfcDateAndTime > m_LastRevisionTime;
        Step::RefPtr< IfcDocumentElectronicFormat > m_ElectronicFormat;
        Step::RefPtr< IfcCalendarDate > m_ValidFrom;
        Step::RefPtr< IfcCalendarDate > m_ValidUntil;
        IfcDocumentConfidentialityEnum m_Confidentiality;
        IfcDocumentStatusEnum m_Status;
        // InvertedAttributes
        Inverted_IfcDocumentInformation_DocumentReferences_type m_DocumentReferences;
        // InverseAttributes
        Inverse_Set_IfcDocumentInformationRelationship_0_1 m_IsPointer;
        Inverse_Set_IfcDocumentInformationRelationship_0_n m_IsPointedTo;

        ClassType_definitions()

    public:
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);

        /// Attribute DocumentId
        /// @{
        virtual IfcIdentifier getDocumentId();
        virtual const IfcIdentifier getDocumentId() const;
        virtual void setDocumentId(const IfcIdentifier &value);
        virtual void unsetDocumentId();
        virtual bool testDocumentId() const;
        /// @}

        /// Attribute Name
        /// @{
        virtual IfcLabel getName();
        virtual const IfcLabel getName() const;
        virtual void setName(const IfcLabel &value);
        virtual void unsetName();
        virtual bool testName() const;
        /// @}

        /// Attribute Description
        /// @{
        virtual IfcText getDescription();
        virtual const IfcText getDescription() const;
        virtual void setDescription(const IfcText &value);
        virtual void unsetDescription();
        virtual bool testDescription() const;
        /// @}

        /// Attribute Purpose
        /// @{
        virtual IfcText getPurpose();
        virtual const IfcText getPurpose() const;
        virtual void setPurpose(const IfcText &value);
        virtual void unsetPurpose();
        virtual bool testPurpose() const;
        /// @}

        /// Attribute IntendedUse
        /// @{
        virtual IfcText getIntendedUse();
        virtual const IfcText getIntendedUse() const;
        virtual void setIntendedUse(const IfcText &value);
        virtual void unsetIntendedUse();
        virtual bool testIntendedUse() const;
        /// @}

        /// Attribute Scope
        /// @{
        virtual IfcText getScope();
        virtual const IfcText getScope() const;
        virtual void setScope(const IfcText &value);
        virtual void unsetScope();
        virtual bool testScope() const;
        /// @}

        /// Attribute Revision
        /// @{
        virtual IfcLabel getRevision();
        virtual const IfcLabel getRevision() const;
        virtual void setRevision(const IfcLabel &value);
        virtual void unsetRevision();
        virtual bool testRevision() const;
        /// @}

        /// Attribute DocumentOwner
        /// @{
        virtual IfcActorSelect *getDocumentOwner();
        virtual const IfcActorSelect *getDocumentOwner() const;
        virtual void setDocumentOwner(const Step::RefPtr< IfcActorSelect > &value);
        virtual void unsetDocumentOwner();
        virtual bool testDocumentOwner() const;
        /// @}

        /// Attribute Editors
        /// @{
        virtual Set_IfcActorSelect_1_n &getEditors();
        virtual const Set_IfcActorSelect_1_n &getEditors() const;
        virtual void setEditors(const Set_IfcActorSelect_1_n &value);
        virtual void unsetEditors();
        virtual bool testEditors() const;
        /// @}

        /// Attribute CreationTime
        /// @{
        virtual IfcDateAndTime *getCreationTime();
        virtual const IfcDateAndTime *getCreationTime() const;
        virtual void setCreationTime(const Step::RefPtr< IfcDateAndTime > &value);
        virtual void unsetCreationTime();
        virtual bool testCreationTime() const;
        /// @}

        /// Attribute LastRevisionTime
        /// @{
        virtual IfcDateAndTime *getLastRevisionTime();
        virtual const IfcDateAndTime *getLastRevisionTime() const;
        virtual void setLastRevisionTime(const Step::RefPtr< IfcDateAndTime > &value);
        virtual void unsetLastRevisionTime();
        virtual bool testLastRevisionTime() const;
        /// @}

        /// Attribute ElectronicFormat
        /// @{
        virtual IfcDocumentElectronicFormat *getElectronicFormat();
        virtual const IfcDocumentElectronicFormat *getElectronicFormat() const;
        virtual void setElectronicFormat(const Step::RefPtr< IfcDocumentElectronicFormat > &value);
        virtual void unsetElectronicFormat();
        virtual bool testElectronicFormat() const;
        /// @}

        /// Attribute ValidFrom
        /// @{
        virtual IfcCalendarDate *getValidFrom();
        virtual const IfcCalendarDate *getValidFrom() const;
        virtual void setValidFrom(const Step::RefPtr< IfcCalendarDate > &value);
        virtual void unsetValidFrom();
        virtual bool testValidFrom() const;
        /// @}

        /// Attribute ValidUntil
        /// @{
        virtual IfcCalendarDate *getValidUntil();
        virtual const IfcCalendarDate *getValidUntil() const;
        virtual void setValidUntil(const Step::RefPtr< IfcCalendarDate > &value);
        virtual void unsetValidUntil();
        virtual bool testValidUntil() const;
        /// @}

        /// Attribute Confidentiality
        /// @{
        virtual IfcDocumentConfidentialityEnum getConfidentiality();
        virtual IfcDocumentConfidentialityEnum getConfidentiality() const;
        virtual void setConfidentiality(IfcDocumentConfidentialityEnum value);
        virtual void unsetConfidentiality();
        virtual bool testConfidentiality() const;
        /// @}

        /// Attribute Status
        /// @{
        virtual IfcDocumentStatusEnum getStatus();
        virtual IfcDocumentStatusEnum getStatus() const;
        virtual void setStatus(IfcDocumentStatusEnum value);
        virtual void unsetStatus();
        virtual bool testStatus() const;
        /// @}

        /// Attribute DocumentReferences
        /// @{
        virtual Set_IfcDocumentReference_1_n &getDocumentReferences();
        virtual const Set_IfcDocumentReference_1_n &getDocumentReferences() const;
        virtual void unsetDocumentReferences();
        virtual bool testDocumentReferences() const;
        /// @}

        /// Inverse attribute IsPointer
        /// @{
        virtual Inverse_Set_IfcDocumentInformationRelationship_0_1 &getIsPointer();
        virtual const Inverse_Set_IfcDocumentInformationRelationship_0_1 &getIsPointer() const;
        virtual bool testIsPointer() const;

        friend class IfcDocumentInformationRelationship;
        /// @}

        /// Inverse attribute IsPointedTo
        /// @{
        virtual Inverse_Set_IfcDocumentInformationRelationship_0_n &getIsPointedTo();
        virtual const Inverse_Set_IfcDocumentInformationRelationship_0_n &getIsPointedTo() const;
        virtual bool testIsPointedTo() const;

        friend class IfcDocumentInformationRelationship;
        /// @}



        friend class Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type;


        friend class ExpressDataSet;

    protected:

        IfcDocumentInformation(Step::Id id, Step::SPFData *args);
        virtual ~IfcDocumentInformation();

        virtual bool init();

        virtual void copy(const IfcDocumentInformation &obj, const CopyOp &copyop);
    };
} // namespace ifc2x3