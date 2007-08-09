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
#include <ifc2x3/IfcSensorType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSensorType::IfcSensorType(Step::SPFData *args) : IfcDistributionControlElementType(args) {
  m_predefinedType = IfcSensorTypeEnum_UNSET;
}


IfcSensorType::~IfcSensorType() {
}

bool IfcSensorType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSensorType(this);
}

const char *IfcSensorType::type() {
  return "IfcSensorType";
}

Step::ClassType IfcSensorType::getClassType() {
  return IfcSensorType::s_type;
}

Step::ClassType IfcSensorType::getType() const {
  return IfcSensorType::s_type;
}

bool IfcSensorType::isOfType(Step::ClassType t) {
  return IfcSensorType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcSensorTypeEnum IfcSensorType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcSensorTypeEnum_UNSET;
  }
}

void IfcSensorType::setPredefinedType(IfcSensorTypeEnum value) {
  m_predefinedType = value;
}

void IfcSensorType::release() {
  IfcDistributionControlElementType::release();
}

bool IfcSensorType::init() {
  bool status = IfcDistributionControlElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcSensorTypeEnum_UNSET;
  }
  else {
    if (arg == ".CO2SENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_CO2SENSOR;
    }
    else if (arg == ".FIRESENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_FIRESENSOR;
    }
    else if (arg == ".FLOWSENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_FLOWSENSOR;
    }
    else if (arg == ".GASSENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_GASSENSOR;
    }
    else if (arg == ".HEATSENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_HEATSENSOR;
    }
    else if (arg == ".HUMIDITYSENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_HUMIDITYSENSOR;
    }
    else if (arg == ".LIGHTSENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_LIGHTSENSOR;
    }
    else if (arg == ".MOISTURESENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_MOISTURESENSOR;
    }
    else if (arg == ".MOVEMENTSENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_MOVEMENTSENSOR;
    }
    else if (arg == ".PRESSURESENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_PRESSURESENSOR;
    }
    else if (arg == ".SMOKESENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_SMOKESENSOR;
    }
    else if (arg == ".SOUNDSENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_SOUNDSENSOR;
    }
    else if (arg == ".TEMPERATURESENSOR.") {
      m_predefinedType = IfcSensorTypeEnum_TEMPERATURESENSOR;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcSensorTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcSensorTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSensorType::s_type = new Step::ClassType_class("IfcSensorType");
IfcSensorType_Factory::IfcSensorType_Factory() {
}

IfcSensorType_Factory::~IfcSensorType_Factory() {
  clear(true);
}

void IfcSensorType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSensorType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSensorType_Factory::end() {
  return m_idMap.end();
}

IfcSensorType *IfcSensorType_Factory::get(Step::StepId id) {
  IfcSensorType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSensorType * > (it->second);
  }
  else {
    LOG_ERROR("IfcSensorType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSensorType * > (create(id));
  }
}

Step::BaseObject *IfcSensorType_Factory::create(Step::StepId id) {
  IfcSensorType *ret = new IfcSensorType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSensorType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSensorType *ret = new IfcSensorType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSensorType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSensorType *ret = new IfcSensorType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSensorType *IfcSensorType_Factory::generate() {
  return static_cast< IfcSensorType * > (create(m_model->getNewId()));
}

IfcSensorType *IfcSensorType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSensorType * > (it->second);
  }
  else {
    return NULL;
  }
}

