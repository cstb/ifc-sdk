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
#include <ifc2x3/IfcFaceBound.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcLoop.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcFaceBound::IfcFaceBound(Step::SPFData *args) : IfcTopologicalRepresentationItem(args) {
  m_bound = NULL;
  m_orientation = getUnset(m_orientation);
}


IfcFaceBound::~IfcFaceBound() {
}

bool IfcFaceBound::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcFaceBound(this);
}

const char *IfcFaceBound::type() {
  return "IfcFaceBound";
}

Step::ClassType IfcFaceBound::getClassType() {
  return IfcFaceBound::s_type;
}

Step::ClassType IfcFaceBound::getType() const {
  return IfcFaceBound::s_type;
}

bool IfcFaceBound::isOfType(Step::ClassType t) {
  return IfcFaceBound::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

IfcLoop *IfcFaceBound::getBound() {
  if (Step::BaseObject::inited()) {
    return m_bound.get();
  }
  else {
    return NULL;
  }
}

void IfcFaceBound::setBound(const Step::RefPtr< IfcLoop > &value) {
  m_bound = value;
}

Bool IfcFaceBound::getOrientation() {
  if (Step::BaseObject::inited()) {
    return m_orientation;
  }
  else {
    return getUnset(m_orientation);
  }
}

void IfcFaceBound::setOrientation(Bool value) {
  m_orientation = value;
}

void IfcFaceBound::release() {
  IfcTopologicalRepresentationItem::release();
  m_bound.release();
}

bool IfcFaceBound::init() {
  bool status = IfcTopologicalRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_bound = NULL;
  }
  else {
    m_bound = static_cast< IfcLoop * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_orientation = getUnset(m_orientation);
  }
  else {
    m_orientation = Step::spfToBool(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcFaceBound::s_type = new Step::ClassType_class("IfcFaceBound");
IfcFaceBound_Factory::IfcFaceBound_Factory() {
}

IfcFaceBound_Factory::~IfcFaceBound_Factory() {
  clear(true);
}

void IfcFaceBound_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFaceBound_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcFaceBound_Factory::end() {
  return m_idMap.end();
}

IfcFaceBound *IfcFaceBound_Factory::get(Step::StepId id) {
  IfcFaceBound *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcFaceBound * > (it->second);
  }
  else {
    LOG_ERROR("IfcFaceBound_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcFaceBound * > (create(id));
  }
}

Step::BaseObject *IfcFaceBound_Factory::create(Step::StepId id) {
  IfcFaceBound *ret = new IfcFaceBound(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcFaceBound_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcFaceBound *ret = new IfcFaceBound(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcFaceBound_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcFaceBound *ret = new IfcFaceBound(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcFaceBound *IfcFaceBound_Factory::generate() {
  return static_cast< IfcFaceBound * > (create(m_model->getNewId()));
}

IfcFaceBound *IfcFaceBound_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcFaceBound * > (it->second);
  }
  else {
    return NULL;
  }
}

