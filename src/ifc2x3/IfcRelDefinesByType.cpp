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
#include <ifc2x3/IfcRelDefinesByType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcTypeObject.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelDefinesByType::IfcRelDefinesByType(Step::SPFData *args) : IfcRelDefines(args) {
  m_relatingType = NULL;
}


IfcRelDefinesByType::~IfcRelDefinesByType() {
}

bool IfcRelDefinesByType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelDefinesByType(this);
}

const char *IfcRelDefinesByType::type() {
  return "IfcRelDefinesByType";
}

Step::ClassType IfcRelDefinesByType::getClassType() {
  return IfcRelDefinesByType::s_type;
}

Step::ClassType IfcRelDefinesByType::getType() const {
  return IfcRelDefinesByType::s_type;
}

bool IfcRelDefinesByType::isOfType(Step::ClassType t) {
  return IfcRelDefinesByType::s_type == t ? true : IfcRelDefines::isOfType(t);
}

IfcTypeObject *IfcRelDefinesByType::getRelatingType() {
  if (Step::BaseObject::inited()) {
    return m_relatingType.get();
  }
  else {
    return NULL;
  }
}

void IfcRelDefinesByType::setRelatingType(const Step::RefPtr< IfcTypeObject > &value) {
  m_relatingType = value;
}

void IfcRelDefinesByType::release() {
  IfcRelDefines::release();
  m_relatingType.release();
}

bool IfcRelDefinesByType::init() {
  bool status = IfcRelDefines::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingType = NULL;
  }
  else {
    m_relatingType = static_cast< IfcTypeObject * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelDefinesByType::s_type = new Step::ClassType_class("IfcRelDefinesByType");
IfcRelDefinesByType_Factory::IfcRelDefinesByType_Factory() {
}

IfcRelDefinesByType_Factory::~IfcRelDefinesByType_Factory() {
  clear(true);
}

void IfcRelDefinesByType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelDefinesByType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelDefinesByType_Factory::end() {
  return m_idMap.end();
}

IfcRelDefinesByType *IfcRelDefinesByType_Factory::get(Step::StepId id) {
  IfcRelDefinesByType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelDefinesByType * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelDefinesByType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelDefinesByType * > (create(id));
  }
}

Step::BaseObject *IfcRelDefinesByType_Factory::create(Step::StepId id) {
  IfcRelDefinesByType *ret = new IfcRelDefinesByType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelDefinesByType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelDefinesByType *ret = new IfcRelDefinesByType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelDefinesByType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelDefinesByType *ret = new IfcRelDefinesByType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelDefinesByType *IfcRelDefinesByType_Factory::generate() {
  return static_cast< IfcRelDefinesByType * > (create(m_model->getNewId()));
}

IfcRelDefinesByType *IfcRelDefinesByType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelDefinesByType * > (it->second);
  }
  else {
    return NULL;
  }
}

