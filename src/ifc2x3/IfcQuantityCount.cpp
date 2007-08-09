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
#include <ifc2x3/IfcQuantityCount.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcQuantityCount::IfcQuantityCount(Step::SPFData *args) : IfcPhysicalSimpleQuantity(args) {
  m_countValue = getUnset(m_countValue);
}


IfcQuantityCount::~IfcQuantityCount() {
}

bool IfcQuantityCount::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcQuantityCount(this);
}

const char *IfcQuantityCount::type() {
  return "IfcQuantityCount";
}

Step::ClassType IfcQuantityCount::getClassType() {
  return IfcQuantityCount::s_type;
}

Step::ClassType IfcQuantityCount::getType() const {
  return IfcQuantityCount::s_type;
}

bool IfcQuantityCount::isOfType(Step::ClassType t) {
  return IfcQuantityCount::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcCountMeasure IfcQuantityCount::getCountValue() {
  if (Step::BaseObject::inited()) {
    return m_countValue;
  }
  else {
    return getUnset(m_countValue);
  }
}

void IfcQuantityCount::setCountValue(IfcCountMeasure value) {
  m_countValue = value;
}

void IfcQuantityCount::release() {
  IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityCount::init() {
  bool status = IfcPhysicalSimpleQuantity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_countValue = getUnset(m_countValue);
  }
  else {
    m_countValue = Step::spfToInteger(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityCount::s_type = new Step::ClassType_class("IfcQuantityCount");
IfcQuantityCount_Factory::IfcQuantityCount_Factory() {
}

IfcQuantityCount_Factory::~IfcQuantityCount_Factory() {
  clear(true);
}

void IfcQuantityCount_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityCount_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityCount_Factory::end() {
  return m_idMap.end();
}

IfcQuantityCount *IfcQuantityCount_Factory::get(Step::StepId id) {
  IfcQuantityCount *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcQuantityCount * > (it->second);
  }
  else {
    LOG_ERROR("IfcQuantityCount_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcQuantityCount * > (create(id));
  }
}

Step::BaseObject *IfcQuantityCount_Factory::create(Step::StepId id) {
  IfcQuantityCount *ret = new IfcQuantityCount(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityCount_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcQuantityCount *ret = new IfcQuantityCount(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityCount_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcQuantityCount *ret = new IfcQuantityCount(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcQuantityCount *IfcQuantityCount_Factory::generate() {
  return static_cast< IfcQuantityCount * > (create(m_model->getNewId()));
}

IfcQuantityCount *IfcQuantityCount_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcQuantityCount * > (it->second);
  }
  else {
    return NULL;
  }
}

