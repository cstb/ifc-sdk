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
#include <ifc2x3/IfcProtectiveDeviceType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProtectiveDeviceType::IfcProtectiveDeviceType(Step::SPFData *args) : IfcFlowControllerType(args) {
  m_predefinedType = IfcProtectiveDeviceTypeEnum_UNSET;
}


IfcProtectiveDeviceType::~IfcProtectiveDeviceType() {
}

bool IfcProtectiveDeviceType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProtectiveDeviceType(this);
}

const char *IfcProtectiveDeviceType::type() {
  return "IfcProtectiveDeviceType";
}

Step::ClassType IfcProtectiveDeviceType::getClassType() {
  return IfcProtectiveDeviceType::s_type;
}

Step::ClassType IfcProtectiveDeviceType::getType() const {
  return IfcProtectiveDeviceType::s_type;
}

bool IfcProtectiveDeviceType::isOfType(Step::ClassType t) {
  return IfcProtectiveDeviceType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcProtectiveDeviceTypeEnum IfcProtectiveDeviceType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcProtectiveDeviceTypeEnum_UNSET;
  }
}

void IfcProtectiveDeviceType::setPredefinedType(IfcProtectiveDeviceTypeEnum value) {
  m_predefinedType = value;
}

void IfcProtectiveDeviceType::release() {
  IfcFlowControllerType::release();
}

bool IfcProtectiveDeviceType::init() {
  bool status = IfcFlowControllerType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcProtectiveDeviceTypeEnum_UNSET;
  }
  else {
    if (arg == ".FUSEDISCONNECTOR.") {
      m_predefinedType = IfcProtectiveDeviceTypeEnum_FUSEDISCONNECTOR;
    }
    else if (arg == ".CIRCUITBREAKER.") {
      m_predefinedType = IfcProtectiveDeviceTypeEnum_CIRCUITBREAKER;
    }
    else if (arg == ".EARTHFAILUREDEVICE.") {
      m_predefinedType = IfcProtectiveDeviceTypeEnum_EARTHFAILUREDEVICE;
    }
    else if (arg == ".RESIDUALCURRENTCIRCUITBREAKER.") {
      m_predefinedType = IfcProtectiveDeviceTypeEnum_RESIDUALCURRENTCIRCUITBREAKER;
    }
    else if (arg == ".RESIDUALCURRENTSWITCH.") {
      m_predefinedType = IfcProtectiveDeviceTypeEnum_RESIDUALCURRENTSWITCH;
    }
    else if (arg == ".VARISTOR.") {
      m_predefinedType = IfcProtectiveDeviceTypeEnum_VARISTOR;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcProtectiveDeviceTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcProtectiveDeviceTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProtectiveDeviceType::s_type = new Step::ClassType_class("IfcProtectiveDeviceType");
IfcProtectiveDeviceType_Factory::IfcProtectiveDeviceType_Factory() {
}

IfcProtectiveDeviceType_Factory::~IfcProtectiveDeviceType_Factory() {
  clear(true);
}

void IfcProtectiveDeviceType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProtectiveDeviceType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProtectiveDeviceType_Factory::end() {
  return m_idMap.end();
}

IfcProtectiveDeviceType *IfcProtectiveDeviceType_Factory::get(Step::StepId id) {
  IfcProtectiveDeviceType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProtectiveDeviceType * > (it->second);
  }
  else {
    LOG_ERROR("IfcProtectiveDeviceType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProtectiveDeviceType * > (create(id));
  }
}

Step::BaseObject *IfcProtectiveDeviceType_Factory::create(Step::StepId id) {
  IfcProtectiveDeviceType *ret = new IfcProtectiveDeviceType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProtectiveDeviceType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProtectiveDeviceType *ret = new IfcProtectiveDeviceType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProtectiveDeviceType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProtectiveDeviceType *ret = new IfcProtectiveDeviceType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProtectiveDeviceType *IfcProtectiveDeviceType_Factory::generate() {
  return static_cast< IfcProtectiveDeviceType * > (create(m_model->getNewId()));
}

IfcProtectiveDeviceType *IfcProtectiveDeviceType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProtectiveDeviceType * > (it->second);
  }
  else {
    return NULL;
  }
}

