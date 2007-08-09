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
#include <ifc2x3/IfcColourRgb.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcColourRgb::IfcColourRgb(Step::SPFData *args) : IfcColourSpecification(args) {
  m_red = getUnset(m_red);
  m_green = getUnset(m_green);
  m_blue = getUnset(m_blue);
}


IfcColourRgb::~IfcColourRgb() {
}

bool IfcColourRgb::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcColourRgb(this);
}

const char *IfcColourRgb::type() {
  return "IfcColourRgb";
}

Step::ClassType IfcColourRgb::getClassType() {
  return IfcColourRgb::s_type;
}

Step::ClassType IfcColourRgb::getType() const {
  return IfcColourRgb::s_type;
}

bool IfcColourRgb::isOfType(Step::ClassType t) {
  return IfcColourRgb::s_type == t ? true : IfcColourSpecification::isOfType(t);
}

IfcNormalisedRatioMeasure IfcColourRgb::getRed() {
  if (Step::BaseObject::inited()) {
    return m_red;
  }
  else {
    return getUnset(m_red);
  }
}

void IfcColourRgb::setRed(IfcNormalisedRatioMeasure value) {
  m_red = value;
}

IfcNormalisedRatioMeasure IfcColourRgb::getGreen() {
  if (Step::BaseObject::inited()) {
    return m_green;
  }
  else {
    return getUnset(m_green);
  }
}

void IfcColourRgb::setGreen(IfcNormalisedRatioMeasure value) {
  m_green = value;
}

IfcNormalisedRatioMeasure IfcColourRgb::getBlue() {
  if (Step::BaseObject::inited()) {
    return m_blue;
  }
  else {
    return getUnset(m_blue);
  }
}

void IfcColourRgb::setBlue(IfcNormalisedRatioMeasure value) {
  m_blue = value;
}

void IfcColourRgb::release() {
  IfcColourSpecification::release();
}

bool IfcColourRgb::init() {
  bool status = IfcColourSpecification::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_red = getUnset(m_red);
  }
  else {
    m_red = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_green = getUnset(m_green);
  }
  else {
    m_green = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_blue = getUnset(m_blue);
  }
  else {
    m_blue = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcColourRgb::s_type = new Step::ClassType_class("IfcColourRgb");
IfcColourRgb_Factory::IfcColourRgb_Factory() {
}

IfcColourRgb_Factory::~IfcColourRgb_Factory() {
  clear(true);
}

void IfcColourRgb_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcColourRgb_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcColourRgb_Factory::end() {
  return m_idMap.end();
}

IfcColourRgb *IfcColourRgb_Factory::get(Step::StepId id) {
  IfcColourRgb *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcColourRgb * > (it->second);
  }
  else {
    LOG_ERROR("IfcColourRgb_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcColourRgb * > (create(id));
  }
}

Step::BaseObject *IfcColourRgb_Factory::create(Step::StepId id) {
  IfcColourRgb *ret = new IfcColourRgb(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcColourRgb_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcColourRgb *ret = new IfcColourRgb(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcColourRgb_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcColourRgb *ret = new IfcColourRgb(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcColourRgb *IfcColourRgb_Factory::generate() {
  return static_cast< IfcColourRgb * > (create(m_model->getNewId()));
}

IfcColourRgb *IfcColourRgb_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcColourRgb * > (it->second);
  }
  else {
    return NULL;
  }
}

