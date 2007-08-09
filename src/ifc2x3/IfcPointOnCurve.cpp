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
#include <ifc2x3/IfcPointOnCurve.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPointOnCurve::IfcPointOnCurve(Step::SPFData *args) : IfcPoint(args) {
  m_basisCurve = NULL;
  m_pointParameter = getUnset(m_pointParameter);
}


IfcPointOnCurve::~IfcPointOnCurve() {
}

bool IfcPointOnCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPointOnCurve(this);
}

const char *IfcPointOnCurve::type() {
  return "IfcPointOnCurve";
}

Step::ClassType IfcPointOnCurve::getClassType() {
  return IfcPointOnCurve::s_type;
}

Step::ClassType IfcPointOnCurve::getType() const {
  return IfcPointOnCurve::s_type;
}

bool IfcPointOnCurve::isOfType(Step::ClassType t) {
  return IfcPointOnCurve::s_type == t ? true : IfcPoint::isOfType(t);
}

IfcCurve *IfcPointOnCurve::getBasisCurve() {
  if (Step::BaseObject::inited()) {
    return m_basisCurve.get();
  }
  else {
    return NULL;
  }
}

void IfcPointOnCurve::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
  m_basisCurve = value;
}

IfcParameterValue IfcPointOnCurve::getPointParameter() {
  if (Step::BaseObject::inited()) {
    return m_pointParameter;
  }
  else {
    return getUnset(m_pointParameter);
  }
}

void IfcPointOnCurve::setPointParameter(IfcParameterValue value) {
  m_pointParameter = value;
}

void IfcPointOnCurve::release() {
  IfcPoint::release();
  m_basisCurve.release();
}

bool IfcPointOnCurve::init() {
  bool status = IfcPoint::init();
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
    m_pointParameter = getUnset(m_pointParameter);
  }
  else {
    m_pointParameter = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPointOnCurve::s_type = new Step::ClassType_class("IfcPointOnCurve");
IfcPointOnCurve_Factory::IfcPointOnCurve_Factory() {
}

IfcPointOnCurve_Factory::~IfcPointOnCurve_Factory() {
  clear(true);
}

void IfcPointOnCurve_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPointOnCurve_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPointOnCurve_Factory::end() {
  return m_idMap.end();
}

IfcPointOnCurve *IfcPointOnCurve_Factory::get(Step::StepId id) {
  IfcPointOnCurve *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPointOnCurve * > (it->second);
  }
  else {
    LOG_ERROR("IfcPointOnCurve_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPointOnCurve * > (create(id));
  }
}

Step::BaseObject *IfcPointOnCurve_Factory::create(Step::StepId id) {
  IfcPointOnCurve *ret = new IfcPointOnCurve(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPointOnCurve_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPointOnCurve *ret = new IfcPointOnCurve(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPointOnCurve_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPointOnCurve *ret = new IfcPointOnCurve(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPointOnCurve *IfcPointOnCurve_Factory::generate() {
  return static_cast< IfcPointOnCurve * > (create(m_model->getNewId()));
}

IfcPointOnCurve *IfcPointOnCurve_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPointOnCurve * > (it->second);
  }
  else {
    return NULL;
  }
}

