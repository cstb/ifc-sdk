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
#include <ifc2x3/IfcElectricMotorType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElectricMotorType::IfcElectricMotorType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcElectricMotorTypeEnum_UNSET;
}


IfcElectricMotorType::~IfcElectricMotorType() {
}

bool IfcElectricMotorType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElectricMotorType(this);
}

const char *IfcElectricMotorType::type() {
  return "IfcElectricMotorType";
}

Step::ClassType IfcElectricMotorType::getClassType() {
  return IfcElectricMotorType::s_type;
}

Step::ClassType IfcElectricMotorType::getType() const {
  return IfcElectricMotorType::s_type;
}

bool IfcElectricMotorType::isOfType(Step::ClassType t) {
  return IfcElectricMotorType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcElectricMotorTypeEnum IfcElectricMotorType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcElectricMotorTypeEnum_UNSET;
  }
}

void IfcElectricMotorType::setPredefinedType(IfcElectricMotorTypeEnum value) {
  m_predefinedType = value;
}

void IfcElectricMotorType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcElectricMotorType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcElectricMotorTypeEnum_UNSET;
  }
  else {
    if (arg == ".DC.") {
      m_predefinedType = IfcElectricMotorTypeEnum_DC;
    }
    else if (arg == ".INDUCTION.") {
      m_predefinedType = IfcElectricMotorTypeEnum_INDUCTION;
    }
    else if (arg == ".POLYPHASE.") {
      m_predefinedType = IfcElectricMotorTypeEnum_POLYPHASE;
    }
    else if (arg == ".RELUCTANCESYNCHRONOUS.") {
      m_predefinedType = IfcElectricMotorTypeEnum_RELUCTANCESYNCHRONOUS;
    }
    else if (arg == ".SYNCHRONOUS.") {
      m_predefinedType = IfcElectricMotorTypeEnum_SYNCHRONOUS;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcElectricMotorTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcElectricMotorTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricMotorType::s_type = new Step::ClassType_class("IfcElectricMotorType");
IfcElectricMotorType_Factory::IfcElectricMotorType_Factory() {
}

IfcElectricMotorType_Factory::~IfcElectricMotorType_Factory() {
  clear(true);
}

void IfcElectricMotorType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricMotorType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricMotorType_Factory::end() {
  return m_idMap.end();
}

IfcElectricMotorType *IfcElectricMotorType_Factory::get(Step::StepId id) {
  IfcElectricMotorType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElectricMotorType * > (it->second);
  }
  else {
    LOG_ERROR("IfcElectricMotorType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElectricMotorType * > (create(id));
  }
}

Step::BaseObject *IfcElectricMotorType_Factory::create(Step::StepId id) {
  IfcElectricMotorType *ret = new IfcElectricMotorType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElectricMotorType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElectricMotorType *ret = new IfcElectricMotorType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElectricMotorType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElectricMotorType *ret = new IfcElectricMotorType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElectricMotorType *IfcElectricMotorType_Factory::generate() {
  return static_cast< IfcElectricMotorType * > (create(m_model->getNewId()));
}

IfcElectricMotorType *IfcElectricMotorType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElectricMotorType * > (it->second);
  }
  else {
    return NULL;
  }
}

