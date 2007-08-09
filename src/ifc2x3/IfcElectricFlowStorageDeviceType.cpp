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
#include <ifc2x3/IfcElectricFlowStorageDeviceType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElectricFlowStorageDeviceType::IfcElectricFlowStorageDeviceType(Step::SPFData *args) : IfcFlowStorageDeviceType(args) {
  m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
}


IfcElectricFlowStorageDeviceType::~IfcElectricFlowStorageDeviceType() {
}

bool IfcElectricFlowStorageDeviceType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElectricFlowStorageDeviceType(this);
}

const char *IfcElectricFlowStorageDeviceType::type() {
  return "IfcElectricFlowStorageDeviceType";
}

Step::ClassType IfcElectricFlowStorageDeviceType::getClassType() {
  return IfcElectricFlowStorageDeviceType::s_type;
}

Step::ClassType IfcElectricFlowStorageDeviceType::getType() const {
  return IfcElectricFlowStorageDeviceType::s_type;
}

bool IfcElectricFlowStorageDeviceType::isOfType(Step::ClassType t) {
  return IfcElectricFlowStorageDeviceType::s_type == t ? true : IfcFlowStorageDeviceType::isOfType(t);
}

IfcElectricFlowStorageDeviceTypeEnum IfcElectricFlowStorageDeviceType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcElectricFlowStorageDeviceTypeEnum_UNSET;
  }
}

void IfcElectricFlowStorageDeviceType::setPredefinedType(IfcElectricFlowStorageDeviceTypeEnum value) {
  m_predefinedType = value;
}

void IfcElectricFlowStorageDeviceType::release() {
  IfcFlowStorageDeviceType::release();
}

bool IfcElectricFlowStorageDeviceType::init() {
  bool status = IfcFlowStorageDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
  }
  else {
    if (arg == ".BATTERY.") {
      m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_BATTERY;
    }
    else if (arg == ".CAPACITORBANK.") {
      m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_CAPACITORBANK;
    }
    else if (arg == ".HARMONICFILTER.") {
      m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_HARMONICFILTER;
    }
    else if (arg == ".INDUCTORBANK.") {
      m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_INDUCTORBANK;
    }
    else if (arg == ".UPS.") {
      m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UPS;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricFlowStorageDeviceType::s_type = new Step::ClassType_class("IfcElectricFlowStorageDeviceType");
IfcElectricFlowStorageDeviceType_Factory::IfcElectricFlowStorageDeviceType_Factory() {
}

IfcElectricFlowStorageDeviceType_Factory::~IfcElectricFlowStorageDeviceType_Factory() {
  clear(true);
}

void IfcElectricFlowStorageDeviceType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricFlowStorageDeviceType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricFlowStorageDeviceType_Factory::end() {
  return m_idMap.end();
}

IfcElectricFlowStorageDeviceType *IfcElectricFlowStorageDeviceType_Factory::get(Step::StepId id) {
  IfcElectricFlowStorageDeviceType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElectricFlowStorageDeviceType * > (it->second);
  }
  else {
    LOG_ERROR("IfcElectricFlowStorageDeviceType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElectricFlowStorageDeviceType * > (create(id));
  }
}

Step::BaseObject *IfcElectricFlowStorageDeviceType_Factory::create(Step::StepId id) {
  IfcElectricFlowStorageDeviceType *ret = new IfcElectricFlowStorageDeviceType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElectricFlowStorageDeviceType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElectricFlowStorageDeviceType *ret = new IfcElectricFlowStorageDeviceType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElectricFlowStorageDeviceType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElectricFlowStorageDeviceType *ret = new IfcElectricFlowStorageDeviceType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElectricFlowStorageDeviceType *IfcElectricFlowStorageDeviceType_Factory::generate() {
  return static_cast< IfcElectricFlowStorageDeviceType * > (create(m_model->getNewId()));
}

IfcElectricFlowStorageDeviceType *IfcElectricFlowStorageDeviceType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElectricFlowStorageDeviceType * > (it->second);
  }
  else {
    return NULL;
  }
}

