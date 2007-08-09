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
#include <ifc2x3/IfcRelSequence.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProcess.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelSequence::IfcRelSequence(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingProcess = NULL;
  m_relatedProcess = NULL;
  m_timeLag = getUnset(m_timeLag);
  m_sequenceType = IfcSequenceEnum_UNSET;
}


IfcRelSequence::~IfcRelSequence() {
}

bool IfcRelSequence::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelSequence(this);
}

const char *IfcRelSequence::type() {
  return "IfcRelSequence";
}

Step::ClassType IfcRelSequence::getClassType() {
  return IfcRelSequence::s_type;
}

Step::ClassType IfcRelSequence::getType() const {
  return IfcRelSequence::s_type;
}

bool IfcRelSequence::isOfType(Step::ClassType t) {
  return IfcRelSequence::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcProcess *IfcRelSequence::getRelatingProcess() {
  if (Step::BaseObject::inited()) {
    return m_relatingProcess.get();
  }
  else {
    return NULL;
  }
}

void IfcRelSequence::setRelatingProcess(const Step::RefPtr< IfcProcess > &value) {
  m_relatingProcess = value;
}

IfcProcess *IfcRelSequence::getRelatedProcess() {
  if (Step::BaseObject::inited()) {
    return m_relatedProcess.get();
  }
  else {
    return NULL;
  }
}

void IfcRelSequence::setRelatedProcess(const Step::RefPtr< IfcProcess > &value) {
  m_relatedProcess = value;
}

IfcTimeMeasure IfcRelSequence::getTimeLag() {
  if (Step::BaseObject::inited()) {
    return m_timeLag;
  }
  else {
    return getUnset(m_timeLag);
  }
}

void IfcRelSequence::setTimeLag(IfcTimeMeasure value) {
  m_timeLag = value;
}

IfcSequenceEnum IfcRelSequence::getSequenceType() {
  if (Step::BaseObject::inited()) {
    return m_sequenceType;
  }
  else {
    return IfcSequenceEnum_UNSET;
  }
}

void IfcRelSequence::setSequenceType(IfcSequenceEnum value) {
  m_sequenceType = value;
}

void IfcRelSequence::release() {
  IfcRelConnects::release();
  m_relatingProcess.release();
  m_relatedProcess.release();
}

bool IfcRelSequence::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingProcess = NULL;
  }
  else {
    m_relatingProcess = static_cast< IfcProcess * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedProcess = NULL;
  }
  else {
    m_relatedProcess = static_cast< IfcProcess * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_timeLag = getUnset(m_timeLag);
  }
  else {
    m_timeLag = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sequenceType = IfcSequenceEnum_UNSET;
  }
  else {
    if (arg == ".START_START.") {
      m_sequenceType = IfcSequenceEnum_START_START;
    }
    else if (arg == ".START_FINISH.") {
      m_sequenceType = IfcSequenceEnum_START_FINISH;
    }
    else if (arg == ".FINISH_START.") {
      m_sequenceType = IfcSequenceEnum_FINISH_START;
    }
    else if (arg == ".FINISH_FINISH.") {
      m_sequenceType = IfcSequenceEnum_FINISH_FINISH;
    }
    else if (arg == ".NOTDEFINED.") {
      m_sequenceType = IfcSequenceEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelSequence::s_type = new Step::ClassType_class("IfcRelSequence");
IfcRelSequence_Factory::IfcRelSequence_Factory() {
}

IfcRelSequence_Factory::~IfcRelSequence_Factory() {
  clear(true);
}

void IfcRelSequence_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelSequence_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelSequence_Factory::end() {
  return m_idMap.end();
}

IfcRelSequence *IfcRelSequence_Factory::get(Step::StepId id) {
  IfcRelSequence *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelSequence * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelSequence_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelSequence * > (create(id));
  }
}

Step::BaseObject *IfcRelSequence_Factory::create(Step::StepId id) {
  IfcRelSequence *ret = new IfcRelSequence(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelSequence_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelSequence *ret = new IfcRelSequence(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelSequence_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelSequence *ret = new IfcRelSequence(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelSequence *IfcRelSequence_Factory::generate() {
  return static_cast< IfcRelSequence * > (create(m_model->getNewId()));
}

IfcRelSequence *IfcRelSequence_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelSequence * > (it->second);
  }
  else {
    return NULL;
  }
}

