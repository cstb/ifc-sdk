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
#include <ifc2x3/IfcCircleHollowProfileDef.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCircleHollowProfileDef::IfcCircleHollowProfileDef(Step::SPFData *args) : IfcCircleProfileDef(args) {
  m_wallThickness = getUnset(m_wallThickness);
}


IfcCircleHollowProfileDef::~IfcCircleHollowProfileDef() {
}

bool IfcCircleHollowProfileDef::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCircleHollowProfileDef(this);
}

const char *IfcCircleHollowProfileDef::type() {
  return "IfcCircleHollowProfileDef";
}

Step::ClassType IfcCircleHollowProfileDef::getClassType() {
  return IfcCircleHollowProfileDef::s_type;
}

Step::ClassType IfcCircleHollowProfileDef::getType() const {
  return IfcCircleHollowProfileDef::s_type;
}

bool IfcCircleHollowProfileDef::isOfType(Step::ClassType t) {
  return IfcCircleHollowProfileDef::s_type == t ? true : IfcCircleProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCircleHollowProfileDef::getWallThickness() {
  if (Step::BaseObject::inited()) {
    return m_wallThickness;
  }
  else {
    return getUnset(m_wallThickness);
  }
}

void IfcCircleHollowProfileDef::setWallThickness(IfcPositiveLengthMeasure value) {
  m_wallThickness = value;
}

void IfcCircleHollowProfileDef::release() {
  IfcCircleProfileDef::release();
}

bool IfcCircleHollowProfileDef::init() {
  bool status = IfcCircleProfileDef::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_wallThickness = getUnset(m_wallThickness);
  }
  else {
    m_wallThickness = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCircleHollowProfileDef::s_type = new Step::ClassType_class("IfcCircleHollowProfileDef");
IfcCircleHollowProfileDef_Factory::IfcCircleHollowProfileDef_Factory() {
}

IfcCircleHollowProfileDef_Factory::~IfcCircleHollowProfileDef_Factory() {
  clear(true);
}

void IfcCircleHollowProfileDef_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCircleHollowProfileDef_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCircleHollowProfileDef_Factory::end() {
  return m_idMap.end();
}

IfcCircleHollowProfileDef *IfcCircleHollowProfileDef_Factory::get(Step::StepId id) {
  IfcCircleHollowProfileDef *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCircleHollowProfileDef * > (it->second);
  }
  else {
    LOG_ERROR("IfcCircleHollowProfileDef_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCircleHollowProfileDef * > (create(id));
  }
}

Step::BaseObject *IfcCircleHollowProfileDef_Factory::create(Step::StepId id) {
  IfcCircleHollowProfileDef *ret = new IfcCircleHollowProfileDef(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCircleHollowProfileDef_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCircleHollowProfileDef *ret = new IfcCircleHollowProfileDef(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCircleHollowProfileDef_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCircleHollowProfileDef *ret = new IfcCircleHollowProfileDef(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCircleHollowProfileDef *IfcCircleHollowProfileDef_Factory::generate() {
  return static_cast< IfcCircleHollowProfileDef * > (create(m_model->getNewId()));
}

IfcCircleHollowProfileDef *IfcCircleHollowProfileDef_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCircleHollowProfileDef * > (it->second);
  }
  else {
    return NULL;
  }
}

