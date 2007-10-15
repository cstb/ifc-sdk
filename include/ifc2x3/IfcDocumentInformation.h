/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCDOCUMENTINFORMATION_H
#define IFC2X3_IFCDOCUMENTINFORMATION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/SPFData.h>
#include "ifc2x3/IfcActorSelect.h"
#include <Step/Referenced.h>
#include <Step/ClassType.h>
#include <Step/BaseEntity.h>
#include <string>
#include <Step/Aggregation.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcCalendarDate;
    class IfcDateAndTime;
    class IfcDocumentElectronicFormat;
    class IfcDocumentInformationRelationship;
    class IfcDocumentReference;

    /**
     */
    class IFC2X3_DLL_DEF IfcDocumentInformation : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcIdentifier getDocumentId();
        /**
         * Sets the value of the explicit attribute 'DocumentId'.
         * 
         * @param value
         */
        void setDocumentId(const IfcIdentifier &value);
        /**
         */
        IfcLabel getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(const IfcLabel &value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcDocumentReference > > &getDocumentReferences();
        /**
         */
        IfcText getPurpose();
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        void setPurpose(const IfcText &value);
        /**
         */
        IfcText getIntendedUse();
        /**
         * Sets the value of the explicit attribute 'IntendedUse'.
         * 
         * @param value
         */
        void setIntendedUse(const IfcText &value);
        /**
         */
        IfcText getScope();
        /**
         * Sets the value of the explicit attribute 'Scope'.
         * 
         * @param value
         */
        void setScope(const IfcText &value);
        /**
         */
        IfcLabel getRevision();
        /**
         * Sets the value of the explicit attribute 'Revision'.
         * 
         * @param value
         */
        void setRevision(const IfcLabel &value);
        /**
         */
        IfcActorSelect *getDocumentOwner();
        /**
         * Sets the value of the explicit attribute 'DocumentOwner'.
         * 
         * @param value
         */
        void setDocumentOwner(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcActorSelect > > &getEditors();
        /**
         * Sets the value of the explicit attribute 'Editors'.
         * 
         * @param value
         */
        void setEditors(const Step::Set< Step::RefPtr< IfcActorSelect > > &value);
        /**
         */
        IfcDateAndTime *getCreationTime();
        /**
         * Sets the value of the explicit attribute 'CreationTime'.
         * 
         * @param value
         */
        void setCreationTime(const Step::RefPtr< IfcDateAndTime > &value);
        /**
         */
        IfcDateAndTime *getLastRevisionTime();
        /**
         * Sets the value of the explicit attribute 'LastRevisionTime'.
         * 
         * @param value
         */
        void setLastRevisionTime(const Step::RefPtr< IfcDateAndTime > &value);
        /**
         */
        IfcDocumentElectronicFormat *getElectronicFormat();
        /**
         * Sets the value of the explicit attribute 'ElectronicFormat'.
         * 
         * @param value
         */
        void setElectronicFormat(const Step::RefPtr< IfcDocumentElectronicFormat > &value);
        /**
         */
        IfcCalendarDate *getValidFrom();
        /**
         * Sets the value of the explicit attribute 'ValidFrom'.
         * 
         * @param value
         */
        void setValidFrom(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         */
        IfcCalendarDate *getValidUntil();
        /**
         * Sets the value of the explicit attribute 'ValidUntil'.
         * 
         * @param value
         */
        void setValidUntil(const Step::RefPtr< IfcCalendarDate > &value);
        /**
         */
        IfcDocumentConfidentialityEnum getConfidentiality();
        /**
         * Sets the value of the explicit attribute 'Confidentiality'.
         * 
         * @param value
         */
        void setConfidentiality(IfcDocumentConfidentialityEnum value);
        /**
         */
        IfcDocumentStatusEnum getStatus();
        /**
         * Sets the value of the explicit attribute 'Status'.
         * 
         * @param value
         */
        void setStatus(IfcDocumentStatusEnum value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcDocumentInformationRelationship > > &getIsPointedTo();
        /**
         */
        Step::Set< Step::ObsPtr< IfcDocumentInformationRelationship > > &getIsPointer();
        /**
         */
        virtual void release();
        friend class ExpressDataSet;
        friend class IfcDocumentInformationRelationship;
        /**
         */
        class Inverted_DocumentReferences_type : public Step::Set< Step::RefPtr< IfcDocumentReference > > {
        public:
            /**
             */
            IfcDocumentInformation *mOwner;
            /**
             */
            Inverted_DocumentReferences_type();
            /**
             * @param owner
             */
            void setOwner(IfcDocumentInformation *owner);
            /**
             * @param value
             */
            virtual void insert(const Step::RefPtr< IfcDocumentReference > &value);

        };


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
        std::string m_documentId;
        /**
         */
        std::string m_name;
        /**
         */
        std::string m_description;
        /**
         */
        Inverted_DocumentReferences_type m_documentReferences;
        /**
         */
        std::string m_purpose;
        /**
         */
        std::string m_intendedUse;
        /**
         */
        std::string m_scope;
        /**
         */
        std::string m_revision;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_documentOwner;
        /**
         */
        Step::Set< Step::RefPtr< IfcActorSelect > > m_editors;
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
        Step::Set< Step::ObsPtr< IfcDocumentInformationRelationship > > m_isPointedTo;
        /**
         */
        Step::Set< Step::ObsPtr< IfcDocumentInformationRelationship > > m_isPointer;

    };

}

#endif // IFC2X3_IFCDOCUMENTINFORMATION_H
