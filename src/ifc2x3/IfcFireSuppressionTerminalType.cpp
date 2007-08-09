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
#include <ifc2x3/IfcFireSuppressionTerminalType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFireSuppressionTerminalType::IfcFireSuppressionTerminalType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcFireSuppressionTerminalTypeEnum_UNSET;
}


IfcFireSuppressionTerminalType::~IfcFireSuppressionTerminalType() {
}

bool IfcFireSuppressionTerminalType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFireSuppressionTerminalType(this);
}

const char *IfcFireSuppressionTerminalType::type() {
  return "IfcFireSuppressionTerminalType";
}

Step::ClassType IfcFireSuppressionTerminalType::getClassType() {
  return IfcFireSuppressionTerminalType::s_type;
}

Step::ClassType IfcFireSuppressionTerminalType::getType() const {
  return IfcFireSuppressionTerminalType::s_type;
}

bool IfcFireSuppressionTerminalType::isOfType(Step::ClassType t) {
  return IfcFireSuppressionTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcFireSuppressionTerminalTypeEnum IfcFireSuppressionTerminalType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcFireSuppressionTerminalTypeEnum_UNSET;
  }
}

void IfcFireSuppressionTerminalType::setPredefinedType(IfcFireSuppressionTerminalTypeEnum value) {
  m_predefinedType = value;
}

void IfcFireSuppressionTerminalType::release() {
  IfcFlowTerminalType::release();
}

bool IfcFireSuppressionTerminalType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcFireSuppressionTerminalTypeEnum_UNSET;
  }
  else {
    if (arg == ".BREECHINGINLET.") {
      m_predefinedType = IfcFireSuppressionTerminalTypeEnum_BREECHINGINLET;
    }
    else if (arg == ".FIREHYDRANT.") {
      m_predefinedType = IfcFireSuppressionTerminalTypeEnum_FIREHYDRANT;
    }
    else if (arg == ".HOSEREEL.") {
      m_predefinedType = IfcFireSuppressionTerminalTypeEnum_HOSEREEL;
    }
    else if (arg == ".SPRINKLER.") {
      m_predefinedType = IfcFireSuppressionTerminalTypeEnum_SPRINKLER;
    }
    else if (arg == ".SPRINKLERDEFLECTOR.") {
      m_predefinedType = IfcFireSuppressionTerminalTypeEnum_SPRINKLERDEFLECTOR;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcFireSuppressionTerminalTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcFireSuppressionTerminalTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFireSuppressionTerminalType::s_type = new Step::ClassType_class("IfcFireSuppressionTerminalType");
IfcFireSuppressionTerminalType_Factory::IfcFireSuppressionTerminalType_Factory() {
}

IfcFireSuppressionTerminalType_Factory::~IfcFireSuppressionTerminalType_Factory() {
  clear(true);
}

void IfcFireSuppressionTerminalType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFireSuppressionTerminalType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFireSuppressionTerminalType_Factory::end() {
  return m_idMap.end();
}

IfcFireSuppressionTerminalType *IfcFireSuppressionTerminalType_Factory::get(Step::StepId id) {
  IfcFireSuppressionTerminalType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFireSuppressionTerminalType * > (it->second);
  }
  else {
    LOG_ERROR("IfcFireSuppressionTerminalType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFireSuppressionTerminalType * > (create(id));
  }
}

Step::BaseObject *IfcFireSuppressionTerminalType_Factory::create(Step::StepId id) {
  IfcFireSuppressionTerminalType *ret = new IfcFireSuppressionTerminalType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFireSuppressionTerminalType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFireSuppressionTerminalType *ret = new IfcFireSuppressionTerminalType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFireSuppressionTerminalType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFireSuppressionTerminalType *ret = new IfcFireSuppressionTerminalType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFireSuppressionTerminalType *IfcFireSuppressionTerminalType_Factory::generate() {
  return static_cast< IfcFireSuppressionTerminalType * > (create(m_model->getNewId()));
}

IfcFireSuppressionTerminalType *IfcFireSuppressionTerminalType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFireSuppressionTerminalType * > (it->second);
  }
  else {
    return NULL;
  }
}

