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
#include <ifc2x3/IfcRelInteractionRequirements.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcSpaceProgram.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelInteractionRequirements::IfcRelInteractionRequirements(Step::SPFData *args) : IfcRelConnects(args) {
  m_dailyInteraction = getUnset(m_dailyInteraction);
  m_importanceRating = getUnset(m_importanceRating);
  m_locationOfInteraction = NULL;
  m_relatedSpaceProgram = NULL;
  m_relatingSpaceProgram = NULL;
}


IfcRelInteractionRequirements::~IfcRelInteractionRequirements() {
}

bool IfcRelInteractionRequirements::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelInteractionRequirements(this);
}

const char *IfcRelInteractionRequirements::type() {
  return "IfcRelInteractionRequirements";
}

Step::ClassType IfcRelInteractionRequirements::getClassType() {
  return IfcRelInteractionRequirements::s_type;
}

Step::ClassType IfcRelInteractionRequirements::getType() const {
  return IfcRelInteractionRequirements::s_type;
}

bool IfcRelInteractionRequirements::isOfType(Step::ClassType t) {
  return IfcRelInteractionRequirements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcCountMeasure IfcRelInteractionRequirements::getDailyInteraction() {
  if (Step::BaseObject::inited()) {
    return m_dailyInteraction;
  }
  else {
    return getUnset(m_dailyInteraction);
  }
}

void IfcRelInteractionRequirements::setDailyInteraction(IfcCountMeasure value) {
  m_dailyInteraction = value;
}

IfcNormalisedRatioMeasure IfcRelInteractionRequirements::getImportanceRating() {
  if (Step::BaseObject::inited()) {
    return m_importanceRating;
  }
  else {
    return getUnset(m_importanceRating);
  }
}

void IfcRelInteractionRequirements::setImportanceRating(IfcNormalisedRatioMeasure value) {
  m_importanceRating = value;
}

IfcSpatialStructureElement *IfcRelInteractionRequirements::getLocationOfInteraction() {
  if (Step::BaseObject::inited()) {
    return m_locationOfInteraction.get();
  }
  else {
    return NULL;
  }
}

void IfcRelInteractionRequirements::setLocationOfInteraction(const Step::RefPtr< IfcSpatialStructureElement > &value) {
  m_locationOfInteraction = value;
}

IfcSpaceProgram *IfcRelInteractionRequirements::getRelatedSpaceProgram() {
  if (Step::BaseObject::inited()) {
    return m_relatedSpaceProgram.get();
  }
  else {
    return NULL;
  }
}

void IfcRelInteractionRequirements::setRelatedSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value) {
  m_relatedSpaceProgram = value;
}

IfcSpaceProgram *IfcRelInteractionRequirements::getRelatingSpaceProgram() {
  if (Step::BaseObject::inited()) {
    return m_relatingSpaceProgram.get();
  }
  else {
    return NULL;
  }
}

void IfcRelInteractionRequirements::setRelatingSpaceProgram(const Step::RefPtr< IfcSpaceProgram > &value) {
  m_relatingSpaceProgram = value;
}

void IfcRelInteractionRequirements::release() {
  IfcRelConnects::release();
  m_locationOfInteraction.release();
  m_relatedSpaceProgram.release();
  m_relatingSpaceProgram.release();
}

bool IfcRelInteractionRequirements::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_dailyInteraction = getUnset(m_dailyInteraction);
  }
  else {
    m_dailyInteraction = Step::spfToInteger(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_importanceRating = getUnset(m_importanceRating);
  }
  else {
    m_importanceRating = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_locationOfInteraction = NULL;
  }
  else {
    m_locationOfInteraction = static_cast< IfcSpatialStructureElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedSpaceProgram = NULL;
  }
  else {
    m_relatedSpaceProgram = static_cast< IfcSpaceProgram * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingSpaceProgram = NULL;
  }
  else {
    m_relatingSpaceProgram = static_cast< IfcSpaceProgram * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelInteractionRequirements::s_type = new Step::ClassType_class("IfcRelInteractionRequirements");
IfcRelInteractionRequirements_Factory::IfcRelInteractionRequirements_Factory() {
}

IfcRelInteractionRequirements_Factory::~IfcRelInteractionRequirements_Factory() {
  clear(true);
}

void IfcRelInteractionRequirements_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelInteractionRequirements_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelInteractionRequirements_Factory::end() {
  return m_idMap.end();
}

IfcRelInteractionRequirements *IfcRelInteractionRequirements_Factory::get(Step::StepId id) {
  IfcRelInteractionRequirements *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelInteractionRequirements * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelInteractionRequirements_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelInteractionRequirements * > (create(id));
  }
}

Step::BaseObject *IfcRelInteractionRequirements_Factory::create(Step::StepId id) {
  IfcRelInteractionRequirements *ret = new IfcRelInteractionRequirements(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelInteractionRequirements_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelInteractionRequirements *ret = new IfcRelInteractionRequirements(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelInteractionRequirements_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelInteractionRequirements *ret = new IfcRelInteractionRequirements(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelInteractionRequirements *IfcRelInteractionRequirements_Factory::generate() {
  return static_cast< IfcRelInteractionRequirements * > (create(m_model->getNewId()));
}

IfcRelInteractionRequirements *IfcRelInteractionRequirements_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelInteractionRequirements * > (it->second);
  }
  else {
    return NULL;
  }
}

