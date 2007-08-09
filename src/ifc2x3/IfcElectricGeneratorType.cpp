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
#include <ifc2x3/IfcElectricGeneratorType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElectricGeneratorType::IfcElectricGeneratorType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcElectricGeneratorTypeEnum_UNSET;
}


IfcElectricGeneratorType::~IfcElectricGeneratorType() {
}

bool IfcElectricGeneratorType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElectricGeneratorType(this);
}

const char *IfcElectricGeneratorType::type() {
  return "IfcElectricGeneratorType";
}

Step::ClassType IfcElectricGeneratorType::getClassType() {
  return IfcElectricGeneratorType::s_type;
}

Step::ClassType IfcElectricGeneratorType::getType() const {
  return IfcElectricGeneratorType::s_type;
}

bool IfcElectricGeneratorType::isOfType(Step::ClassType t) {
  return IfcElectricGeneratorType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcElectricGeneratorTypeEnum IfcElectricGeneratorType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcElectricGeneratorTypeEnum_UNSET;
  }
}

void IfcElectricGeneratorType::setPredefinedType(IfcElectricGeneratorTypeEnum value) {
  m_predefinedType = value;
}

void IfcElectricGeneratorType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcElectricGeneratorType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcElectricGeneratorTypeEnum_UNSET;
  }
  else {
    if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcElectricGeneratorTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcElectricGeneratorTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricGeneratorType::s_type = new Step::ClassType_class("IfcElectricGeneratorType");
IfcElectricGeneratorType_Factory::IfcElectricGeneratorType_Factory() {
}

IfcElectricGeneratorType_Factory::~IfcElectricGeneratorType_Factory() {
  clear(true);
}

void IfcElectricGeneratorType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricGeneratorType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricGeneratorType_Factory::end() {
  return m_idMap.end();
}

IfcElectricGeneratorType *IfcElectricGeneratorType_Factory::get(Step::StepId id) {
  IfcElectricGeneratorType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElectricGeneratorType * > (it->second);
  }
  else {
    LOG_ERROR("IfcElectricGeneratorType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElectricGeneratorType * > (create(id));
  }
}

Step::BaseObject *IfcElectricGeneratorType_Factory::create(Step::StepId id) {
  IfcElectricGeneratorType *ret = new IfcElectricGeneratorType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElectricGeneratorType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElectricGeneratorType *ret = new IfcElectricGeneratorType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElectricGeneratorType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElectricGeneratorType *ret = new IfcElectricGeneratorType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElectricGeneratorType *IfcElectricGeneratorType_Factory::generate() {
  return static_cast< IfcElectricGeneratorType * > (create(m_model->getNewId()));
}

IfcElectricGeneratorType *IfcElectricGeneratorType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElectricGeneratorType * > (it->second);
  }
  else {
    return NULL;
  }
}

