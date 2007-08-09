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
#include <ifc2x3/IfcCurtainWall.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCurtainWall::IfcCurtainWall(Step::SPFData *args) : IfcBuildingElement(args) {
}


IfcCurtainWall::~IfcCurtainWall() {
}

bool IfcCurtainWall::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCurtainWall(this);
}

const char *IfcCurtainWall::type() {
  return "IfcCurtainWall";
}

Step::ClassType IfcCurtainWall::getClassType() {
  return IfcCurtainWall::s_type;
}

Step::ClassType IfcCurtainWall::getType() const {
  return IfcCurtainWall::s_type;
}

bool IfcCurtainWall::isOfType(Step::ClassType t) {
  return IfcCurtainWall::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

void IfcCurtainWall::release() {
  IfcBuildingElement::release();
}

bool IfcCurtainWall::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurtainWall::s_type = new Step::ClassType_class("IfcCurtainWall");
IfcCurtainWall_Factory::IfcCurtainWall_Factory() {
}

IfcCurtainWall_Factory::~IfcCurtainWall_Factory() {
  clear(true);
}

void IfcCurtainWall_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurtainWall_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCurtainWall_Factory::end() {
  return m_idMap.end();
}

IfcCurtainWall *IfcCurtainWall_Factory::get(Step::StepId id) {
  IfcCurtainWall *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCurtainWall * > (it->second);
  }
  else {
    LOG_ERROR("IfcCurtainWall_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCurtainWall * > (create(id));
  }
}

Step::BaseObject *IfcCurtainWall_Factory::create(Step::StepId id) {
  IfcCurtainWall *ret = new IfcCurtainWall(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCurtainWall_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCurtainWall *ret = new IfcCurtainWall(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCurtainWall_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCurtainWall *ret = new IfcCurtainWall(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCurtainWall *IfcCurtainWall_Factory::generate() {
  return static_cast< IfcCurtainWall * > (create(m_model->getNewId()));
}

IfcCurtainWall *IfcCurtainWall_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCurtainWall * > (it->second);
  }
  else {
    return NULL;
  }
}

