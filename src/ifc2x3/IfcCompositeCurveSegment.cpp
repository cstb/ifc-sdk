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
#include <ifc2x3/IfcCompositeCurveSegment.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCompositeCurveSegment::IfcCompositeCurveSegment(Step::SPFData *args) : IfcGeometricRepresentationItem(args) {
  m_transition = IfcTransitionCode_UNSET;
  m_sameSense = getUnset(m_sameSense);
  m_parentCurve = NULL;
  m_usingCurves.setUnset(true);
}


IfcCompositeCurveSegment::~IfcCompositeCurveSegment() {
}

bool IfcCompositeCurveSegment::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCompositeCurveSegment(this);
}

const char *IfcCompositeCurveSegment::type() {
  return "IfcCompositeCurveSegment";
}

Step::ClassType IfcCompositeCurveSegment::getClassType() {
  return IfcCompositeCurveSegment::s_type;
}

Step::ClassType IfcCompositeCurveSegment::getType() const {
  return IfcCompositeCurveSegment::s_type;
}

bool IfcCompositeCurveSegment::isOfType(Step::ClassType t) {
  return IfcCompositeCurveSegment::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcTransitionCode IfcCompositeCurveSegment::getTransition() {
  if (Step::BaseObject::inited()) {
    return m_transition;
  }
  else {
    return IfcTransitionCode_UNSET;
  }
}

void IfcCompositeCurveSegment::setTransition(IfcTransitionCode value) {
  m_transition = value;
}

Bool IfcCompositeCurveSegment::getSameSense() {
  if (Step::BaseObject::inited()) {
    return m_sameSense;
  }
  else {
    return getUnset(m_sameSense);
  }
}

void IfcCompositeCurveSegment::setSameSense(Bool value) {
  m_sameSense = value;
}

IfcCurve *IfcCompositeCurveSegment::getParentCurve() {
  if (Step::BaseObject::inited()) {
    return m_parentCurve.get();
  }
  else {
    return NULL;
  }
}

void IfcCompositeCurveSegment::setParentCurve(const Step::RefPtr< IfcCurve > &value) {
  m_parentCurve = value;
}

Step::StepSet< Step::RefPtr< IfcCompositeCurve > > &IfcCompositeCurveSegment::getUsingCurves() {
  if (Step::BaseObject::inited()) {
    return m_usingCurves;
  }
  else {
    m_usingCurves.setUnset(true);
    return m_usingCurves;
  }
}

void IfcCompositeCurveSegment::setUsingCurves(const Step::StepSet< Step::RefPtr< IfcCompositeCurve > > &value) {
  m_usingCurves = value;
}

void IfcCompositeCurveSegment::release() {
  IfcGeometricRepresentationItem::release();
  m_parentCurve.release();
}

bool IfcCompositeCurveSegment::init() {
  bool status = IfcGeometricRepresentationItem::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_transition = IfcTransitionCode_UNSET;
  }
  else {
    if (arg == ".DISCONTINUOUS.") {
      m_transition = IfcTransitionCode_DISCONTINUOUS;
    }
    else if (arg == ".CONTINUOUS.") {
      m_transition = IfcTransitionCode_CONTINUOUS;
    }
    else if (arg == ".CONTSAMEGRADIENT.") {
      m_transition = IfcTransitionCode_CONTSAMEGRADIENT;
    }
    else if (arg == ".CONTSAMEGRADIENTSAMECURVATURE.") {
      m_transition = IfcTransitionCode_CONTSAMEGRADIENTSAMECURVATURE;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_sameSense = getUnset(m_sameSense);
  }
  else {
    m_sameSense = Step::spfToBool(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_parentCurve = NULL;
  }
  else {
    m_parentCurve = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  inverses = m_args->getInverses(IfcCompositeCurve::getClassType(), 0);
  if (inverses) {
    unsigned int i;
    m_usingCurves.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_usingCurves.insert(static_cast< IfcCompositeCurve * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCompositeCurveSegment::s_type = new Step::ClassType_class("IfcCompositeCurveSegment");
IfcCompositeCurveSegment_Factory::IfcCompositeCurveSegment_Factory() {
}

IfcCompositeCurveSegment_Factory::~IfcCompositeCurveSegment_Factory() {
  clear(true);
}

void IfcCompositeCurveSegment_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCompositeCurveSegment_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCompositeCurveSegment_Factory::end() {
  return m_idMap.end();
}

IfcCompositeCurveSegment *IfcCompositeCurveSegment_Factory::get(Step::StepId id) {
  IfcCompositeCurveSegment *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCompositeCurveSegment * > (it->second);
  }
  else {
    LOG_ERROR("IfcCompositeCurveSegment_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCompositeCurveSegment * > (create(id));
  }
}

Step::BaseObject *IfcCompositeCurveSegment_Factory::create(Step::StepId id) {
  IfcCompositeCurveSegment *ret = new IfcCompositeCurveSegment(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCompositeCurveSegment_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCompositeCurveSegment *ret = new IfcCompositeCurveSegment(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCompositeCurveSegment_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCompositeCurveSegment *ret = new IfcCompositeCurveSegment(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCompositeCurveSegment *IfcCompositeCurveSegment_Factory::generate() {
  return static_cast< IfcCompositeCurveSegment * > (create(m_model->getNewId()));
}

IfcCompositeCurveSegment *IfcCompositeCurveSegment_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCompositeCurveSegment * > (it->second);
  }
  else {
    return NULL;
  }
}

