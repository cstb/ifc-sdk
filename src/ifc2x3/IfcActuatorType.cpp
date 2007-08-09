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
#include <ifc2x3/IfcActuatorType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcActuatorType::IfcActuatorType(Step::SPFData *args) : IfcDistributionControlElementType(args) {
  m_predefinedType = IfcActuatorTypeEnum_UNSET;
}


IfcActuatorType::~IfcActuatorType() {
}

bool IfcActuatorType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcActuatorType(this);
}

const char *IfcActuatorType::type() {
  return "IfcActuatorType";
}

Step::ClassType IfcActuatorType::getClassType() {
  return IfcActuatorType::s_type;
}

Step::ClassType IfcActuatorType::getType() const {
  return IfcActuatorType::s_type;
}

bool IfcActuatorType::isOfType(Step::ClassType t) {
  return IfcActuatorType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcActuatorTypeEnum IfcActuatorType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcActuatorTypeEnum_UNSET;
  }
}

void IfcActuatorType::setPredefinedType(IfcActuatorTypeEnum value) {
  m_predefinedType = value;
}

void IfcActuatorType::release() {
  IfcDistributionControlElementType::release();
}

bool IfcActuatorType::init() {
  bool status = IfcDistributionControlElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcActuatorTypeEnum_UNSET;
  }
  else {
    if (arg == ".ELECTRICACTUATOR.") {
      m_predefinedType = IfcActuatorTypeEnum_ELECTRICACTUATOR;
    }
    else if (arg == ".HANDOPERATEDACTUATOR.") {
      m_predefinedType = IfcActuatorTypeEnum_HANDOPERATEDACTUATOR;
    }
    else if (arg == ".HYDRAULICACTUATOR.") {
      m_predefinedType = IfcActuatorTypeEnum_HYDRAULICACTUATOR;
    }
    else if (arg == ".PNEUMATICACTUATOR.") {
      m_predefinedType = IfcActuatorTypeEnum_PNEUMATICACTUATOR;
    }
    else if (arg == ".THERMOSTATICACTUATOR.") {
      m_predefinedType = IfcActuatorTypeEnum_THERMOSTATICACTUATOR;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcActuatorTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcActuatorTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcActuatorType::s_type = new Step::ClassType_class("IfcActuatorType");
IfcActuatorType_Factory::IfcActuatorType_Factory() {
}

IfcActuatorType_Factory::~IfcActuatorType_Factory() {
  clear(true);
}

void IfcActuatorType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcActuatorType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcActuatorType_Factory::end() {
  return m_idMap.end();
}

IfcActuatorType *IfcActuatorType_Factory::get(Step::StepId id) {
  IfcActuatorType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcActuatorType * > (it->second);
  }
  else {
    LOG_ERROR("IfcActuatorType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcActuatorType * > (create(id));
  }
}

Step::BaseObject *IfcActuatorType_Factory::create(Step::StepId id) {
  IfcActuatorType *ret = new IfcActuatorType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcActuatorType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcActuatorType *ret = new IfcActuatorType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcActuatorType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcActuatorType *ret = new IfcActuatorType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcActuatorType *IfcActuatorType_Factory::generate() {
  return static_cast< IfcActuatorType * > (create(m_model->getNewId()));
}

IfcActuatorType *IfcActuatorType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcActuatorType * > (it->second);
  }
  else {
    return NULL;
  }
}

