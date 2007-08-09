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
#include <ifc2x3/IfcDimensionCurveTerminator.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDimensionCurveTerminator::IfcDimensionCurveTerminator(Step::SPFData *args) : IfcTerminatorSymbol(args) {
  m_role = IfcDimensionExtentUsage_UNSET;
}


IfcDimensionCurveTerminator::~IfcDimensionCurveTerminator() {
}

bool IfcDimensionCurveTerminator::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDimensionCurveTerminator(this);
}

const char *IfcDimensionCurveTerminator::type() {
  return "IfcDimensionCurveTerminator";
}

Step::ClassType IfcDimensionCurveTerminator::getClassType() {
  return IfcDimensionCurveTerminator::s_type;
}

Step::ClassType IfcDimensionCurveTerminator::getType() const {
  return IfcDimensionCurveTerminator::s_type;
}

bool IfcDimensionCurveTerminator::isOfType(Step::ClassType t) {
  return IfcDimensionCurveTerminator::s_type == t ? true : IfcTerminatorSymbol::isOfType(t);
}

IfcDimensionExtentUsage IfcDimensionCurveTerminator::getRole() {
  if (Step::BaseObject::inited()) {
    return m_role;
  }
  else {
    return IfcDimensionExtentUsage_UNSET;
  }
}

void IfcDimensionCurveTerminator::setRole(IfcDimensionExtentUsage value) {
  m_role = value;
}

void IfcDimensionCurveTerminator::release() {
  IfcTerminatorSymbol::release();
}

bool IfcDimensionCurveTerminator::init() {
  bool status = IfcTerminatorSymbol::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_role = IfcDimensionExtentUsage_UNSET;
  }
  else {
    if (arg == ".ORIGIN.") {
      m_role = IfcDimensionExtentUsage_ORIGIN;
    }
    else if (arg == ".TARGET.") {
      m_role = IfcDimensionExtentUsage_TARGET;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionCurveTerminator::s_type = new Step::ClassType_class("IfcDimensionCurveTerminator");
IfcDimensionCurveTerminator_Factory::IfcDimensionCurveTerminator_Factory() {
}

IfcDimensionCurveTerminator_Factory::~IfcDimensionCurveTerminator_Factory() {
  clear(true);
}

void IfcDimensionCurveTerminator_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDimensionCurveTerminator_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDimensionCurveTerminator_Factory::end() {
  return m_idMap.end();
}

IfcDimensionCurveTerminator *IfcDimensionCurveTerminator_Factory::get(Step::StepId id) {
  IfcDimensionCurveTerminator *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDimensionCurveTerminator * > (it->second);
  }
  else {
    LOG_ERROR("IfcDimensionCurveTerminator_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDimensionCurveTerminator * > (create(id));
  }
}

Step::BaseObject *IfcDimensionCurveTerminator_Factory::create(Step::StepId id) {
  IfcDimensionCurveTerminator *ret = new IfcDimensionCurveTerminator(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDimensionCurveTerminator_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDimensionCurveTerminator *ret = new IfcDimensionCurveTerminator(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDimensionCurveTerminator_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDimensionCurveTerminator *ret = new IfcDimensionCurveTerminator(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDimensionCurveTerminator *IfcDimensionCurveTerminator_Factory::generate() {
  return static_cast< IfcDimensionCurveTerminator * > (create(m_model->getNewId()));
}

IfcDimensionCurveTerminator *IfcDimensionCurveTerminator_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDimensionCurveTerminator * > (it->second);
  }
  else {
    return NULL;
  }
}

