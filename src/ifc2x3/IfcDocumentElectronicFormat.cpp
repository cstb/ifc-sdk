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
#include <ifc2x3/IfcDocumentElectronicFormat.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDocumentElectronicFormat::IfcDocumentElectronicFormat(Step::SPFData *args) : Step::BaseObject(args) {
  m_fileExtension = getUnset(m_fileExtension);
  m_mimeContentType = getUnset(m_mimeContentType);
  m_mimeSubtype = getUnset(m_mimeSubtype);
}


IfcDocumentElectronicFormat::~IfcDocumentElectronicFormat() {
}

bool IfcDocumentElectronicFormat::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDocumentElectronicFormat(this);
}

const char *IfcDocumentElectronicFormat::type() {
  return "IfcDocumentElectronicFormat";
}

Step::ClassType IfcDocumentElectronicFormat::getClassType() {
  return IfcDocumentElectronicFormat::s_type;
}

Step::ClassType IfcDocumentElectronicFormat::getType() const {
  return IfcDocumentElectronicFormat::s_type;
}

bool IfcDocumentElectronicFormat::isOfType(Step::ClassType t) {
  return IfcDocumentElectronicFormat::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcDocumentElectronicFormat::getFileExtension() {
  if (Step::BaseObject::inited()) {
    return m_fileExtension;
  }
  else {
    return getUnset(m_fileExtension);
  }
}

void IfcDocumentElectronicFormat::setFileExtension(const IfcLabel &value) {
  m_fileExtension = value;
}

IfcLabel IfcDocumentElectronicFormat::getMimeContentType() {
  if (Step::BaseObject::inited()) {
    return m_mimeContentType;
  }
  else {
    return getUnset(m_mimeContentType);
  }
}

void IfcDocumentElectronicFormat::setMimeContentType(const IfcLabel &value) {
  m_mimeContentType = value;
}

IfcLabel IfcDocumentElectronicFormat::getMimeSubtype() {
  if (Step::BaseObject::inited()) {
    return m_mimeSubtype;
  }
  else {
    return getUnset(m_mimeSubtype);
  }
}

void IfcDocumentElectronicFormat::setMimeSubtype(const IfcLabel &value) {
  m_mimeSubtype = value;
}

void IfcDocumentElectronicFormat::release() {
}

bool IfcDocumentElectronicFormat::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_fileExtension = getUnset(m_fileExtension);
  }
  else {
    m_fileExtension = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mimeContentType = getUnset(m_mimeContentType);
  }
  else {
    m_mimeContentType = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_mimeSubtype = getUnset(m_mimeSubtype);
  }
  else {
    m_mimeSubtype = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentElectronicFormat::s_type = new Step::ClassType_class("IfcDocumentElectronicFormat");
IfcDocumentElectronicFormat_Factory::IfcDocumentElectronicFormat_Factory() {
}

IfcDocumentElectronicFormat_Factory::~IfcDocumentElectronicFormat_Factory() {
  clear(true);
}

void IfcDocumentElectronicFormat_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDocumentElectronicFormat_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDocumentElectronicFormat_Factory::end() {
  return m_idMap.end();
}

IfcDocumentElectronicFormat *IfcDocumentElectronicFormat_Factory::get(Step::StepId id) {
  IfcDocumentElectronicFormat *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDocumentElectronicFormat * > (it->second);
  }
  else {
    LOG_ERROR("IfcDocumentElectronicFormat_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDocumentElectronicFormat * > (create(id));
  }
}

Step::BaseObject *IfcDocumentElectronicFormat_Factory::create(Step::StepId id) {
  IfcDocumentElectronicFormat *ret = new IfcDocumentElectronicFormat(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDocumentElectronicFormat_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDocumentElectronicFormat *ret = new IfcDocumentElectronicFormat(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDocumentElectronicFormat_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDocumentElectronicFormat *ret = new IfcDocumentElectronicFormat(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDocumentElectronicFormat *IfcDocumentElectronicFormat_Factory::generate() {
  return static_cast< IfcDocumentElectronicFormat * > (create(m_model->getNewId()));
}

IfcDocumentElectronicFormat *IfcDocumentElectronicFormat_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDocumentElectronicFormat * > (it->second);
  }
  else {
    return NULL;
  }
}

