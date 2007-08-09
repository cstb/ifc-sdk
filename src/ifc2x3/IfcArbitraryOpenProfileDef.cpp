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
#include <ifc2x3/IfcArbitraryOpenProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcArbitraryOpenProfileDef::IfcArbitraryOpenProfileDef(Step::SPFData *args) : IfcProfileDef(args) {
  m_curve = NULL;
}


IfcArbitraryOpenProfileDef::~IfcArbitraryOpenProfileDef() {
}

bool IfcArbitraryOpenProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcArbitraryOpenProfileDef(this);
}

const char *IfcArbitraryOpenProfileDef::type() {
  return "IfcArbitraryOpenProfileDef";
}

Step::ClassType IfcArbitraryOpenProfileDef::getClassType() {
  return IfcArbitraryOpenProfileDef::s_type;
}

Step::ClassType IfcArbitraryOpenProfileDef::getType() const {
  return IfcArbitraryOpenProfileDef::s_type;
}

bool IfcArbitraryOpenProfileDef::isOfType(Step::ClassType t) {
  return IfcArbitraryOpenProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcBoundedCurve *IfcArbitraryOpenProfileDef::getCurve() {
  if (Step::BaseObject::inited()) {
    return m_curve.get();
  }
  else {
    return NULL;
  }
}

void IfcArbitraryOpenProfileDef::setCurve(const Step::RefPtr< IfcBoundedCurve > &value) {
  m_curve = value;
}

void IfcArbitraryOpenProfileDef::release() {
  IfcProfileDef::release();
  m_curve.release();
}

bool IfcArbitraryOpenProfileDef::init() {
  bool status = IfcProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_curve = NULL;
  }
  else {
    m_curve = static_cast< IfcBoundedCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcArbitraryOpenProfileDef::s_type = new Step::ClassType_class("IfcArbitraryOpenProfileDef");
IfcArbitraryOpenProfileDef_Factory::IfcArbitraryOpenProfileDef_Factory() {
}

IfcArbitraryOpenProfileDef_Factory::~IfcArbitraryOpenProfileDef_Factory() {
  clear(true);
}

void IfcArbitraryOpenProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcArbitraryOpenProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcArbitraryOpenProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcArbitraryOpenProfileDef *IfcArbitraryOpenProfileDef_Factory::get(Step::StepId id) {
  IfcArbitraryOpenProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcArbitraryOpenProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcArbitraryOpenProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcArbitraryOpenProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcArbitraryOpenProfileDef_Factory::create(Step::StepId id) {
  IfcArbitraryOpenProfileDef *ret = new IfcArbitraryOpenProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcArbitraryOpenProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcArbitraryOpenProfileDef *ret = new IfcArbitraryOpenProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcArbitraryOpenProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcArbitraryOpenProfileDef *ret = new IfcArbitraryOpenProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcArbitraryOpenProfileDef *IfcArbitraryOpenProfileDef_Factory::generate() {
  return static_cast< IfcArbitraryOpenProfileDef * > (create(m_model->getNewId()));
}

IfcArbitraryOpenProfileDef *IfcArbitraryOpenProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcArbitraryOpenProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

