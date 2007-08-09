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
#include <ifc2x3/IfcLocalPlacement.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcLocalPlacement::IfcLocalPlacement(Step::SPFData *args) : IfcObjectPlacement(args) {
  m_placementRelTo = NULL;
  m_relativePlacement = NULL;
}


IfcLocalPlacement::~IfcLocalPlacement() {
}

bool IfcLocalPlacement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcLocalPlacement(this);
}

const char *IfcLocalPlacement::type() {
  return "IfcLocalPlacement";
}

Step::ClassType IfcLocalPlacement::getClassType() {
  return IfcLocalPlacement::s_type;
}

Step::ClassType IfcLocalPlacement::getType() const {
  return IfcLocalPlacement::s_type;
}

bool IfcLocalPlacement::isOfType(Step::ClassType t) {
  return IfcLocalPlacement::s_type == t ? true : IfcObjectPlacement::isOfType(t);
}

IfcObjectPlacement *IfcLocalPlacement::getPlacementRelTo() {
  if (Step::BaseObject::inited()) {
    return m_placementRelTo.get();
  }
  else {
    return NULL;
  }
}

void IfcLocalPlacement::setPlacementRelTo(const Step::RefPtr< IfcObjectPlacement > &value) {
  m_placementRelTo = value;
}

IfcAxis2Placement *IfcLocalPlacement::getRelativePlacement() {
  if (Step::BaseObject::inited()) {
    return m_relativePlacement.get();
  }
  else {
    return NULL;
  }
}

void IfcLocalPlacement::setRelativePlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
  m_relativePlacement = value;
}

void IfcLocalPlacement::release() {
  IfcObjectPlacement::release();
  m_placementRelTo.release();
}

bool IfcLocalPlacement::init() {
  bool status = IfcObjectPlacement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_placementRelTo = NULL;
  }
  else {
    m_placementRelTo = static_cast< IfcObjectPlacement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relativePlacement = NULL;
  }
  else {
    m_relativePlacement = new IfcAxis2Placement;
    if (arg[0] == '#') {
      m_relativePlacement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
    }
    else if (arg[arg.length() - 1] == ')') {
      std::string type1;
      unsigned int i1;
      i1 = arg.find('(');
      if (i1 != std::string::npos) {
        type1 = arg.substr(0, i1);
        arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
      }
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcLocalPlacement::s_type = new Step::ClassType_class("IfcLocalPlacement");
IfcLocalPlacement_Factory::IfcLocalPlacement_Factory() {
}

IfcLocalPlacement_Factory::~IfcLocalPlacement_Factory() {
  clear(true);
}

void IfcLocalPlacement_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLocalPlacement_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcLocalPlacement_Factory::end() {
  return m_idMap.end();
}

IfcLocalPlacement *IfcLocalPlacement_Factory::get(Step::StepId id) {
  IfcLocalPlacement *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcLocalPlacement * > (it->second);
  }
  else {
    LOG_ERROR("IfcLocalPlacement_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcLocalPlacement * > (create(id));
  }
}

Step::BaseObject *IfcLocalPlacement_Factory::create(Step::StepId id) {
  IfcLocalPlacement *ret = new IfcLocalPlacement(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcLocalPlacement_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcLocalPlacement *ret = new IfcLocalPlacement(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcLocalPlacement_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcLocalPlacement *ret = new IfcLocalPlacement(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcLocalPlacement *IfcLocalPlacement_Factory::generate() {
  return static_cast< IfcLocalPlacement * > (create(m_model->getNewId()));
}

IfcLocalPlacement *IfcLocalPlacement_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcLocalPlacement * > (it->second);
  }
  else {
    return NULL;
  }
}

