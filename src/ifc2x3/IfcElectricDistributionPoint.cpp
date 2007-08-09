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
#include <ifc2x3/IfcElectricDistributionPoint.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElectricDistributionPoint::IfcElectricDistributionPoint(Step::SPFData *args) : IfcFlowController(args) {
  m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_UNSET;
  m_userDefinedFunction = getUnset(m_userDefinedFunction);
}


IfcElectricDistributionPoint::~IfcElectricDistributionPoint() {
}

bool IfcElectricDistributionPoint::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElectricDistributionPoint(this);
}

const char *IfcElectricDistributionPoint::type() {
  return "IfcElectricDistributionPoint";
}

Step::ClassType IfcElectricDistributionPoint::getClassType() {
  return IfcElectricDistributionPoint::s_type;
}

Step::ClassType IfcElectricDistributionPoint::getType() const {
  return IfcElectricDistributionPoint::s_type;
}

bool IfcElectricDistributionPoint::isOfType(Step::ClassType t) {
  return IfcElectricDistributionPoint::s_type == t ? true : IfcFlowController::isOfType(t);
}

IfcElectricDistributionPointFunctionEnum IfcElectricDistributionPoint::getDistributionPointFunction() {
  if (Step::BaseObject::inited()) {
    return m_distributionPointFunction;
  }
  else {
    return IfcElectricDistributionPointFunctionEnum_UNSET;
  }
}

void IfcElectricDistributionPoint::setDistributionPointFunction(IfcElectricDistributionPointFunctionEnum value) {
  m_distributionPointFunction = value;
}

IfcLabel IfcElectricDistributionPoint::getUserDefinedFunction() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedFunction;
  }
  else {
    return getUnset(m_userDefinedFunction);
  }
}

void IfcElectricDistributionPoint::setUserDefinedFunction(const IfcLabel &value) {
  m_userDefinedFunction = value;
}

void IfcElectricDistributionPoint::release() {
  IfcFlowController::release();
}

bool IfcElectricDistributionPoint::init() {
  bool status = IfcFlowController::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_UNSET;
  }
  else {
    if (arg == ".ALARMPANEL.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_ALARMPANEL;
    }
    else if (arg == ".CONSUMERUNIT.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_CONSUMERUNIT;
    }
    else if (arg == ".CONTROLPANEL.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_CONTROLPANEL;
    }
    else if (arg == ".DISTRIBUTIONBOARD.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_DISTRIBUTIONBOARD;
    }
    else if (arg == ".GASDETECTORPANEL.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_GASDETECTORPANEL;
    }
    else if (arg == ".INDICATORPANEL.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_INDICATORPANEL;
    }
    else if (arg == ".MIMICPANEL.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_MIMICPANEL;
    }
    else if (arg == ".MOTORCONTROLCENTRE.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_MOTORCONTROLCENTRE;
    }
    else if (arg == ".SWITCHBOARD.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_SWITCHBOARD;
    }
    else if (arg == ".USERDEFINED.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedFunction = getUnset(m_userDefinedFunction);
  }
  else {
    m_userDefinedFunction = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricDistributionPoint::s_type = new Step::ClassType_class("IfcElectricDistributionPoint");
IfcElectricDistributionPoint_Factory::IfcElectricDistributionPoint_Factory() {
}

IfcElectricDistributionPoint_Factory::~IfcElectricDistributionPoint_Factory() {
  clear(true);
}

void IfcElectricDistributionPoint_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricDistributionPoint_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElectricDistributionPoint_Factory::end() {
  return m_idMap.end();
}

IfcElectricDistributionPoint *IfcElectricDistributionPoint_Factory::get(Step::StepId id) {
  IfcElectricDistributionPoint *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElectricDistributionPoint * > (it->second);
  }
  else {
    LOG_ERROR("IfcElectricDistributionPoint_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElectricDistributionPoint * > (create(id));
  }
}

Step::BaseObject *IfcElectricDistributionPoint_Factory::create(Step::StepId id) {
  IfcElectricDistributionPoint *ret = new IfcElectricDistributionPoint(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElectricDistributionPoint_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElectricDistributionPoint *ret = new IfcElectricDistributionPoint(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElectricDistributionPoint_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElectricDistributionPoint *ret = new IfcElectricDistributionPoint(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElectricDistributionPoint *IfcElectricDistributionPoint_Factory::generate() {
  return static_cast< IfcElectricDistributionPoint * > (create(m_model->getNewId()));
}

IfcElectricDistributionPoint *IfcElectricDistributionPoint_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElectricDistributionPoint * > (it->second);
  }
  else {
    return NULL;
  }
}

