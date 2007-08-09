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
#include <ifc2x3/IfcCompositeCurve.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCompositeCurveSegment.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCompositeCurve::IfcCompositeCurve(Step::SPFData *args) : IfcBoundedCurve(args) {
  m_segments.setUnset(true);
  m_selfIntersect = getUnset(m_selfIntersect);
}


IfcCompositeCurve::~IfcCompositeCurve() {
}

bool IfcCompositeCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCompositeCurve(this);
}

const char *IfcCompositeCurve::type() {
  return "IfcCompositeCurve";
}

Step::ClassType IfcCompositeCurve::getClassType() {
  return IfcCompositeCurve::s_type;
}

Step::ClassType IfcCompositeCurve::getType() const {
  return IfcCompositeCurve::s_type;
}

bool IfcCompositeCurve::isOfType(Step::ClassType t) {
  return IfcCompositeCurve::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

Step::StepList< Step::RefPtr< IfcCompositeCurveSegment > > &IfcCompositeCurve::getSegments() {
  if (Step::BaseObject::inited()) {
    return m_segments;
  }
  else {
    m_segments.setUnset(true);
    return m_segments;
  }
}

void IfcCompositeCurve::setSegments(const Step::StepList< Step::RefPtr< IfcCompositeCurveSegment > > &value) {
  m_segments = value;
}

Logical IfcCompositeCurve::getSelfIntersect() {
  if (Step::BaseObject::inited()) {
    return m_selfIntersect;
  }
  else {
    return getUnset(m_selfIntersect);
  }
}

void IfcCompositeCurve::setSelfIntersect(Logical value) {
  m_selfIntersect = value;
}

void IfcCompositeCurve::release() {
  IfcBoundedCurve::release();
  m_segments.clear();
}

bool IfcCompositeCurve::init() {
  bool status = IfcBoundedCurve::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_segments.setUnset(true);
  }
  else {
    m_segments.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCompositeCurveSegment > attr2;
        attr2 = static_cast< IfcCompositeCurveSegment * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_segments.push_back(attr2);
      }
      else {
        break;
      }
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_selfIntersect = getUnset(m_selfIntersect);
  }
  else {
    m_selfIntersect = Step::spfToLogical(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCompositeCurve::s_type = new Step::ClassType_class("IfcCompositeCurve");
IfcCompositeCurve_Factory::IfcCompositeCurve_Factory() {
}

IfcCompositeCurve_Factory::~IfcCompositeCurve_Factory() {
  clear(true);
}

void IfcCompositeCurve_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCompositeCurve_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCompositeCurve_Factory::end() {
  return m_idMap.end();
}

IfcCompositeCurve *IfcCompositeCurve_Factory::get(Step::StepId id) {
  IfcCompositeCurve *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCompositeCurve * > (it->second);
  }
  else {
    LOG_ERROR("IfcCompositeCurve_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCompositeCurve * > (create(id));
  }
}

Step::BaseObject *IfcCompositeCurve_Factory::create(Step::StepId id) {
  IfcCompositeCurve *ret = new IfcCompositeCurve(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCompositeCurve_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCompositeCurve *ret = new IfcCompositeCurve(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCompositeCurve_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCompositeCurve *ret = new IfcCompositeCurve(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCompositeCurve *IfcCompositeCurve_Factory::generate() {
  return static_cast< IfcCompositeCurve * > (create(m_model->getNewId()));
}

IfcCompositeCurve *IfcCompositeCurve_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCompositeCurve * > (it->second);
  }
  else {
    return NULL;
  }
}

