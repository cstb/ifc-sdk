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
#include <ifc2x3/IfcProject.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcUnitAssignment.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProject::IfcProject(Step::SPFData *args) : IfcObject(args) {
  m_longName = getUnset(m_longName);
  m_phase = getUnset(m_phase);
  m_representationContexts.setUnset(true);
  m_unitsInContext = NULL;
}


IfcProject::~IfcProject() {
}

bool IfcProject::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProject(this);
}

const char *IfcProject::type() {
  return "IfcProject";
}

Step::ClassType IfcProject::getClassType() {
  return IfcProject::s_type;
}

Step::ClassType IfcProject::getType() const {
  return IfcProject::s_type;
}

bool IfcProject::isOfType(Step::ClassType t) {
  return IfcProject::s_type == t ? true : IfcObject::isOfType(t);
}

IfcLabel IfcProject::getLongName() {
  if (Step::BaseObject::inited()) {
    return m_longName;
  }
  else {
    return getUnset(m_longName);
  }
}

void IfcProject::setLongName(const IfcLabel &value) {
  m_longName = value;
}

IfcLabel IfcProject::getPhase() {
  if (Step::BaseObject::inited()) {
    return m_phase;
  }
  else {
    return getUnset(m_phase);
  }
}

void IfcProject::setPhase(const IfcLabel &value) {
  m_phase = value;
}

Step::StepSet< Step::RefPtr< IfcRepresentationContext > > &IfcProject::getRepresentationContexts() {
  if (Step::BaseObject::inited()) {
    return m_representationContexts;
  }
  else {
    m_representationContexts.setUnset(true);
    return m_representationContexts;
  }
}

void IfcProject::setRepresentationContexts(const Step::StepSet< Step::RefPtr< IfcRepresentationContext > > &value) {
  m_representationContexts = value;
}

IfcUnitAssignment *IfcProject::getUnitsInContext() {
  if (Step::BaseObject::inited()) {
    return m_unitsInContext.get();
  }
  else {
    return NULL;
  }
}

void IfcProject::setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value) {
  m_unitsInContext = value;
}

void IfcProject::release() {
  IfcObject::release();
  m_representationContexts.clear();
  m_unitsInContext.release();
}

bool IfcProject::init() {
  bool status = IfcObject::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_longName = getUnset(m_longName);
  }
  else {
    m_longName = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_phase = getUnset(m_phase);
  }
  else {
    m_phase = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_representationContexts.setUnset(true);
  }
  else {
    m_representationContexts.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcRepresentationContext > attr2;
        attr2 = static_cast< IfcRepresentationContext * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_representationContexts.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_unitsInContext = NULL;
  }
  else {
    m_unitsInContext = static_cast< IfcUnitAssignment * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProject::s_type = new Step::ClassType_class("IfcProject");
IfcProject_Factory::IfcProject_Factory() {
}

IfcProject_Factory::~IfcProject_Factory() {
  clear(true);
}

void IfcProject_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProject_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProject_Factory::end() {
  return m_idMap.end();
}

IfcProject *IfcProject_Factory::get(Step::StepId id) {
  IfcProject *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProject * > (it->second);
  }
  else {
    LOG_ERROR("IfcProject_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProject * > (create(id));
  }
}

Step::BaseObject *IfcProject_Factory::create(Step::StepId id) {
  IfcProject *ret = new IfcProject(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProject_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProject *ret = new IfcProject(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProject_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProject *ret = new IfcProject(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProject *IfcProject_Factory::generate() {
  return static_cast< IfcProject * > (create(m_model->getNewId()));
}

IfcProject *IfcProject_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProject * > (it->second);
  }
  else {
    return NULL;
  }
}

