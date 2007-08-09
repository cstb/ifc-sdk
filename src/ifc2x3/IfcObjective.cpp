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
#include <ifc2x3/IfcObjective.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMetric.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcObjective::IfcObjective(Step::SPFData *args) : IfcConstraint(args) {
  m_benchmarkValues = NULL;
  m_resultValues = NULL;
  m_objectiveQualifier = IfcObjectiveEnum_UNSET;
  m_userDefinedQualifier = getUnset(m_userDefinedQualifier);
}


IfcObjective::~IfcObjective() {
}

bool IfcObjective::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcObjective(this);
}

const char *IfcObjective::type() {
  return "IfcObjective";
}

Step::ClassType IfcObjective::getClassType() {
  return IfcObjective::s_type;
}

Step::ClassType IfcObjective::getType() const {
  return IfcObjective::s_type;
}

bool IfcObjective::isOfType(Step::ClassType t) {
  return IfcObjective::s_type == t ? true : IfcConstraint::isOfType(t);
}

IfcMetric *IfcObjective::getBenchmarkValues() {
  if (Step::BaseObject::inited()) {
    return m_benchmarkValues.get();
  }
  else {
    return NULL;
  }
}

void IfcObjective::setBenchmarkValues(const Step::RefPtr< IfcMetric > &value) {
  m_benchmarkValues = value;
}

IfcMetric *IfcObjective::getResultValues() {
  if (Step::BaseObject::inited()) {
    return m_resultValues.get();
  }
  else {
    return NULL;
  }
}

void IfcObjective::setResultValues(const Step::RefPtr< IfcMetric > &value) {
  m_resultValues = value;
}

IfcObjectiveEnum IfcObjective::getObjectiveQualifier() {
  if (Step::BaseObject::inited()) {
    return m_objectiveQualifier;
  }
  else {
    return IfcObjectiveEnum_UNSET;
  }
}

void IfcObjective::setObjectiveQualifier(IfcObjectiveEnum value) {
  m_objectiveQualifier = value;
}

IfcLabel IfcObjective::getUserDefinedQualifier() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedQualifier;
  }
  else {
    return getUnset(m_userDefinedQualifier);
  }
}

void IfcObjective::setUserDefinedQualifier(const IfcLabel &value) {
  m_userDefinedQualifier = value;
}

void IfcObjective::release() {
  IfcConstraint::release();
  m_benchmarkValues.release();
  m_resultValues.release();
}

bool IfcObjective::init() {
  bool status = IfcConstraint::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_benchmarkValues = NULL;
  }
  else {
    m_benchmarkValues = static_cast< IfcMetric * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_resultValues = NULL;
  }
  else {
    m_resultValues = static_cast< IfcMetric * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_objectiveQualifier = IfcObjectiveEnum_UNSET;
  }
  else {
    if (arg == ".CODECOMPLIANCE.") {
      m_objectiveQualifier = IfcObjectiveEnum_CODECOMPLIANCE;
    }
    else if (arg == ".DESIGNINTENT.") {
      m_objectiveQualifier = IfcObjectiveEnum_DESIGNINTENT;
    }
    else if (arg == ".HEALTHANDSAFETY.") {
      m_objectiveQualifier = IfcObjectiveEnum_HEALTHANDSAFETY;
    }
    else if (arg == ".REQUIREMENT.") {
      m_objectiveQualifier = IfcObjectiveEnum_REQUIREMENT;
    }
    else if (arg == ".SPECIFICATION.") {
      m_objectiveQualifier = IfcObjectiveEnum_SPECIFICATION;
    }
    else if (arg == ".TRIGGERCONDITION.") {
      m_objectiveQualifier = IfcObjectiveEnum_TRIGGERCONDITION;
    }
    else if (arg == ".USERDEFINED.") {
      m_objectiveQualifier = IfcObjectiveEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_objectiveQualifier = IfcObjectiveEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedQualifier = getUnset(m_userDefinedQualifier);
  }
  else {
    m_userDefinedQualifier = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcObjective::s_type = new Step::ClassType_class("IfcObjective");
IfcObjective_Factory::IfcObjective_Factory() {
}

IfcObjective_Factory::~IfcObjective_Factory() {
  clear(true);
}

void IfcObjective_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcObjective_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcObjective_Factory::end() {
  return m_idMap.end();
}

IfcObjective *IfcObjective_Factory::get(Step::StepId id) {
  IfcObjective *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcObjective * > (it->second);
  }
  else {
    LOG_ERROR("IfcObjective_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcObjective * > (create(id));
  }
}

Step::BaseObject *IfcObjective_Factory::create(Step::StepId id) {
  IfcObjective *ret = new IfcObjective(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcObjective_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcObjective *ret = new IfcObjective(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcObjective_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcObjective *ret = new IfcObjective(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcObjective *IfcObjective_Factory::generate() {
  return static_cast< IfcObjective * > (create(m_model->getNewId()));
}

IfcObjective *IfcObjective_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcObjective * > (it->second);
  }
  else {
    return NULL;
  }
}

