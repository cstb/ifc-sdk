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
#include <ifc2x3/IfcSpaceProgram.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelInteractionRequirements.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSpaceProgram::IfcSpaceProgram(Step::SPFData *args) : IfcControl(args) {
  m_spaceProgramIdentifier = getUnset(m_spaceProgramIdentifier);
  m_maxRequiredArea = getUnset(m_maxRequiredArea);
  m_minRequiredArea = getUnset(m_minRequiredArea);
  m_requestedLocation = NULL;
  m_standardRequiredArea = getUnset(m_standardRequiredArea);
  m_hasInteractionReqsFrom.setUnset(true);
  m_hasInteractionReqsTo.setUnset(true);
}


IfcSpaceProgram::~IfcSpaceProgram() {
}

bool IfcSpaceProgram::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSpaceProgram(this);
}

const char *IfcSpaceProgram::type() {
  return "IfcSpaceProgram";
}

Step::ClassType IfcSpaceProgram::getClassType() {
  return IfcSpaceProgram::s_type;
}

Step::ClassType IfcSpaceProgram::getType() const {
  return IfcSpaceProgram::s_type;
}

bool IfcSpaceProgram::isOfType(Step::ClassType t) {
  return IfcSpaceProgram::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcSpaceProgram::getSpaceProgramIdentifier() {
  if (Step::BaseObject::inited()) {
    return m_spaceProgramIdentifier;
  }
  else {
    return getUnset(m_spaceProgramIdentifier);
  }
}

void IfcSpaceProgram::setSpaceProgramIdentifier(const IfcIdentifier &value) {
  m_spaceProgramIdentifier = value;
}

IfcAreaMeasure IfcSpaceProgram::getMaxRequiredArea() {
  if (Step::BaseObject::inited()) {
    return m_maxRequiredArea;
  }
  else {
    return getUnset(m_maxRequiredArea);
  }
}

void IfcSpaceProgram::setMaxRequiredArea(IfcAreaMeasure value) {
  m_maxRequiredArea = value;
}

IfcAreaMeasure IfcSpaceProgram::getMinRequiredArea() {
  if (Step::BaseObject::inited()) {
    return m_minRequiredArea;
  }
  else {
    return getUnset(m_minRequiredArea);
  }
}

void IfcSpaceProgram::setMinRequiredArea(IfcAreaMeasure value) {
  m_minRequiredArea = value;
}

IfcSpatialStructureElement *IfcSpaceProgram::getRequestedLocation() {
  if (Step::BaseObject::inited()) {
    return m_requestedLocation.get();
  }
  else {
    return NULL;
  }
}

void IfcSpaceProgram::setRequestedLocation(const Step::RefPtr< IfcSpatialStructureElement > &value) {
  m_requestedLocation = value;
}

IfcAreaMeasure IfcSpaceProgram::getStandardRequiredArea() {
  if (Step::BaseObject::inited()) {
    return m_standardRequiredArea;
  }
  else {
    return getUnset(m_standardRequiredArea);
  }
}

void IfcSpaceProgram::setStandardRequiredArea(IfcAreaMeasure value) {
  m_standardRequiredArea = value;
}

Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > &IfcSpaceProgram::getHasInteractionReqsFrom() {
  if (Step::BaseObject::inited()) {
    return m_hasInteractionReqsFrom;
  }
  else {
    m_hasInteractionReqsFrom.setUnset(true);
    return m_hasInteractionReqsFrom;
  }
}

void IfcSpaceProgram::setHasInteractionReqsFrom(const Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > &value) {
  m_hasInteractionReqsFrom = value;
}

Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > &IfcSpaceProgram::getHasInteractionReqsTo() {
  if (Step::BaseObject::inited()) {
    return m_hasInteractionReqsTo;
  }
  else {
    m_hasInteractionReqsTo.setUnset(true);
    return m_hasInteractionReqsTo;
  }
}

void IfcSpaceProgram::setHasInteractionReqsTo(const Step::StepSet< Step::RefPtr< IfcRelInteractionRequirements > > &value) {
  m_hasInteractionReqsTo = value;
}

void IfcSpaceProgram::release() {
  IfcControl::release();
  m_requestedLocation.release();
}

bool IfcSpaceProgram::init() {
  bool status = IfcControl::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_spaceProgramIdentifier = getUnset(m_spaceProgramIdentifier);
  }
  else {
    m_spaceProgramIdentifier = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_maxRequiredArea = getUnset(m_maxRequiredArea);
  }
  else {
    m_maxRequiredArea = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_minRequiredArea = getUnset(m_minRequiredArea);
  }
  else {
    m_minRequiredArea = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_requestedLocation = NULL;
  }
  else {
    m_requestedLocation = static_cast< IfcSpatialStructureElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_standardRequiredArea = getUnset(m_standardRequiredArea);
  }
  else {
    m_standardRequiredArea = Step::spfToReal(arg);
  }
  inverses = m_args->getInverses(IfcRelInteractionRequirements::getClassType(), 7);
  if (inverses) {
    unsigned int i;
    m_hasInteractionReqsFrom.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasInteractionReqsFrom.insert(static_cast< IfcRelInteractionRequirements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelInteractionRequirements::getClassType(), 8);
  if (inverses) {
    unsigned int i;
    m_hasInteractionReqsTo.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasInteractionReqsTo.insert(static_cast< IfcRelInteractionRequirements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpaceProgram::s_type = new Step::ClassType_class("IfcSpaceProgram");
IfcSpaceProgram_Factory::IfcSpaceProgram_Factory() {
}

IfcSpaceProgram_Factory::~IfcSpaceProgram_Factory() {
  clear(true);
}

void IfcSpaceProgram_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpaceProgram_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpaceProgram_Factory::end() {
  return m_idMap.end();
}

IfcSpaceProgram *IfcSpaceProgram_Factory::get(Step::StepId id) {
  IfcSpaceProgram *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSpaceProgram * > (it->second);
  }
  else {
    LOG_ERROR("IfcSpaceProgram_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSpaceProgram * > (create(id));
  }
}

Step::BaseObject *IfcSpaceProgram_Factory::create(Step::StepId id) {
  IfcSpaceProgram *ret = new IfcSpaceProgram(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSpaceProgram_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSpaceProgram *ret = new IfcSpaceProgram(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSpaceProgram_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSpaceProgram *ret = new IfcSpaceProgram(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSpaceProgram *IfcSpaceProgram_Factory::generate() {
  return static_cast< IfcSpaceProgram * > (create(m_model->getNewId()));
}

IfcSpaceProgram *IfcSpaceProgram_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSpaceProgram * > (it->second);
  }
  else {
    return NULL;
  }
}

