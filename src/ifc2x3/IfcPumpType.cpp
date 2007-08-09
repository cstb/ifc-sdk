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
#include <ifc2x3/IfcPumpType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPumpType::IfcPumpType(Step::SPFData *args) : IfcFlowMovingDeviceType(args) {
  m_predefinedType = IfcPumpTypeEnum_UNSET;
}


IfcPumpType::~IfcPumpType() {
}

bool IfcPumpType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPumpType(this);
}

const char *IfcPumpType::type() {
  return "IfcPumpType";
}

Step::ClassType IfcPumpType::getClassType() {
  return IfcPumpType::s_type;
}

Step::ClassType IfcPumpType::getType() const {
  return IfcPumpType::s_type;
}

bool IfcPumpType::isOfType(Step::ClassType t) {
  return IfcPumpType::s_type == t ? true : IfcFlowMovingDeviceType::isOfType(t);
}

IfcPumpTypeEnum IfcPumpType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcPumpTypeEnum_UNSET;
  }
}

void IfcPumpType::setPredefinedType(IfcPumpTypeEnum value) {
  m_predefinedType = value;
}

void IfcPumpType::release() {
  IfcFlowMovingDeviceType::release();
}

bool IfcPumpType::init() {
  bool status = IfcFlowMovingDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcPumpTypeEnum_UNSET;
  }
  else {
    if (arg == ".CIRCULATOR.") {
      m_predefinedType = IfcPumpTypeEnum_CIRCULATOR;
    }
    else if (arg == ".ENDSUCTION.") {
      m_predefinedType = IfcPumpTypeEnum_ENDSUCTION;
    }
    else if (arg == ".SPLITCASE.") {
      m_predefinedType = IfcPumpTypeEnum_SPLITCASE;
    }
    else if (arg == ".VERTICALINLINE.") {
      m_predefinedType = IfcPumpTypeEnum_VERTICALINLINE;
    }
    else if (arg == ".VERTICALTURBINE.") {
      m_predefinedType = IfcPumpTypeEnum_VERTICALTURBINE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcPumpTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcPumpTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPumpType::s_type = new Step::ClassType_class("IfcPumpType");
IfcPumpType_Factory::IfcPumpType_Factory() {
}

IfcPumpType_Factory::~IfcPumpType_Factory() {
  clear(true);
}

void IfcPumpType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPumpType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPumpType_Factory::end() {
  return m_idMap.end();
}

IfcPumpType *IfcPumpType_Factory::get(Step::StepId id) {
  IfcPumpType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPumpType * > (it->second);
  }
  else {
    LOG_ERROR("IfcPumpType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPumpType * > (create(id));
  }
}

Step::BaseObject *IfcPumpType_Factory::create(Step::StepId id) {
  IfcPumpType *ret = new IfcPumpType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPumpType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPumpType *ret = new IfcPumpType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPumpType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPumpType *ret = new IfcPumpType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPumpType *IfcPumpType_Factory::generate() {
  return static_cast< IfcPumpType * > (create(m_model->getNewId()));
}

IfcPumpType *IfcPumpType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPumpType * > (it->second);
  }
  else {
    return NULL;
  }
}

