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
#include <ifc2x3/IfcSweptDiskSolid.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSweptDiskSolid::IfcSweptDiskSolid(Step::SPFData *args) : IfcSolidModel(args) {
  m_directrix = NULL;
  m_radius = getUnset(m_radius);
  m_innerRadius = getUnset(m_innerRadius);
  m_startParam = getUnset(m_startParam);
  m_endParam = getUnset(m_endParam);
}


IfcSweptDiskSolid::~IfcSweptDiskSolid() {
}

bool IfcSweptDiskSolid::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSweptDiskSolid(this);
}

const char *IfcSweptDiskSolid::type() {
  return "IfcSweptDiskSolid";
}

Step::ClassType IfcSweptDiskSolid::getClassType() {
  return IfcSweptDiskSolid::s_type;
}

Step::ClassType IfcSweptDiskSolid::getType() const {
  return IfcSweptDiskSolid::s_type;
}

bool IfcSweptDiskSolid::isOfType(Step::ClassType t) {
  return IfcSweptDiskSolid::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcCurve *IfcSweptDiskSolid::getDirectrix() {
  if (Step::BaseObject::inited()) {
    return m_directrix.get();
  }
  else {
    return NULL;
  }
}

void IfcSweptDiskSolid::setDirectrix(const Step::RefPtr< IfcCurve > &value) {
  m_directrix = value;
}

IfcPositiveLengthMeasure IfcSweptDiskSolid::getRadius() {
  if (Step::BaseObject::inited()) {
    return m_radius;
  }
  else {
    return getUnset(m_radius);
  }
}

void IfcSweptDiskSolid::setRadius(IfcPositiveLengthMeasure value) {
  m_radius = value;
}

IfcPositiveLengthMeasure IfcSweptDiskSolid::getInnerRadius() {
  if (Step::BaseObject::inited()) {
    return m_innerRadius;
  }
  else {
    return getUnset(m_innerRadius);
  }
}

void IfcSweptDiskSolid::setInnerRadius(IfcPositiveLengthMeasure value) {
  m_innerRadius = value;
}

IfcParameterValue IfcSweptDiskSolid::getStartParam() {
  if (Step::BaseObject::inited()) {
    return m_startParam;
  }
  else {
    return getUnset(m_startParam);
  }
}

void IfcSweptDiskSolid::setStartParam(IfcParameterValue value) {
  m_startParam = value;
}

IfcParameterValue IfcSweptDiskSolid::getEndParam() {
  if (Step::BaseObject::inited()) {
    return m_endParam;
  }
  else {
    return getUnset(m_endParam);
  }
}

void IfcSweptDiskSolid::setEndParam(IfcParameterValue value) {
  m_endParam = value;
}

void IfcSweptDiskSolid::release() {
  IfcSolidModel::release();
  m_directrix.release();
}

bool IfcSweptDiskSolid::init() {
  bool status = IfcSolidModel::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_directrix = NULL;
  }
  else {
    m_directrix = static_cast< IfcCurve * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_radius = getUnset(m_radius);
  }
  else {
    m_radius = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_innerRadius = getUnset(m_innerRadius);
  }
  else {
    m_innerRadius = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_startParam = getUnset(m_startParam);
  }
  else {
    m_startParam = Step::spfToReal(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_endParam = getUnset(m_endParam);
  }
  else {
    m_endParam = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSweptDiskSolid::s_type = new Step::ClassType_class("IfcSweptDiskSolid");
IfcSweptDiskSolid_Factory::IfcSweptDiskSolid_Factory() {
}

IfcSweptDiskSolid_Factory::~IfcSweptDiskSolid_Factory() {
  clear(true);
}

void IfcSweptDiskSolid_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSweptDiskSolid_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSweptDiskSolid_Factory::end() {
  return m_idMap.end();
}

IfcSweptDiskSolid *IfcSweptDiskSolid_Factory::get(Step::StepId id) {
  IfcSweptDiskSolid *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSweptDiskSolid * > (it->second);
  }
  else {
    LOG_ERROR("IfcSweptDiskSolid_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSweptDiskSolid * > (create(id));
  }
}

Step::BaseObject *IfcSweptDiskSolid_Factory::create(Step::StepId id) {
  IfcSweptDiskSolid *ret = new IfcSweptDiskSolid(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSweptDiskSolid_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSweptDiskSolid *ret = new IfcSweptDiskSolid(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSweptDiskSolid_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSweptDiskSolid *ret = new IfcSweptDiskSolid(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSweptDiskSolid *IfcSweptDiskSolid_Factory::generate() {
  return static_cast< IfcSweptDiskSolid * > (create(m_model->getNewId()));
}

IfcSweptDiskSolid *IfcSweptDiskSolid_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSweptDiskSolid * > (it->second);
  }
  else {
    return NULL;
  }
}

