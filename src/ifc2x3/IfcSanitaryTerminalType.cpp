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
#include <ifc2x3/IfcSanitaryTerminalType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSanitaryTerminalType::IfcSanitaryTerminalType(Step::SPFData *args) : IfcFlowTerminalType(args) {
  m_predefinedType = IfcSanitaryTerminalTypeEnum_UNSET;
}


IfcSanitaryTerminalType::~IfcSanitaryTerminalType() {
}

bool IfcSanitaryTerminalType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSanitaryTerminalType(this);
}

const char *IfcSanitaryTerminalType::type() {
  return "IfcSanitaryTerminalType";
}

Step::ClassType IfcSanitaryTerminalType::getClassType() {
  return IfcSanitaryTerminalType::s_type;
}

Step::ClassType IfcSanitaryTerminalType::getType() const {
  return IfcSanitaryTerminalType::s_type;
}

bool IfcSanitaryTerminalType::isOfType(Step::ClassType t) {
  return IfcSanitaryTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcSanitaryTerminalTypeEnum IfcSanitaryTerminalType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcSanitaryTerminalTypeEnum_UNSET;
  }
}

void IfcSanitaryTerminalType::setPredefinedType(IfcSanitaryTerminalTypeEnum value) {
  m_predefinedType = value;
}

void IfcSanitaryTerminalType::release() {
  IfcFlowTerminalType::release();
}

bool IfcSanitaryTerminalType::init() {
  bool status = IfcFlowTerminalType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcSanitaryTerminalTypeEnum_UNSET;
  }
  else {
    if (arg == ".BATH.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_BATH;
    }
    else if (arg == ".BIDET.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_BIDET;
    }
    else if (arg == ".CISTERN.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_CISTERN;
    }
    else if (arg == ".SHOWER.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_SHOWER;
    }
    else if (arg == ".SINK.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_SINK;
    }
    else if (arg == ".SANITARYFOUNTAIN.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_SANITARYFOUNTAIN;
    }
    else if (arg == ".TOILETPAN.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_TOILETPAN;
    }
    else if (arg == ".URINAL.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_URINAL;
    }
    else if (arg == ".WASHHANDBASIN.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_WASHHANDBASIN;
    }
    else if (arg == ".WCSEAT.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_WCSEAT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcSanitaryTerminalTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSanitaryTerminalType::s_type = new Step::ClassType_class("IfcSanitaryTerminalType");
IfcSanitaryTerminalType_Factory::IfcSanitaryTerminalType_Factory() {
}

IfcSanitaryTerminalType_Factory::~IfcSanitaryTerminalType_Factory() {
  clear(true);
}

void IfcSanitaryTerminalType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSanitaryTerminalType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSanitaryTerminalType_Factory::end() {
  return m_idMap.end();
}

IfcSanitaryTerminalType *IfcSanitaryTerminalType_Factory::get(Step::StepId id) {
  IfcSanitaryTerminalType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSanitaryTerminalType * > (it->second);
  }
  else {
    LOG_ERROR("IfcSanitaryTerminalType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSanitaryTerminalType * > (create(id));
  }
}

Step::BaseObject *IfcSanitaryTerminalType_Factory::create(Step::StepId id) {
  IfcSanitaryTerminalType *ret = new IfcSanitaryTerminalType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSanitaryTerminalType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSanitaryTerminalType *ret = new IfcSanitaryTerminalType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSanitaryTerminalType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSanitaryTerminalType *ret = new IfcSanitaryTerminalType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSanitaryTerminalType *IfcSanitaryTerminalType_Factory::generate() {
  return static_cast< IfcSanitaryTerminalType * > (create(m_model->getNewId()));
}

IfcSanitaryTerminalType *IfcSanitaryTerminalType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSanitaryTerminalType * > (it->second);
  }
  else {
    return NULL;
  }
}

