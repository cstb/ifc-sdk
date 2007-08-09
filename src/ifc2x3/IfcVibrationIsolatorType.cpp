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
#include <ifc2x3/IfcVibrationIsolatorType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcVibrationIsolatorType::IfcVibrationIsolatorType(Step::SPFData *args) : IfcDiscreteAccessoryType(args) {
  m_predefinedType = IfcVibrationIsolatorTypeEnum_UNSET;
}


IfcVibrationIsolatorType::~IfcVibrationIsolatorType() {
}

bool IfcVibrationIsolatorType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcVibrationIsolatorType(this);
}

const char *IfcVibrationIsolatorType::type() {
  return "IfcVibrationIsolatorType";
}

Step::ClassType IfcVibrationIsolatorType::getClassType() {
  return IfcVibrationIsolatorType::s_type;
}

Step::ClassType IfcVibrationIsolatorType::getType() const {
  return IfcVibrationIsolatorType::s_type;
}

bool IfcVibrationIsolatorType::isOfType(Step::ClassType t) {
  return IfcVibrationIsolatorType::s_type == t ? true : IfcDiscreteAccessoryType::isOfType(t);
}

IfcVibrationIsolatorTypeEnum IfcVibrationIsolatorType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcVibrationIsolatorTypeEnum_UNSET;
  }
}

void IfcVibrationIsolatorType::setPredefinedType(IfcVibrationIsolatorTypeEnum value) {
  m_predefinedType = value;
}

void IfcVibrationIsolatorType::release() {
  IfcDiscreteAccessoryType::release();
}

bool IfcVibrationIsolatorType::init() {
  bool status = IfcDiscreteAccessoryType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcVibrationIsolatorTypeEnum_UNSET;
  }
  else {
    if (arg == ".COMPRESSION.") {
      m_predefinedType = IfcVibrationIsolatorTypeEnum_COMPRESSION;
    }
    else if (arg == ".SPRING.") {
      m_predefinedType = IfcVibrationIsolatorTypeEnum_SPRING;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcVibrationIsolatorTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcVibrationIsolatorTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcVibrationIsolatorType::s_type = new Step::ClassType_class("IfcVibrationIsolatorType");
IfcVibrationIsolatorType_Factory::IfcVibrationIsolatorType_Factory() {
}

IfcVibrationIsolatorType_Factory::~IfcVibrationIsolatorType_Factory() {
  clear(true);
}

void IfcVibrationIsolatorType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVibrationIsolatorType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVibrationIsolatorType_Factory::end() {
  return m_idMap.end();
}

IfcVibrationIsolatorType *IfcVibrationIsolatorType_Factory::get(Step::StepId id) {
  IfcVibrationIsolatorType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcVibrationIsolatorType * > (it->second);
  }
  else {
    LOG_ERROR("IfcVibrationIsolatorType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcVibrationIsolatorType * > (create(id));
  }
}

Step::BaseObject *IfcVibrationIsolatorType_Factory::create(Step::StepId id) {
  IfcVibrationIsolatorType *ret = new IfcVibrationIsolatorType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcVibrationIsolatorType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcVibrationIsolatorType *ret = new IfcVibrationIsolatorType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcVibrationIsolatorType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcVibrationIsolatorType *ret = new IfcVibrationIsolatorType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcVibrationIsolatorType *IfcVibrationIsolatorType_Factory::generate() {
  return static_cast< IfcVibrationIsolatorType * > (create(m_model->getNewId()));
}

IfcVibrationIsolatorType *IfcVibrationIsolatorType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcVibrationIsolatorType * > (it->second);
  }
  else {
    return NULL;
  }
}

