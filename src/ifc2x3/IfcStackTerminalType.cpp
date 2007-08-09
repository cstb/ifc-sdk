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
#include <ifc2x3/IfcStackTerminalType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStackTerminalType::IfcStackTerminalType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcStackTerminalTypeEnum_UNSET;
}


IfcStackTerminalType::~IfcStackTerminalType() {
}

bool IfcStackTerminalType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStackTerminalType(this);
}

const char *IfcStackTerminalType::type() {
  return "IfcStackTerminalType";
}

Step::ClassType IfcStackTerminalType::getClassType() {
  return IfcStackTerminalType::s_type;
}

Step::ClassType IfcStackTerminalType::getType() const {
  return IfcStackTerminalType::s_type;
}

bool IfcStackTerminalType::isOfType(Step::ClassType t) {
  return IfcStackTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcStackTerminalTypeEnum IfcStackTerminalType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcStackTerminalTypeEnum_UNSET;
  }
}

void IfcStackTerminalType::setPredefinedType(IfcStackTerminalTypeEnum value) {
  m_predefinedType = value;
}

void IfcStackTerminalType::release() {
  IfcFlowTerminalType::release();
}

bool IfcStackTerminalType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcStackTerminalTypeEnum_UNSET;
  }
  else {
    if (arg == ".BIRDCAGE.") {
      m_predefinedType = IfcStackTerminalTypeEnum_BIRDCAGE;
    }
    else if (arg == ".COWL.") {
      m_predefinedType = IfcStackTerminalTypeEnum_COWL;
    }
    else if (arg == ".RAINWATERHOPPER.") {
      m_predefinedType = IfcStackTerminalTypeEnum_RAINWATERHOPPER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcStackTerminalTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcStackTerminalTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStackTerminalType::s_type = new Step::ClassType_class("IfcStackTerminalType");
IfcStackTerminalType_Factory::IfcStackTerminalType_Factory() {
}

IfcStackTerminalType_Factory::~IfcStackTerminalType_Factory() {
  clear(true);
}

void IfcStackTerminalType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStackTerminalType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStackTerminalType_Factory::end() {
  return m_idMap.end();
}

IfcStackTerminalType *IfcStackTerminalType_Factory::get(Step::StepId id) {
  IfcStackTerminalType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStackTerminalType * > (it->second);
  }
  else {
    LOG_ERROR("IfcStackTerminalType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStackTerminalType * > (create(id));
  }
}

Step::BaseObject *IfcStackTerminalType_Factory::create(Step::StepId id) {
  IfcStackTerminalType *ret = new IfcStackTerminalType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStackTerminalType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStackTerminalType *ret = new IfcStackTerminalType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStackTerminalType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStackTerminalType *ret = new IfcStackTerminalType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStackTerminalType *IfcStackTerminalType_Factory::generate() {
  return static_cast< IfcStackTerminalType * > (create(m_model->getNewId()));
}

IfcStackTerminalType *IfcStackTerminalType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStackTerminalType * > (it->second);
  }
  else {
    return NULL;
  }
}

