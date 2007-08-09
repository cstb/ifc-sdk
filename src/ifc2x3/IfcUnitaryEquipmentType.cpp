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
#include <ifc2x3/IfcUnitaryEquipmentType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcUnitaryEquipmentType::IfcUnitaryEquipmentType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcUnitaryEquipmentTypeEnum_UNSET;
}


IfcUnitaryEquipmentType::~IfcUnitaryEquipmentType() {
}

bool IfcUnitaryEquipmentType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcUnitaryEquipmentType(this);
}

const char *IfcUnitaryEquipmentType::type() {
  return "IfcUnitaryEquipmentType";
}

Step::ClassType IfcUnitaryEquipmentType::getClassType() {
  return IfcUnitaryEquipmentType::s_type;
}

Step::ClassType IfcUnitaryEquipmentType::getType() const {
  return IfcUnitaryEquipmentType::s_type;
}

bool IfcUnitaryEquipmentType::isOfType(Step::ClassType t) {
  return IfcUnitaryEquipmentType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcUnitaryEquipmentTypeEnum IfcUnitaryEquipmentType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcUnitaryEquipmentTypeEnum_UNSET;
  }
}

void IfcUnitaryEquipmentType::setPredefinedType(IfcUnitaryEquipmentTypeEnum value) {
  m_predefinedType = value;
}

void IfcUnitaryEquipmentType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcUnitaryEquipmentType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcUnitaryEquipmentTypeEnum_UNSET;
  }
  else {
    if (arg == ".AIRHANDLER.") {
      m_predefinedType = IfcUnitaryEquipmentTypeEnum_AIRHANDLER;
    }
    else if (arg == ".AIRCONDITIONINGUNIT.") {
      m_predefinedType = IfcUnitaryEquipmentTypeEnum_AIRCONDITIONINGUNIT;
    }
    else if (arg == ".SPLITSYSTEM.") {
      m_predefinedType = IfcUnitaryEquipmentTypeEnum_SPLITSYSTEM;
    }
    else if (arg == ".ROOFTOPUNIT.") {
      m_predefinedType = IfcUnitaryEquipmentTypeEnum_ROOFTOPUNIT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcUnitaryEquipmentTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcUnitaryEquipmentTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcUnitaryEquipmentType::s_type = new Step::ClassType_class("IfcUnitaryEquipmentType");
IfcUnitaryEquipmentType_Factory::IfcUnitaryEquipmentType_Factory() {
}

IfcUnitaryEquipmentType_Factory::~IfcUnitaryEquipmentType_Factory() {
  clear(true);
}

void IfcUnitaryEquipmentType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcUnitaryEquipmentType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcUnitaryEquipmentType_Factory::end() {
  return m_idMap.end();
}

IfcUnitaryEquipmentType *IfcUnitaryEquipmentType_Factory::get(Step::StepId id) {
  IfcUnitaryEquipmentType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcUnitaryEquipmentType * > (it->second);
  }
  else {
    LOG_ERROR("IfcUnitaryEquipmentType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcUnitaryEquipmentType * > (create(id));
  }
}

Step::BaseObject *IfcUnitaryEquipmentType_Factory::create(Step::StepId id) {
  IfcUnitaryEquipmentType *ret = new IfcUnitaryEquipmentType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcUnitaryEquipmentType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcUnitaryEquipmentType *ret = new IfcUnitaryEquipmentType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcUnitaryEquipmentType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcUnitaryEquipmentType *ret = new IfcUnitaryEquipmentType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcUnitaryEquipmentType *IfcUnitaryEquipmentType_Factory::generate() {
  return static_cast< IfcUnitaryEquipmentType * > (create(m_model->getNewId()));
}

IfcUnitaryEquipmentType *IfcUnitaryEquipmentType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcUnitaryEquipmentType * > (it->second);
  }
  else {
    return NULL;
  }
}

