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
#include <ifc2x3/IfcAlarmType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAlarmType::IfcAlarmType(Step::SPFData *args) : IfcDistributionControlElementType(args) {
  m_predefinedType = IfcAlarmTypeEnum_UNSET;
}


IfcAlarmType::~IfcAlarmType() {
}

bool IfcAlarmType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAlarmType(this);
}

const char *IfcAlarmType::type() {
  return "IfcAlarmType";
}

Step::ClassType IfcAlarmType::getClassType() {
  return IfcAlarmType::s_type;
}

Step::ClassType IfcAlarmType::getType() const {
  return IfcAlarmType::s_type;
}

bool IfcAlarmType::isOfType(Step::ClassType t) {
  return IfcAlarmType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcAlarmTypeEnum IfcAlarmType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcAlarmTypeEnum_UNSET;
  }
}

void IfcAlarmType::setPredefinedType(IfcAlarmTypeEnum value) {
  m_predefinedType = value;
}

void IfcAlarmType::release() {
  IfcDistributionControlElementType::release();
}

bool IfcAlarmType::init() {
  bool status = IfcDistributionControlElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcAlarmTypeEnum_UNSET;
  }
  else {
    if (arg == ".BELL.") {
      m_predefinedType = IfcAlarmTypeEnum_BELL;
    }
    else if (arg == ".BREAKGLASSBUTTON.") {
      m_predefinedType = IfcAlarmTypeEnum_BREAKGLASSBUTTON;
    }
    else if (arg == ".LIGHT.") {
      m_predefinedType = IfcAlarmTypeEnum_LIGHT;
    }
    else if (arg == ".MANUALPULLBOX.") {
      m_predefinedType = IfcAlarmTypeEnum_MANUALPULLBOX;
    }
    else if (arg == ".SIREN.") {
      m_predefinedType = IfcAlarmTypeEnum_SIREN;
    }
    else if (arg == ".WHISTLE.") {
      m_predefinedType = IfcAlarmTypeEnum_WHISTLE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcAlarmTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcAlarmTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAlarmType::s_type = new Step::ClassType_class("IfcAlarmType");
IfcAlarmType_Factory::IfcAlarmType_Factory() {
}

IfcAlarmType_Factory::~IfcAlarmType_Factory() {
  clear(true);
}

void IfcAlarmType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAlarmType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAlarmType_Factory::end() {
  return m_idMap.end();
}

IfcAlarmType *IfcAlarmType_Factory::get(Step::StepId id) {
  IfcAlarmType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAlarmType * > (it->second);
  }
  else {
    LOG_ERROR("IfcAlarmType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAlarmType * > (create(id));
  }
}

Step::BaseObject *IfcAlarmType_Factory::create(Step::StepId id) {
  IfcAlarmType *ret = new IfcAlarmType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAlarmType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAlarmType *ret = new IfcAlarmType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAlarmType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAlarmType *ret = new IfcAlarmType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAlarmType *IfcAlarmType_Factory::generate() {
  return static_cast< IfcAlarmType * > (create(m_model->getNewId()));
}

IfcAlarmType *IfcAlarmType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAlarmType * > (it->second);
  }
  else {
    return NULL;
  }
}

