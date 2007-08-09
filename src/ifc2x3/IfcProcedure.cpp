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
#include <ifc2x3/IfcProcedure.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProcedure::IfcProcedure(Step::SPFData *args) : IfcProcess(args) {
  m_procedureID = getUnset(m_procedureID);
  m_procedureType = IfcProcedureTypeEnum_UNSET;
  m_userDefinedProcedureType = getUnset(m_userDefinedProcedureType);
}


IfcProcedure::~IfcProcedure() {
}

bool IfcProcedure::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProcedure(this);
}

const char *IfcProcedure::type() {
  return "IfcProcedure";
}

Step::ClassType IfcProcedure::getClassType() {
  return IfcProcedure::s_type;
}

Step::ClassType IfcProcedure::getType() const {
  return IfcProcedure::s_type;
}

bool IfcProcedure::isOfType(Step::ClassType t) {
  return IfcProcedure::s_type == t ? true : IfcProcess::isOfType(t);
}

IfcIdentifier IfcProcedure::getProcedureID() {
  if (Step::BaseObject::inited()) {
    return m_procedureID;
  }
  else {
    return getUnset(m_procedureID);
  }
}

void IfcProcedure::setProcedureID(const IfcIdentifier &value) {
  m_procedureID = value;
}

IfcProcedureTypeEnum IfcProcedure::getProcedureType() {
  if (Step::BaseObject::inited()) {
    return m_procedureType;
  }
  else {
    return IfcProcedureTypeEnum_UNSET;
  }
}

void IfcProcedure::setProcedureType(IfcProcedureTypeEnum value) {
  m_procedureType = value;
}

IfcLabel IfcProcedure::getUserDefinedProcedureType() {
  if (Step::BaseObject::inited()) {
    return m_userDefinedProcedureType;
  }
  else {
    return getUnset(m_userDefinedProcedureType);
  }
}

void IfcProcedure::setUserDefinedProcedureType(const IfcLabel &value) {
  m_userDefinedProcedureType = value;
}

void IfcProcedure::release() {
  IfcProcess::release();
}

bool IfcProcedure::init() {
  bool status = IfcProcess::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_procedureID = getUnset(m_procedureID);
  }
  else {
    m_procedureID = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_procedureType = IfcProcedureTypeEnum_UNSET;
  }
  else {
    if (arg == ".ADVICE_CAUTION.") {
      m_procedureType = IfcProcedureTypeEnum_ADVICE_CAUTION;
    }
    else if (arg == ".ADVICE_NOTE.") {
      m_procedureType = IfcProcedureTypeEnum_ADVICE_NOTE;
    }
    else if (arg == ".ADVICE_WARNING.") {
      m_procedureType = IfcProcedureTypeEnum_ADVICE_WARNING;
    }
    else if (arg == ".CALIBRATION.") {
      m_procedureType = IfcProcedureTypeEnum_CALIBRATION;
    }
    else if (arg == ".DIAGNOSTIC.") {
      m_procedureType = IfcProcedureTypeEnum_DIAGNOSTIC;
    }
    else if (arg == ".SHUTDOWN.") {
      m_procedureType = IfcProcedureTypeEnum_SHUTDOWN;
    }
    else if (arg == ".STARTUP.") {
      m_procedureType = IfcProcedureTypeEnum_STARTUP;
    }
    else if (arg == ".USERDEFINED.") {
      m_procedureType = IfcProcedureTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_procedureType = IfcProcedureTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_userDefinedProcedureType = getUnset(m_userDefinedProcedureType);
  }
  else {
    m_userDefinedProcedureType = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProcedure::s_type = new Step::ClassType_class("IfcProcedure");
IfcProcedure_Factory::IfcProcedure_Factory() {
}

IfcProcedure_Factory::~IfcProcedure_Factory() {
  clear(true);
}

void IfcProcedure_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProcedure_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProcedure_Factory::end() {
  return m_idMap.end();
}

IfcProcedure *IfcProcedure_Factory::get(Step::StepId id) {
  IfcProcedure *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProcedure * > (it->second);
  }
  else {
    LOG_ERROR("IfcProcedure_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProcedure * > (create(id));
  }
}

Step::BaseObject *IfcProcedure_Factory::create(Step::StepId id) {
  IfcProcedure *ret = new IfcProcedure(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProcedure_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProcedure *ret = new IfcProcedure(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProcedure_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProcedure *ret = new IfcProcedure(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProcedure *IfcProcedure_Factory::generate() {
  return static_cast< IfcProcedure * > (create(m_model->getNewId()));
}

IfcProcedure *IfcProcedure_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProcedure * > (it->second);
  }
  else {
    return NULL;
  }
}

