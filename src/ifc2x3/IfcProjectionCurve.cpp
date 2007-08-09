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
#include <ifc2x3/IfcProjectionCurve.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcProjectionCurve::IfcProjectionCurve(Step::SPFData *args) : IfcAnnotationCurveOccurrence(args) {
}


IfcProjectionCurve::~IfcProjectionCurve() {
}

bool IfcProjectionCurve::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcProjectionCurve(this);
}

const char *IfcProjectionCurve::type() {
  return "IfcProjectionCurve";
}

Step::ClassType IfcProjectionCurve::getClassType() {
  return IfcProjectionCurve::s_type;
}

Step::ClassType IfcProjectionCurve::getType() const {
  return IfcProjectionCurve::s_type;
}

bool IfcProjectionCurve::isOfType(Step::ClassType t) {
  return IfcProjectionCurve::s_type == t ? true : IfcAnnotationCurveOccurrence::isOfType(t);
}

void IfcProjectionCurve::release() {
  IfcAnnotationCurveOccurrence::release();
}

bool IfcProjectionCurve::init() {
  bool status = IfcAnnotationCurveOccurrence::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectionCurve::s_type = new Step::ClassType_class("IfcProjectionCurve");
IfcProjectionCurve_Factory::IfcProjectionCurve_Factory() {
}

IfcProjectionCurve_Factory::~IfcProjectionCurve_Factory() {
  clear(true);
}

void IfcProjectionCurve_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProjectionCurve_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcProjectionCurve_Factory::end() {
  return m_idMap.end();
}

IfcProjectionCurve *IfcProjectionCurve_Factory::get(Step::StepId id) {
  IfcProjectionCurve *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcProjectionCurve * > (it->second);
  }
  else {
    LOG_ERROR("IfcProjectionCurve_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcProjectionCurve * > (create(id));
  }
}

Step::BaseObject *IfcProjectionCurve_Factory::create(Step::StepId id) {
  IfcProjectionCurve *ret = new IfcProjectionCurve(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcProjectionCurve_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcProjectionCurve *ret = new IfcProjectionCurve(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcProjectionCurve_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcProjectionCurve *ret = new IfcProjectionCurve(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcProjectionCurve *IfcProjectionCurve_Factory::generate() {
  return static_cast< IfcProjectionCurve * > (create(m_model->getNewId()));
}

IfcProjectionCurve *IfcProjectionCurve_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcProjectionCurve * > (it->second);
  }
  else {
    return NULL;
  }
}

