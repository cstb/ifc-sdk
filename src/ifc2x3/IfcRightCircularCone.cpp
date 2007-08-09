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
#include <ifc2x3/IfcRightCircularCone.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRightCircularCone::IfcRightCircularCone(Step::SPFData *args) : IfcCsgPrimitive3D(args) {
  m_height = getUnset(m_height);
  m_bottomRadius = getUnset(m_bottomRadius);
}


IfcRightCircularCone::~IfcRightCircularCone() {
}

bool IfcRightCircularCone::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRightCircularCone(this);
}

const char *IfcRightCircularCone::type() {
  return "IfcRightCircularCone";
}

Step::ClassType IfcRightCircularCone::getClassType() {
  return IfcRightCircularCone::s_type;
}

Step::ClassType IfcRightCircularCone::getType() const {
  return IfcRightCircularCone::s_type;
}

bool IfcRightCircularCone::isOfType(Step::ClassType t) {
  return IfcRightCircularCone::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcRightCircularCone::getHeight() {
  if (Step::BaseObject::inited()) {
    return m_height;
  }
  else {
    return getUnset(m_height);
  }
}

void IfcRightCircularCone::setHeight(IfcPositiveLengthMeasure value) {
  m_height = value;
}

IfcPositiveLengthMeasure IfcRightCircularCone::getBottomRadius() {
  if (Step::BaseObject::inited()) {
    return m_bottomRadius;
  }
  else {
    return getUnset(m_bottomRadius);
  }
}

void IfcRightCircularCone::setBottomRadius(IfcPositiveLengthMeasure value) {
  m_bottomRadius = value;
}

void IfcRightCircularCone::release() {
  IfcCsgPrimitive3D::release();
}

bool IfcRightCircularCone::init() {
  bool status = IfcCsgPrimitive3D::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_height = getUnset(m_height);
  }
  else {
    m_height = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_bottomRadius = getUnset(m_bottomRadius);
  }
  else {
    m_bottomRadius = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRightCircularCone::s_type = new Step::ClassType_class("IfcRightCircularCone");
IfcRightCircularCone_Factory::IfcRightCircularCone_Factory() {
}

IfcRightCircularCone_Factory::~IfcRightCircularCone_Factory() {
  clear(true);
}

void IfcRightCircularCone_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRightCircularCone_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRightCircularCone_Factory::end() {
  return m_idMap.end();
}

IfcRightCircularCone *IfcRightCircularCone_Factory::get(Step::StepId id) {
  IfcRightCircularCone *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRightCircularCone * > (it->second);
  }
  else {
    LOG_ERROR("IfcRightCircularCone_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRightCircularCone * > (create(id));
  }
}

Step::BaseObject *IfcRightCircularCone_Factory::create(Step::StepId id) {
  IfcRightCircularCone *ret = new IfcRightCircularCone(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRightCircularCone_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRightCircularCone *ret = new IfcRightCircularCone(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRightCircularCone_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRightCircularCone *ret = new IfcRightCircularCone(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRightCircularCone *IfcRightCircularCone_Factory::generate() {
  return static_cast< IfcRightCircularCone * > (create(m_model->getNewId()));
}

IfcRightCircularCone *IfcRightCircularCone_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRightCircularCone * > (it->second);
  }
  else {
    return NULL;
  }
}

