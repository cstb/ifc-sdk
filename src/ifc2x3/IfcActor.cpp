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
#include <ifc2x3/IfcActor.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcRelAssignsToActor.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcActor::IfcActor(Step::SPFData *args) : IfcObject(args) {
  m_theActor = NULL;
  m_isActingUpon.setUnset(true);
}


IfcActor::~IfcActor() {
}

bool IfcActor::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcActor(this);
}

const char *IfcActor::type() {
  return "IfcActor";
}

Step::ClassType IfcActor::getClassType() {
  return IfcActor::s_type;
}

Step::ClassType IfcActor::getType() const {
  return IfcActor::s_type;
}

bool IfcActor::isOfType(Step::ClassType t) {
  return IfcActor::s_type == t ? true : IfcObject::isOfType(t);
}

IfcActorSelect *IfcActor::getTheActor() {
  if (Step::BaseObject::inited()) {
    return m_theActor.get();
  }
  else {
    return NULL;
  }
}

void IfcActor::setTheActor(const Step::RefPtr< IfcActorSelect > &value) {
  m_theActor = value;
}

Step::StepSet< Step::RefPtr< IfcRelAssignsToActor > > &IfcActor::getIsActingUpon() {
  if (Step::BaseObject::inited()) {
    return m_isActingUpon;
  }
  else {
    m_isActingUpon.setUnset(true);
    return m_isActingUpon;
  }
}

void IfcActor::setIsActingUpon(const Step::StepSet< Step::RefPtr< IfcRelAssignsToActor > > &value) {
  m_isActingUpon = value;
}

void IfcActor::release() {
  IfcObject::release();
}

bool IfcActor::init() {
  bool status = IfcObject::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_theActor = NULL;
  }
  else {
    m_theActor = new IfcActorSelect;
    if (arg[0] == '#') {
      m_theActor->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  inverses = m_args->getInverses(IfcRelAssignsToActor::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_isActingUpon.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isActingUpon.insert(static_cast< IfcRelAssignsToActor * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcActor::s_type = new Step::ClassType_class("IfcActor");
IfcActor_Factory::IfcActor_Factory() {
}

IfcActor_Factory::~IfcActor_Factory() {
  clear(true);
}

void IfcActor_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcActor_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcActor_Factory::end() {
  return m_idMap.end();
}

IfcActor *IfcActor_Factory::get(Step::StepId id) {
  IfcActor *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcActor * > (it->second);
  }
  else {
    LOG_ERROR("IfcActor_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcActor * > (create(id));
  }
}

Step::BaseObject *IfcActor_Factory::create(Step::StepId id) {
  IfcActor *ret = new IfcActor(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcActor_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcActor *ret = new IfcActor(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcActor_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcActor *ret = new IfcActor(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcActor *IfcActor_Factory::generate() {
  return static_cast< IfcActor * > (create(m_model->getNewId()));
}

IfcActor *IfcActor_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcActor * > (it->second);
  }
  else {
    return NULL;
  }
}

