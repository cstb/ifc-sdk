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
#include <ifc2x3/IfcPath.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcOrientedEdge.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPath::IfcPath(Step::SPFData *args) : IfcTopologicalRepresentationItem(args) {
  m_edgeList.setUnset(true);
}


IfcPath::~IfcPath() {
}

bool IfcPath::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPath(this);
}

const char *IfcPath::type() {
  return "IfcPath";
}

Step::ClassType IfcPath::getClassType() {
  return IfcPath::s_type;
}

Step::ClassType IfcPath::getType() const {
  return IfcPath::s_type;
}

bool IfcPath::isOfType(Step::ClassType t) {
  return IfcPath::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcOrientedEdge > > &IfcPath::getEdgeList() {
  if (Step::BaseObject::inited()) {
    return m_edgeList;
  }
  else {
    m_edgeList.setUnset(true);
    return m_edgeList;
  }
}

void IfcPath::setEdgeList(const Step::StepList< Step::RefPtr< IfcOrientedEdge > > &value) {
  m_edgeList = value;
}

void IfcPath::release() {
  IfcTopologicalRepresentationItem::release();
  m_edgeList.clear();
}

bool IfcPath::init() {
  bool status = IfcTopologicalRepresentationItem::init();
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

IFC2X3_DLL_DEF Step::ClassType IfcPath::s_type = new Step::ClassType_class("IfcPath");
IfcPath_Factory::IfcPath_Factory() {
}

IfcPath_Factory::~IfcPath_Factory() {
  clear(true);
}

void IfcPath_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPath_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPath_Factory::end() {
  return m_idMap.end();
}

IfcPath *IfcPath_Factory::get(Step::StepId id) {
  IfcPath *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPath * > (it->second);
  }
  else {
    LOG_ERROR("IfcPath_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPath * > (create(id));
  }
}

Step::BaseObject *IfcPath_Factory::create(Step::StepId id) {
  IfcPath *ret = new IfcPath(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPath_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPath *ret = new IfcPath(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPath_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPath *ret = new IfcPath(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPath *IfcPath_Factory::generate() {
  return static_cast< IfcPath * > (create(m_model->getNewId()));
}

IfcPath *IfcPath_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPath * > (it->second);
  }
  else {
    return NULL;
  }
}

