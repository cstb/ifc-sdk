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
#include <ifc2x3/IfcDocumentReference.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDocumentReference::IfcDocumentReference(Step::SPFData *args) : IfcExternalReference(args) {
  m_referenceToDocument.setUnset(true);
}


IfcDocumentReference::~IfcDocumentReference() {
}

bool IfcDocumentReference::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDocumentReference(this);
}

const char *IfcDocumentReference::type() {
  return "IfcDocumentReference";
}

Step::ClassType IfcDocumentReference::getClassType() {
  return IfcDocumentReference::s_type;
}

Step::ClassType IfcDocumentReference::getType() const {
  return IfcDocumentReference::s_type;
}

bool IfcDocumentReference::isOfType(Step::ClassType t) {
  return IfcDocumentReference::s_type == t ? true : IfcExternalReference::isOfType(t);
}

Step::StepSet< Step::RefPtr< IfcDocumentInformation > > &IfcDocumentReference::getReferenceToDocument() {
  if (Step::BaseObject::inited()) {
    return m_referenceToDocument;
  }
  else {
    m_referenceToDocument.setUnset(true);
    return m_referenceToDocument;
  }
}

void IfcDocumentReference::setReferenceToDocument(const Step::StepSet< Step::RefPtr< IfcDocumentInformation > > &value) {
  m_referenceToDocument = value;
}

void IfcDocumentReference::release() {
  IfcExternalReference::release();
}

bool IfcDocumentReference::init() {
  bool status = IfcExternalReference::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  inverses = m_args->getInverses(IfcDocumentInformation::getClassType(), 3);
  if (inverses) {
    unsigned int i;
    m_referenceToDocument.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_referenceToDocument.insert(static_cast< IfcDocumentInformation * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentReference::s_type = new Step::ClassType_class("IfcDocumentReference");
IfcDocumentReference_Factory::IfcDocumentReference_Factory() {
}

IfcDocumentReference_Factory::~IfcDocumentReference_Factory() {
  clear(true);
}

void IfcDocumentReference_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDocumentReference_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDocumentReference_Factory::end() {
  return m_idMap.end();
}

IfcDocumentReference *IfcDocumentReference_Factory::get(Step::StepId id) {
  IfcDocumentReference *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDocumentReference * > (it->second);
  }
  else {
    LOG_ERROR("IfcDocumentReference_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDocumentReference * > (create(id));
  }
}

Step::BaseObject *IfcDocumentReference_Factory::create(Step::StepId id) {
  IfcDocumentReference *ret = new IfcDocumentReference(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDocumentReference_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDocumentReference *ret = new IfcDocumentReference(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDocumentReference_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDocumentReference *ret = new IfcDocumentReference(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDocumentReference *IfcDocumentReference_Factory::generate() {
  return static_cast< IfcDocumentReference * > (create(m_model->getNewId()));
}

IfcDocumentReference *IfcDocumentReference_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDocumentReference * > (it->second);
  }
  else {
    return NULL;
  }
}

