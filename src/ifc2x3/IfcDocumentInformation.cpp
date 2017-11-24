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



#include <ifc2x3/IfcDocumentInformation.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcDocumentElectronicFormat.h>
#include <ifc2x3/IfcDocumentInformationRelationship.h>
#include <ifc2x3/IfcDocumentReference.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcDocumentInformation_DocumentReferences_type::Inverted_IfcDocumentInformation_DocumentReferences_type():
    mOwner(0)
{
}

void Inverted_IfcDocumentInformation_DocumentReferences_type::setOwner(IfcDocumentInformation *owner) {
    mOwner = owner;
}

void Inverted_IfcDocumentInformation_DocumentReferences_type::insert(const Step::RefPtr< IfcDocumentReference > &value) throw(std::out_of_range) {
    IfcDocumentReference *inverse = const_cast< IfcDocumentReference * > (value.get());
    Set_IfcDocumentReference_1_n::insert(value);
    inverse->m_referenceToDocument.insert(mOwner);
}

Inverted_IfcDocumentInformation_DocumentReferences_type::size_type Inverted_IfcDocumentInformation_DocumentReferences_type::erase(const Step::RefPtr< IfcDocumentReference > &value) {
    IfcDocumentReference *inverse = const_cast< IfcDocumentReference * > (value.get());
    inverse->m_referenceToDocument.erase(mOwner);
    return Set_IfcDocumentReference_1_n::erase(value);
}

void Inverted_IfcDocumentInformation_DocumentReferences_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcDocumentInformation::IfcDocumentInformation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_documentId = Step::getUnset(m_documentId);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_documentReferences.setUnset(true);
    m_documentReferences.setOwner(this);
    m_purpose = Step::getUnset(m_purpose);
    m_intendedUse = Step::getUnset(m_intendedUse);
    m_scope = Step::getUnset(m_scope);
    m_revision = Step::getUnset(m_revision);
    m_documentOwner = NULL;
    m_editors.setUnset(true);
    m_creationTime = NULL;
    m_lastRevisionTime = NULL;
    m_electronicFormat = NULL;
    m_validFrom = NULL;
    m_validUntil = NULL;
    m_confidentiality = IfcDocumentConfidentialityEnum_UNSET;
    m_status = IfcDocumentStatusEnum_UNSET;
}

IfcDocumentInformation::~IfcDocumentInformation() {
}

bool IfcDocumentInformation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDocumentInformation(this);
}

const std::string &IfcDocumentInformation::type() const {
    return IfcDocumentInformation::s_type.getName();
}

const Step::ClassType &IfcDocumentInformation::getClassType() {
    return IfcDocumentInformation::s_type;
}

const Step::ClassType &IfcDocumentInformation::getType() const {
    return IfcDocumentInformation::s_type;
}

bool IfcDocumentInformation::isOfType(const Step::ClassType &t) const {
    return IfcDocumentInformation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcDocumentInformation::getDocumentId() {
    if (Step::BaseObject::inited()) {
        return m_documentId;
    }
    else {
        return Step::getUnset(m_documentId);
    }
}

const IfcIdentifier IfcDocumentInformation::getDocumentId() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getDocumentId();
}

void IfcDocumentInformation::setDocumentId(const IfcIdentifier &value) {
    m_documentId = value;
}

void IfcDocumentInformation::unsetDocumentId() {
    m_documentId = Step::getUnset(getDocumentId());
}

bool IfcDocumentInformation::testDocumentId() const {
    return !Step::isUnset(getDocumentId());
}

IfcLabel IfcDocumentInformation::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcDocumentInformation::getName() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getName();
}

void IfcDocumentInformation::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcDocumentInformation::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcDocumentInformation::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcDocumentInformation::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcDocumentInformation::getDescription() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getDescription();
}

void IfcDocumentInformation::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcDocumentInformation::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcDocumentInformation::testDescription() const {
    return !Step::isUnset(getDescription());
}

Set_IfcDocumentReference_1_n &IfcDocumentInformation::getDocumentReferences() {
    if (Step::BaseObject::inited()) {
        return m_documentReferences;
    }
    else {
        m_documentReferences.setUnset(true);
        return m_documentReferences;
    }
}

const Set_IfcDocumentReference_1_n &IfcDocumentInformation::getDocumentReferences() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getDocumentReferences();
}

void IfcDocumentInformation::unsetDocumentReferences() {
    m_documentReferences.clear();
    m_documentReferences.setUnset(true);
}

bool IfcDocumentInformation::testDocumentReferences() const {
    return !m_documentReferences.isUnset();
}

IfcText IfcDocumentInformation::getPurpose() {
    if (Step::BaseObject::inited()) {
        return m_purpose;
    }
    else {
        return Step::getUnset(m_purpose);
    }
}

const IfcText IfcDocumentInformation::getPurpose() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getPurpose();
}

