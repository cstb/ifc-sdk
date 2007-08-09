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
#include <ifc2x3/IfcMotorConnectionType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMotorConnectionType::IfcMotorConnectionType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcMotorConnectionTypeEnum_UNSET;
}


IfcMotorConnectionType::~IfcMotorConnectionType() {
}

bool IfcMotorConnectionType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMotorConnectionType(this);
}

const char *IfcMotorConnectionType::type() {
  return "IfcMotorConnectionType";
}

Step::ClassType IfcMotorConnectionType::getClassType() {
  return IfcMotorConnectionType::s_type;
}

Step::ClassType IfcMotorConnectionType::getType() const {
  return IfcMotorConnectionType::s_type;
}

bool IfcMotorConnectionType::isOfType(Step::ClassType t) {
  return IfcMotorConnectionType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcMotorConnectionTypeEnum IfcMotorConnectionType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcMotorConnectionTypeEnum_UNSET;
  }
}

void IfcMotorConnectionType::setPredefinedType(IfcMotorConnectionTypeEnum value) {
  m_predefinedType = value;
}

void IfcMotorConnectionType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcMotorConnectionType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcMotorConnectionTypeEnum_UNSET;
  }
  else {
    if (arg == ".BELTDRIVE.") {
      m_predefinedType = IfcMotorConnectionTypeEnum_BELTDRIVE;
    }
    else if (arg == ".COUPLING.") {
      m_predefinedType = IfcMotorConnectionTypeEnum_COUPLING;
    }
    else if (arg == ".DIRECTDRIVE.") {
      m_predefinedType = IfcMotorConnectionTypeEnum_DIRECTDRIVE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcMotorConnectionTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcMotorConnectionTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMotorConnectionType::s_type = new Step::ClassType_class("IfcMotorConnectionType");
IfcMotorConnectionType_Factory::IfcMotorConnectionType_Factory() {
}

IfcMotorConnectionType_Factory::~IfcMotorConnectionType_Factory() {
  clear(true);
}

void IfcMotorConnectionType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMotorConnectionType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMotorConnectionType_Factory::end() {
  return m_idMap.end();
}

IfcMotorConnectionType *IfcMotorConnectionType_Factory::get(Step::StepId id) {
  IfcMotorConnectionType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMotorConnectionType * > (it->second);
  }
  else {
    LOG_ERROR("IfcMotorConnectionType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMotorConnectionType * > (create(id));
  }
}

Step::BaseObject *IfcMotorConnectionType_Factory::create(Step::StepId id) {
  IfcMotorConnectionType *ret = new IfcMotorConnectionType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMotorConnectionType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMotorConnectionType *ret = new IfcMotorConnectionType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMotorConnectionType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMotorConnectionType *ret = new IfcMotorConnectionType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMotorConnectionType *IfcMotorConnectionType_Factory::generate() {
  return static_cast< IfcMotorConnectionType * > (create(m_model->getNewId()));
}

IfcMotorConnectionType *IfcMotorConnectionType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMotorConnectionType * > (it->second);
  }
  else {
    return NULL;
  }
}

