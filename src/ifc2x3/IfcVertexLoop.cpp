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
#include <ifc2x3/IfcVertexLoop.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcVertex.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcVertexLoop::IfcVertexLoop(Step::SPFData *args) : IfcLoop(args) {
  m_loopVertex = NULL;
}


IfcVertexLoop::~IfcVertexLoop() {
}

bool IfcVertexLoop::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcVertexLoop(this);
}

const char *IfcVertexLoop::type() {
  return "IfcVertexLoop";
}

Step::ClassType IfcVertexLoop::getClassType() {
  return IfcVertexLoop::s_type;
}

Step::ClassType IfcVertexLoop::getType() const {
  return IfcVertexLoop::s_type;
}

bool IfcVertexLoop::isOfType(Step::ClassType t) {
  return IfcVertexLoop::s_type == t ? true : IfcLoop::isOfType(t);
}

IfcVertex *IfcVertexLoop::getLoopVertex() {
  if (Step::BaseObject::inited()) {
    return m_loopVertex.get();
  }
  else {
    return NULL;
  }
}

void IfcVertexLoop::setLoopVertex(const Step::RefPtr< IfcVertex > &value) {
  m_loopVertex = value;
}

void IfcVertexLoop::release() {
  IfcLoop::release();
  m_loopVertex.release();
}

bool IfcVertexLoop::init() {
  bool status = IfcLoop::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_loopVertex = NULL;
  }
  else {
    m_loopVertex = static_cast< IfcVertex * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcVertexLoop::s_type = new Step::ClassType_class("IfcVertexLoop");
IfcVertexLoop_Factory::IfcVertexLoop_Factory() {
}

IfcVertexLoop_Factory::~IfcVertexLoop_Factory() {
  clear(true);
}

void IfcVertexLoop_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVertexLoop_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcVertexLoop_Factory::end() {
  return m_idMap.end();
}

IfcVertexLoop *IfcVertexLoop_Factory::get(Step::StepId id) {
  IfcVertexLoop *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcVertexLoop * > (it->second);
  }
  else {
    LOG_ERROR("IfcVertexLoop_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcVertexLoop * > (create(id));
  }
}

Step::BaseObject *IfcVertexLoop_Factory::create(Step::StepId id) {
  IfcVertexLoop *ret = new IfcVertexLoop(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcVertexLoop_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcVertexLoop *ret = new IfcVertexLoop(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcVertexLoop_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcVertexLoop *ret = new IfcVertexLoop(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcVertexLoop *IfcVertexLoop_Factory::generate() {
  return static_cast< IfcVertexLoop * > (create(m_model->getNewId()));
}

IfcVertexLoop *IfcVertexLoop_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcVertexLoop * > (it->second);
  }
  else {
    return NULL;
  }
}

