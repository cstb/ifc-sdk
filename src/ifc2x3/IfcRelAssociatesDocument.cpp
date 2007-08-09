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
#include <ifc2x3/IfcRelAssociatesDocument.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDocumentSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssociatesDocument::IfcRelAssociatesDocument(Step::SPFData *args) : IfcRelAssociates(args) {
  m_relatingDocument = NULL;
}


IfcRelAssociatesDocument::~IfcRelAssociatesDocument() {
}

bool IfcRelAssociatesDocument::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssociatesDocument(this);
}

const char *IfcRelAssociatesDocument::type() {
  return "IfcRelAssociatesDocument";
}

Step::ClassType IfcRelAssociatesDocument::getClassType() {
  return IfcRelAssociatesDocument::s_type;
}

Step::ClassType IfcRelAssociatesDocument::getType() const {
  return IfcRelAssociatesDocument::s_type;
}

bool IfcRelAssociatesDocument::isOfType(Step::ClassType t) {
  return IfcRelAssociatesDocument::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcDocumentSelect *IfcRelAssociatesDocument::getRelatingDocument() {
  if (Step::BaseObject::inited()) {
    return m_relatingDocument.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesDocument::setRelatingDocument(const Step::RefPtr< IfcDocumentSelect > &value) {
  m_relatingDocument = value;
}

void IfcRelAssociatesDocument::release() {
  IfcRelAssociates::release();
}

bool IfcRelAssociatesDocument::init() {
  bool status = IfcRelAssociates::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingDocument = NULL;
  }
  else {
    m_relatingDocument = new IfcDocumentSelect;
    if (arg[0] == '#') {
      m_relatingDocument->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesDocument::s_type = new Step::ClassType_class("IfcRelAssociatesDocument");
IfcRelAssociatesDocument_Factory::IfcRelAssociatesDocument_Factory() {
}

IfcRelAssociatesDocument_Factory::~IfcRelAssociatesDocument_Factory() {
  clear(true);
}

void IfcRelAssociatesDocument_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesDocument_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesDocument_Factory::end() {
  return m_idMap.end();
}

IfcRelAssociatesDocument *IfcRelAssociatesDocument_Factory::get(Step::StepId id) {
  IfcRelAssociatesDocument *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssociatesDocument * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssociatesDocument_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssociatesDocument * > (create(id));
  }
}

Step::BaseObject *IfcRelAssociatesDocument_Factory::create(Step::StepId id) {
  IfcRelAssociatesDocument *ret = new IfcRelAssociatesDocument(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesDocument_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssociatesDocument *ret = new IfcRelAssociatesDocument(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesDocument_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssociatesDocument *ret = new IfcRelAssociatesDocument(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssociatesDocument *IfcRelAssociatesDocument_Factory::generate() {
  return static_cast< IfcRelAssociatesDocument * > (create(m_model->getNewId()));
}

IfcRelAssociatesDocument *IfcRelAssociatesDocument_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssociatesDocument * > (it->second);
  }
  else {
    return NULL;
  }
}

