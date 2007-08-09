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
#include <ifc2x3/IfcDiscreteAccessoryType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDiscreteAccessoryType::IfcDiscreteAccessoryType(Step::SPFData *args) : IfcElementComponentType(args) {
}


IfcDiscreteAccessoryType::~IfcDiscreteAccessoryType() {
}

bool IfcDiscreteAccessoryType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDiscreteAccessoryType(this);
}

const char *IfcDiscreteAccessoryType::type() {
  return "IfcDiscreteAccessoryType";
}

Step::ClassType IfcDiscreteAccessoryType::getClassType() {
  return IfcDiscreteAccessoryType::s_type;
}

Step::ClassType IfcDiscreteAccessoryType::getType() const {
  return IfcDiscreteAccessoryType::s_type;
}

bool IfcDiscreteAccessoryType::isOfType(Step::ClassType t) {
  return IfcDiscreteAccessoryType::s_type == t ? true : IfcElementComponentType::isOfType(t);
}

void IfcDiscreteAccessoryType::release() {
  IfcElementComponentType::release();
}

bool IfcDiscreteAccessoryType::init() {
  bool status = IfcElementComponentType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDiscreteAccessoryType::s_type = new Step::ClassType_class("IfcDiscreteAccessoryType");
IfcDiscreteAccessoryType_Factory::IfcDiscreteAccessoryType_Factory() {
}

IfcDiscreteAccessoryType_Factory::~IfcDiscreteAccessoryType_Factory() {
  clear(true);
}

void IfcDiscreteAccessoryType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDiscreteAccessoryType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDiscreteAccessoryType_Factory::end() {
  return m_idMap.end();
}

IfcDiscreteAccessoryType *IfcDiscreteAccessoryType_Factory::get(Step::StepId id) {
  IfcDiscreteAccessoryType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDiscreteAccessoryType * > (it->second);
  }
  else {
    LOG_ERROR("IfcDiscreteAccessoryType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDiscreteAccessoryType * > (create(id));
  }
}

Step::BaseObject *IfcDiscreteAccessoryType_Factory::create(Step::StepId id) {
  IfcDiscreteAccessoryType *ret = new IfcDiscreteAccessoryType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDiscreteAccessoryType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDiscreteAccessoryType *ret = new IfcDiscreteAccessoryType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDiscreteAccessoryType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDiscreteAccessoryType *ret = new IfcDiscreteAccessoryType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDiscreteAccessoryType *IfcDiscreteAccessoryType_Factory::generate() {
  return static_cast< IfcDiscreteAccessoryType * > (create(m_model->getNewId()));
}

IfcDiscreteAccessoryType *IfcDiscreteAccessoryType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDiscreteAccessoryType * > (it->second);
  }
  else {
    return NULL;
  }
}

