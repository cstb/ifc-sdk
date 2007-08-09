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
#include <ifc2x3/IfcExtrudedAreaSolid.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcExtrudedAreaSolid::IfcExtrudedAreaSolid(Step::SPFData *args) : IfcSweptAreaSolid(args) {
  m_extrudedDirection = NULL;
  m_depth = getUnset(m_depth);
}


IfcExtrudedAreaSolid::~IfcExtrudedAreaSolid() {
}

bool IfcExtrudedAreaSolid::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcExtrudedAreaSolid(this);
}

const char *IfcExtrudedAreaSolid::type() {
  return "IfcExtrudedAreaSolid";
}

Step::ClassType IfcExtrudedAreaSolid::getClassType() {
  return IfcExtrudedAreaSolid::s_type;
}

Step::ClassType IfcExtrudedAreaSolid::getType() const {
  return IfcExtrudedAreaSolid::s_type;
}

bool IfcExtrudedAreaSolid::isOfType(Step::ClassType t) {
  return IfcExtrudedAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcDirection *IfcExtrudedAreaSolid::getExtrudedDirection() {
  if (Step::BaseObject::inited()) {
    return m_extrudedDirection.get();
  }
  else {
    return NULL;
  }
}

void IfcExtrudedAreaSolid::setExtrudedDirection(const Step::RefPtr< IfcDirection > &value) {
  m_extrudedDirection = value;
}

IfcPositiveLengthMeasure IfcExtrudedAreaSolid::getDepth() {
  if (Step::BaseObject::inited()) {
    return m_depth;
  }
  else {
    return getUnset(m_depth);
  }
}

void IfcExtrudedAreaSolid::setDepth(IfcPositiveLengthMeasure value) {
  m_depth = value;
}

void IfcExtrudedAreaSolid::release() {
  IfcSweptAreaSolid::release();
  m_extrudedDirection.release();
}

bool IfcExtrudedAreaSolid::init() {
  bool status = IfcSweptAreaSolid::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_extrudedDirection = NULL;
  }
  else {
    m_extrudedDirection = static_cast< IfcDirection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_depth = getUnset(m_depth);
  }
  else {
    m_depth = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcExtrudedAreaSolid::s_type = new Step::ClassType_class("IfcExtrudedAreaSolid");
IfcExtrudedAreaSolid_Factory::IfcExtrudedAreaSolid_Factory() {
}

IfcExtrudedAreaSolid_Factory::~IfcExtrudedAreaSolid_Factory() {
  clear(true);
}

void IfcExtrudedAreaSolid_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcExtrudedAreaSolid_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcExtrudedAreaSolid_Factory::end() {
  return m_idMap.end();
}

IfcExtrudedAreaSolid *IfcExtrudedAreaSolid_Factory::get(Step::StepId id) {
  IfcExtrudedAreaSolid *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcExtrudedAreaSolid * > (it->second);
  }
  else {
    LOG_ERROR("IfcExtrudedAreaSolid_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcExtrudedAreaSolid * > (create(id));
  }
}

Step::BaseObject *IfcExtrudedAreaSolid_Factory::create(Step::StepId id) {
  IfcExtrudedAreaSolid *ret = new IfcExtrudedAreaSolid(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcExtrudedAreaSolid_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcExtrudedAreaSolid *ret = new IfcExtrudedAreaSolid(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcExtrudedAreaSolid_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcExtrudedAreaSolid *ret = new IfcExtrudedAreaSolid(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcExtrudedAreaSolid *IfcExtrudedAreaSolid_Factory::generate() {
  return static_cast< IfcExtrudedAreaSolid * > (create(m_model->getNewId()));
}

IfcExtrudedAreaSolid *IfcExtrudedAreaSolid_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcExtrudedAreaSolid * > (it->second);
  }
  else {
    return NULL;
  }
}

