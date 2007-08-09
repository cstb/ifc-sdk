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
#include <ifc2x3/IfcSubContractResource.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSubContractResource::IfcSubContractResource(Step::SPFData *args) : IfcConstructionResource(args) {
  m_subContractor = NULL;
  m_jobDescription = getUnset(m_jobDescription);
}


IfcSubContractResource::~IfcSubContractResource() {
}

bool IfcSubContractResource::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSubContractResource(this);
}

const char *IfcSubContractResource::type() {
  return "IfcSubContractResource";
}

Step::ClassType IfcSubContractResource::getClassType() {
  return IfcSubContractResource::s_type;
}

Step::ClassType IfcSubContractResource::getType() const {
  return IfcSubContractResource::s_type;
}

bool IfcSubContractResource::isOfType(Step::ClassType t) {
  return IfcSubContractResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

IfcActorSelect *IfcSubContractResource::getSubContractor() {
  if (Step::BaseObject::inited()) {
    return m_subContractor.get();
  }
  else {
    return NULL;
  }
}

void IfcSubContractResource::setSubContractor(const Step::RefPtr< IfcActorSelect > &value) {
  m_subContractor = value;
}

IfcText IfcSubContractResource::getJobDescription() {
  if (Step::BaseObject::inited()) {
    return m_jobDescription;
  }
  else {
    return getUnset(m_jobDescription);
  }
}

void IfcSubContractResource::setJobDescription(const IfcText &value) {
  m_jobDescription = value;
}

void IfcSubContractResource::release() {
  IfcConstructionResource::release();
}

bool IfcSubContractResource::init() {
  bool status = IfcConstructionResource::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_subContractor = NULL;
  }
  else {
    m_subContractor = new IfcActorSelect;
    if (arg[0] == '#') {
      m_subContractor->set(m_model->getObjectById(atoi(arg.c_str() + 1)));
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
    m_jobDescription = getUnset(m_jobDescription);
  }
  else {
    m_jobDescription = Step::spfToString(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSubContractResource::s_type = new Step::ClassType_class("IfcSubContractResource");
IfcSubContractResource_Factory::IfcSubContractResource_Factory() {
}

IfcSubContractResource_Factory::~IfcSubContractResource_Factory() {
  clear(true);
}

void IfcSubContractResource_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSubContractResource_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSubContractResource_Factory::end() {
  return m_idMap.end();
}

IfcSubContractResource *IfcSubContractResource_Factory::get(Step::StepId id) {
  IfcSubContractResource *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSubContractResource * > (it->second);
  }
  else {
    LOG_ERROR("IfcSubContractResource_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSubContractResource * > (create(id));
  }
}

Step::BaseObject *IfcSubContractResource_Factory::create(Step::StepId id) {
  IfcSubContractResource *ret = new IfcSubContractResource(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSubContractResource_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSubContractResource *ret = new IfcSubContractResource(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSubContractResource_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSubContractResource *ret = new IfcSubContractResource(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSubContractResource *IfcSubContractResource_Factory::generate() {
  return static_cast< IfcSubContractResource * > (create(m_model->getNewId()));
}

IfcSubContractResource *IfcSubContractResource_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSubContractResource * > (it->second);
  }
  else {
    return NULL;
  }
}

