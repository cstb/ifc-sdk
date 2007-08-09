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
#include <ifc2x3/IfcArbitraryClosedProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcArbitraryClosedProfileDef::IfcArbitraryClosedProfileDef(Step::SPFData *args) : IfcProfileDef(args) {
  m_outerCurve = NULL;
}


IfcArbitraryClosedProfileDef::~IfcArbitraryClosedProfileDef() {
}

bool IfcArbitraryClosedProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcArbitraryClosedProfileDef(this);
}

const char *IfcArbitraryClosedProfileDef::type() {
  return "IfcArbitraryClosedProfileDef";
}

Step::ClassType IfcArbitraryClosedProfileDef::getClassType() {
  return IfcArbitraryClosedProfileDef::s_type;
}

Step::ClassType IfcArbitraryClosedProfileDef::getType() const {
  return IfcArbitraryClosedProfileDef::s_type;
}

bool IfcArbitraryClosedProfileDef::isOfType(Step::ClassType t) {
  return IfcArbitraryClosedProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcCurve *IfcArbitraryClosedProfileDef::getOuterCurve() {
  if (Step::BaseObject::inited()) {
    return m_outerCurve.get();
  }
  else {
    return NULL;
  }
}

void IfcArbitraryClosedProfileDef::setOuterCurve(const Step::RefPtr< IfcCurve > &value) {
  m_outerCurve = value;
}

void IfcArbitraryClosedProfileDef::release() {
  IfcProfileDef::release();
  m_outerCurve.release();
}

bool IfcArbitraryClosedProfileDef::init() {
  bool status = IfcProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_outerCurve = NULL;
  }
  else {
    m_outerCurve = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcArbitraryClosedProfileDef::s_type = new Step::ClassType_class("IfcArbitraryClosedProfileDef");
IfcArbitraryClosedProfileDef_Factory::IfcArbitraryClosedProfileDef_Factory() {
}

IfcArbitraryClosedProfileDef_Factory::~IfcArbitraryClosedProfileDef_Factory() {
  clear(true);
}

void IfcArbitraryClosedProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcArbitraryClosedProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcArbitraryClosedProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcArbitraryClosedProfileDef *IfcArbitraryClosedProfileDef_Factory::get(Step::StepId id) {
  IfcArbitraryClosedProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcArbitraryClosedProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcArbitraryClosedProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcArbitraryClosedProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcArbitraryClosedProfileDef_Factory::create(Step::StepId id) {
  IfcArbitraryClosedProfileDef *ret = new IfcArbitraryClosedProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcArbitraryClosedProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcArbitraryClosedProfileDef *ret = new IfcArbitraryClosedProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcArbitraryClosedProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcArbitraryClosedProfileDef *ret = new IfcArbitraryClosedProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcArbitraryClosedProfileDef *IfcArbitraryClosedProfileDef_Factory::generate() {
  return static_cast< IfcArbitraryClosedProfileDef * > (create(m_model->getNewId()));
}

IfcArbitraryClosedProfileDef *IfcArbitraryClosedProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcArbitraryClosedProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

