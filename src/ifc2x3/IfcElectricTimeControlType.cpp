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
#include <ifc2x3/IfcElectricTimeControlType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElectricTimeControlType::IfcElectricTimeControlType(Step::SPFData *args) : IfcFlowControllerType(args) {
  m_predefinedType = IfcElectricTimeControlTypeEnum_UNSET;
}


IfcElectricTimeControlType::~IfcElectricTimeControlType() {
}

bool IfcElectricTimeControlType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElectricTimeControlType(this);
}

const char *IfcElectricTimeControlType::type() {
  return "IfcElectricTimeControlType";
}

Step::ClassType IfcElectricTimeControlType::getClassType() {
  return IfcElectricTimeControlType::s_type;
}

Step::ClassType IfcElectricTimeControlType::getType() const {
  return IfcElectricTimeControlType::s_type;
}

bool IfcElectricTimeControlType::isOfType(Step::ClassType t) {
  return IfcElectricTimeControlType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcElectricTimeControlTypeEnum IfcElectricTimeControlType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcElectricTimeControlTypeEnum_UNSET;
  }
}

void IfcElectricTimeControlType::setPredefinedType(IfcElectricTimeControlTypeEnum value) {
  m_predefinedType = value;
}

void IfcElectricTimeControlType::release() {
  IfcFlowControllerType::release();
}

bool IfcElectricTimeControlType::init() {
  bool status = IfcFlowControllerType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcElectricTimeControlTypeEnum_UNSET;
  }
  else {
    if (arg == ".TIMECLOCK.") {
      m_predefinedType = IfcElectricTimeControlTypeEnum_TIMECLOCK;
    }
    else if (arg == ".TIMEDELAY.") {
      m_predefinedType = IfcElectricTimeControlTypeEnum_TIMEDELAY;
    }
    else if (arg == ".RELAY.") {
      m_predefinedType = IfcElectricTimeControlTypeEnum_RELAY;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcElectricTimeControlTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcElectricTimeControlTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricTimeControlType::s_type = new Step::ClassType_class("IfcElectricTimeControlType");
IfcElectricTimeControlType_Factory::IfcElectricTimeControlType_Factory() {
}

IfcElectricTimeControlType_Factory::~IfcElectricTimeControlType_Factory() {
  clear(true);
}

void IfcElectricTimeControlType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricTimeControlType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricTimeControlType_Factory::end() {
  return m_idMap.end();
}

IfcElectricTimeControlType *IfcElectricTimeControlType_Factory::get(Step::StepId id) {
  IfcElectricTimeControlType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElectricTimeControlType * > (it->second);
  }
  else {
    LOG_ERROR("IfcElectricTimeControlType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElectricTimeControlType * > (create(id));
  }
}

Step::BaseObject *IfcElectricTimeControlType_Factory::create(Step::StepId id) {
  IfcElectricTimeControlType *ret = new IfcElectricTimeControlType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElectricTimeControlType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElectricTimeControlType *ret = new IfcElectricTimeControlType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElectricTimeControlType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElectricTimeControlType *ret = new IfcElectricTimeControlType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElectricTimeControlType *IfcElectricTimeControlType_Factory::generate() {
  return static_cast< IfcElectricTimeControlType * > (create(m_model->getNewId()));
}

IfcElectricTimeControlType *IfcElectricTimeControlType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElectricTimeControlType * > (it->second);
  }
  else {
    return NULL;
  }
}

