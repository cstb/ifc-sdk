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
#include <ifc2x3/IfcDimensionPair.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDimensionPair::IfcDimensionPair(Step::SPFData *args) : IfcDraughtingCalloutRelationship(args) {
}


IfcDimensionPair::~IfcDimensionPair() {
}

bool IfcDimensionPair::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDimensionPair(this);
}

const char *IfcDimensionPair::type() {
  return "IfcDimensionPair";
}

Step::ClassType IfcDimensionPair::getClassType() {
  return IfcDimensionPair::s_type;
}

Step::ClassType IfcDimensionPair::getType() const {
  return IfcDimensionPair::s_type;
}

bool IfcDimensionPair::isOfType(Step::ClassType t) {
  return IfcDimensionPair::s_type == t ? true : IfcDraughtingCalloutRelationship::isOfType(t);
}

void IfcDimensionPair::release() {
  IfcDraughtingCalloutRelationship::release();
}

bool IfcDimensionPair::init() {
  bool status = IfcDraughtingCalloutRelationship::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionPair::s_type = new Step::ClassType_class("IfcDimensionPair");
IfcDimensionPair_Factory::IfcDimensionPair_Factory() {
}

IfcDimensionPair_Factory::~IfcDimensionPair_Factory() {
  clear(true);
}

void IfcDimensionPair_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDimensionPair_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDimensionPair_Factory::end() {
  return m_idMap.end();
}

IfcDimensionPair *IfcDimensionPair_Factory::get(Step::StepId id) {
  IfcDimensionPair *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDimensionPair * > (it->second);
  }
  else {
    LOG_ERROR("IfcDimensionPair_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDimensionPair * > (create(id));
  }
}

Step::BaseObject *IfcDimensionPair_Factory::create(Step::StepId id) {
  IfcDimensionPair *ret = new IfcDimensionPair(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDimensionPair_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDimensionPair *ret = new IfcDimensionPair(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDimensionPair_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDimensionPair *ret = new IfcDimensionPair(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDimensionPair *IfcDimensionPair_Factory::generate() {
  return static_cast< IfcDimensionPair * > (create(m_model->getNewId()));
}

IfcDimensionPair *IfcDimensionPair_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDimensionPair * > (it->second);
  }
  else {
    return NULL;
  }
}