void IfcDocumentInformation::setPurpose(const IfcText &value) {
    m_purpose = value;
}

void IfcDocumentInformation::unsetPurpose() {
    m_purpose = Step::getUnset(getPurpose());
}

bool IfcDocumentInformation::testPurpose() const {
    return !Step::isUnset(getPurpose());
}

IfcText IfcDocumentInformation::getIntendedUse() {
    if (Step::BaseObject::inited()) {
        return m_intendedUse;
    }
    else {
        return Step::getUnset(m_intendedUse);
    }
}

const IfcText IfcDocumentInformation::getIntendedUse() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getIntendedUse();
}

void IfcDocumentInformation::setIntendedUse(const IfcText &value) {
    m_intendedUse = value;
}

void IfcDocumentInformation::unsetIntendedUse() {
    m_intendedUse = Step::getUnset(getIntendedUse());
}

bool IfcDocumentInformation::testIntendedUse() const {
    return !Step::isUnset(getIntendedUse());
}

IfcText IfcDocumentInformation::getScope() {
    if (Step::BaseObject::inited()) {
        return m_scope;
    }
    else {
        return Step::getUnset(m_scope);
    }
}

const IfcText IfcDocumentInformation::getScope() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getScope();
}

void IfcDocumentInformation::setScope(const IfcText &value) {
    m_scope = value;
}

void IfcDocumentInformation::unsetScope() {
    m_scope = Step::getUnset(getScope());
}

bool IfcDocumentInformation::testScope() const {
    return !Step::isUnset(getScope());
}

IfcLabel IfcDocumentInformation::getRevision() {
    if (Step::BaseObject::inited()) {
        return m_revision;
    }
    else {
        return Step::getUnset(m_revision);
    }
}

const IfcLabel IfcDocumentInformation::getRevision() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getRevision();
}

void IfcDocumentInformation::setRevision(const IfcLabel &value) {
    m_revision = value;
}

void IfcDocumentInformation::unsetRevision() {
    m_revision = Step::getUnset(getRevision());
}

bool IfcDocumentInformation::testRevision() const {
    return !Step::isUnset(getRevision());
}

IfcActorSelect *IfcDocumentInformation::getDocumentOwner() {
    if (Step::BaseObject::inited()) {
        return m_documentOwner.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcDocumentInformation::getDocumentOwner() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getDocumentOwner();
}

void IfcDocumentInformation::setDocumentOwner(const Step::RefPtr< IfcActorSelect > &value) {
    m_documentOwner = value;
}

void IfcDocumentInformation::unsetDocumentOwner() {
    m_documentOwner = Step::getUnset(getDocumentOwner());
}

bool IfcDocumentInformation::testDocumentOwner() const {
    return !Step::isUnset(getDocumentOwner());
}

Set_IfcActorSelect_1_n &IfcDocumentInformation::getEditors() {
    if (Step::BaseObject::inited()) {
        return m_editors;
    }
    else {
        m_editors.setUnset(true);
        return m_editors;
    }
}

const Set_IfcActorSelect_1_n &IfcDocumentInformation::getEditors() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getEditors();
}

void IfcDocumentInformation::setEditors(const Set_IfcActorSelect_1_n &value) {
    m_editors = value;
}

void IfcDocumentInformation::unsetEditors() {
    m_editors.clear();
    m_editors.setUnset(true);
}

bool IfcDocumentInformation::testEditors() const {
    return !m_editors.isUnset();
}

IfcDateAndTime *IfcDocumentInformation::getCreationTime() {
    if (Step::BaseObject::inited()) {
        return m_creationTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateAndTime *IfcDocumentInformation::getCreationTime() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getCreationTime();
}

void IfcDocumentInformation::setCreationTime(const Step::RefPtr< IfcDateAndTime > &value) {
    m_creationTime = value;
}

void IfcDocumentInformation::unsetCreationTime() {
    m_creationTime = Step::getUnset(getCreationTime());
}

bool IfcDocumentInformation::testCreationTime() const {
    return !Step::isUnset(getCreationTime());
}

IfcDateAndTime *IfcDocumentInformation::getLastRevisionTime() {
    if (Step::BaseObject::inited()) {
        return m_lastRevisionTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateAndTime *IfcDocumentInformation::getLastRevisionTime() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getLastRevisionTime();
}

void IfcDocumentInformation::setLastRevisionTime(const Step::RefPtr< IfcDateAndTime > &value) {
    m_lastRevisionTime = value;
}

void IfcDocumentInformation::unsetLastRevisionTime() {
    m_lastRevisionTime = Step::getUnset(getLastRevisionTime());
}

bool IfcDocumentInformation::testLastRevisionTime() const {
    return !Step::isUnset(getLastRevisionTime());
}

IfcDocumentElectronicFormat *IfcDocumentInformation::getElectronicFormat() {
    if (Step::BaseObject::inited()) {
        return m_electronicFormat.get();
    }
    else {
        return NULL;
    }
}

const IfcDocumentElectronicFormat *IfcDocumentInformation::getElectronicFormat() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getElectronicFormat();
}

void IfcDocumentInformation::setElectronicFormat(const Step::RefPtr< IfcDocumentElectronicFormat > &value) {
    m_electronicFormat = value;
}

void IfcDocumentInformation::unsetElectronicFormat() {
    m_electronicFormat = Step::getUnset(getElectronicFormat());
}

bool IfcDocumentInformation::testElectronicFormat() const {
    return !Step::isUnset(getElectronicFormat());
}

IfcCalendarDate *IfcDocumentInformation::getValidFrom() {
    if (Step::BaseObject::inited()) {
        return m_validFrom.get();
    }
    else {
        return NULL;
    }
}

const IfcCalendarDate *IfcDocumentInformation::getValidFrom() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getValidFrom();
}

