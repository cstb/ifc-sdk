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
#include <ifc2x3/IfcEdgeLoop.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcOrientedEdge.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEdgeLoop::IfcEdgeLoop(Step::SPFData *args) : IfcLoop(args) {
  m_edgeList.setUnset(true);
}


IfcEdgeLoop::~IfcEdgeLoop() {
}

bool IfcEdgeLoop::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEdgeLoop(this);
}

const char *IfcEdgeLoop::type() {
  return "IfcEdgeLoop";
}

Step::ClassType IfcEdgeLoop::getClassType() {
  return IfcEdgeLoop::s_type;
}

Step::ClassType IfcEdgeLoop::getType() const {
  return IfcEdgeLoop::s_type;
}

bool IfcEdgeLoop::isOfType(Step::ClassType t) {
  return IfcEdgeLoop::s_type == t ? true : IfcLoop::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcOrientedEdge > > &IfcEdgeLoop::getEdgeList() {
  if (Step::BaseObject::inited()) {
    return m_edgeList;
  }
  else {
    m_edgeList.setUnset(true);
    return m_edgeList;
  }
}

void IfcEdgeLoop::setEdgeList(const Step::StepList< Step::RefPtr< IfcOrientedEdge > > &value) {
  m_edgeList = value;
}

void IfcEdgeLoop::release() {
  IfcLoop::release();
  m_edgeList.clear();
}

bool IfcEdgeLoop::init() {
  bool status = IfcLoop::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_edgeList.setUnset(true);
  }
  else {
    m_edgeList.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcOrientedEdge > attr2;
        attr2 = static_cast< IfcOrientedEdge * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_edgeList.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdgeLoop::s_type = new Step::ClassType_class("IfcEdgeLoop");
IfcEdgeLoop_Factory::IfcEdgeLoop_Factory() {
}

IfcEdgeLoop_Factory::~IfcEdgeLoop_Factory() {
  clear(true);
}

void IfcEdgeLoop_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEdgeLoop_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEdgeLoop_Factory::end() {
  return m_idMap.end();
}

IfcEdgeLoop *IfcEdgeLoop_Factory::get(Step::StepId id) {
  IfcEdgeLoop *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEdgeLoop * > (it->second);
  }
  else {
    LOG_ERROR("IfcEdgeLoop_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEdgeLoop * > (create(id));
  }
}

Step::BaseObject *IfcEdgeLoop_Factory::create(Step::StepId id) {
  IfcEdgeLoop *ret = new IfcEdgeLoop(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEdgeLoop_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEdgeLoop *ret = new IfcEdgeLoop(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEdgeLoop_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEdgeLoop *ret = new IfcEdgeLoop(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEdgeLoop *IfcEdgeLoop_Factory::generate() {
  return static_cast< IfcEdgeLoop * > (create(m_model->getNewId()));
}

IfcEdgeLoop *IfcEdgeLoop_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEdgeLoop * > (it->second);
  }
  else {
    return NULL;
  }
}

