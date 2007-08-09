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
#include <ifc2x3/IfcPolyLoop.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPolyLoop::IfcPolyLoop(Step::SPFData *args) : IfcLoop(args) {
  m_polygon.setUnset(true);
}


IfcPolyLoop::~IfcPolyLoop() {
}

bool IfcPolyLoop::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPolyLoop(this);
}

const char *IfcPolyLoop::type() {
  return "IfcPolyLoop";
}

Step::ClassType IfcPolyLoop::getClassType() {
  return IfcPolyLoop::s_type;
}

Step::ClassType IfcPolyLoop::getType() const {
  return IfcPolyLoop::s_type;
}

bool IfcPolyLoop::isOfType(Step::ClassType t) {
  return IfcPolyLoop::s_type == t ? true : IfcLoop::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcCartesianPoint > > &IfcPolyLoop::getPolygon() {
  if (Step::BaseObject::inited()) {
    return m_polygon;
  }
  else {
    m_polygon.setUnset(true);
    return m_polygon;
  }
}

void IfcPolyLoop::setPolygon(const Step::StepList< Step::RefPtr< IfcCartesianPoint > > &value) {
  m_polygon = value;
}

void IfcPolyLoop::release() {
  IfcLoop::release();
  m_polygon.clear();
}

bool IfcPolyLoop::init() {
  bool status = IfcLoop::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_polygon.setUnset(true);
  }
  else {
    m_polygon.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCartesianPoint > attr2;
        attr2 = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_polygon.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPolyLoop::s_type = new Step::ClassType_class("IfcPolyLoop");
IfcPolyLoop_Factory::IfcPolyLoop_Factory() {
}

IfcPolyLoop_Factory::~IfcPolyLoop_Factory() {
  clear(true);
}

void IfcPolyLoop_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPolyLoop_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPolyLoop_Factory::end() {
  return m_idMap.end();
}

IfcPolyLoop *IfcPolyLoop_Factory::get(Step::StepId id) {
  IfcPolyLoop *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPolyLoop * > (it->second);
  }
  else {
    LOG_ERROR("IfcPolyLoop_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPolyLoop * > (create(id));
  }
}

Step::BaseObject *IfcPolyLoop_Factory::create(Step::StepId id) {
  IfcPolyLoop *ret = new IfcPolyLoop(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPolyLoop_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPolyLoop *ret = new IfcPolyLoop(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPolyLoop_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPolyLoop *ret = new IfcPolyLoop(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPolyLoop *IfcPolyLoop_Factory::generate() {
  return static_cast< IfcPolyLoop * > (create(m_model->getNewId()));
}

IfcPolyLoop *IfcPolyLoop_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPolyLoop * > (it->second);
  }
  else {
    return NULL;
  }
}

