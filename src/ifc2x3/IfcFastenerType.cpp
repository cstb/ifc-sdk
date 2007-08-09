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
#include <ifc2x3/IfcFastenerType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFastenerType::IfcFastenerType(Step::SPFData *args) : IfcElementComponentType(args) {
}


IfcFastenerType::~IfcFastenerType() {
}

bool IfcFastenerType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFastenerType(this);
}

const char *IfcFastenerType::type() {
  return "IfcFastenerType";
}

Step::ClassType IfcFastenerType::getClassType() {
  return IfcFastenerType::s_type;
}

Step::ClassType IfcFastenerType::getType() const {
  return IfcFastenerType::s_type;
}

bool IfcFastenerType::isOfType(Step::ClassType t) {
  return IfcFastenerType::s_type == t ? true : IfcElementComponentType::isOfType(t);
}

void IfcFastenerType::release() {
  IfcElementComponentType::release();
}

bool IfcFastenerType::init() {
  bool status = IfcElementComponentType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFastenerType::s_type = new Step::ClassType_class("IfcFastenerType");
IfcFastenerType_Factory::IfcFastenerType_Factory() {
}

IfcFastenerType_Factory::~IfcFastenerType_Factory() {
  clear(true);
}

void IfcFastenerType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFastenerType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFastenerType_Factory::end() {
  return m_idMap.end();
}

IfcFastenerType *IfcFastenerType_Factory::get(Step::StepId id) {
  IfcFastenerType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFastenerType * > (it->second);
  }
  else {
    LOG_ERROR("IfcFastenerType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFastenerType * > (create(id));
  }
}

Step::BaseObject *IfcFastenerType_Factory::create(Step::StepId id) {
  IfcFastenerType *ret = new IfcFastenerType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFastenerType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFastenerType *ret = new IfcFastenerType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFastenerType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFastenerType *ret = new IfcFastenerType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFastenerType *IfcFastenerType_Factory::generate() {
  return static_cast< IfcFastenerType * > (create(m_model->getNewId()));
}

IfcFastenerType *IfcFastenerType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFastenerType * > (it->second);
  }
  else {
    return NULL;
  }
}