void IfcDocumentInformation::setValidFrom(const Step::RefPtr< IfcCalendarDate > &value) {
    m_validFrom = value;
}

void IfcDocumentInformation::unsetValidFrom() {
    m_validFrom = Step::getUnset(getValidFrom());
}

bool IfcDocumentInformation::testValidFrom() const {
    return !Step::isUnset(getValidFrom());
}

IfcCalendarDate *IfcDocumentInformation::getValidUntil() {
    if (Step::BaseObject::inited()) {
        return m_validUntil.get();
    }
    else {
        return NULL;
    }
}

const IfcCalendarDate *IfcDocumentInformation::getValidUntil() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getValidUntil();
}

void IfcDocumentInformation::setValidUntil(const Step::RefPtr< IfcCalendarDate > &value) {
    m_validUntil = value;
}

void IfcDocumentInformation::unsetValidUntil() {
    m_validUntil = Step::getUnset(getValidUntil());
}

bool IfcDocumentInformation::testValidUntil() const {
    return !Step::isUnset(getValidUntil());
}

IfcDocumentConfidentialityEnum IfcDocumentInformation::getConfidentiality() {
    if (Step::BaseObject::inited()) {
        return m_confidentiality;
    }
    else {
        return IfcDocumentConfidentialityEnum_UNSET;
    }
}

const IfcDocumentConfidentialityEnum IfcDocumentInformation::getConfidentiality() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getConfidentiality();
}

void IfcDocumentInformation::setConfidentiality(IfcDocumentConfidentialityEnum value) {
    m_confidentiality = value;
}

void IfcDocumentInformation::unsetConfidentiality() {
    m_confidentiality = IfcDocumentConfidentialityEnum_UNSET;
}

bool IfcDocumentInformation::testConfidentiality() const {
    return getConfidentiality() != IfcDocumentConfidentialityEnum_UNSET;
}

IfcDocumentStatusEnum IfcDocumentInformation::getStatus() {
    if (Step::BaseObject::inited()) {
        return m_status;
    }
    else {
        return IfcDocumentStatusEnum_UNSET;
    }
}

const IfcDocumentStatusEnum IfcDocumentInformation::getStatus() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getStatus();
}

void IfcDocumentInformation::setStatus(IfcDocumentStatusEnum value) {
    m_status = value;
}

void IfcDocumentInformation::unsetStatus() {
    m_status = IfcDocumentStatusEnum_UNSET;
}

bool IfcDocumentInformation::testStatus() const {
    return getStatus() != IfcDocumentStatusEnum_UNSET;
}

Inverse_Set_IfcDocumentInformationRelationship_0_n &IfcDocumentInformation::getIsPointedTo() {
    if (Step::BaseObject::inited()) {
        return m_isPointedTo;
    }
    else {
        m_isPointedTo.setUnset(true);
        return m_isPointedTo;
    }
}

const Inverse_Set_IfcDocumentInformationRelationship_0_n &IfcDocumentInformation::getIsPointedTo() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getIsPointedTo();
}

bool IfcDocumentInformation::testIsPointedTo() const {
    return !m_isPointedTo.isUnset();
}

Inverse_Set_IfcDocumentInformationRelationship_0_1 &IfcDocumentInformation::getIsPointer() {
    if (Step::BaseObject::inited()) {
        return m_isPointer;
    }
    else {
        m_isPointer.setUnset(true);
        return m_isPointer;
    }
}

const Inverse_Set_IfcDocumentInformationRelationship_0_1 &IfcDocumentInformation::getIsPointer() const {
    IfcDocumentInformation * deConstObject = const_cast< IfcDocumentInformation * > (this);
    return deConstObject->getIsPointer();
}

bool IfcDocumentInformation::testIsPointer() const {
    return !m_isPointer.isUnset();
}

