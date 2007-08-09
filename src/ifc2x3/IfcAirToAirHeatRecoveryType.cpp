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
#include <ifc2x3/IfcAirToAirHeatRecoveryType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcAirToAirHeatRecoveryType::IfcAirToAirHeatRecoveryType(Step::SPFData *args) : IfcEnergyConversionDeviceType(args) {
  m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_UNSET;
}


IfcAirToAirHeatRecoveryType::~IfcAirToAirHeatRecoveryType() {
}

bool IfcAirToAirHeatRecoveryType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcAirToAirHeatRecoveryType(this);
}

const char *IfcAirToAirHeatRecoveryType::type() {
  return "IfcAirToAirHeatRecoveryType";
}

Step::ClassType IfcAirToAirHeatRecoveryType::getClassType() {
  return IfcAirToAirHeatRecoveryType::s_type;
}

Step::ClassType IfcAirToAirHeatRecoveryType::getType() const {
  return IfcAirToAirHeatRecoveryType::s_type;
}

bool IfcAirToAirHeatRecoveryType::isOfType(Step::ClassType t) {
  return IfcAirToAirHeatRecoveryType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcAirToAirHeatRecoveryTypeEnum IfcAirToAirHeatRecoveryType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcAirToAirHeatRecoveryTypeEnum_UNSET;
  }
}

void IfcAirToAirHeatRecoveryType::setPredefinedType(IfcAirToAirHeatRecoveryTypeEnum value) {
  m_predefinedType = value;
}

void IfcAirToAirHeatRecoveryType::release() {
  IfcEnergyConversionDeviceType::release();
}

bool IfcAirToAirHeatRecoveryType::init() {
  bool status = IfcEnergyConversionDeviceType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_UNSET;
  }
  else {
    if (arg == ".FIXEDPLATECOUNTERFLOWEXCHANGER.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATECOUNTERFLOWEXCHANGER;
    }
    else if (arg == ".FIXEDPLATECROSSFLOWEXCHANGER.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATECROSSFLOWEXCHANGER;
    }
    else if (arg == ".FIXEDPLATEPARALLELFLOWEXCHANGER.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATEPARALLELFLOWEXCHANGER;
    }
    else if (arg == ".ROTARYWHEEL.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_ROTARYWHEEL;
    }
    else if (arg == ".RUNAROUNDCOILLOOP.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_RUNAROUNDCOILLOOP;
    }
    else if (arg == ".HEATPIPE.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_HEATPIPE;
    }
    else if (arg == ".TWINTOWERENTHALPYRECOVERYLOOPS.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_TWINTOWERENTHALPYRECOVERYLOOPS;
    }
    else if (arg == ".THERMOSIPHONSEALEDTUBEHEATEXCHANGERS.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_THERMOSIPHONSEALEDTUBEHEATEXCHANGERS;
    }
    else if (arg == ".THERMOSIPHONCOILTYPEHEATEXCHANGERS.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_THERMOSIPHONCOILTYPEHEATEXCHANGERS;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcAirToAirHeatRecoveryTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcAirToAirHeatRecoveryType::s_type = new Step::ClassType_class("IfcAirToAirHeatRecoveryType");
IfcAirToAirHeatRecoveryType_Factory::IfcAirToAirHeatRecoveryType_Factory() {
}

IfcAirToAirHeatRecoveryType_Factory::~IfcAirToAirHeatRecoveryType_Factory() {
  clear(true);
}

void IfcAirToAirHeatRecoveryType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAirToAirHeatRecoveryType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcAirToAirHeatRecoveryType_Factory::end() {
  return m_idMap.end();
}

IfcAirToAirHeatRecoveryType *IfcAirToAirHeatRecoveryType_Factory::get(Step::StepId id) {
  IfcAirToAirHeatRecoveryType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcAirToAirHeatRecoveryType * > (it->second);
  }
  else {
    LOG_ERROR("IfcAirToAirHeatRecoveryType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcAirToAirHeatRecoveryType * > (create(id));
  }
}

Step::BaseObject *IfcAirToAirHeatRecoveryType_Factory::create(Step::StepId id) {
  IfcAirToAirHeatRecoveryType *ret = new IfcAirToAirHeatRecoveryType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcAirToAirHeatRecoveryType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcAirToAirHeatRecoveryType *ret = new IfcAirToAirHeatRecoveryType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcAirToAirHeatRecoveryType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcAirToAirHeatRecoveryType *ret = new IfcAirToAirHeatRecoveryType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcAirToAirHeatRecoveryType *IfcAirToAirHeatRecoveryType_Factory::generate() {
  return static_cast< IfcAirToAirHeatRecoveryType * > (create(m_model->getNewId()));
}

IfcAirToAirHeatRecoveryType *IfcAirToAirHeatRecoveryType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcAirToAirHeatRecoveryType * > (it->second);
  }
  else {
    return NULL;
  }
}

