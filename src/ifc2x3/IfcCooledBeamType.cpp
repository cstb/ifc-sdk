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
#include <ifc2x3/IfcCooledBeamType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCooledBeamType::IfcCooledBeamType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcCooledBeamTypeEnum_UNSET;
}


IfcCooledBeamType::~IfcCooledBeamType() {
}

bool IfcCooledBeamType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCooledBeamType(this);
}

const char *IfcCooledBeamType::type() {
  return "IfcCooledBeamType";
}

Step::ClassType IfcCooledBeamType::getClassType() {
  return IfcCooledBeamType::s_type;
}

Step::ClassType IfcCooledBeamType::getType() const {
  return IfcCooledBeamType::s_type;
}

bool IfcCooledBeamType::isOfType(Step::ClassType t) {
  return IfcCooledBeamType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcCooledBeamTypeEnum IfcCooledBeamType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCooledBeamTypeEnum_UNSET;
  }
}

void IfcCooledBeamType::setPredefinedType(IfcCooledBeamTypeEnum value) {
  m_predefinedType = value;
}

void IfcCooledBeamType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcCooledBeamType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCooledBeamTypeEnum_UNSET;
  }
  else {
    if (arg == ".ACTIVE.") {
      m_predefinedType = IfcCooledBeamTypeEnum_ACTIVE;
    }
    else if (arg == ".PASSIVE.") {
      m_predefinedType = IfcCooledBeamTypeEnum_PASSIVE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCooledBeamTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCooledBeamTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCooledBeamType::s_type = new Step::ClassType_class("IfcCooledBeamType");
IfcCooledBeamType_Factory::IfcCooledBeamType_Factory() {
}

IfcCooledBeamType_Factory::~IfcCooledBeamType_Factory() {
  clear(true);
}

void IfcCooledBeamType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCooledBeamType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCooledBeamType_Factory::end() {
  return m_idMap.end();
}

IfcCooledBeamType *IfcCooledBeamType_Factory::get(Step::StepId id) {
  IfcCooledBeamType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCooledBeamType * > (it->second);
  }
  else {
    LOG_ERROR("IfcCooledBeamType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCooledBeamType * > (create(id));
  }
}

Step::BaseObject *IfcCooledBeamType_Factory::create(Step::StepId id) {
  IfcCooledBeamType *ret = new IfcCooledBeamType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCooledBeamType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCooledBeamType *ret = new IfcCooledBeamType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCooledBeamType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCooledBeamType *ret = new IfcCooledBeamType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCooledBeamType *IfcCooledBeamType_Factory::generate() {
  return static_cast< IfcCooledBeamType * > (create(m_model->getNewId()));
}

IfcCooledBeamType *IfcCooledBeamType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCooledBeamType * > (it->second);
  }
  else {
    return NULL;
  }
}