bool IfcDocumentInformation::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_documentId = Step::getUnset(m_documentId);
    }
    else {
        m_documentId = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_documentReferences.setUnset(true);
    }
    else {
        m_documentReferences.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDocumentReference > attr2;
                attr2 = static_cast< IfcDocumentReference * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_documentReferences.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_purpose = Step::getUnset(m_purpose);
    }
    else {
        m_purpose = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_intendedUse = Step::getUnset(m_intendedUse);
    }
    else {
        m_intendedUse = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scope = Step::getUnset(m_scope);
    }
    else {
        m_scope = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_revision = Step::getUnset(m_revision);
    }
    else {
        m_revision = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_documentOwner = NULL;
    }
    else {
        m_documentOwner = new IfcActorSelect;
        if (arg[0] == '#') {
            m_documentOwner->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_editors.setUnset(true);
    }
    else {
        m_editors.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcActorSelect > attr2;
                attr2 = new IfcActorSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) m_editors.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_creationTime = NULL;
    }
    else {
        m_creationTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lastRevisionTime = NULL;
    }
    else {
        m_lastRevisionTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_electronicFormat = NULL;
    }
    else {
        m_electronicFormat = static_cast< IfcDocumentElectronicFormat * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_validFrom = NULL;
    }
    else {
        m_validFrom = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_validUntil = NULL;
    }
    else {
        m_validUntil = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_confidentiality = IfcDocumentConfidentialityEnum_UNSET;
    }
    else {
        if (arg == ".PUBLIC.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_PUBLIC;
        }
        else if (arg == ".RESTRICTED.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_RESTRICTED;
        }
        else if (arg == ".CONFIDENTIAL.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_CONFIDENTIAL;
        }
        else if (arg == ".PERSONAL.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_PERSONAL;
        }
        else if (arg == ".USERDEFINED.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_status = IfcDocumentStatusEnum_UNSET;
    }
    else {
        if (arg == ".DRAFT.") {
            m_status = IfcDocumentStatusEnum_DRAFT;
        }
        else if (arg == ".FINALDRAFT.") {
            m_status = IfcDocumentStatusEnum_FINALDRAFT;
        }
        else if (arg == ".FINAL.") {
            m_status = IfcDocumentStatusEnum_FINAL;
        }
        else if (arg == ".REVISION.") {
            m_status = IfcDocumentStatusEnum_REVISION;
        }
        else if (arg == ".NOTDEFINED.") {
            m_status = IfcDocumentStatusEnum_NOTDEFINED;
        }
    }
    inverses = m_args->getInverses(IfcDocumentInformationRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_isPointedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isPointedTo.insert(static_cast< IfcDocumentInformationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcDocumentInformationRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_isPointer.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isPointer.insert(static_cast< IfcDocumentInformationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDocumentInformation::copy(const IfcDocumentInformation &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDocumentReference >, 1 >::const_iterator it_m_documentReferences;
    Step::Set< Step::RefPtr< IfcActorSelect >, 1 >::const_iterator it_m_editors;
    Step::BaseEntity::copy(obj, copyop);
    setDocumentId(obj.m_documentId);
    setName(obj.m_name);
    setDescription(obj.m_description);
    for (it_m_documentReferences = obj.m_documentReferences.begin(); it_m_documentReferences != obj.m_documentReferences.end(); ++it_m_documentReferences) {
        Step::RefPtr< IfcDocumentReference > copyTarget = (IfcDocumentReference *) (copyop((*it_m_documentReferences).get()));
        m_documentReferences.insert(copyTarget.get());
    }
    setPurpose(obj.m_purpose);
    setIntendedUse(obj.m_intendedUse);
    setScope(obj.m_scope);
    setRevision(obj.m_revision);
    m_documentOwner = new IfcActorSelect;
    m_documentOwner->copy(*(obj.m_documentOwner.get()), copyop);
    for (it_m_editors = obj.m_editors.begin(); it_m_editors != obj.m_editors.end(); ++it_m_editors) {
        Step::RefPtr< IfcActorSelect > copyTarget = new IfcActorSelect;
        copyTarget->copy(*((*it_m_editors).get()), copyop);
        m_editors.insert(copyTarget.get());
    }
    setCreationTime((IfcDateAndTime*)copyop(obj.m_creationTime.get()));
    setLastRevisionTime((IfcDateAndTime*)copyop(obj.m_lastRevisionTime.get()));
    setElectronicFormat((IfcDocumentElectronicFormat*)copyop(obj.m_electronicFormat.get()));
    setValidFrom((IfcCalendarDate*)copyop(obj.m_validFrom.get()));
    setValidUntil((IfcCalendarDate*)copyop(obj.m_validUntil.get()));
    setConfidentiality(obj.m_confidentiality);
    setStatus(obj.m_status);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDocumentInformation::s_type("IfcDocumentInformation");
