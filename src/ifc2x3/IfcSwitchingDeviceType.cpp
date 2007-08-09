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
#include <ifc2x3/IfcSwitchingDeviceType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSwitchingDeviceType::IfcSwitchingDeviceType(Step::SPFData *args) : IfcFlowControllerType(args) {
  m_predefinedType = IfcSwitchingDeviceTypeEnum_UNSET;
}


IfcSwitchingDeviceType::~IfcSwitchingDeviceType() {
}

bool IfcSwitchingDeviceType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSwitchingDeviceType(this);
}

const char *IfcSwitchingDeviceType::type() {
  return "IfcSwitchingDeviceType";
}

Step::ClassType IfcSwitchingDeviceType::getClassType() {
  return IfcSwitchingDeviceType::s_type;
}

Step::ClassType IfcSwitchingDeviceType::getType() const {
  return IfcSwitchingDeviceType::s_type;
}

bool IfcSwitchingDeviceType::isOfType(Step::ClassType t) {
  return IfcSwitchingDeviceType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcSwitchingDeviceTypeEnum IfcSwitchingDeviceType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcSwitchingDeviceTypeEnum_UNSET;
  }
}

void IfcSwitchingDeviceType::setPredefinedType(IfcSwitchingDeviceTypeEnum value) {
  m_predefinedType = value;
}

void IfcSwitchingDeviceType::release() {
  IfcFlowControllerType::release();
}

bool IfcSwitchingDeviceType::init() {
  bool status = IfcFlowControllerType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcSwitchingDeviceTypeEnum_UNSET;
  }
  else {
    if (arg == ".CONTACTOR.") {
      m_predefinedType = IfcSwitchingDeviceTypeEnum_CONTACTOR;
    }
    else if (arg == ".EMERGENCYSTOP.") {
      m_predefinedType = IfcSwitchingDeviceTypeEnum_EMERGENCYSTOP;
    }
    else if (arg == ".STARTER.") {
      m_predefinedType = IfcSwitchingDeviceTypeEnum_STARTER;
    }
    else if (arg == ".SWITCHDISCONNECTOR.") {
      m_predefinedType = IfcSwitchingDeviceTypeEnum_SWITCHDISCONNECTOR;
    }
    else if (arg == ".TOGGLESWITCH.") {
      m_predefinedType = IfcSwitchingDeviceTypeEnum_TOGGLESWITCH;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcSwitchingDeviceTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcSwitchingDeviceTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSwitchingDeviceType::s_type = new Step::ClassType_class("IfcSwitchingDeviceType");
IfcSwitchingDeviceType_Factory::IfcSwitchingDeviceType_Factory() {
}

IfcSwitchingDeviceType_Factory::~IfcSwitchingDeviceType_Factory() {
  clear(true);
}

void IfcSwitchingDeviceType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSwitchingDeviceType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSwitchingDeviceType_Factory::end() {
  return m_idMap.end();
}

IfcSwitchingDeviceType *IfcSwitchingDeviceType_Factory::get(Step::StepId id) {
  IfcSwitchingDeviceType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSwitchingDeviceType * > (it->second);
  }
  else {
    LOG_ERROR("IfcSwitchingDeviceType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSwitchingDeviceType * > (create(id));
  }
}

Step::BaseObject *IfcSwitchingDeviceType_Factory::create(Step::StepId id) {
  IfcSwitchingDeviceType *ret = new IfcSwitchingDeviceType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSwitchingDeviceType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSwitchingDeviceType *ret = new IfcSwitchingDeviceType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSwitchingDeviceType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSwitchingDeviceType *ret = new IfcSwitchingDeviceType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSwitchingDeviceType *IfcSwitchingDeviceType_Factory::generate() {
  return static_cast< IfcSwitchingDeviceType * > (create(m_model->getNewId()));
}

IfcSwitchingDeviceType *IfcSwitchingDeviceType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSwitchingDeviceType * > (it->second);
  }
  else {
    return NULL;
  }
}

