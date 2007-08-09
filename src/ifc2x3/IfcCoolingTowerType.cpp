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
#include <ifc2x3/IfcCoolingTowerType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCoolingTowerType::IfcCoolingTowerType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcCoolingTowerTypeEnum_UNSET;
}


IfcCoolingTowerType::~IfcCoolingTowerType() {
}

bool IfcCoolingTowerType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCoolingTowerType(this);
}

const char *IfcCoolingTowerType::type() {
  return "IfcCoolingTowerType";
}

Step::ClassType IfcCoolingTowerType::getClassType() {
  return IfcCoolingTowerType::s_type;
}

Step::ClassType IfcCoolingTowerType::getType() const {
  return IfcCoolingTowerType::s_type;
}

bool IfcCoolingTowerType::isOfType(Step::ClassType t) {
  return IfcCoolingTowerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcCoolingTowerTypeEnum IfcCoolingTowerType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCoolingTowerTypeEnum_UNSET;
  }
}

void IfcCoolingTowerType::setPredefinedType(IfcCoolingTowerTypeEnum value) {
  m_predefinedType = value;
}

void IfcCoolingTowerType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcCoolingTowerType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCoolingTowerTypeEnum_UNSET;
  }
  else {
    if (arg == ".NATURALDRAFT.") {
      m_predefinedType = IfcCoolingTowerTypeEnum_NATURALDRAFT;
    }
    else if (arg == ".MECHANICALINDUCEDDRAFT.") {
      m_predefinedType = IfcCoolingTowerTypeEnum_MECHANICALINDUCEDDRAFT;
    }
    else if (arg == ".MECHANICALFORCEDDRAFT.") {
      m_predefinedType = IfcCoolingTowerTypeEnum_MECHANICALFORCEDDRAFT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCoolingTowerTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCoolingTowerTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCoolingTowerType::s_type = new Step::ClassType_class("IfcCoolingTowerType");
IfcCoolingTowerType_Factory::IfcCoolingTowerType_Factory() {
}

IfcCoolingTowerType_Factory::~IfcCoolingTowerType_Factory() {
  clear(true);
}

void IfcCoolingTowerType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCoolingTowerType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCoolingTowerType_Factory::end() {
  return m_idMap.end();
}

IfcCoolingTowerType *IfcCoolingTowerType_Factory::get(Step::StepId id) {
  IfcCoolingTowerType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCoolingTowerType * > (it->second);
  }
  else {
    LOG_ERROR("IfcCoolingTowerType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCoolingTowerType * > (create(id));
  }
}

Step::BaseObject *IfcCoolingTowerType_Factory::create(Step::StepId id) {
  IfcCoolingTowerType *ret = new IfcCoolingTowerType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCoolingTowerType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCoolingTowerType *ret = new IfcCoolingTowerType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCoolingTowerType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCoolingTowerType *ret = new IfcCoolingTowerType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCoolingTowerType *IfcCoolingTowerType_Factory::generate() {
  return static_cast< IfcCoolingTowerType * > (create(m_model->getNewId()));
}

IfcCoolingTowerType *IfcCoolingTowerType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCoolingTowerType * > (it->second);
  }
  else {
    return NULL;
  }
}

