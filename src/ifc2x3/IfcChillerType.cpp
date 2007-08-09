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
#include <ifc2x3/IfcChillerType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcChillerType::IfcChillerType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcChillerTypeEnum_UNSET;
}


IfcChillerType::~IfcChillerType() {
}

bool IfcChillerType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcChillerType(this);
}

const char *IfcChillerType::type() {
  return "IfcChillerType";
}

Step::ClassType IfcChillerType::getClassType() {
  return IfcChillerType::s_type;
}

Step::ClassType IfcChillerType::getType() const {
  return IfcChillerType::s_type;
}

bool IfcChillerType::isOfType(Step::ClassType t) {
  return IfcChillerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcChillerTypeEnum IfcChillerType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcChillerTypeEnum_UNSET;
  }
}

void IfcChillerType::setPredefinedType(IfcChillerTypeEnum value) {
  m_predefinedType = value;
}

void IfcChillerType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcChillerType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcChillerTypeEnum_UNSET;
  }
  else {
    if (arg == ".AIRCOOLED.") {
      m_predefinedType = IfcChillerTypeEnum_AIRCOOLED;
    }
    else if (arg == ".WATERCOOLED.") {
      m_predefinedType = IfcChillerTypeEnum_WATERCOOLED;
    }
    else if (arg == ".HEATRECOVERY.") {
      m_predefinedType = IfcChillerTypeEnum_HEATRECOVERY;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcChillerTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcChillerTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcChillerType::s_type = new Step::ClassType_class("IfcChillerType");
IfcChillerType_Factory::IfcChillerType_Factory() {
}

IfcChillerType_Factory::~IfcChillerType_Factory() {
  clear(true);
}

void IfcChillerType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcChillerType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcChillerType_Factory::end() {
  return m_idMap.end();
}

IfcChillerType *IfcChillerType_Factory::get(Step::StepId id) {
  IfcChillerType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcChillerType * > (it->second);
  }
  else {
    LOG_ERROR("IfcChillerType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcChillerType * > (create(id));
  }
}

Step::BaseObject *IfcChillerType_Factory::create(Step::StepId id) {
  IfcChillerType *ret = new IfcChillerType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcChillerType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcChillerType *ret = new IfcChillerType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcChillerType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcChillerType *ret = new IfcChillerType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcChillerType *IfcChillerType_Factory::generate() {
  return static_cast< IfcChillerType * > (create(m_model->getNewId()));
}

IfcChillerType *IfcChillerType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcChillerType * > (it->second);
  }
  else {
    return NULL;
  }
}

