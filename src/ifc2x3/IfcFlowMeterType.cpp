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
#include <ifc2x3/IfcFlowMeterType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFlowMeterType::IfcFlowMeterType(Step::SPFData *args) : IfcFlowControllerType(args) {
  m_predefinedType = IfcFlowMeterTypeEnum_UNSET;
}


IfcFlowMeterType::~IfcFlowMeterType() {
}

bool IfcFlowMeterType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFlowMeterType(this);
}

const char *IfcFlowMeterType::type() {
  return "IfcFlowMeterType";
}

Step::ClassType IfcFlowMeterType::getClassType() {
  return IfcFlowMeterType::s_type;
}

Step::ClassType IfcFlowMeterType::getType() const {
  return IfcFlowMeterType::s_type;
}

bool IfcFlowMeterType::isOfType(Step::ClassType t) {
  return IfcFlowMeterType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcFlowMeterTypeEnum IfcFlowMeterType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcFlowMeterTypeEnum_UNSET;
  }
}

void IfcFlowMeterType::setPredefinedType(IfcFlowMeterTypeEnum value) {
  m_predefinedType = value;
}

void IfcFlowMeterType::release() {
  IfcFlowControllerType::release();
}

bool IfcFlowMeterType::init() {
  bool status = IfcFlowControllerType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcFlowMeterTypeEnum_UNSET;
  }
  else {
    if (arg == ".ELECTRICMETER.") {
      m_predefinedType = IfcFlowMeterTypeEnum_ELECTRICMETER;
    }
    else if (arg == ".ENERGYMETER.") {
      m_predefinedType = IfcFlowMeterTypeEnum_ENERGYMETER;
    }
    else if (arg == ".FLOWMETER.") {
      m_predefinedType = IfcFlowMeterTypeEnum_FLOWMETER;
    }
    else if (arg == ".GASMETER.") {
      m_predefinedType = IfcFlowMeterTypeEnum_GASMETER;
    }
    else if (arg == ".OILMETER.") {
      m_predefinedType = IfcFlowMeterTypeEnum_OILMETER;
    }
    else if (arg == ".WATERMETER.") {
      m_predefinedType = IfcFlowMeterTypeEnum_WATERMETER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcFlowMeterTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcFlowMeterTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowMeterType::s_type = new Step::ClassType_class("IfcFlowMeterType");
IfcFlowMeterType_Factory::IfcFlowMeterType_Factory() {
}

IfcFlowMeterType_Factory::~IfcFlowMeterType_Factory() {
  clear(true);
}

void IfcFlowMeterType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFlowMeterType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFlowMeterType_Factory::end() {
  return m_idMap.end();
}

IfcFlowMeterType *IfcFlowMeterType_Factory::get(Step::StepId id) {
  IfcFlowMeterType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFlowMeterType * > (it->second);
  }
  else {
    LOG_ERROR("IfcFlowMeterType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFlowMeterType * > (create(id));
  }
}

Step::BaseObject *IfcFlowMeterType_Factory::create(Step::StepId id) {
  IfcFlowMeterType *ret = new IfcFlowMeterType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFlowMeterType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFlowMeterType *ret = new IfcFlowMeterType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFlowMeterType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFlowMeterType *ret = new IfcFlowMeterType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFlowMeterType *IfcFlowMeterType_Factory::generate() {
  return static_cast< IfcFlowMeterType * > (create(m_model->getNewId()));
}

IfcFlowMeterType *IfcFlowMeterType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFlowMeterType * > (it->second);
  }
  else {
    return NULL;
  }
}

