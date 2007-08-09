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
#include <ifc2x3/IfcReinforcingBar.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcReinforcingBar::IfcReinforcingBar(Step::SPFData *args) : IfcReinforcingElement(args) {
  m_nominalDiameter = getUnset(m_nominalDiameter);
  m_crossSectionArea = getUnset(m_crossSectionArea);
  m_barLength = getUnset(m_barLength);
  m_barRole = IfcReinforcingBarRoleEnum_UNSET;
  m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
}


IfcReinforcingBar::~IfcReinforcingBar() {
}

bool IfcReinforcingBar::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcReinforcingBar(this);
}

const char *IfcReinforcingBar::type() {
  return "IfcReinforcingBar";
}

Step::ClassType IfcReinforcingBar::getClassType() {
  return IfcReinforcingBar::s_type;
}

Step::ClassType IfcReinforcingBar::getType() const {
  return IfcReinforcingBar::s_type;
}

bool IfcReinforcingBar::isOfType(Step::ClassType t) {
  return IfcReinforcingBar::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcReinforcingBar::getNominalDiameter() {
  if (Step::BaseObject::inited()) {
    return m_nominalDiameter;
  }
  else {
    return getUnset(m_nominalDiameter);
  }
}

void IfcReinforcingBar::setNominalDiameter(IfcPositiveLengthMeasure value) {
  m_nominalDiameter = value;
}

IfcAreaMeasure IfcReinforcingBar::getCrossSectionArea() {
  if (Step::BaseObject::inited()) {
    return m_crossSectionArea;
  }
  else {
    return getUnset(m_crossSectionArea);
  }
}

void IfcReinforcingBar::setCrossSectionArea(IfcAreaMeasure value) {
  m_crossSectionArea = value;
}

IfcPositiveLengthMeasure IfcReinforcingBar::getBarLength() {
  if (Step::BaseObject::inited()) {
    return m_barLength;
  }
  else {
    return getUnset(m_barLength);
  }
}

void IfcReinforcingBar::setBarLength(IfcPositiveLengthMeasure value) {
  m_barLength = value;
}

IfcReinforcingBarRoleEnum IfcReinforcingBar::getBarRole() {
  if (Step::BaseObject::inited()) {
    return m_barRole;
  }
  else {
    return IfcReinforcingBarRoleEnum_UNSET;
  }
}

void IfcReinforcingBar::setBarRole(IfcReinforcingBarRoleEnum value) {
  m_barRole = value;
}

IfcReinforcingBarSurfaceEnum IfcReinforcingBar::getBarSurface() {
  if (Step::BaseObject::inited()) {
    return m_barSurface;
  }
  else {
    return IfcReinforcingBarSurfaceEnum_UNSET;
  }
}

void IfcReinforcingBar::setBarSurface(IfcReinforcingBarSurfaceEnum value) {
  m_barSurface = value;
}

void IfcReinforcingBar::release() {
  IfcReinforcingElement::release();
}

bool IfcReinforcingBar::init() {
  bool status = IfcReinforcingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_nominalDiameter = getUnset(m_nominalDiameter);
  }
  else {
    m_nominalDiameter = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_crossSectionArea = getUnset(m_crossSectionArea);
  }
  else {
    m_crossSectionArea = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_barLength = getUnset(m_barLength);
  }
  else {
    m_barLength = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_barRole = IfcReinforcingBarRoleEnum_UNSET;
  }
  else {
    if (arg == ".MAIN.") {
      m_barRole = IfcReinforcingBarRoleEnum_MAIN;
    }
    else if (arg == ".SHEAR.") {
      m_barRole = IfcReinforcingBarRoleEnum_SHEAR;
    }
    else if (arg == ".LIGATURE.") {
      m_barRole = IfcReinforcingBarRoleEnum_LIGATURE;
    }
    else if (arg == ".STUD.") {
      m_barRole = IfcReinforcingBarRoleEnum_STUD;
    }
    else if (arg == ".PUNCHING.") {
      m_barRole = IfcReinforcingBarRoleEnum_PUNCHING;
    }
    else if (arg == ".EDGE.") {
      m_barRole = IfcReinforcingBarRoleEnum_EDGE;
    }
    else if (arg == ".RING.") {
      m_barRole = IfcReinforcingBarRoleEnum_RING;
    }
    else if (arg == ".USERDEFINED.") {
      m_barRole = IfcReinforcingBarRoleEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_barRole = IfcReinforcingBarRoleEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
  }
  else {
    if (arg == ".PLAIN.") {
      m_barSurface = IfcReinforcingBarSurfaceEnum_PLAIN;
    }
    else if (arg == ".TEXTURED.") {
      m_barSurface = IfcReinforcingBarSurfaceEnum_TEXTURED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcingBar::s_type = new Step::ClassType_class("IfcReinforcingBar");
IfcReinforcingBar_Factory::IfcReinforcingBar_Factory() {
}

IfcReinforcingBar_Factory::~IfcReinforcingBar_Factory() {
  clear(true);
}

void IfcReinforcingBar_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReinforcingBar_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcReinforcingBar_Factory::end() {
  return m_idMap.end();
}

IfcReinforcingBar *IfcReinforcingBar_Factory::get(Step::StepId id) {
  IfcReinforcingBar *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcReinforcingBar * > (it->second);
  }
  else {
    LOG_ERROR("IfcReinforcingBar_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcReinforcingBar * > (create(id));
  }
}

Step::BaseObject *IfcReinforcingBar_Factory::create(Step::StepId id) {
  IfcReinforcingBar *ret = new IfcReinforcingBar(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcReinforcingBar_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcReinforcingBar *ret = new IfcReinforcingBar(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcReinforcingBar_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcReinforcingBar *ret = new IfcReinforcingBar(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcReinforcingBar *IfcReinforcingBar_Factory::generate() {
  return static_cast< IfcReinforcingBar * > (create(m_model->getNewId()));
}

IfcReinforcingBar *IfcReinforcingBar_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcReinforcingBar * > (it->second);
  }
  else {
    return NULL;
  }
}

