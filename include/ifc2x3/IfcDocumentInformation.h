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

#ifndef IFC2X3_IFCDOCUMENTINFORMATION_H
#define IFC2X3_IFCDOCUMENTINFORMATION_H
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

    class IfcDocumentInformation;
    class IfcDocumentReference;

    /**
     * Inverse aggregate helper that keeps track of the owner for inverse operations.
     * 
     */
    class Inverted_IfcDocumentInformation_DocumentReferences_type : public Set_IfcDocumentReference_1_n {
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
        virtual void insert(const Step::RefPtr< IfcDocumentReference > &value) throw(std::out_of_range);
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

    class CopyOp;
    class IfcActorSelect;
    class IfcCalendarDate;
    class IfcDateAndTime;
    class IfcDocumentElectronicFormat;

    /**
     * Generated class for the IfcDocumentInformation Entity.
     * 
     */
    class IFC2X3_EXPORT IfcDocumentInformation : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'DocumentId'.
         * 
         */
        virtual IfcIdentifier getDocumentId();
        /**
         * (const) Returns the value of the explicit attribute 'DocumentId'.
         * 
         * @return the value of the explicit attribute 'DocumentId'
         */
        virtual const IfcIdentifier getDocumentId() const;
        /**
         * Sets the value of the explicit attribute 'DocumentId'.
         * 
         * @param value
         */
        virtual void setDocumentId(const IfcIdentifier &value);
        /**
         * unset the attribute 'DocumentId'.
         * 
         */
        virtual void unsetDocumentId();
        /**
         * Test if the attribute 'DocumentId' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDocumentId() const;
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
         * Gets the value of the explicit attribute 'DocumentReferences'.
         * 
         */
        virtual Set_IfcDocumentReference_1_n &getDocumentReferences();
        /**
         * (const) Returns the value of the explicit attribute 'DocumentReferences'.
         * 
         * @return the value of the explicit attribute 'DocumentReferences'
         */
        virtual const Set_IfcDocumentReference_1_n &getDocumentReferences() const;
        /**
         * unset the attribute 'DocumentReferences'.
         * 
         */
        virtual void unsetDocumentReferences();
        /**
         * Test if the attribute 'DocumentReferences' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDocumentReferences() const;
        /**
         * Gets the value of the explicit attribute 'Purpose'.
         * 
         */
        virtual IfcText getPurpose();
        /**
         * (const) Returns the value of the explicit attribute 'Purpose'.
         * 
         * @return the value of the explicit attribute 'Purpose'
         */
        virtual const IfcText getPurpose() const;
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        virtual void setPurpose(const IfcText &value);
        /**
         * unset the attribute 'Purpose'.
         * 
         */
        virtual void unsetPurpose();
        /**
         * Test if the attribute 'Purpose' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPurpose() const;
        /**
         * Gets the value of the explicit attribute 'IntendedUse'.
         * 
         */
        virtual IfcText getIntendedUse();
        /**
         * (const) Returns the value of the explicit attribute 'IntendedUse'.
         * 
         * @return the value of the explicit attribute 'IntendedUse'
         */
        virtual const IfcText getIntendedUse() const;
        /**
         * Sets the value of the explicit attribute 'IntendedUse'.
         * 
         * @param value
         */
        virtual void setIntendedUse(const IfcText &value);
        /**
         * unset the attribute 'IntendedUse'.
         * 
         */
        virtual void unsetIntendedUse();
        /**
         * Test if the attribute 'IntendedUse' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIntendedUse() const;
        /**
         * Gets the value of the explicit attribute 'Scope'.
         * 
         */
        virtual IfcText getScope();
        /**
         * (const) Returns the value of the explicit attribute 'Scope'.
         * 
         * @return the value of the explicit attribute 'Scope'
         */
        virtual const IfcText getScope() const;
        /**
         * Sets the value of the explicit attribute 'Scope'.
         * 
         * @param value
         */
        virtual void setScope(const IfcText &value);
        /**
         * unset the attribute 'Scope'.
         * 
         */
        virtual void unsetScope();
        /**
         * Test if the attribute 'Scope' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testScope() const;
        /**
         * Gets the value of the explicit attribute 'Revision'.
         * 
         */
        virtual IfcLabel getRevision();
        /**
         * (const) Returns the value of the explicit attribute 'Revision'.
         * 
         * @return the value of the explicit attribute 'Revision'
         */
        virtual const IfcLabel getRevision() const;
        /**
         * Sets the value of the explicit attribute 'Revision'.
         * 
         * @param value
         */
        virtual void setRevision(const IfcLabel &value);
        /**
         * unset the attribute 'Revision'.
         * 
         */
        virtual void unsetRevision();
        /**
         * Test if the attribute 'Revision' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRevision() const;
        /**
         * Gets the value of the explicit attribute 'DocumentOwner'.
         * 
         */
        virtual IfcActorSelect *getDocumentOwner();
        /**
         * (const) Returns the value of the explicit attribute 'DocumentOwner'.
         * 
         * @return the value of the explicit attribute 'DocumentOwner'
         */
        virtual const IfcActorSelect *getDocumentOwner() const;
        /**
         * Sets the value of the explicit attribute 'DocumentOwner'.
         * 
         * @param value
         */
        virtual void setDocumentOwner(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * unset the attribute 'DocumentOwner'.
         * 
         */
        virtual void unsetDocumentOwner();
        /**
         * Test if the attribute 'DocumentOwner' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDocumentOwner() const;
        /**
         * Gets the value of the explicit attribute 'Editors'.
         * 
         */
        virtual Set_IfcActorSelect_1_n &getEditors();
        /**
         * (const) Returns the value of the explicit attribute 'Editors'.
         * 
         * @return the value of the explicit attribute 'Editors'
         */
        virtual const Set_IfcActorSelect_1_n &getEditors() const;
        /**
         * Sets the value of the explicit attribute 'Editors'.
         * 
         * @param value
         */
        virtual void setEditors(const Set_IfcActorSelect_1_n &value);
        /**
         * unset the attribute 'Editors'.
         * 
         */
        virtual void unsetEditors();
        /**
         * Test if the attribute 'Editors' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEditors() const;
        /**
         * Gets the value of the explicit attribute 'CreationTime'.
         * 
         */
        virtual IfcDateAndTime *getCreationTime();
        /**
         * (const) Returns the value of the explicit attribute 'CreationTime'.
         * 
         * @return the value of the explicit attribute 'CreationTime'
         */
        virtual const IfcDateAndTime *getCreationTime() const;
        /**
         * Sets the value of the explicit attribute 'CreationTime'.
         * 
         * @param value
         */
        virtual void setCreationTime(const Step::RefPtr< IfcDateAndTime > &value);
        /**
         * unset the attribute 'CreationTime'.
         * 
         */
        virtual void unsetCreationTime();
        /**
         * Test if the attribute 'CreationTime' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCreationTime() const;
        /**
         * Gets the value of the explicit attribute 'LastRevisionTime'.
         * 
         */
        virtual IfcDateAndTime *getLastRevisionTime();
        /**
         * (const) Returns the value of the explicit attribute 'LastRevisionTime'.
         * 
         * @return the value of the explicit attribute 'LastRevisionTime'
         */
        virtual const IfcDateAndTime *getLastRevisionTime() const;
        /**
         * Sets the value of the explicit attribute 'LastRevisionTime'.
         * 
         * @param value
         */
        virtual void setLastRevisionTime(const Step::RefPtr< IfcDateAndTime > &value);
        /**
         * unset the attribute 'LastRevisionTime'.
         * 
         */
        virtual void unsetLastRevisionTime();
        /**
         * Test if the attribute 'LastRevisionTime' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLastRevisionTime() const;
        /**
         * Gets the value of the explicit attribute 'ElectronicFormat'.
         * 
         */
        virtual IfcDocumentElectronicFormat *getElectronicFormat();
        /**
         * (const) Returns the value of the explicit attribute 'ElectronicFormat'.
         * 
         * @return the value of the explicit attribute 'ElectronicFormat'
         */
        virtual const IfcDocumentElectronicFormat *getElectronicFormat() const;
        /**
         * Sets the value of the explicit attribute 'ElectronicFormat'.
         * 
         * @param value
         */
        virtual void setElectronicFormat(const Step::RefPtr< IfcDocumentElectronicFormat > &value);
        /**
         * unset the attribute 'ElectronicFormat'.
         * 
         */
        virtual void unsetElectronicFormat();
        /**
         * Test if the attribute 'ElectronicFormat' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testElectronicFormat() const;
        /**
         * Gets the value of the explicit attribute 'ValidFrom'.
         * 
         */
        virtual IfcCalendarDate *getValidFrom();
        /**
         * (const) Returns the value of the explicit attribute 'ValidFrom'.
         * 
         * @return the value of the explicit attribute 'ValidFrom'
         */
        virtual const IfcCalendarDate *getValidFrom() const;
        /**
         * Sets the value of the explicit attribute 'ValidFrom'.
         * 
         * @param value
         */
        virtual void setValidFrom(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         * unset the attribute 'ValidFrom'.
         * 
         */
        virtual void unsetValidFrom();
        /**
         * Test if the attribute 'ValidFrom' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testValidFrom() const;
        /**
         * Gets the value of the explicit attribute 'ValidUntil'.
         * 
         */
        virtual IfcCalendarDate *getValidUntil();
        /**
         * (const) Returns the value of the explicit attribute 'ValidUntil'.
         * 
         * @return the value of the explicit attribute 'ValidUntil'
         */
        virtual const IfcCalendarDate *getValidUntil() const;
        /**
         * Sets the value of the explicit attribute 'ValidUntil'.
         * 
         * @param value
         */
        virtual void setValidUntil(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         * unset the attribute 'ValidUntil'.
         * 
         */
        virtual void unsetValidUntil();
        /**
         * Test if the attribute 'ValidUntil' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testValidUntil() const;
        /**
         * Gets the value of the explicit attribute 'Confidentiality'.
         * 
         */
        virtual IfcDocumentConfidentialityEnum getConfidentiality();
        /**
         * (const) Returns the value of the explicit attribute 'Confidentiality'.
         * 
         * @return the value of the explicit attribute 'Confidentiality'
         */
        virtual const IfcDocumentConfidentialityEnum getConfidentiality() const;
        /**
         * Sets the value of the explicit attribute 'Confidentiality'.
         * 
         * @param value
         */
        virtual void setConfidentiality(IfcDocumentConfidentialityEnum value);
        /**
         * unset the attribute 'Confidentiality'.
         * 
         */
        virtual void unsetConfidentiality();
        /**
         * Test if the attribute 'Confidentiality' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testConfidentiality() const;
        /**
         * Gets the value of the explicit attribute 'Status'.
         * 
         */
        virtual IfcDocumentStatusEnum getStatus();
        /**
         * (const) Returns the value of the explicit attribute 'Status'.
         * 
         * @return the value of the explicit attribute 'Status'
         */
        virtual const IfcDocumentStatusEnum getStatus() const;
        /**
         * Sets the value of the explicit attribute 'Status'.
         * 
         * @param value
         */
        virtual void setStatus(IfcDocumentStatusEnum value);
        /**
         * unset the attribute 'Status'.
         * 
         */
        virtual void unsetStatus();
        /**
         * Test if the attribute 'Status' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStatus() const;
        /**
         * Gets the value of the inverse attribute 'IsPointedTo'.
         * 
         */
        virtual Inverse_Set_IfcDocumentInformationRelationship_0_n &getIsPointedTo();
        /**
         * (const) Returns the value of the explicit attribute 'IsPointedTo'.
         * 
         * @return the value of the explicit attribute 'IsPointedTo'
         */
        const virtual Inverse_Set_IfcDocumentInformationRelationship_0_n &getIsPointedTo() const;
        /**
         * Test if the attribute 'IsPointedTo' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsPointedTo() const;
        /**
         * Gets the value of the inverse attribute 'IsPointer'.
         * 
         */
        virtual Inverse_Set_IfcDocumentInformationRelationship_0_1 &getIsPointer();
        /**
         * (const) Returns the value of the explicit attribute 'IsPointer'.
         * 
         * @return the value of the explicit attribute 'IsPointer'
         */
        const virtual Inverse_Set_IfcDocumentInformationRelationship_0_1 &getIsPointer() const;
        /**
         * Test if the attribute 'IsPointer' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testIsPointer() const;
        friend class ExpressDataSet;
        friend class Inverted_IfcDocumentInformationRelationship_RelatedDocuments_type;
        friend class IfcDocumentInformationRelationship;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDocumentInformation(Step::Id id, Step::SPFData *args);
        virtual ~IfcDocumentInformation();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDocumentInformation &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_documentId;
        /**
         */
        Step::String m_name;
        /**
         */
        Step::String m_description;
        /**
         */
        Inverted_IfcDocumentInformation_DocumentReferences_type m_documentReferences;
        /**
         */
        Step::String m_purpose;
        /**
         */
        Step::String m_intendedUse;
        /**
         */
        Step::String m_scope;
        /**
         */
        Step::String m_revision;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_documentOwner;
        /**
         */
        Set_IfcActorSelect_1_n m_editors;
        /**
         */
        Step::RefPtr< IfcDateAndTime > m_creationTime;
        /**
         */
        Step::RefPtr< IfcDateAndTime > m_lastRevisionTime;
        /**
         */
        Step::RefPtr< IfcDocumentElectronicFormat > m_electronicFormat;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_validFrom;
        /**
         */
        Step::RefPtr< IfcCalendarDate > m_validUntil;
        /**
         */
        IfcDocumentConfidentialityEnum m_confidentiality;
        /**
         */
        IfcDocumentStatusEnum m_status;
        /**
         */
        Inverse_Set_IfcDocumentInformationRelationship_0_n m_isPointedTo;
        /**
         */
        Inverse_Set_IfcDocumentInformationRelationship_0_1 m_isPointer;

    };

}

#endif // IFC2X3_IFCDOCUMENTINFORMATION_H
