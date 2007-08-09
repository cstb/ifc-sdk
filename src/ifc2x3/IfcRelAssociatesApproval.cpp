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
#include <ifc2x3/IfcRelAssociatesApproval.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssociatesApproval::IfcRelAssociatesApproval(Step::SPFData *args) : IfcRelAssociates(args) {
  m_relatingApproval = NULL;
}


IfcRelAssociatesApproval::~IfcRelAssociatesApproval() {
}

bool IfcRelAssociatesApproval::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssociatesApproval(this);
}

const char *IfcRelAssociatesApproval::type() {
  return "IfcRelAssociatesApproval";
}

Step::ClassType IfcRelAssociatesApproval::getClassType() {
  return IfcRelAssociatesApproval::s_type;
}

Step::ClassType IfcRelAssociatesApproval::getType() const {
  return IfcRelAssociatesApproval::s_type;
}

bool IfcRelAssociatesApproval::isOfType(Step::ClassType t) {
  return IfcRelAssociatesApproval::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcApproval *IfcRelAssociatesApproval::getRelatingApproval() {
  if (Step::BaseObject::inited()) {
    return m_relatingApproval.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssociatesApproval::setRelatingApproval(const Step::RefPtr< IfcApproval > &value) {
  m_relatingApproval = value;
}

void IfcRelAssociatesApproval::release() {
  IfcRelAssociates::release();
  m_relatingApproval.release();
}

bool IfcRelAssociatesApproval::init() {
  bool status = IfcRelAssociates::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingApproval = NULL;
  }
  else {
    m_relatingApproval = static_cast< IfcApproval * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesApproval::s_type = new Step::ClassType_class("IfcRelAssociatesApproval");
IfcRelAssociatesApproval_Factory::IfcRelAssociatesApproval_Factory() {
}

IfcRelAssociatesApproval_Factory::~IfcRelAssociatesApproval_Factory() {
  clear(true);
}

void IfcRelAssociatesApproval_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesApproval_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssociatesApproval_Factory::end() {
  return m_idMap.end();
}

IfcRelAssociatesApproval *IfcRelAssociatesApproval_Factory::get(Step::StepId id) {
  IfcRelAssociatesApproval *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssociatesApproval * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssociatesApproval_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssociatesApproval * > (create(id));
  }
}

Step::BaseObject *IfcRelAssociatesApproval_Factory::create(Step::StepId id) {
  IfcRelAssociatesApproval *ret = new IfcRelAssociatesApproval(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesApproval_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssociatesApproval *ret = new IfcRelAssociatesApproval(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssociatesApproval_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssociatesApproval *ret = new IfcRelAssociatesApproval(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssociatesApproval *IfcRelAssociatesApproval_Factory::generate() {
  return static_cast< IfcRelAssociatesApproval * > (create(m_model->getNewId()));
}

IfcRelAssociatesApproval *IfcRelAssociatesApproval_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssociatesApproval * > (it->second);
  }
  else {
    return NULL;
  }
}

