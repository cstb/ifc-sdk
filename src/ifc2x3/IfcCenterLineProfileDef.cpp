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
#include <ifc2x3/IfcCenterLineProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCenterLineProfileDef::IfcCenterLineProfileDef(Step::SPFData *args) : IfcArbitraryOpenProfileDef(args) {
  m_thickness = getUnset(m_thickness);
}


IfcCenterLineProfileDef::~IfcCenterLineProfileDef() {
}

bool IfcCenterLineProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCenterLineProfileDef(this);
}

const char *IfcCenterLineProfileDef::type() {
  return "IfcCenterLineProfileDef";
}

Step::ClassType IfcCenterLineProfileDef::getClassType() {
  return IfcCenterLineProfileDef::s_type;
}

Step::ClassType IfcCenterLineProfileDef::getType() const {
  return IfcCenterLineProfileDef::s_type;
}

bool IfcCenterLineProfileDef::isOfType(Step::ClassType t) {
  return IfcCenterLineProfileDef::s_type == t ? true : IfcArbitraryOpenProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCenterLineProfileDef::getThickness() {
  if (Step::BaseObject::inited()) {
    return m_thickness;
  }
  else {
    return getUnset(m_thickness);
  }
}

void IfcCenterLineProfileDef::setThickness(IfcPositiveLengthMeasure value) {
  m_thickness = value;
}

void IfcCenterLineProfileDef::release() {
  IfcArbitraryOpenProfileDef::release();
}

bool IfcCenterLineProfileDef::init() {
  bool status = IfcArbitraryOpenProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thickness = getUnset(m_thickness);
  }
  else {
    m_thickness = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCenterLineProfileDef::s_type = new Step::ClassType_class("IfcCenterLineProfileDef");
IfcCenterLineProfileDef_Factory::IfcCenterLineProfileDef_Factory() {
}

IfcCenterLineProfileDef_Factory::~IfcCenterLineProfileDef_Factory() {
  clear(true);
}

void IfcCenterLineProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCenterLineProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCenterLineProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcCenterLineProfileDef *IfcCenterLineProfileDef_Factory::get(Step::StepId id) {
  IfcCenterLineProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCenterLineProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcCenterLineProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCenterLineProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcCenterLineProfileDef_Factory::create(Step::StepId id) {
  IfcCenterLineProfileDef *ret = new IfcCenterLineProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCenterLineProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCenterLineProfileDef *ret = new IfcCenterLineProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCenterLineProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCenterLineProfileDef *ret = new IfcCenterLineProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCenterLineProfileDef *IfcCenterLineProfileDef_Factory::generate() {
  return static_cast< IfcCenterLineProfileDef * > (create(m_model->getNewId()));
}

IfcCenterLineProfileDef *IfcCenterLineProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCenterLineProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

