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
#include <ifc2x3/IfcBoilerType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBoilerType::IfcBoilerType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcBoilerTypeEnum_UNSET;
}


IfcBoilerType::~IfcBoilerType() {
}

bool IfcBoilerType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBoilerType(this);
}

const char *IfcBoilerType::type() {
  return "IfcBoilerType";
}

Step::ClassType IfcBoilerType::getClassType() {
  return IfcBoilerType::s_type;
}

Step::ClassType IfcBoilerType::getType() const {
  return IfcBoilerType::s_type;
}

bool IfcBoilerType::isOfType(Step::ClassType t) {
  return IfcBoilerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcBoilerTypeEnum IfcBoilerType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcBoilerTypeEnum_UNSET;
  }
}

void IfcBoilerType::setPredefinedType(IfcBoilerTypeEnum value) {
  m_predefinedType = value;
}

void IfcBoilerType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcBoilerType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcBoilerTypeEnum_UNSET;
  }
  else {
    if (arg == ".WATER.") {
      m_predefinedType = IfcBoilerTypeEnum_WATER;
    }
    else if (arg == ".STEAM.") {
      m_predefinedType = IfcBoilerTypeEnum_STEAM;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcBoilerTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcBoilerTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoilerType::s_type = new Step::ClassType_class("IfcBoilerType");
IfcBoilerType_Factory::IfcBoilerType_Factory() {
}

IfcBoilerType_Factory::~IfcBoilerType_Factory() {
  clear(true);
}

void IfcBoilerType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoilerType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBoilerType_Factory::end() {
  return m_idMap.end();
}

IfcBoilerType *IfcBoilerType_Factory::get(Step::StepId id) {
  IfcBoilerType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBoilerType * > (it->second);
  }
  else {
    LOG_ERROR("IfcBoilerType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBoilerType * > (create(id));
  }
}

Step::BaseObject *IfcBoilerType_Factory::create(Step::StepId id) {
  IfcBoilerType *ret = new IfcBoilerType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBoilerType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBoilerType *ret = new IfcBoilerType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBoilerType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBoilerType *ret = new IfcBoilerType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBoilerType *IfcBoilerType_Factory::generate() {
  return static_cast< IfcBoilerType * > (create(m_model->getNewId()));
}

IfcBoilerType *IfcBoilerType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBoilerType * > (it->second);
  }
  else {
    return NULL;
  }
}

