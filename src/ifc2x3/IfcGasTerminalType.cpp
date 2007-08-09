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
#include <ifc2x3/IfcGasTerminalType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGasTerminalType::IfcGasTerminalType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcGasTerminalTypeEnum_UNSET;
}


IfcGasTerminalType::~IfcGasTerminalType() {
}

bool IfcGasTerminalType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGasTerminalType(this);
}

const char *IfcGasTerminalType::type() {
  return "IfcGasTerminalType";
}

Step::ClassType IfcGasTerminalType::getClassType() {
  return IfcGasTerminalType::s_type;
}

Step::ClassType IfcGasTerminalType::getType() const {
  return IfcGasTerminalType::s_type;
}

bool IfcGasTerminalType::isOfType(Step::ClassType t) {
  return IfcGasTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcGasTerminalTypeEnum IfcGasTerminalType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcGasTerminalTypeEnum_UNSET;
  }
}

void IfcGasTerminalType::setPredefinedType(IfcGasTerminalTypeEnum value) {
  m_predefinedType = value;
}

void IfcGasTerminalType::release() {
  IfcFlowTerminalType::release();
}

bool IfcGasTerminalType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcGasTerminalTypeEnum_UNSET;
  }
  else {
    if (arg == ".GASAPPLIANCE.") {
      m_predefinedType = IfcGasTerminalTypeEnum_GASAPPLIANCE;
    }
    else if (arg == ".GASBOOSTER.") {
      m_predefinedType = IfcGasTerminalTypeEnum_GASBOOSTER;
    }
    else if (arg == ".GASBURNER.") {
      m_predefinedType = IfcGasTerminalTypeEnum_GASBURNER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcGasTerminalTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcGasTerminalTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGasTerminalType::s_type = new Step::ClassType_class("IfcGasTerminalType");
IfcGasTerminalType_Factory::IfcGasTerminalType_Factory() {
}

IfcGasTerminalType_Factory::~IfcGasTerminalType_Factory() {
  clear(true);
}

void IfcGasTerminalType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGasTerminalType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGasTerminalType_Factory::end() {
  return m_idMap.end();
}

IfcGasTerminalType *IfcGasTerminalType_Factory::get(Step::StepId id) {
  IfcGasTerminalType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGasTerminalType * > (it->second);
  }
  else {
    LOG_ERROR("IfcGasTerminalType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGasTerminalType * > (create(id));
  }
}

Step::BaseObject *IfcGasTerminalType_Factory::create(Step::StepId id) {
  IfcGasTerminalType *ret = new IfcGasTerminalType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGasTerminalType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGasTerminalType *ret = new IfcGasTerminalType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGasTerminalType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGasTerminalType *ret = new IfcGasTerminalType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGasTerminalType *IfcGasTerminalType_Factory::generate() {
  return static_cast< IfcGasTerminalType * > (create(m_model->getNewId()));
}

IfcGasTerminalType *IfcGasTerminalType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGasTerminalType * > (it->second);
  }
  else {
    return NULL;
  }
}

