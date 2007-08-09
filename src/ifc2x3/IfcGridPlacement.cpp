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
#include <ifc2x3/IfcGridPlacement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcVirtualGridIntersection.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcGridPlacement::IfcGridPlacement(Step::SPFData *args) : IfcObjectPlacement(args) {
  m_placementLocation = NULL;
  m_placementRefDirection = NULL;
}


IfcGridPlacement::~IfcGridPlacement() {
}

bool IfcGridPlacement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcGridPlacement(this);
}

const char *IfcGridPlacement::type() {
  return "IfcGridPlacement";
}

Step::ClassType IfcGridPlacement::getClassType() {
  return IfcGridPlacement::s_type;
}

Step::ClassType IfcGridPlacement::getType() const {
  return IfcGridPlacement::s_type;
}

bool IfcGridPlacement::isOfType(Step::ClassType t) {
  return IfcGridPlacement::s_type == t ? true : IfcObjectPlacement::isOfType(t);
}

IfcVirtualGridIntersection *IfcGridPlacement::getPlacementLocation() {
  if (Step::BaseObject::inited()) {
    return m_placementLocation.get();
  }
  else {
    return NULL;
  }
}

void IfcGridPlacement::setPlacementLocation(const Step::RefPtr< IfcVirtualGridIntersection > &value) {
  m_placementLocation = value;
}

IfcVirtualGridIntersection *IfcGridPlacement::getPlacementRefDirection() {
  if (Step::BaseObject::inited()) {
    return m_placementRefDirection.get();
  }
  else {
    return NULL;
  }
}

void IfcGridPlacement::setPlacementRefDirection(const Step::RefPtr< IfcVirtualGridIntersection > &value) {
  m_placementRefDirection = value;
}

void IfcGridPlacement::release() {
  IfcObjectPlacement::release();
  m_placementLocation.release();
  m_placementRefDirection.release();
}

bool IfcGridPlacement::init() {
  bool status = IfcObjectPlacement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_placementLocation = NULL;
  }
  else {
    m_placementLocation = static_cast< IfcVirtualGridIntersection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_placementRefDirection = NULL;
  }
  else {
    m_placementRefDirection = static_cast< IfcVirtualGridIntersection * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcGridPlacement::s_type = new Step::ClassType_class("IfcGridPlacement");
IfcGridPlacement_Factory::IfcGridPlacement_Factory() {
}

IfcGridPlacement_Factory::~IfcGridPlacement_Factory() {
  clear(true);
}

void IfcGridPlacement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGridPlacement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcGridPlacement_Factory::end() {
  return m_idMap.end();
}

IfcGridPlacement *IfcGridPlacement_Factory::get(Step::StepId id) {
  IfcGridPlacement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcGridPlacement * > (it->second);
  }
  else {
    LOG_ERROR("IfcGridPlacement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcGridPlacement * > (create(id));
  }
}

Step::BaseObject *IfcGridPlacement_Factory::create(Step::StepId id) {
  IfcGridPlacement *ret = new IfcGridPlacement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcGridPlacement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcGridPlacement *ret = new IfcGridPlacement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcGridPlacement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcGridPlacement *ret = new IfcGridPlacement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcGridPlacement *IfcGridPlacement_Factory::generate() {
  return static_cast< IfcGridPlacement * > (create(m_model->getNewId()));
}

IfcGridPlacement *IfcGridPlacement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcGridPlacement * > (it->second);
  }
  else {
    return NULL;
  }
}

