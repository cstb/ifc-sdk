/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include <MemoryLeak.h>
#include <ifc2x3/IfcDocumentInformation.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcDocumentElectronicFormat.h>
#include <ifc2x3/IfcDocumentInformationRelationship.h>
#include <ifc2x3/IfcDocumentReference.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDocumentInformation::IfcDocumentInformation(Step::SPFData *args) : Step::BaseObject(args) {
  m_documentId = getUnset(m_documentId);
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
  m_documentReferences.setUnset(true);
  m_purpose = getUnset(m_purpose);
  m_intendedUse = getUnset(m_intendedUse);
  m_scope = getUnset(m_scope);
  m_revision = getUnset(m_revision);
  m_documentOwner = NULL;
  m_editors.setUnset(true);
  m_creationTime = NULL;
  m_lastRevisionTime = NULL;
  m_electronicFormat = NULL;
  m_validFrom = NULL;
  m_validUntil = NULL;
  m_confidentiality = IfcDocumentConfidentialityEnum_UNSET;
  m_status = IfcDocumentStatusEnum_UNSET;
  m_isPointedTo.setUnset(true);
  m_isPointer.setUnset(true);
}


IfcDocumentInformation::~IfcDocumentInformation() {
}

bool IfcDocumentInformation::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDocumentInformation(this);
}

const char *IfcDocumentInformation::type() {
  return "IfcDocumentInformation";
}

Step::ClassType IfcDocumentInformation::getClassType() {
  return IfcDocumentInformation::s_type;
}

Step::ClassType IfcDocumentInformation::getType() const {
  return IfcDocumentInformation::s_type;
}

