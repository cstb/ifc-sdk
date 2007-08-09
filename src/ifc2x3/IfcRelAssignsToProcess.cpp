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
#include <ifc2x3/IfcRelAssignsToProcess.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcProcess.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelAssignsToProcess::IfcRelAssignsToProcess(Step::SPFData *args) : IfcRelAssigns(args) {
  m_relatingProcess = NULL;
  m_quantityInProcess = NULL;
}


IfcRelAssignsToProcess::~IfcRelAssignsToProcess() {
}

bool IfcRelAssignsToProcess::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelAssignsToProcess(this);
}

const char *IfcRelAssignsToProcess::type() {
  return "IfcRelAssignsToProcess";
}

Step::ClassType IfcRelAssignsToProcess::getClassType() {
  return IfcRelAssignsToProcess::s_type;
}

Step::ClassType IfcRelAssignsToProcess::getType() const {
  return IfcRelAssignsToProcess::s_type;
}

bool IfcRelAssignsToProcess::isOfType(Step::ClassType t) {
  return IfcRelAssignsToProcess::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcProcess *IfcRelAssignsToProcess::getRelatingProcess() {
  if (Step::BaseObject::inited()) {
    return m_relatingProcess.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsToProcess::setRelatingProcess(const Step::RefPtr< IfcProcess > &value) {
  m_relatingProcess = value;
}

IfcMeasureWithUnit *IfcRelAssignsToProcess::getQuantityInProcess() {
  if (Step::BaseObject::inited()) {
    return m_quantityInProcess.get();
  }
  else {
    return NULL;
  }
}

void IfcRelAssignsToProcess::setQuantityInProcess(const Step::RefPtr< IfcMeasureWithUnit > &value) {
  m_quantityInProcess = value;
}

void IfcRelAssignsToProcess::release() {
  IfcRelAssigns::release();
  m_relatingProcess.release();
  m_quantityInProcess.release();
}

bool IfcRelAssignsToProcess::init() {
  bool status = IfcRelAssigns::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingProcess = NULL;
  }
  else {
    m_relatingProcess = static_cast< IfcProcess * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_quantityInProcess = NULL;
  }
  else {
    m_quantityInProcess = static_cast< IfcMeasureWithUnit * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProcess::s_type = new Step::ClassType_class("IfcRelAssignsToProcess");
IfcRelAssignsToProcess_Factory::IfcRelAssignsToProcess_Factory() {
}

IfcRelAssignsToProcess_Factory::~IfcRelAssignsToProcess_Factory() {
  clear(true);
}

void IfcRelAssignsToProcess_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToProcess_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelAssignsToProcess_Factory::end() {
  return m_idMap.end();
}

IfcRelAssignsToProcess *IfcRelAssignsToProcess_Factory::get(Step::StepId id) {
  IfcRelAssignsToProcess *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelAssignsToProcess * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelAssignsToProcess_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelAssignsToProcess * > (create(id));
  }
}

Step::BaseObject *IfcRelAssignsToProcess_Factory::create(Step::StepId id) {
  IfcRelAssignsToProcess *ret = new IfcRelAssignsToProcess(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToProcess_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelAssignsToProcess *ret = new IfcRelAssignsToProcess(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelAssignsToProcess_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelAssignsToProcess *ret = new IfcRelAssignsToProcess(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelAssignsToProcess *IfcRelAssignsToProcess_Factory::generate() {
  return static_cast< IfcRelAssignsToProcess * > (create(m_model->getNewId()));
}

IfcRelAssignsToProcess *IfcRelAssignsToProcess_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelAssignsToProcess * > (it->second);
  }
  else {
    return NULL;
  }
}

