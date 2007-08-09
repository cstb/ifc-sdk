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
#include <ifc2x3/IfcQuantityArea.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcQuantityArea::IfcQuantityArea(Step::SPFData *args) : IfcPhysicalSimpleQuantity(args) {
  m_areaValue = getUnset(m_areaValue);
}


IfcQuantityArea::~IfcQuantityArea() {
}

bool IfcQuantityArea::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcQuantityArea(this);
}

const char *IfcQuantityArea::type() {
  return "IfcQuantityArea";
}

Step::ClassType IfcQuantityArea::getClassType() {
  return IfcQuantityArea::s_type;
}

Step::ClassType IfcQuantityArea::getType() const {
  return IfcQuantityArea::s_type;
}

bool IfcQuantityArea::isOfType(Step::ClassType t) {
  return IfcQuantityArea::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcAreaMeasure IfcQuantityArea::getAreaValue() {
  if (Step::BaseObject::inited()) {
    return m_areaValue;
  }
  else {
    return getUnset(m_areaValue);
  }
}

void IfcQuantityArea::setAreaValue(IfcAreaMeasure value) {
  m_areaValue = value;
}

void IfcQuantityArea::release() {
  IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityArea::init() {
  bool status = IfcPhysicalSimpleQuantity::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_areaValue = getUnset(m_areaValue);
  }
  else {
    m_areaValue = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityArea::s_type = new Step::ClassType_class("IfcQuantityArea");
IfcQuantityArea_Factory::IfcQuantityArea_Factory() {
}

IfcQuantityArea_Factory::~IfcQuantityArea_Factory() {
  clear(true);
}

void IfcQuantityArea_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityArea_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcQuantityArea_Factory::end() {
  return m_idMap.end();
}

IfcQuantityArea *IfcQuantityArea_Factory::get(Step::StepId id) {
  IfcQuantityArea *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcQuantityArea * > (it->second);
  }
  else {
    LOG_ERROR("IfcQuantityArea_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcQuantityArea * > (create(id));
  }
}

Step::BaseObject *IfcQuantityArea_Factory::create(Step::StepId id) {
  IfcQuantityArea *ret = new IfcQuantityArea(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityArea_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcQuantityArea *ret = new IfcQuantityArea(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcQuantityArea_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcQuantityArea *ret = new IfcQuantityArea(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcQuantityArea *IfcQuantityArea_Factory::generate() {
  return static_cast< IfcQuantityArea * > (create(m_model->getNewId()));
}

IfcQuantityArea *IfcQuantityArea_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcQuantityArea * > (it->second);
  }
  else {
    return NULL;
  }
}

