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
#include <ifc2x3/IfcDraughtingPreDefinedColour.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDraughtingPreDefinedColour::IfcDraughtingPreDefinedColour(Step::SPFData *args) : IfcPreDefinedColour(args) {
}


IfcDraughtingPreDefinedColour::~IfcDraughtingPreDefinedColour() {
}

bool IfcDraughtingPreDefinedColour::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDraughtingPreDefinedColour(this);
}

const char *IfcDraughtingPreDefinedColour::type() {
  return "IfcDraughtingPreDefinedColour";
}

Step::ClassType IfcDraughtingPreDefinedColour::getClassType() {
  return IfcDraughtingPreDefinedColour::s_type;
}

Step::ClassType IfcDraughtingPreDefinedColour::getType() const {
  return IfcDraughtingPreDefinedColour::s_type;
}

bool IfcDraughtingPreDefinedColour::isOfType(Step::ClassType t) {
  return IfcDraughtingPreDefinedColour::s_type == t ? true : IfcPreDefinedColour::isOfType(t);
}

void IfcDraughtingPreDefinedColour::release() {
  IfcPreDefinedColour::release();
}

bool IfcDraughtingPreDefinedColour::init() {
  bool status = IfcPreDefinedColour::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingPreDefinedColour::s_type = new Step::ClassType_class("IfcDraughtingPreDefinedColour");
IfcDraughtingPreDefinedColour_Factory::IfcDraughtingPreDefinedColour_Factory() {
}

IfcDraughtingPreDefinedColour_Factory::~IfcDraughtingPreDefinedColour_Factory() {
  clear(true);
}

void IfcDraughtingPreDefinedColour_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDraughtingPreDefinedColour_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDraughtingPreDefinedColour_Factory::end() {
  return m_idMap.end();
}

IfcDraughtingPreDefinedColour *IfcDraughtingPreDefinedColour_Factory::get(Step::StepId id) {
  IfcDraughtingPreDefinedColour *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDraughtingPreDefinedColour * > (it->second);
  }
  else {
    LOG_ERROR("IfcDraughtingPreDefinedColour_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDraughtingPreDefinedColour * > (create(id));
  }
}

Step::BaseObject *IfcDraughtingPreDefinedColour_Factory::create(Step::StepId id) {
  IfcDraughtingPreDefinedColour *ret = new IfcDraughtingPreDefinedColour(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDraughtingPreDefinedColour_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDraughtingPreDefinedColour *ret = new IfcDraughtingPreDefinedColour(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDraughtingPreDefinedColour_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDraughtingPreDefinedColour *ret = new IfcDraughtingPreDefinedColour(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDraughtingPreDefinedColour *IfcDraughtingPreDefinedColour_Factory::generate() {
  return static_cast< IfcDraughtingPreDefinedColour * > (create(m_model->getNewId()));
}

IfcDraughtingPreDefinedColour *IfcDraughtingPreDefinedColour_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDraughtingPreDefinedColour * > (it->second);
  }
  else {
    return NULL;
  }
}

