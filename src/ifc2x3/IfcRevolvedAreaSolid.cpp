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
#include <ifc2x3/IfcRevolvedAreaSolid.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis1Placement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRevolvedAreaSolid::IfcRevolvedAreaSolid(Step::SPFData *args) : IfcSweptAreaSolid(args) {
  m_axis = NULL;
  m_angle = getUnset(m_angle);
}


IfcRevolvedAreaSolid::~IfcRevolvedAreaSolid() {
}

bool IfcRevolvedAreaSolid::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRevolvedAreaSolid(this);
}

const char *IfcRevolvedAreaSolid::type() {
  return "IfcRevolvedAreaSolid";
}

Step::ClassType IfcRevolvedAreaSolid::getClassType() {
  return IfcRevolvedAreaSolid::s_type;
}

Step::ClassType IfcRevolvedAreaSolid::getType() const {
  return IfcRevolvedAreaSolid::s_type;
}

bool IfcRevolvedAreaSolid::isOfType(Step::ClassType t) {
  return IfcRevolvedAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcAxis1Placement *IfcRevolvedAreaSolid::getAxis() {
  if (Step::BaseObject::inited()) {
    return m_axis.get();
  }
  else {
    return NULL;
  }
}

void IfcRevolvedAreaSolid::setAxis(const Step::RefPtr< IfcAxis1Placement > &value) {
  m_axis = value;
}

IfcPlaneAngleMeasure IfcRevolvedAreaSolid::getAngle() {
  if (Step::BaseObject::inited()) {
    return m_angle;
  }
  else {
    return getUnset(m_angle);
  }
}

void IfcRevolvedAreaSolid::setAngle(IfcPlaneAngleMeasure value) {
  m_angle = value;
}

void IfcRevolvedAreaSolid::release() {
  IfcSweptAreaSolid::release();
  m_axis.release();
}

bool IfcRevolvedAreaSolid::init() {
  bool status = IfcSweptAreaSolid::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_axis = NULL;
  }
  else {
    m_axis = static_cast< IfcAxis1Placement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_angle = getUnset(m_angle);
  }
  else {
    m_angle = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRevolvedAreaSolid::s_type = new Step::ClassType_class("IfcRevolvedAreaSolid");
IfcRevolvedAreaSolid_Factory::IfcRevolvedAreaSolid_Factory() {
}

IfcRevolvedAreaSolid_Factory::~IfcRevolvedAreaSolid_Factory() {
  clear(true);
}

void IfcRevolvedAreaSolid_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRevolvedAreaSolid_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRevolvedAreaSolid_Factory::end() {
  return m_idMap.end();
}

IfcRevolvedAreaSolid *IfcRevolvedAreaSolid_Factory::get(Step::StepId id) {
  IfcRevolvedAreaSolid *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRevolvedAreaSolid * > (it->second);
  }
  else {
    LOG_ERROR("IfcRevolvedAreaSolid_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRevolvedAreaSolid * > (create(id));
  }
}

Step::BaseObject *IfcRevolvedAreaSolid_Factory::create(Step::StepId id) {
  IfcRevolvedAreaSolid *ret = new IfcRevolvedAreaSolid(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRevolvedAreaSolid_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRevolvedAreaSolid *ret = new IfcRevolvedAreaSolid(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRevolvedAreaSolid_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRevolvedAreaSolid *ret = new IfcRevolvedAreaSolid(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRevolvedAreaSolid *IfcRevolvedAreaSolid_Factory::generate() {
  return static_cast< IfcRevolvedAreaSolid * > (create(m_model->getNewId()));
}

IfcRevolvedAreaSolid *IfcRevolvedAreaSolid_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRevolvedAreaSolid * > (it->second);
  }
  else {
    return NULL;
  }
}

