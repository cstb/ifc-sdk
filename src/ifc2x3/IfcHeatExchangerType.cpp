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
#include <ifc2x3/IfcHeatExchangerType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcHeatExchangerType::IfcHeatExchangerType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcHeatExchangerTypeEnum_UNSET;
}


IfcHeatExchangerType::~IfcHeatExchangerType() {
}

bool IfcHeatExchangerType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcHeatExchangerType(this);
}

const char *IfcHeatExchangerType::type() {
  return "IfcHeatExchangerType";
}

Step::ClassType IfcHeatExchangerType::getClassType() {
  return IfcHeatExchangerType::s_type;
}

Step::ClassType IfcHeatExchangerType::getType() const {
  return IfcHeatExchangerType::s_type;
}

bool IfcHeatExchangerType::isOfType(Step::ClassType t) {
  return IfcHeatExchangerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcHeatExchangerTypeEnum IfcHeatExchangerType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcHeatExchangerTypeEnum_UNSET;
  }
}

void IfcHeatExchangerType::setPredefinedType(IfcHeatExchangerTypeEnum value) {
  m_predefinedType = value;
}

void IfcHeatExchangerType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcHeatExchangerType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcHeatExchangerTypeEnum_UNSET;
  }
  else {
    if (arg == ".PLATE.") {
      m_predefinedType = IfcHeatExchangerTypeEnum_PLATE;
    }
    else if (arg == ".SHELLANDTUBE.") {
      m_predefinedType = IfcHeatExchangerTypeEnum_SHELLANDTUBE;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcHeatExchangerTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcHeatExchangerTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcHeatExchangerType::s_type = new Step::ClassType_class("IfcHeatExchangerType");
IfcHeatExchangerType_Factory::IfcHeatExchangerType_Factory() {
}

IfcHeatExchangerType_Factory::~IfcHeatExchangerType_Factory() {
  clear(true);
}

void IfcHeatExchangerType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcHeatExchangerType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcHeatExchangerType_Factory::end() {
  return m_idMap.end();
}

IfcHeatExchangerType *IfcHeatExchangerType_Factory::get(Step::StepId id) {
  IfcHeatExchangerType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcHeatExchangerType * > (it->second);
  }
  else {
    LOG_ERROR("IfcHeatExchangerType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcHeatExchangerType * > (create(id));
  }
}

Step::BaseObject *IfcHeatExchangerType_Factory::create(Step::StepId id) {
  IfcHeatExchangerType *ret = new IfcHeatExchangerType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcHeatExchangerType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcHeatExchangerType *ret = new IfcHeatExchangerType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcHeatExchangerType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcHeatExchangerType *ret = new IfcHeatExchangerType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcHeatExchangerType *IfcHeatExchangerType_Factory::generate() {
  return static_cast< IfcHeatExchangerType * > (create(m_model->getNewId()));
}

IfcHeatExchangerType *IfcHeatExchangerType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcHeatExchangerType * > (it->second);
  }
  else {
    return NULL;
  }
}

