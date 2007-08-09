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
#include <ifc2x3/IfcEllipse.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcEllipse::IfcEllipse(Step::SPFData *args) : IfcConic(args) {
  m_semiAxis1 = getUnset(m_semiAxis1);
  m_semiAxis2 = getUnset(m_semiAxis2);
}


IfcEllipse::~IfcEllipse() {
}

bool IfcEllipse::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcEllipse(this);
}

const char *IfcEllipse::type() {
  return "IfcEllipse";
}

Step::ClassType IfcEllipse::getClassType() {
  return IfcEllipse::s_type;
}

Step::ClassType IfcEllipse::getType() const {
  return IfcEllipse::s_type;
}

bool IfcEllipse::isOfType(Step::ClassType t) {
  return IfcEllipse::s_type == t ? true : IfcConic::isOfType(t);
}

IfcPositiveLengthMeasure IfcEllipse::getSemiAxis1() {
  if (Step::BaseObject::inited()) {
    return m_semiAxis1;
  }
  else {
    return getUnset(m_semiAxis1);
  }
}

void IfcEllipse::setSemiAxis1(IfcPositiveLengthMeasure value) {
  m_semiAxis1 = value;
}

IfcPositiveLengthMeasure IfcEllipse::getSemiAxis2() {
  if (Step::BaseObject::inited()) {
    return m_semiAxis2;
  }
  else {
    return getUnset(m_semiAxis2);
  }
}

void IfcEllipse::setSemiAxis2(IfcPositiveLengthMeasure value) {
  m_semiAxis2 = value;
}

void IfcEllipse::release() {
  IfcConic::release();
}

bool IfcEllipse::init() {
  bool status = IfcConic::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_semiAxis1 = getUnset(m_semiAxis1);
  }
  else {
    m_semiAxis1 = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_semiAxis2 = getUnset(m_semiAxis2);
  }
  else {
    m_semiAxis2 = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcEllipse::s_type = new Step::ClassType_class("IfcEllipse");
IfcEllipse_Factory::IfcEllipse_Factory() {
}

IfcEllipse_Factory::~IfcEllipse_Factory() {
  clear(true);
}

void IfcEllipse_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEllipse_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcEllipse_Factory::end() {
  return m_idMap.end();
}

IfcEllipse *IfcEllipse_Factory::get(Step::StepId id) {
  IfcEllipse *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcEllipse * > (it->second);
  }
  else {
    LOG_ERROR("IfcEllipse_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcEllipse * > (create(id));
  }
}

Step::BaseObject *IfcEllipse_Factory::create(Step::StepId id) {
  IfcEllipse *ret = new IfcEllipse(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcEllipse_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcEllipse *ret = new IfcEllipse(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcEllipse_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcEllipse *ret = new IfcEllipse(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcEllipse *IfcEllipse_Factory::generate() {
  return static_cast< IfcEllipse * > (create(m_model->getNewId()));
}

IfcEllipse *IfcEllipse_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcEllipse * > (it->second);
  }
  else {
    return NULL;
  }
}

