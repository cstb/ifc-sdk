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
#include <ifc2x3/IfcBuildingStorey.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcBuildingStorey::IfcBuildingStorey(Step::SPFData *args) : IfcSpatialStructureElement(args) {
  m_elevation = getUnset(m_elevation);
}


IfcBuildingStorey::~IfcBuildingStorey() {
}

bool IfcBuildingStorey::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcBuildingStorey(this);
}

const char *IfcBuildingStorey::type() {
  return "IfcBuildingStorey";
}

Step::ClassType IfcBuildingStorey::getClassType() {
  return IfcBuildingStorey::s_type;
}

Step::ClassType IfcBuildingStorey::getType() const {
  return IfcBuildingStorey::s_type;
}

bool IfcBuildingStorey::isOfType(Step::ClassType t) {
  return IfcBuildingStorey::s_type == t ? true : IfcSpatialStructureElement::isOfType(t);
}

IfcLengthMeasure IfcBuildingStorey::getElevation() {
  if (Step::BaseObject::inited()) {
    return m_elevation;
  }
  else {
    return getUnset(m_elevation);
  }
}

void IfcBuildingStorey::setElevation(IfcLengthMeasure value) {
  m_elevation = value;
}

void IfcBuildingStorey::release() {
  IfcSpatialStructureElement::release();
}

bool IfcBuildingStorey::init() {
  bool status = IfcSpatialStructureElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_elevation = getUnset(m_elevation);
  }
  else {
    m_elevation = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcBuildingStorey::s_type = new Step::ClassType_class("IfcBuildingStorey");
IfcBuildingStorey_Factory::IfcBuildingStorey_Factory() {
}

IfcBuildingStorey_Factory::~IfcBuildingStorey_Factory() {
  clear(true);
}

void IfcBuildingStorey_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBuildingStorey_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcBuildingStorey_Factory::end() {
  return m_idMap.end();
}

IfcBuildingStorey *IfcBuildingStorey_Factory::get(Step::StepId id) {
  IfcBuildingStorey *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcBuildingStorey * > (it->second);
  }
  else {
    LOG_ERROR("IfcBuildingStorey_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcBuildingStorey * > (create(id));
  }
}

Step::BaseObject *IfcBuildingStorey_Factory::create(Step::StepId id) {
  IfcBuildingStorey *ret = new IfcBuildingStorey(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcBuildingStorey_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcBuildingStorey *ret = new IfcBuildingStorey(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcBuildingStorey_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcBuildingStorey *ret = new IfcBuildingStorey(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcBuildingStorey *IfcBuildingStorey_Factory::generate() {
  return static_cast< IfcBuildingStorey * > (create(m_model->getNewId()));
}

IfcBuildingStorey *IfcBuildingStorey_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcBuildingStorey * > (it->second);
  }
  else {
    return NULL;
  }
}

