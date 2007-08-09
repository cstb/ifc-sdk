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
#include <ifc2x3/IfcRelAssociatesLibrary.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcLibrarySelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssociatesLibrary::IfcRelAssociatesLibrary(Step::SPFData *args) : IfcRelAssociates(args) {
  m_relatingLibrary = NULL;
}


IfcRelAssociatesLibrary::~IfcRelAssociatesLibrary() {
}

bool IfcRelAssociatesLibrary::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssociatesLibrary(this);
}

const char *IfcRelAssociatesLibrary::type() {
  return "IfcRelAssociatesLibrary";
}

Step::ClassType IfcRelAssociatesLibrary::getClassType() {
  return IfcRelAssociatesLibrary::s_type;
}

Step::ClassType IfcRelAssociatesLibrary::getType() const {
  return IfcRelAssociatesLibrary::s_type;
}

bool IfcRelAssociatesLibrary::isOfType(Step::ClassType t) {
  return IfcRelAssociatesLibrary::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcLibrarySelect *IfcRelAssociatesLibrary::getRelatingLibrary() {
  if (Step::BaseObject::inited()) {
    return m_relatingLibrary.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesLibrary::setRelatingLibrary(const Step::RefPtr< IfcLibrarySelect > &value) {
  m_relatingLibrary = value;
}

void IfcRelAssociatesLibrary::release() {
  IfcRelAssociates::release();
}

bool IfcRelAssociatesLibrary::init() {
  bool status = IfcRelAssociates::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingLibrary = NULL;
  }
  else {
    m_relatingLibrary = new IfcLibrarySelect;
    if (arg[0] == '#') {
      m_relatingLibrary->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesLibrary::s_type = new Step::ClassType_class("IfcRelAssociatesLibrary");
IfcRelAssociatesLibrary_Factory::IfcRelAssociatesLibrary_Factory() {
}

IfcRelAssociatesLibrary_Factory::~IfcRelAssociatesLibrary_Factory() {
  clear(true);
}

void IfcRelAssociatesLibrary_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesLibrary_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesLibrary_Factory::end() {
  return m_idMap.end();
}

IfcRelAssociatesLibrary *IfcRelAssociatesLibrary_Factory::get(Step::StepId id) {
  IfcRelAssociatesLibrary *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssociatesLibrary * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssociatesLibrary_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssociatesLibrary * > (create(id));
  }
}

Step::BaseObject *IfcRelAssociatesLibrary_Factory::create(Step::StepId id) {
  IfcRelAssociatesLibrary *ret = new IfcRelAssociatesLibrary(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesLibrary_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssociatesLibrary *ret = new IfcRelAssociatesLibrary(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesLibrary_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssociatesLibrary *ret = new IfcRelAssociatesLibrary(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssociatesLibrary *IfcRelAssociatesLibrary_Factory::generate() {
  return static_cast< IfcRelAssociatesLibrary * > (create(m_model->getNewId()));
}

IfcRelAssociatesLibrary *IfcRelAssociatesLibrary_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssociatesLibrary * > (it->second);
  }
  else {
    return NULL;
  }
}

