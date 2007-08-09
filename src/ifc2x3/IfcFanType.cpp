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
#include <ifc2x3/IfcFanType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFanType::IfcFanType(Step::SPFData *args) : IfcFlowMovingDeviceType(args) {
  m_predefinedType = IfcFanTypeEnum_UNSET;
}


IfcFanType::~IfcFanType() {
}

bool IfcFanType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFanType(this);
}

const char *IfcFanType::type() {
  return "IfcFanType";
}

Step::ClassType IfcFanType::getClassType() {
  return IfcFanType::s_type;
}

Step::ClassType IfcFanType::getType() const {
  return IfcFanType::s_type;
}

bool IfcFanType::isOfType(Step::ClassType t) {
  return IfcFanType::s_type == t ? true : IfcFlowMovingDeviceType::isOfType(t);
}

IfcFanTypeEnum IfcFanType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcFanTypeEnum_UNSET;
  }
}

void IfcFanType::setPredefinedType(IfcFanTypeEnum value) {
  m_predefinedType = value;
}

void IfcFanType::release() {
  IfcFlowMovingDeviceType::release();
}

bool IfcFanType::init() {
  bool status = IfcFlowMovingDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcFanTypeEnum_UNSET;
  }
  else {
    if (arg == ".CENTRIFUGALFORWARDCURVED.") {
      m_predefinedType = IfcFanTypeEnum_CENTRIFUGALFORWARDCURVED;
    }
    else if (arg == ".CENTRIFUGALRADIAL.") {
      m_predefinedType = IfcFanTypeEnum_CENTRIFUGALRADIAL;
    }
    else if (arg == ".CENTRIFUGALBACKWARDINCLINEDCURVED.") {
      m_predefinedType = IfcFanTypeEnum_CENTRIFUGALBACKWARDINCLINEDCURVED;
    }
    else if (arg == ".CENTRIFUGALAIRFOIL.") {
      m_predefinedType = IfcFanTypeEnum_CENTRIFUGALAIRFOIL;
    }
    else if (arg == ".TUBEAXIAL.") {
      m_predefinedType = IfcFanTypeEnum_TUBEAXIAL;
    }
    else if (arg == ".VANEAXIAL.") {
      m_predefinedType = IfcFanTypeEnum_VANEAXIAL;
    }
    else if (arg == ".PROPELLORAXIAL.") {
      m_predefinedType = IfcFanTypeEnum_PROPELLORAXIAL;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcFanTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcFanTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFanType::s_type = new Step::ClassType_class("IfcFanType");
IfcFanType_Factory::IfcFanType_Factory() {
}

IfcFanType_Factory::~IfcFanType_Factory() {
  clear(true);
}

void IfcFanType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFanType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFanType_Factory::end() {
  return m_idMap.end();
}

IfcFanType *IfcFanType_Factory::get(Step::StepId id) {
  IfcFanType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFanType * > (it->second);
  }
  else {
    LOG_ERROR("IfcFanType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFanType * > (create(id));
  }
}

Step::BaseObject *IfcFanType_Factory::create(Step::StepId id) {
  IfcFanType *ret = new IfcFanType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFanType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFanType *ret = new IfcFanType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFanType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFanType *ret = new IfcFanType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFanType *IfcFanType_Factory::generate() {
  return static_cast< IfcFanType * > (create(m_model->getNewId()));
}

IfcFanType *IfcFanType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFanType * > (it->second);
  }
  else {
    return NULL;
  }
}

