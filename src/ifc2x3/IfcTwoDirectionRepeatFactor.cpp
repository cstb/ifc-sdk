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
#include <ifc2x3/IfcTwoDirectionRepeatFactor.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcVector.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTwoDirectionRepeatFactor::IfcTwoDirectionRepeatFactor(Step::SPFData *args) : IfcOneDirectionRepeatFactor(args) {
  m_secondRepeatFactor = NULL;
}


IfcTwoDirectionRepeatFactor::~IfcTwoDirectionRepeatFactor() {
}

bool IfcTwoDirectionRepeatFactor::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTwoDirectionRepeatFactor(this);
}

const char *IfcTwoDirectionRepeatFactor::type() {
  return "IfcTwoDirectionRepeatFactor";
}

Step::ClassType IfcTwoDirectionRepeatFactor::getClassType() {
  return IfcTwoDirectionRepeatFactor::s_type;
}

Step::ClassType IfcTwoDirectionRepeatFactor::getType() const {
  return IfcTwoDirectionRepeatFactor::s_type;
}

bool IfcTwoDirectionRepeatFactor::isOfType(Step::ClassType t) {
  return IfcTwoDirectionRepeatFactor::s_type == t ? true : IfcOneDirectionRepeatFactor::isOfType(t);
}

IfcVector *IfcTwoDirectionRepeatFactor::getSecondRepeatFactor() {
  if (Step::BaseObject::inited()) {
    return m_secondRepeatFactor.get();
  }
  else {
    return NULL;
  }
}

void IfcTwoDirectionRepeatFactor::setSecondRepeatFactor(const Step::RefPtr< IfcVector > &value) {
  m_secondRepeatFactor = value;
}

void IfcTwoDirectionRepeatFactor::release() {
  IfcOneDirectionRepeatFactor::release();
  m_secondRepeatFactor.release();
}

bool IfcTwoDirectionRepeatFactor::init() {
  bool status = IfcOneDirectionRepeatFactor::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_secondRepeatFactor = NULL;
  }
  else {
    m_secondRepeatFactor = static_cast< IfcVector * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTwoDirectionRepeatFactor::s_type = new Step::ClassType_class("IfcTwoDirectionRepeatFactor");
IfcTwoDirectionRepeatFactor_Factory::IfcTwoDirectionRepeatFactor_Factory() {
}

IfcTwoDirectionRepeatFactor_Factory::~IfcTwoDirectionRepeatFactor_Factory() {
  clear(true);
}

void IfcTwoDirectionRepeatFactor_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTwoDirectionRepeatFactor_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTwoDirectionRepeatFactor_Factory::end() {
  return m_idMap.end();
}

IfcTwoDirectionRepeatFactor *IfcTwoDirectionRepeatFactor_Factory::get(Step::StepId id) {
  IfcTwoDirectionRepeatFactor *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTwoDirectionRepeatFactor * > (it->second);
  }
  else {
    LOG_ERROR("IfcTwoDirectionRepeatFactor_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTwoDirectionRepeatFactor * > (create(id));
  }
}

Step::BaseObject *IfcTwoDirectionRepeatFactor_Factory::create(Step::StepId id) {
  IfcTwoDirectionRepeatFactor *ret = new IfcTwoDirectionRepeatFactor(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTwoDirectionRepeatFactor_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTwoDirectionRepeatFactor *ret = new IfcTwoDirectionRepeatFactor(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTwoDirectionRepeatFactor_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTwoDirectionRepeatFactor *ret = new IfcTwoDirectionRepeatFactor(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTwoDirectionRepeatFactor *IfcTwoDirectionRepeatFactor_Factory::generate() {
  return static_cast< IfcTwoDirectionRepeatFactor * > (create(m_model->getNewId()));
}

IfcTwoDirectionRepeatFactor *IfcTwoDirectionRepeatFactor_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTwoDirectionRepeatFactor * > (it->second);
  }
  else {
    return NULL;
  }
}

