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
#include <ifc2x3/IfcQuantityLength.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcQuantityLength::IfcQuantityLength(Step::SPFData *args) : IfcPhysicalSimpleQuantity(args) {
  m_lengthValue = getUnset(m_lengthValue);
}


IfcQuantityLength::~IfcQuantityLength() {
}

bool IfcQuantityLength::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcQuantityLength(this);
}

const char *IfcQuantityLength::type() {
  return "IfcQuantityLength";
}

Step::ClassType IfcQuantityLength::getClassType() {
  return IfcQuantityLength::s_type;
}

Step::ClassType IfcQuantityLength::getType() const {
  return IfcQuantityLength::s_type;
}

bool IfcQuantityLength::isOfType(Step::ClassType t) {
  return IfcQuantityLength::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcLengthMeasure IfcQuantityLength::getLengthValue() {
  if (Step::BaseObject::inited()) {
    return m_lengthValue;
  }
  else {
    return getUnset(m_lengthValue);
  }
}

void IfcQuantityLength::setLengthValue(IfcLengthMeasure value) {
  m_lengthValue = value;
}

void IfcQuantityLength::release() {
  IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityLength::init() {
  bool status = IfcPhysicalSimpleQuantity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_lengthValue = getUnset(m_lengthValue);
  }
  else {
    m_lengthValue = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityLength::s_type = new Step::ClassType_class("IfcQuantityLength");
IfcQuantityLength_Factory::IfcQuantityLength_Factory() {
}

IfcQuantityLength_Factory::~IfcQuantityLength_Factory() {
  clear(true);
}

void IfcQuantityLength_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityLength_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityLength_Factory::end() {
  return m_idMap.end();
}

IfcQuantityLength *IfcQuantityLength_Factory::get(Step::StepId id) {
  IfcQuantityLength *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcQuantityLength * > (it->second);
  }
  else {
    LOG_ERROR("IfcQuantityLength_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcQuantityLength * > (create(id));
  }
}

Step::BaseObject *IfcQuantityLength_Factory::create(Step::StepId id) {
  IfcQuantityLength *ret = new IfcQuantityLength(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityLength_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcQuantityLength *ret = new IfcQuantityLength(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityLength_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcQuantityLength *ret = new IfcQuantityLength(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcQuantityLength *IfcQuantityLength_Factory::generate() {
  return static_cast< IfcQuantityLength * > (create(m_model->getNewId()));
}

IfcQuantityLength *IfcQuantityLength_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcQuantityLength * > (it->second);
  }
  else {
    return NULL;
  }
}