bool IfcDocumentInformation::isOfType(Step::ClassType t) {
  return IfcDocumentInformation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcDocumentInformation::getDocumentId() {
  if (Step::BaseObject::inited()) {
    return m_documentId;
  }
  else {
    return getUnset(m_documentId);
  }
}

void IfcDocumentInformation::setDocumentId(const IfcIdentifier &value) {
  m_documentId = value;
}

IfcLabel IfcDocumentInformation::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcDocumentInformation::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcDocumentInformation::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcDocumentInformation::setDescription(const IfcText &value) {
  m_description = value;
}

Step::StepSet< Step::RefPtr< IfcDocumentReference > > &IfcDocumentInformation::getDocumentReferences() {
  if (Step::BaseObject::inited()) {
    return m_documentReferences;
  }
  else {
    m_documentReferences.setUnset(true);
    return m_documentReferences;
  }
}

void IfcDocumentInformation::setDocumentReferences(const Step::StepSet< Step::RefPtr< IfcDocumentReference > > &value) {
  m_documentReferences = value;
}

IfcText IfcDocumentInformation::getPurpose() {
  if (Step::BaseObject::inited()) {
    return m_purpose;
  }
  else {
    return getUnset(m_purpose);
  }
}

void IfcDocumentInformation::setPurpose(const IfcText &value) {
  m_purpose = value;
}

IfcText IfcDocumentInformation::getIntendedUse() {
  if (Step::BaseObject::inited()) {
    return m_intendedUse;
  }
  else {
    return getUnset(m_intendedUse);
  }
}

void IfcDocumentInformation::setIntendedUse(const IfcText &value) {
  m_intendedUse = value;
}

IfcText IfcDocumentInformation::getScope() {
  if (Step::BaseObject::inited()) {
    return m_scope;
  }
  else {
    return getUnset(m_scope);
  }
}

void IfcDocumentInformation::setScope(const IfcText &value) {
  m_scope = value;
}

IfcLabel IfcDocumentInformation::getRevision() {
  if (Step::BaseObject::inited()) {
    return m_revision;
  }
  else {
    return getUnset(m_revision);
  }
}

void IfcDocumentInformation::setRevision(const IfcLabel &value) {
  m_revision = value;
}

IfcActorSelect *IfcDocumentInformation::getDocumentOwner() {
  if (Step::BaseObject::inited()) {
    return m_documentOwner.get();
  }
  else {
    return NULL;
  }
}

void IfcDocumentInformation::setDocumentOwner(const Step::RefPtr< IfcActorSelect > &value) {
  m_documentOwner = value;
}

Step::StepSet< Step::RefPtr< IfcActorSelect > > &IfcDocumentInformation::getEditors() {
  if (Step::BaseObject::inited()) {
    return m_editors;
  }
  else {
    m_editors.setUnset(true);
    return m_editors;
  }
}

void IfcDocumentInformation::setEditors(const Step::StepSet< Step::RefPtr< IfcActorSelect > > &value) {
  m_editors = value;
}

IfcDateAndTime *IfcDocumentInformation::getCreationTime() {
  if (Step::BaseObject::inited()) {
    return m_creationTime.get();
  }
  else {
    return NULL;
  }
}

void IfcDocumentInformation::setCreationTime(const Step::RefPtr< IfcDateAndTime > &value) {
  m_creationTime = value;
}

IfcDateAndTime *IfcDocumentInformation::getLastRevisionTime() {
  if (Step::BaseObject::inited()) {
    return m_lastRevisionTime.get();
  }
  else {
    return NULL;
  }
}

void IfcDocumentInformation::setLastRevisionTime(const Step::RefPtr< IfcDateAndTime > &value) {
  m_lastRevisionTime = value;
}

IfcDocumentElectronicFormat *IfcDocumentInformation::getElectronicFormat() {
  if (Step::BaseObject::inited()) {
    return m_electronicFormat.get();
  }
  else {
    return NULL;
  }
}

void IfcDocumentInformation::setElectronicFormat(const Step::RefPtr< IfcDocumentElectronicFormat > &value) {
  m_electronicFormat = value;
}

IfcCalendarDate *IfcDocumentInformation::getValidFrom() {
  if (Step::BaseObject::inited()) {
    return m_validFrom.get();
  }
  else {
    return NULL;
  }
}

void IfcDocumentInformation::setValidFrom(const Step::RefPtr< IfcCalendarDate > &value) {
  m_validFrom = value;
}

IfcCalendarDate *IfcDocumentInformation::getValidUntil() {
  if (Step::BaseObject::inited()) {
    return m_validUntil.get();
  }
  else {
    return NULL;
  }
}

void IfcDocumentInformation::setValidUntil(const Step::RefPtr< IfcCalendarDate > &value) {
  m_validUntil = value;
}

IfcDocumentConfidentialityEnum IfcDocumentInformation::getConfidentiality() {
  if (Step::BaseObject::inited()) {
    return m_confidentiality;
  }
  else {
    return IfcDocumentConfidentialityEnum_UNSET;
  }
}

void IfcDocumentInformation::setConfidentiality(IfcDocumentConfidentialityEnum value) {
  m_confidentiality = value;
}

IfcDocumentStatusEnum IfcDocumentInformation::getStatus() {
  if (Step::BaseObject::inited()) {
    return m_status;
  }
  else {
    return IfcDocumentStatusEnum_UNSET;
  }
}

void IfcDocumentInformation::setStatus(IfcDocumentStatusEnum value) {
  m_status = value;
}

Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > &IfcDocumentInformation::getIsPointedTo() {
  if (Step::BaseObject::inited()) {
    return m_isPointedTo;
  }
  else {
    m_isPointedTo.setUnset(true);
    return m_isPointedTo;
  }
}

void IfcDocumentInformation::setIsPointedTo(const Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > &value) {
  m_isPointedTo = value;
}

Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > &IfcDocumentInformation::getIsPointer() {
  if (Step::BaseObject::inited()) {
    return m_isPointer;
  }
  else {
    m_isPointer.setUnset(true);
    return m_isPointer;
  }
}

void IfcDocumentInformation::setIsPointer(const Step::StepSet< Step::RefPtr< IfcDocumentInformationRelationship > > &value) {
  m_isPointer = value;
}

void IfcDocumentInformation::release() {
  m_documentReferences.clear();
  m_editors.clear();
  m_creationTime.release();
  m_lastRevisionTime.release();
  m_electronicFormat.release();
  m_validFrom.release();
  m_validUntil.release();
}

bool IfcDocumentInformation::init() {
  std::string arg;
  std::vector< Step::StepId > *inverses;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_documentId = getUnset(m_documentId);
  }
  else {
    m_documentId = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_description = getUnset(m_description);
  }
  else {
    m_description = Step::spfToString(arg);
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
        attr2 = static_cast< IfcDocumentReference * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_documentReferences.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_purpose = getUnset(m_purpose);
  }
  else {
    m_purpose = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_intendedUse = getUnset(m_intendedUse);
  }
  else {
    m_intendedUse = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_scope = getUnset(m_scope);
  }
  else {
    m_scope = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_revision = getUnset(m_revision);
  }
  else {
    m_revision = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_documentOwner = NULL;
  }
  else {
    m_documentOwner = new IfcActorSelect;
    if (arg[0] == '#') {
      m_documentOwner->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
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
          attr2->set(m_model->getObjectById(atoi(str1.c_str() + 1)));
        }
        else if (str1[str1.length() - 1] == ')') {
          std::string type2;
          unsigned int i2;
          i2 = str1.find('(');
          if (i2 != std::string::npos) {
            type2 = str1.substr(0, i2);
            str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
          }
        }
        m_editors.insert(attr2);
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
    m_creationTime = static_cast< IfcDateAndTime * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lastRevisionTime = NULL;
  }
  else {
    m_lastRevisionTime = static_cast< IfcDateAndTime * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_electronicFormat = NULL;
  }
  else {
    m_electronicFormat = static_cast< IfcDocumentElectronicFormat * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_validFrom = NULL;
  }
  else {
    m_validFrom = static_cast< IfcCalendarDate * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_validUntil = NULL;
  }
  else {
    m_validUntil = static_cast< IfcCalendarDate * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
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
      m_isPointedTo.insert(static_cast< IfcDocumentInformationRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcDocumentInformationRelationship::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_isPointer.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isPointer.insert(static_cast< IfcDocumentInformationRelationship * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentInformation::s_type = new Step::ClassType_class("IfcDocumentInformation");
IfcDocumentInformation_Factory::IfcDocumentInformation_Factory() {
}

IfcDocumentInformation_Factory::~IfcDocumentInformation_Factory() {
  clear(true);
}

void IfcDocumentInformation_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDocumentInformation_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDocumentInformation_Factory::end() {
  return m_idMap.end();
}

IfcDocumentInformation *IfcDocumentInformation_Factory::get(Step::StepId id) {
  IfcDocumentInformation *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDocumentInformation * > (it->second);
  }
  else {
    LOG_ERROR("IfcDocumentInformation_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDocumentInformation * > (create(id));
  }
}

Step::BaseObject *IfcDocumentInformation_Factory::create(Step::StepId id) {
  IfcDocumentInformation *ret = new IfcDocumentInformation(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDocumentInformation_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDocumentInformation *ret = new IfcDocumentInformation(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDocumentInformation_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDocumentInformation *ret = new IfcDocumentInformation(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDocumentInformation *IfcDocumentInformation_Factory::generate() {
  return static_cast< IfcDocumentInformation * > (create(m_model->getNewId()));
}

IfcDocumentInformation *IfcDocumentInformation_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDocumentInformation * > (it->second);
  }
  else {
    return NULL;
  }
}

