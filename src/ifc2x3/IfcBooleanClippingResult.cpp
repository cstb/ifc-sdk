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
#include <ifc2x3/IfcBooleanClippingResult.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBooleanClippingResult::IfcBooleanClippingResult(Step::SPFData *args) : IfcBooleanResult(args) {
}


IfcBooleanClippingResult::~IfcBooleanClippingResult() {
}

bool IfcBooleanClippingResult::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBooleanClippingResult(this);
}

const char *IfcBooleanClippingResult::type() {
  return "IfcBooleanClippingResult";
}

Step::ClassType IfcBooleanClippingResult::getClassType() {
  return IfcBooleanClippingResult::s_type;
}

Step::ClassType IfcBooleanClippingResult::getType() const {
  return IfcBooleanClippingResult::s_type;
}

bool IfcBooleanClippingResult::isOfType(Step::ClassType t) {
  return IfcBooleanClippingResult::s_type == t ? true : IfcBooleanResult::isOfType(t);
}

void IfcBooleanClippingResult::release() {
  IfcBooleanResult::release();
}

bool IfcBooleanClippingResult::init() {
  bool status = IfcBooleanResult::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBooleanClippingResult::s_type = new Step::ClassType_class("IfcBooleanClippingResult");
IfcBooleanClippingResult_Factory::IfcBooleanClippingResult_Factory() {
}

IfcBooleanClippingResult_Factory::~IfcBooleanClippingResult_Factory() {
  clear(true);
}

void IfcBooleanClippingResult_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBooleanClippingResult_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBooleanClippingResult_Factory::end() {
  return m_idMap.end();
}

IfcBooleanClippingResult *IfcBooleanClippingResult_Factory::get(Step::StepId id) {
  IfcBooleanClippingResult *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBooleanClippingResult * > (it->second);
  }
  else {
    LOG_ERROR("IfcBooleanClippingResult_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBooleanClippingResult * > (create(id));
  }
}

Step::BaseObject *IfcBooleanClippingResult_Factory::create(Step::StepId id) {
  IfcBooleanClippingResult *ret = new IfcBooleanClippingResult(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBooleanClippingResult_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBooleanClippingResult *ret = new IfcBooleanClippingResult(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBooleanClippingResult_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBooleanClippingResult *ret = new IfcBooleanClippingResult(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBooleanClippingResult *IfcBooleanClippingResult_Factory::generate() {
  return static_cast< IfcBooleanClippingResult * > (create(m_model->getNewId()));
}

IfcBooleanClippingResult *IfcBooleanClippingResult_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBooleanClippingResult * > (it->second);
  }
  else {
    return NULL;
  }
}

