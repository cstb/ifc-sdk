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
#include <ifc2x3/IfcSubedge.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSubedge::IfcSubedge(Step::SPFData *args) : IfcEdge(args) {
  m_parentEdge = NULL;
}


IfcSubedge::~IfcSubedge() {
}

bool IfcSubedge::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSubedge(this);
}

const char *IfcSubedge::type() {
  return "IfcSubedge";
}

Step::ClassType IfcSubedge::getClassType() {
  return IfcSubedge::s_type;
}

Step::ClassType IfcSubedge::getType() const {
  return IfcSubedge::s_type;
}

bool IfcSubedge::isOfType(Step::ClassType t) {
  return IfcSubedge::s_type == t ? true : IfcEdge::isOfType(t);
}

IfcEdge *IfcSubedge::getParentEdge() {
  if (Step::BaseObject::inited()) {
    return m_parentEdge.get();
  }
  else {
    return NULL;
  }
}

void IfcSubedge::setParentEdge(const Step::RefPtr< IfcEdge > &value) {
  m_parentEdge = value;
}

void IfcSubedge::release() {
  IfcEdge::release();
  m_parentEdge.release();
}

bool IfcSubedge::init() {
  bool status = IfcEdge::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_parentEdge = NULL;
  }
  else {
    m_parentEdge = static_cast< IfcEdge * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSubedge::s_type = new Step::ClassType_class("IfcSubedge");
IfcSubedge_Factory::IfcSubedge_Factory() {
}

IfcSubedge_Factory::~IfcSubedge_Factory() {
  clear(true);
}

void IfcSubedge_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSubedge_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSubedge_Factory::end() {
  return m_idMap.end();
}

IfcSubedge *IfcSubedge_Factory::get(Step::StepId id) {
  IfcSubedge *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSubedge * > (it->second);
  }
  else {
    LOG_ERROR("IfcSubedge_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSubedge * > (create(id));
  }
}

Step::BaseObject *IfcSubedge_Factory::create(Step::StepId id) {
  IfcSubedge *ret = new IfcSubedge(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSubedge_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSubedge *ret = new IfcSubedge(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSubedge_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSubedge *ret = new IfcSubedge(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSubedge *IfcSubedge_Factory::generate() {
  return static_cast< IfcSubedge * > (create(m_model->getNewId()));
}

IfcSubedge *IfcSubedge_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSubedge * > (it->second);
  }
  else {
    return NULL;
  }
}

