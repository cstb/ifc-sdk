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
#include <ifc2x3/IfcPolyline.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPolyline::IfcPolyline(Step::SPFData *args) : IfcBoundedCurve(args) {
  m_points.setUnset(true);
}


IfcPolyline::~IfcPolyline() {
}

bool IfcPolyline::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPolyline(this);
}

const char *IfcPolyline::type() {
  return "IfcPolyline";
}

Step::ClassType IfcPolyline::getClassType() {
  return IfcPolyline::s_type;
}

Step::ClassType IfcPolyline::getType() const {
  return IfcPolyline::s_type;
}

bool IfcPolyline::isOfType(Step::ClassType t) {
  return IfcPolyline::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcCartesianPoint > > &IfcPolyline::getPoints() {
  if (Step::BaseObject::inited()) {
    return m_points;
  }
  else {
    m_points.setUnset(true);
    return m_points;
  }
}

void IfcPolyline::setPoints(const Step::StepList< Step::RefPtr< IfcCartesianPoint > > &value) {
  m_points = value;
}

void IfcPolyline::release() {
  IfcBoundedCurve::release();
  m_points.clear();
}

bool IfcPolyline::init() {
  bool status = IfcBoundedCurve::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_points.setUnset(true);
  }
  else {
    m_points.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCartesianPoint > attr2;
        attr2 = static_cast< IfcCartesianPoint * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_points.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPolyline::s_type = new Step::ClassType_class("IfcPolyline");
IfcPolyline_Factory::IfcPolyline_Factory() {
}

IfcPolyline_Factory::~IfcPolyline_Factory() {
  clear(true);
}

void IfcPolyline_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPolyline_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPolyline_Factory::end() {
  return m_idMap.end();
}

IfcPolyline *IfcPolyline_Factory::get(Step::StepId id) {
  IfcPolyline *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPolyline * > (it->second);
  }
  else {
    LOG_ERROR("IfcPolyline_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPolyline * > (create(id));
  }
}

Step::BaseObject *IfcPolyline_Factory::create(Step::StepId id) {
  IfcPolyline *ret = new IfcPolyline(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPolyline_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPolyline *ret = new IfcPolyline(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPolyline_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPolyline *ret = new IfcPolyline(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPolyline *IfcPolyline_Factory::generate() {
  return static_cast< IfcPolyline * > (create(m_model->getNewId()));
}

IfcPolyline *IfcPolyline_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPolyline * > (it->second);
  }
  else {
    return NULL;
  }
}

