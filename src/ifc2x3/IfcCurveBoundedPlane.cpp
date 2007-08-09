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
#include <ifc2x3/IfcCurveBoundedPlane.h>


#include <Step/BaseModel.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcPlane.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCurveBoundedPlane::IfcCurveBoundedPlane(Step::SPFData *args) : IfcBoundedSurface(args) {
  m_basisSurface = NULL;
  m_outerBoundary = NULL;
  m_innerBoundaries.setUnset(true);
}


IfcCurveBoundedPlane::~IfcCurveBoundedPlane() {
}

bool IfcCurveBoundedPlane::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurveBoundedPlane(this);
}

const char *IfcCurveBoundedPlane::type() {
  return "IfcCurveBoundedPlane";
}

Step::ClassType IfcCurveBoundedPlane::getClassType() {
  return IfcCurveBoundedPlane::s_type;
}

Step::ClassType IfcCurveBoundedPlane::getType() const {
  return IfcCurveBoundedPlane::s_type;
}

bool IfcCurveBoundedPlane::isOfType(Step::ClassType t) {
  return IfcCurveBoundedPlane::s_type == t ? true : IfcBoundedSurface::isOfType(t);
}

IfcPlane *IfcCurveBoundedPlane::getBasisSurface() {
  if (Step::BaseObject::inited()) {
    return m_basisSurface.get();
  }
  else {
    return NULL;
  }
}

void IfcCurveBoundedPlane::setBasisSurface(const Step::RefPtr< IfcPlane > &value) {
  m_basisSurface = value;
}

IfcCurve *IfcCurveBoundedPlane::getOuterBoundary() {
  if (Step::BaseObject::inited()) {
    return m_outerBoundary.get();
  }
  else {
    return NULL;
  }
}

void IfcCurveBoundedPlane::setOuterBoundary(const Step::RefPtr< IfcCurve > &value) {
  m_outerBoundary = value;
}

Step::StepSet< Step::RefPtr< IfcCurve > > &IfcCurveBoundedPlane::getInnerBoundaries() {
  if (Step::BaseObject::inited()) {
    return m_innerBoundaries;
  }
  else {
    m_innerBoundaries.setUnset(true);
    return m_innerBoundaries;
  }
}

void IfcCurveBoundedPlane::setInnerBoundaries(const Step::StepSet< Step::RefPtr< IfcCurve > > &value) {
  m_innerBoundaries = value;
}

void IfcCurveBoundedPlane::release() {
  IfcBoundedSurface::release();
  m_basisSurface.release();
  m_outerBoundary.release();
  m_innerBoundaries.clear();
}

bool IfcCurveBoundedPlane::init() {
  bool status = IfcBoundedSurface::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_basisSurface = NULL;
  }
  else {
    m_basisSurface = static_cast< IfcPlane * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_outerBoundary = NULL;
  }
  else {
    m_outerBoundary = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_innerBoundaries.setUnset(true);
  }
  else {
    m_innerBoundaries.setUnset(false);
    while (true) {
      std::string str1;
      Step::getSubParameter(arg, str1);
      if (str1 != "") {
        Step::RefPtr< IfcCurve > attr2;
        attr2 = static_cast< IfcCurve * > (m_model->getObjectById(atoi(str1.c_str() + 1)));
        m_innerBoundaries.insert(attr2);
      }
      else {
        break;
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurveBoundedPlane::s_type = new Step::ClassType_class("IfcCurveBoundedPlane");
IfcCurveBoundedPlane_Factory::IfcCurveBoundedPlane_Factory() {
}

IfcCurveBoundedPlane_Factory::~IfcCurveBoundedPlane_Factory() {
  clear(true);
}

void IfcCurveBoundedPlane_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveBoundedPlane_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurveBoundedPlane_Factory::end() {
  return m_idMap.end();
}

IfcCurveBoundedPlane *IfcCurveBoundedPlane_Factory::get(Step::StepId id) {
  IfcCurveBoundedPlane *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCurveBoundedPlane * > (it->second);
  }
  else {
    LOG_ERROR("IfcCurveBoundedPlane_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCurveBoundedPlane * > (create(id));
  }
}

Step::BaseObject *IfcCurveBoundedPlane_Factory::create(Step::StepId id) {
  IfcCurveBoundedPlane *ret = new IfcCurveBoundedPlane(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCurveBoundedPlane_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCurveBoundedPlane *ret = new IfcCurveBoundedPlane(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCurveBoundedPlane_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCurveBoundedPlane *ret = new IfcCurveBoundedPlane(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCurveBoundedPlane *IfcCurveBoundedPlane_Factory::generate() {
  return static_cast< IfcCurveBoundedPlane * > (create(m_model->getNewId()));
}

IfcCurveBoundedPlane *IfcCurveBoundedPlane_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCurveBoundedPlane * > (it->second);
  }
  else {
    return NULL;
  }
}

