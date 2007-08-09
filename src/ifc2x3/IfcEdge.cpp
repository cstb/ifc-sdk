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
#include <ifc2x3/IfcEdge.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcVertex.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEdge::IfcEdge(Step::SPFData *args) : IfcTopologicalRepresentationItem(args) {
  m_edgeStart = NULL;
  m_edgeEnd = NULL;
}


IfcEdge::~IfcEdge() {
}

bool IfcEdge::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEdge(this);
}

const char *IfcEdge::type() {
  return "IfcEdge";
}

Step::ClassType IfcEdge::getClassType() {
  return IfcEdge::s_type;
}

Step::ClassType IfcEdge::getType() const {
  return IfcEdge::s_type;
}

bool IfcEdge::isOfType(Step::ClassType t) {
  return IfcEdge::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

IfcVertex *IfcEdge::getEdgeStart() {
  if (Step::BaseObject::inited()) {
    return m_edgeStart.get();
  }
  else {
    return NULL;
  }
}

void IfcEdge::setEdgeStart(const Step::RefPtr< IfcVertex > &value) {
  m_edgeStart = value;
}

IfcVertex *IfcEdge::getEdgeEnd() {
  if (Step::BaseObject::inited()) {
    return m_edgeEnd.get();
  }
  else {
    return NULL;
  }
}

void IfcEdge::setEdgeEnd(const Step::RefPtr< IfcVertex > &value) {
  m_edgeEnd = value;
}

void IfcEdge::release() {
  IfcTopologicalRepresentationItem::release();
  m_edgeStart.release();
  m_edgeEnd.release();
}

bool IfcEdge::init() {
  bool status = IfcTopologicalRepresentationItem::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_edgeStart = NULL;
  }
  else {
    m_edgeStart = static_cast< IfcVertex * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_edgeEnd = NULL;
  }
  else {
    m_edgeEnd = static_cast< IfcVertex * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdge::s_type = new Step::ClassType_class("IfcEdge");
IfcEdge_Factory::IfcEdge_Factory() {
}

IfcEdge_Factory::~IfcEdge_Factory() {
  clear(true);
}

void IfcEdge_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEdge_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEdge_Factory::end() {
  return m_idMap.end();
}

IfcEdge *IfcEdge_Factory::get(Step::StepId id) {
  IfcEdge *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEdge * > (it->second);
  }
  else {
    LOG_ERROR("IfcEdge_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEdge * > (create(id));
  }
}

Step::BaseObject *IfcEdge_Factory::create(Step::StepId id) {
  IfcEdge *ret = new IfcEdge(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEdge_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEdge *ret = new IfcEdge(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEdge_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEdge *ret = new IfcEdge(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEdge *IfcEdge_Factory::generate() {
  return static_cast< IfcEdge * > (create(m_model->getNewId()));
}

IfcEdge *IfcEdge_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEdge * > (it->second);
  }
  else {
    return NULL;
  }
}

