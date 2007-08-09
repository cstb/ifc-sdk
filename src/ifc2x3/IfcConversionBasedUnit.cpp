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
#include <ifc2x3/IfcConversionBasedUnit.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcConversionBasedUnit::IfcConversionBasedUnit(Step::SPFData *args) : IfcNamedUnit(args) {
  m_name = getUnset(m_name);
  m_conversionFactor = NULL;
}


IfcConversionBasedUnit::~IfcConversionBasedUnit() {
}

bool IfcConversionBasedUnit::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcConversionBasedUnit(this);
}

const char *IfcConversionBasedUnit::type() {
  return "IfcConversionBasedUnit";
}

Step::ClassType IfcConversionBasedUnit::getClassType() {
  return IfcConversionBasedUnit::s_type;
}

Step::ClassType IfcConversionBasedUnit::getType() const {
  return IfcConversionBasedUnit::s_type;
}

bool IfcConversionBasedUnit::isOfType(Step::ClassType t) {
  return IfcConversionBasedUnit::s_type == t ? true : IfcNamedUnit::isOfType(t);
}

IfcLabel IfcConversionBasedUnit::getName() {
  if (Step::BaseObject::inited()) {
    return m_name;
  }
  else {
    return getUnset(m_name);
  }
}

void IfcConversionBasedUnit::setName(const IfcLabel &value) {
  m_name = value;
}

IfcMeasureWithUnit *IfcConversionBasedUnit::getConversionFactor() {
  if (Step::BaseObject::inited()) {
    return m_conversionFactor.get();
  }
  else {
    return NULL;
  }
}

void IfcConversionBasedUnit::setConversionFactor(const Step::RefPtr< IfcMeasureWithUnit > &value) {
  m_conversionFactor = value;
}

void IfcConversionBasedUnit::release() {
  IfcNamedUnit::release();
  m_conversionFactor.release();
}

bool IfcConversionBasedUnit::init() {
  bool status = IfcNamedUnit::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_name = getUnset(m_name);
  }
  else {
    m_name = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_conversionFactor = NULL;
  }
  else {
    m_conversionFactor = static_cast< IfcMeasureWithUnit * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcConversionBasedUnit::s_type = new Step::ClassType_class("IfcConversionBasedUnit");
IfcConversionBasedUnit_Factory::IfcConversionBasedUnit_Factory() {
}

IfcConversionBasedUnit_Factory::~IfcConversionBasedUnit_Factory() {
  clear(true);
}

void IfcConversionBasedUnit_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConversionBasedUnit_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcConversionBasedUnit_Factory::end() {
  return m_idMap.end();
}

IfcConversionBasedUnit *IfcConversionBasedUnit_Factory::get(Step::StepId id) {
  IfcConversionBasedUnit *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcConversionBasedUnit * > (it->second);
  }
  else {
    LOG_ERROR("IfcConversionBasedUnit_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcConversionBasedUnit * > (create(id));
  }
}

Step::BaseObject *IfcConversionBasedUnit_Factory::create(Step::StepId id) {
  IfcConversionBasedUnit *ret = new IfcConversionBasedUnit(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcConversionBasedUnit_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcConversionBasedUnit *ret = new IfcConversionBasedUnit(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcConversionBasedUnit_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcConversionBasedUnit *ret = new IfcConversionBasedUnit(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcConversionBasedUnit *IfcConversionBasedUnit_Factory::generate() {
  return static_cast< IfcConversionBasedUnit * > (create(m_model->getNewId()));
}

IfcConversionBasedUnit *IfcConversionBasedUnit_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcConversionBasedUnit * > (it->second);
  }
  else {
    return NULL;
  }
}

