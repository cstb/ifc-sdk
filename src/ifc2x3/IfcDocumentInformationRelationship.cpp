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
#include <ifc2x3/IfcDocumentInformationRelationship.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDocumentInformationRelationship::IfcDocumentInformationRelationship(Step::SPFData *args) : Step::BaseObject(args) {
  m_relatingDocument = NULL;
  m_relatedDocuments.setUnset(true);
  m_relationshipType = getUnset(m_relationshipType);
}


IfcDocumentInformationRelationship::~IfcDocumentInformationRelationship() {
}

bool IfcDocumentInformationRelationship::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDocumentInformationRelationship(this);
}

const char *IfcDocumentInformationRelationship::type() {
  return "IfcDocumentInformationRelationship";
}

Step::ClassType IfcDocumentInformationRelationship::getClassType() {
  return IfcDocumentInformationRelationship::s_type;
}

Step::ClassType IfcDocumentInformationRelationship::getType() const {
  return IfcDocumentInformationRelationship::s_type;
}

bool IfcDocumentInformationRelationship::isOfType(Step::ClassType t) {
  return IfcDocumentInformationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDocumentInformation *IfcDocumentInformationRelationship::getRelatingDocument() {
  if (Step::BaseObject::inited()) {
    return m_relatingDocument.get();
  }
  else {
    return NULL;
  }
}

void IfcDocumentInformationRelationship::setRelatingDocument(const Step::RefPtr< IfcDocumentInformation > &value) {
  m_relatingDocument = value;
}

Step::StepSet< Step::RefPtr< IfcDocumentInformation > > &IfcDocumentInformationRelationship::getRelatedDocuments() {
  if (Step::BaseObject::inited()) {
    return m_relatedDocuments;
  }
  else {
    m_relatedDocuments.setUnset(true);
    return m_relatedDocuments;
  }
}

void IfcDocumentInformationRelationship::setRelatedDocuments(const Step::StepSet< Step::RefPtr< IfcDocumentInformation > > &value) {
  m_relatedDocuments = value;
}

IfcLabel IfcDocumentInformationRelationship::getRelationshipType() {
  if (Step::BaseObject::inited()) {
    return m_relationshipType;
  }
  else {
    return getUnset(m_relationshipType);
  }
}

void IfcDocumentInformationRelationship::setRelationshipType(const IfcLabel &value) {
  m_relationshipType = value;
}

void IfcDocumentInformationRelationship::release() {
  m_relatingDocument.release();
  m_relatedDocuments.clear();
}

bool IfcDocumentInformationRelationship::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingDocument = NULL;
  }
  else {
    m_relatingDocument = static_cast< IfcDocumentInformation * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedDocuments.setUnset(true);
  }
  else {
    m_relatedDocuments.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcDocumentInformation > attr2;
        attr2 = static_cast< IfcDocumentInformation * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_relatedDocuments.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relationshipType = getUnset(m_relationshipType);
  }
  else {
    m_relationshipType = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentInformationRelationship::s_type = new Step::ClassType_class("IfcDocumentInformationRelationship");
IfcDocumentInformationRelationship_Factory::IfcDocumentInformationRelationship_Factory() {
}

IfcDocumentInformationRelationship_Factory::~IfcDocumentInformationRelationship_Factory() {
  clear(true);
}

void IfcDocumentInformationRelationship_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDocumentInformationRelationship_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDocumentInformationRelationship_Factory::end() {
  return m_idMap.end();
}

IfcDocumentInformationRelationship *IfcDocumentInformationRelationship_Factory::get(Step::StepId id) {
  IfcDocumentInformationRelationship *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDocumentInformationRelationship * > (it->second);
  }
  else {
    LOG_ERROR("IfcDocumentInformationRelationship_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDocumentInformationRelationship * > (create(id));
  }
}

Step::BaseObject *IfcDocumentInformationRelationship_Factory::create(Step::StepId id) {
  IfcDocumentInformationRelationship *ret = new IfcDocumentInformationRelationship(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDocumentInformationRelationship_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDocumentInformationRelationship *ret = new IfcDocumentInformationRelationship(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDocumentInformationRelationship_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDocumentInformationRelationship *ret = new IfcDocumentInformationRelationship(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDocumentInformationRelationship *IfcDocumentInformationRelationship_Factory::generate() {
  return static_cast< IfcDocumentInformationRelationship * > (create(m_model->getNewId()));
}

IfcDocumentInformationRelationship *IfcDocumentInformationRelationship_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDocumentInformationRelationship * > (it->second);
  }
  else {
    return NULL;
  }
}

