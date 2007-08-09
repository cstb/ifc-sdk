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
#include <ifc2x3/IfcOpenShell.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcOpenShell::IfcOpenShell(Step::SPFData *args) : IfcConnectedFaceSet(args) {
}


IfcOpenShell::~IfcOpenShell() {
}

bool IfcOpenShell::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcOpenShell(this);
}

const char *IfcOpenShell::type() {
  return "IfcOpenShell";
}

Step::ClassType IfcOpenShell::getClassType() {
  return IfcOpenShell::s_type;
}

Step::ClassType IfcOpenShell::getType() const {
  return IfcOpenShell::s_type;
}

bool IfcOpenShell::isOfType(Step::ClassType t) {
  return IfcOpenShell::s_type == t ? true : IfcConnectedFaceSet::isOfType(t);
}

void IfcOpenShell::release() {
  IfcConnectedFaceSet::release();
}

bool IfcOpenShell::init() {
  bool status = IfcConnectedFaceSet::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcOpenShell::s_type = new Step::ClassType_class("IfcOpenShell");
IfcOpenShell_Factory::IfcOpenShell_Factory() {
}

IfcOpenShell_Factory::~IfcOpenShell_Factory() {
  clear(true);
}

void IfcOpenShell_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOpenShell_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcOpenShell_Factory::end() {
  return m_idMap.end();
}

IfcOpenShell *IfcOpenShell_Factory::get(Step::StepId id) {
  IfcOpenShell *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcOpenShell * > (it->second);
  }
  else {
    LOG_ERROR("IfcOpenShell_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcOpenShell * > (create(id));
  }
}

Step::BaseObject *IfcOpenShell_Factory::create(Step::StepId id) {
  IfcOpenShell *ret = new IfcOpenShell(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcOpenShell_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcOpenShell *ret = new IfcOpenShell(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcOpenShell_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcOpenShell *ret = new IfcOpenShell(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcOpenShell *IfcOpenShell_Factory::generate() {
  return static_cast< IfcOpenShell * > (create(m_model->getNewId()));
}

IfcOpenShell *IfcOpenShell_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcOpenShell * > (it->second);
  }
  else {
    return NULL;
  }
}

