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
#include <ifc2x3/IfcAirTerminalBoxType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAirTerminalBoxType::IfcAirTerminalBoxType(Step::SPFData *args) : IfcFlowControllerType(args) {
  m_predefinedType = IfcAirTerminalBoxTypeEnum_UNSET;
}


IfcAirTerminalBoxType::~IfcAirTerminalBoxType() {
}

bool IfcAirTerminalBoxType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAirTerminalBoxType(this);
}

const char *IfcAirTerminalBoxType::type() {
  return "IfcAirTerminalBoxType";
}

Step::ClassType IfcAirTerminalBoxType::getClassType() {
  return IfcAirTerminalBoxType::s_type;
}

Step::ClassType IfcAirTerminalBoxType::getType() const {
  return IfcAirTerminalBoxType::s_type;
}

bool IfcAirTerminalBoxType::isOfType(Step::ClassType t) {
  return IfcAirTerminalBoxType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcAirTerminalBoxTypeEnum IfcAirTerminalBoxType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcAirTerminalBoxTypeEnum_UNSET;
  }
}

void IfcAirTerminalBoxType::setPredefinedType(IfcAirTerminalBoxTypeEnum value) {
  m_predefinedType = value;
}

void IfcAirTerminalBoxType::release() {
  IfcFlowControllerType::release();
}

bool IfcAirTerminalBoxType::init() {
  bool status = IfcFlowControllerType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcAirTerminalBoxTypeEnum_UNSET;
  }
  else {
    if (arg == ".CONSTANTFLOW.") {
      m_predefinedType = IfcAirTerminalBoxTypeEnum_CONSTANTFLOW;
    }
    else if (arg == ".VARIABLEFLOWPRESSUREDEPENDANT.") {
      m_predefinedType = IfcAirTerminalBoxTypeEnum_VARIABLEFLOWPRESSUREDEPENDANT;
    }
    else if (arg == ".VARIABLEFLOWPRESSUREINDEPENDANT.") {
      m_predefinedType = IfcAirTerminalBoxTypeEnum_VARIABLEFLOWPRESSUREINDEPENDANT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcAirTerminalBoxTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcAirTerminalBoxTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAirTerminalBoxType::s_type = new Step::ClassType_class("IfcAirTerminalBoxType");
IfcAirTerminalBoxType_Factory::IfcAirTerminalBoxType_Factory() {
}

IfcAirTerminalBoxType_Factory::~IfcAirTerminalBoxType_Factory() {
  clear(true);
}

void IfcAirTerminalBoxType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAirTerminalBoxType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAirTerminalBoxType_Factory::end() {
  return m_idMap.end();
}

IfcAirTerminalBoxType *IfcAirTerminalBoxType_Factory::get(Step::StepId id) {
  IfcAirTerminalBoxType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAirTerminalBoxType * > (it->second);
  }
  else {
    LOG_ERROR("IfcAirTerminalBoxType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAirTerminalBoxType * > (create(id));
  }
}

Step::BaseObject *IfcAirTerminalBoxType_Factory::create(Step::StepId id) {
  IfcAirTerminalBoxType *ret = new IfcAirTerminalBoxType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAirTerminalBoxType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAirTerminalBoxType *ret = new IfcAirTerminalBoxType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAirTerminalBoxType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAirTerminalBoxType *ret = new IfcAirTerminalBoxType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAirTerminalBoxType *IfcAirTerminalBoxType_Factory::generate() {
  return static_cast< IfcAirTerminalBoxType * > (create(m_model->getNewId()));
}

IfcAirTerminalBoxType *IfcAirTerminalBoxType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAirTerminalBoxType * > (it->second);
  }
  else {
    return NULL;
  }
}

