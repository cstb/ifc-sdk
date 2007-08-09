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
#include <ifc2x3/IfcReferencesValueDocument.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/IfcDocumentSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcReferencesValueDocument::IfcReferencesValueDocument(Step::SPFData *args) : Step::BaseObject(args) {
  m_referencedDocument = NULL;
  m_referencingValues.setUnset(true);
  m_name = getUnset(m_name);
  m_description = getUnset(m_description);
}


IfcReferencesValueDocument::~IfcReferencesValueDocument() {
}

bool IfcReferencesValueDocument::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcReferencesValueDocument(this);
}

const char *IfcReferencesValueDocument::type() {
  return "IfcReferencesValueDocument";
}

Step::ClassType IfcReferencesValueDocument::getClassType() {
  return IfcReferencesValueDocument::s_type;
}

Step::ClassType IfcReferencesValueDocument::getType() const {
  return IfcReferencesValueDocument::s_type;
}

bool IfcReferencesValueDocument::isOfType(Step::ClassType t) {
  return IfcReferencesValueDocument::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDocumentSelect *IfcReferencesValueDocument::getReferencedDocument() {
  if (Step::BaseObject::inited()) {
    return m_referencedDocument.get();
  }
  else {
    return NULL;
  }
}

void IfcReferencesValueDocument::setReferencedDocument(const Step::RefPtr< IfcDocumentSelect > &value) {
  m_referencedDocument = value;
}

Step::StepSet< Step::RefPtr< IfcAppliedValue > > &IfcReferencesValueDocument::getReferencingValues() {
  if (Step::BaseObject::inited()) {
    return m_referencingValues;
  }
  else {
    m_referencingValues.setUnset(true);
    return m_referencingValues;
  }
}

void IfcReferencesValueDocument::setReferencingValues(const Step::StepSet< Step::RefPtr< IfcAppliedValue > > &value) {
  m_referencingValues = value;
}

IfcLabel IfcReferencesValueDocument::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcReferencesValueDocument::setName(const IfcLabel &value) {
  m_name = value;
}

IfcText IfcReferencesValueDocument::getDescription() {
  if (Step::BaseObject::inited()) {
    return m_description;
  }
  else {
    return getUnset(m_description);
  }
}

void IfcReferencesValueDocument::setDescription(const IfcText &value) {
  m_description = value;
}

void IfcReferencesValueDocument::release() {
  m_referencingValues.clear();
}

bool IfcReferencesValueDocument::init() {
  std::string arg;
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_referencedDocument = NULL;
  }
  else {
    m_referencedDocument = new IfcDocumentSelect;
    if (arg[0] == '#') {
      m_referencedDocument->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_referencingValues.setUnset(true);
  }
  else {
    m_referencingValues.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcAppliedValue > attr2;
        attr2 = static_cast< IfcAppliedValue * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_referencingValues.insert(attr2);
      }
      else {
        break;
      }
    }
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
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferencesValueDocument::s_type = new Step::ClassType_class("IfcReferencesValueDocument");
IfcReferencesValueDocument_Factory::IfcReferencesValueDocument_Factory() {
}

IfcReferencesValueDocument_Factory::~IfcReferencesValueDocument_Factory() {
  clear(true);
}

void IfcReferencesValueDocument_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReferencesValueDocument_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReferencesValueDocument_Factory::end() {
  return m_idMap.end();
}

IfcReferencesValueDocument *IfcReferencesValueDocument_Factory::get(Step::StepId id) {
  IfcReferencesValueDocument *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcReferencesValueDocument * > (it->second);
  }
  else {
    LOG_ERROR("IfcReferencesValueDocument_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcReferencesValueDocument * > (create(id));
  }
}

Step::BaseObject *IfcReferencesValueDocument_Factory::create(Step::StepId id) {
  IfcReferencesValueDocument *ret = new IfcReferencesValueDocument(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcReferencesValueDocument_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcReferencesValueDocument *ret = new IfcReferencesValueDocument(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcReferencesValueDocument_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcReferencesValueDocument *ret = new IfcReferencesValueDocument(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcReferencesValueDocument *IfcReferencesValueDocument_Factory::generate() {
  return static_cast< IfcReferencesValueDocument * > (create(m_model->getNewId()));
}

IfcReferencesValueDocument *IfcReferencesValueDocument_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcReferencesValueDocument * > (it->second);
  }
  else {
    return NULL;
  }
}

