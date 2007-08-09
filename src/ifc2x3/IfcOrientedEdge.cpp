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
#include <ifc2x3/IfcOrientedEdge.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOrientedEdge::IfcOrientedEdge(Step::SPFData *args) : IfcEdge(args) {
  m_edgeElement = NULL;
  m_orientation = getUnset(m_orientation);
}


IfcOrientedEdge::~IfcOrientedEdge() {
}

bool IfcOrientedEdge::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOrientedEdge(this);
}

const char *IfcOrientedEdge::type() {
  return "IfcOrientedEdge";
}

Step::ClassType IfcOrientedEdge::getClassType() {
  return IfcOrientedEdge::s_type;
}

Step::ClassType IfcOrientedEdge::getType() const {
  return IfcOrientedEdge::s_type;
}

bool IfcOrientedEdge::isOfType(Step::ClassType t) {
  return IfcOrientedEdge::s_type == t ? true : IfcEdge::isOfType(t);
}

IfcEdge *IfcOrientedEdge::getEdgeElement() {
  if (Step::BaseObject::inited()) {
    return m_edgeElement.get();
  }
  else {
    return NULL;
  }
}

void IfcOrientedEdge::setEdgeElement(const Step::RefPtr< IfcEdge > &value) {
  m_edgeElement = value;
}

Bool IfcOrientedEdge::getOrientation() {
  if (Step::BaseObject::inited()) {
    return m_orientation;
  }
  else {
    return getUnset(m_orientation);
  }
}

void IfcOrientedEdge::setOrientation(Bool value) {
  m_orientation = value;
}

void IfcOrientedEdge::release() {
  IfcEdge::release();
  m_edgeElement.release();
}

bool IfcOrientedEdge::init() {
  bool status = IfcEdge::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_edgeElement = NULL;
  }
  else {
    m_edgeElement = static_cast< IfcEdge * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
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

IFC2X3_DLL_DEF Step::ClassType IfcOrientedEdge::s_type = new Step::ClassType_class("IfcOrientedEdge");
IfcOrientedEdge_Factory::IfcOrientedEdge_Factory() {
}

IfcOrientedEdge_Factory::~IfcOrientedEdge_Factory() {
  clear(true);
}

void IfcOrientedEdge_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOrientedEdge_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOrientedEdge_Factory::end() {
  return m_idMap.end();
}

IfcOrientedEdge *IfcOrientedEdge_Factory::get(Step::StepId id) {
  IfcOrientedEdge *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOrientedEdge * > (it->second);
  }
  else {
    LOG_ERROR("IfcOrientedEdge_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOrientedEdge * > (create(id));
  }
}

Step::BaseObject *IfcOrientedEdge_Factory::create(Step::StepId id) {
  IfcOrientedEdge *ret = new IfcOrientedEdge(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOrientedEdge_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOrientedEdge *ret = new IfcOrientedEdge(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOrientedEdge_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOrientedEdge *ret = new IfcOrientedEdge(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOrientedEdge *IfcOrientedEdge_Factory::generate() {
  return static_cast< IfcOrientedEdge * > (create(m_model->getNewId()));
}

IfcOrientedEdge *IfcOrientedEdge_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOrientedEdge * > (it->second);
  }
  else {
    return NULL;
  }
}

