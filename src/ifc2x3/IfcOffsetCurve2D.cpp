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
#include <ifc2x3/IfcOffsetCurve2D.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOffsetCurve2D::IfcOffsetCurve2D(Step::SPFData *args) : IfcCurve(args) {
  m_basisCurve = NULL;
  m_distance = getUnset(m_distance);
  m_selfIntersect = getUnset(m_selfIntersect);
}


IfcOffsetCurve2D::~IfcOffsetCurve2D() {
}

bool IfcOffsetCurve2D::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOffsetCurve2D(this);
}

const char *IfcOffsetCurve2D::type() {
  return "IfcOffsetCurve2D";
}

Step::ClassType IfcOffsetCurve2D::getClassType() {
  return IfcOffsetCurve2D::s_type;
}

Step::ClassType IfcOffsetCurve2D::getType() const {
  return IfcOffsetCurve2D::s_type;
}

bool IfcOffsetCurve2D::isOfType(Step::ClassType t) {
  return IfcOffsetCurve2D::s_type == t ? true : IfcCurve::isOfType(t);
}

IfcCurve *IfcOffsetCurve2D::getBasisCurve() {
  if (Step::BaseObject::inited()) {
    return m_basisCurve.get();
  }
  else {
    return NULL;
  }
}

void IfcOffsetCurve2D::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
  m_basisCurve = value;
}

IfcLengthMeasure IfcOffsetCurve2D::getDistance() {
  if (Step::BaseObject::inited()) {
    return m_distance;
  }
  else {
    return getUnset(m_distance);
  }
}

void IfcOffsetCurve2D::setDistance(IfcLengthMeasure value) {
  m_distance = value;
}

Logical IfcOffsetCurve2D::getSelfIntersect() {
  if (Step::BaseObject::inited()) {
    return m_selfIntersect;
  }
  else {
    return getUnset(m_selfIntersect);
  }
}

void IfcOffsetCurve2D::setSelfIntersect(Logical value) {
  m_selfIntersect = value;
}

void IfcOffsetCurve2D::release() {
  IfcCurve::release();
  m_basisCurve.release();
}

bool IfcOffsetCurve2D::init() {
  bool status = IfcCurve::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_basisCurve = NULL;
  }
  else {
    m_basisCurve = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_distance = getUnset(m_distance);
  }
  else {
    m_distance = Step::spfToReal(arg);
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

IFC2X3_DLL_DEF Step::ClassType IfcOffsetCurve2D::s_type = new Step::ClassType_class("IfcOffsetCurve2D");
IfcOffsetCurve2D_Factory::IfcOffsetCurve2D_Factory() {
}

IfcOffsetCurve2D_Factory::~IfcOffsetCurve2D_Factory() {
  clear(true);
}

void IfcOffsetCurve2D_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOffsetCurve2D_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOffsetCurve2D_Factory::end() {
  return m_idMap.end();
}

IfcOffsetCurve2D *IfcOffsetCurve2D_Factory::get(Step::StepId id) {
  IfcOffsetCurve2D *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOffsetCurve2D * > (it->second);
  }
  else {
    LOG_ERROR("IfcOffsetCurve2D_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOffsetCurve2D * > (create(id));
  }
}

Step::BaseObject *IfcOffsetCurve2D_Factory::create(Step::StepId id) {
  IfcOffsetCurve2D *ret = new IfcOffsetCurve2D(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOffsetCurve2D_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOffsetCurve2D *ret = new IfcOffsetCurve2D(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOffsetCurve2D_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOffsetCurve2D *ret = new IfcOffsetCurve2D(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOffsetCurve2D *IfcOffsetCurve2D_Factory::generate() {
  return static_cast< IfcOffsetCurve2D * > (create(m_model->getNewId()));
}

IfcOffsetCurve2D *IfcOffsetCurve2D_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOffsetCurve2D * > (it->second);
  }
  else {
    return NULL;
  }
}

