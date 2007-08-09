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
#include <ifc2x3/IfcEdgeCurve.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEdgeCurve::IfcEdgeCurve(Step::SPFData *args) : IfcEdge(args) {
  m_edgeGeometry = NULL;
  m_sameSense = getUnset(m_sameSense);
}


IfcEdgeCurve::~IfcEdgeCurve() {
}

bool IfcEdgeCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEdgeCurve(this);
}

const char *IfcEdgeCurve::type() {
  return "IfcEdgeCurve";
}

Step::ClassType IfcEdgeCurve::getClassType() {
  return IfcEdgeCurve::s_type;
}

Step::ClassType IfcEdgeCurve::getType() const {
  return IfcEdgeCurve::s_type;
}

bool IfcEdgeCurve::isOfType(Step::ClassType t) {
  return IfcEdgeCurve::s_type == t ? true : IfcEdge::isOfType(t);
}

IfcCurve *IfcEdgeCurve::getEdgeGeometry() {
  if (Step::BaseObject::inited()) {
    return m_edgeGeometry.get();
  }
  else {
    return NULL;
  }
}

void IfcEdgeCurve::setEdgeGeometry(const Step::RefPtr< IfcCurve > &value) {
  m_edgeGeometry = value;
}

Bool IfcEdgeCurve::getSameSense() {
  if (Step::BaseObject::inited()) {
    return m_sameSense;
  }
  else {
    return getUnset(m_sameSense);
  }
}

void IfcEdgeCurve::setSameSense(Bool value) {
  m_sameSense = value;
}

void IfcEdgeCurve::release() {
  IfcEdge::release();
  m_edgeGeometry.release();
}

bool IfcEdgeCurve::init() {
  bool status = IfcEdge::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_edgeGeometry = NULL;
  }
  else {
    m_edgeGeometry = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sameSense = getUnset(m_sameSense);
  }
  else {
    m_sameSense = Step::spfToBool(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdgeCurve::s_type = new Step::ClassType_class("IfcEdgeCurve");
IfcEdgeCurve_Factory::IfcEdgeCurve_Factory() {
}

IfcEdgeCurve_Factory::~IfcEdgeCurve_Factory() {
  clear(true);
}

void IfcEdgeCurve_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEdgeCurve_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEdgeCurve_Factory::end() {
  return m_idMap.end();
}

IfcEdgeCurve *IfcEdgeCurve_Factory::get(Step::StepId id) {
  IfcEdgeCurve *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEdgeCurve * > (it->second);
  }
  else {
    LOG_ERROR("IfcEdgeCurve_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEdgeCurve * > (create(id));
  }
}

Step::BaseObject *IfcEdgeCurve_Factory::create(Step::StepId id) {
  IfcEdgeCurve *ret = new IfcEdgeCurve(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEdgeCurve_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEdgeCurve *ret = new IfcEdgeCurve(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEdgeCurve_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEdgeCurve *ret = new IfcEdgeCurve(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEdgeCurve *IfcEdgeCurve_Factory::generate() {
  return static_cast< IfcEdgeCurve * > (create(m_model->getNewId()));
}

IfcEdgeCurve *IfcEdgeCurve_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEdgeCurve * > (it->second);
  }
  else {
    return NULL;
  }
}

