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
#include <ifc2x3/IfcFastener.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFastener::IfcFastener(Step::SPFData *args) : IfcElementComponent(args) {
}


IfcFastener::~IfcFastener() {
}

bool IfcFastener::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFastener(this);
}

const char *IfcFastener::type() {
  return "IfcFastener";
}

Step::ClassType IfcFastener::getClassType() {
  return IfcFastener::s_type;
}

Step::ClassType IfcFastener::getType() const {
  return IfcFastener::s_type;
}

bool IfcFastener::isOfType(Step::ClassType t) {
  return IfcFastener::s_type == t ? true : IfcElementComponent::isOfType(t);
}

void IfcFastener::release() {
  IfcElementComponent::release();
}

bool IfcFastener::init() {
  bool status = IfcElementComponent::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFastener::s_type = new Step::ClassType_class("IfcFastener");
IfcFastener_Factory::IfcFastener_Factory() {
}

IfcFastener_Factory::~IfcFastener_Factory() {
  clear(true);
}

void IfcFastener_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFastener_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFastener_Factory::end() {
  return m_idMap.end();
}

IfcFastener *IfcFastener_Factory::get(Step::StepId id) {
  IfcFastener *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFastener * > (it->second);
  }
  else {
    LOG_ERROR("IfcFastener_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFastener * > (create(id));
  }
}

Step::BaseObject *IfcFastener_Factory::create(Step::StepId id) {
  IfcFastener *ret = new IfcFastener(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFastener_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFastener *ret = new IfcFastener(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFastener_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFastener *ret = new IfcFastener(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFastener *IfcFastener_Factory::generate() {
  return static_cast< IfcFastener * > (create(m_model->getNewId()));
}

IfcFastener *IfcFastener_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFastener * > (it->second);
  }
  else {
    return NULL;
  }
}

