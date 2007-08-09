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
#include <ifc2x3/IfcStructuralCurveMemberVarying.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralCurveMemberVarying::IfcStructuralCurveMemberVarying(Step::SPFData *args) : IfcStructuralCurveMember(args) {
}


IfcStructuralCurveMemberVarying::~IfcStructuralCurveMemberVarying() {
}

bool IfcStructuralCurveMemberVarying::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralCurveMemberVarying(this);
}

const char *IfcStructuralCurveMemberVarying::type() {
  return "IfcStructuralCurveMemberVarying";
}

Step::ClassType IfcStructuralCurveMemberVarying::getClassType() {
  return IfcStructuralCurveMemberVarying::s_type;
}

Step::ClassType IfcStructuralCurveMemberVarying::getType() const {
  return IfcStructuralCurveMemberVarying::s_type;
}

bool IfcStructuralCurveMemberVarying::isOfType(Step::ClassType t) {
  return IfcStructuralCurveMemberVarying::s_type == t ? true : IfcStructuralCurveMember::isOfType(t);
}

void IfcStructuralCurveMemberVarying::release() {
  IfcStructuralCurveMember::release();
}

bool IfcStructuralCurveMemberVarying::init() {
  bool status = IfcStructuralCurveMember::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralCurveMemberVarying::s_type = new Step::ClassType_class("IfcStructuralCurveMemberVarying");
IfcStructuralCurveMemberVarying_Factory::IfcStructuralCurveMemberVarying_Factory() {
}

IfcStructuralCurveMemberVarying_Factory::~IfcStructuralCurveMemberVarying_Factory() {
  clear(true);
}

void IfcStructuralCurveMemberVarying_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralCurveMemberVarying_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralCurveMemberVarying_Factory::end() {
  return m_idMap.end();
}

IfcStructuralCurveMemberVarying *IfcStructuralCurveMemberVarying_Factory::get(Step::StepId id) {
  IfcStructuralCurveMemberVarying *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralCurveMemberVarying * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralCurveMemberVarying_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralCurveMemberVarying * > (create(id));
  }
}

Step::BaseObject *IfcStructuralCurveMemberVarying_Factory::create(Step::StepId id) {
  IfcStructuralCurveMemberVarying *ret = new IfcStructuralCurveMemberVarying(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralCurveMemberVarying_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralCurveMemberVarying *ret = new IfcStructuralCurveMemberVarying(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralCurveMemberVarying_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralCurveMemberVarying *ret = new IfcStructuralCurveMemberVarying(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralCurveMemberVarying *IfcStructuralCurveMemberVarying_Factory::generate() {
  return static_cast< IfcStructuralCurveMemberVarying * > (create(m_model->getNewId()));
}

IfcStructuralCurveMemberVarying *IfcStructuralCurveMemberVarying_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralCurveMemberVarying * > (it->second);
  }
  else {
    return NULL;
  }
}

