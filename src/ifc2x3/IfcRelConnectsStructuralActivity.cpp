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
#include <ifc2x3/IfcRelConnectsStructuralActivity.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcStructuralActivity.h>
#include <ifc2x3/IfcStructuralActivityAssignmentSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelConnectsStructuralActivity::IfcRelConnectsStructuralActivity(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingElement = NULL;
  m_relatedStructuralActivity = NULL;
}


IfcRelConnectsStructuralActivity::~IfcRelConnectsStructuralActivity() {
}

bool IfcRelConnectsStructuralActivity::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelConnectsStructuralActivity(this);
}

const char *IfcRelConnectsStructuralActivity::type() {
  return "IfcRelConnectsStructuralActivity";
}

Step::ClassType IfcRelConnectsStructuralActivity::getClassType() {
  return IfcRelConnectsStructuralActivity::s_type;
}

Step::ClassType IfcRelConnectsStructuralActivity::getType() const {
  return IfcRelConnectsStructuralActivity::s_type;
}

bool IfcRelConnectsStructuralActivity::isOfType(Step::ClassType t) {
  return IfcRelConnectsStructuralActivity::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcStructuralActivityAssignmentSelect *IfcRelConnectsStructuralActivity::getRelatingElement() {
  if (Step::BaseObject::inited()) {
    return m_relatingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralActivity::setRelatingElement(const Step::RefPtr< IfcStructuralActivityAssignmentSelect > &value) {
  m_relatingElement = value;
}

IfcStructuralActivity *IfcRelConnectsStructuralActivity::getRelatedStructuralActivity() {
  if (Step::BaseObject::inited()) {
    return m_relatedStructuralActivity.get();
  }
  else {
    return NULL;
  }
}

void IfcRelConnectsStructuralActivity::setRelatedStructuralActivity(const Step::RefPtr< IfcStructuralActivity > &value) {
  m_relatedStructuralActivity = value;
}

void IfcRelConnectsStructuralActivity::release() {
  IfcRelConnects::release();
  m_relatedStructuralActivity.release();
}

bool IfcRelConnectsStructuralActivity::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingElement = NULL;
  }
  else {
    m_relatingElement = new IfcStructuralActivityAssignmentSelect;
    if (arg[0] == '#') {
      m_relatingElement->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedStructuralActivity = NULL;
  }
  else {
    m_relatedStructuralActivity = static_cast< IfcStructuralActivity * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsStructuralActivity::s_type = new Step::ClassType_class("IfcRelConnectsStructuralActivity");
IfcRelConnectsStructuralActivity_Factory::IfcRelConnectsStructuralActivity_Factory() {
}

IfcRelConnectsStructuralActivity_Factory::~IfcRelConnectsStructuralActivity_Factory() {
  clear(true);
}

void IfcRelConnectsStructuralActivity_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsStructuralActivity_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelConnectsStructuralActivity_Factory::end() {
  return m_idMap.end();
}

IfcRelConnectsStructuralActivity *IfcRelConnectsStructuralActivity_Factory::get(Step::StepId id) {
  IfcRelConnectsStructuralActivity *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelConnectsStructuralActivity * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelConnectsStructuralActivity_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelConnectsStructuralActivity * > (create(id));
  }
}

Step::BaseObject *IfcRelConnectsStructuralActivity_Factory::create(Step::StepId id) {
  IfcRelConnectsStructuralActivity *ret = new IfcRelConnectsStructuralActivity(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsStructuralActivity_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelConnectsStructuralActivity *ret = new IfcRelConnectsStructuralActivity(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelConnectsStructuralActivity_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelConnectsStructuralActivity *ret = new IfcRelConnectsStructuralActivity(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelConnectsStructuralActivity *IfcRelConnectsStructuralActivity_Factory::generate() {
  return static_cast< IfcRelConnectsStructuralActivity * > (create(m_model->getNewId()));
}

IfcRelConnectsStructuralActivity *IfcRelConnectsStructuralActivity_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelConnectsStructuralActivity * > (it->second);
  }
  else {
    return NULL;
  }
}

