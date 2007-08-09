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
#include <ifc2x3/IfcTankType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcTankType::IfcTankType(Step::SPFData *args) : IfcFlowStorageDeviceType(args) {
  m_predefinedType = IfcTankTypeEnum_UNSET;
}


IfcTankType::~IfcTankType() {
}

bool IfcTankType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcTankType(this);
}

const char *IfcTankType::type() {
  return "IfcTankType";
}

Step::ClassType IfcTankType::getClassType() {
  return IfcTankType::s_type;
}

Step::ClassType IfcTankType::getType() const {
  return IfcTankType::s_type;
}

bool IfcTankType::isOfType(Step::ClassType t) {
  return IfcTankType::s_type == t ? true : IfcFlowStorageDeviceType::isOfType(t);
}

IfcTankTypeEnum IfcTankType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcTankTypeEnum_UNSET;
  }
}

void IfcTankType::setPredefinedType(IfcTankTypeEnum value) {
  m_predefinedType = value;
}

void IfcTankType::release() {
  IfcFlowStorageDeviceType::release();
}

bool IfcTankType::init() {
  bool status = IfcFlowStorageDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcTankTypeEnum_UNSET;
  }
  else {
    if (arg == ".PREFORMED.") {
      m_predefinedType = IfcTankTypeEnum_PREFORMED;
    }
    else if (arg == ".SECTIONAL.") {
      m_predefinedType = IfcTankTypeEnum_SECTIONAL;
    }
    else if (arg == ".EXPANSION.") {
      m_predefinedType = IfcTankTypeEnum_EXPANSION;
    }
    else if (arg == ".PRESSUREVESSEL.") {
      m_predefinedType = IfcTankTypeEnum_PRESSUREVESSEL;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcTankTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcTankTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcTankType::s_type = new Step::ClassType_class("IfcTankType");
IfcTankType_Factory::IfcTankType_Factory() {
}

IfcTankType_Factory::~IfcTankType_Factory() {
  clear(true);
}

void IfcTankType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTankType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcTankType_Factory::end() {
  return m_idMap.end();
}

IfcTankType *IfcTankType_Factory::get(Step::StepId id) {
  IfcTankType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcTankType * > (it->second);
  }
  else {
    LOG_ERROR("IfcTankType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcTankType * > (create(id));
  }
}

Step::BaseObject *IfcTankType_Factory::create(Step::StepId id) {
  IfcTankType *ret = new IfcTankType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcTankType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcTankType *ret = new IfcTankType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcTankType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcTankType *ret = new IfcTankType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcTankType *IfcTankType_Factory::generate() {
  return static_cast< IfcTankType * > (create(m_model->getNewId()));
}

IfcTankType *IfcTankType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcTankType * > (it->second);
  }
  else {
    return NULL;
  }
}

