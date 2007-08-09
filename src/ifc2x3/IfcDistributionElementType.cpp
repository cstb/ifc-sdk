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
#include <ifc2x3/IfcDistributionElementType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDistributionElementType::IfcDistributionElementType(Step::SPFData *args) : IfcElementType(args) {
}


IfcDistributionElementType::~IfcDistributionElementType() {
}

bool IfcDistributionElementType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDistributionElementType(this);
}

const char *IfcDistributionElementType::type() {
  return "IfcDistributionElementType";
}

Step::ClassType IfcDistributionElementType::getClassType() {
  return IfcDistributionElementType::s_type;
}

Step::ClassType IfcDistributionElementType::getType() const {
  return IfcDistributionElementType::s_type;
}

bool IfcDistributionElementType::isOfType(Step::ClassType t) {
  return IfcDistributionElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

void IfcDistributionElementType::release() {
  IfcElementType::release();
}

bool IfcDistributionElementType::init() {
  bool status = IfcElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionElementType::s_type = new Step::ClassType_class("IfcDistributionElementType");
IfcDistributionElementType_Factory::IfcDistributionElementType_Factory() {
}

IfcDistributionElementType_Factory::~IfcDistributionElementType_Factory() {
  clear(true);
}

void IfcDistributionElementType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionElementType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDistributionElementType_Factory::end() {
  return m_idMap.end();
}

IfcDistributionElementType *IfcDistributionElementType_Factory::get(Step::StepId id) {
  IfcDistributionElementType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDistributionElementType * > (it->second);
  }
  else {
    LOG_ERROR("IfcDistributionElementType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDistributionElementType * > (create(id));
  }
}

Step::BaseObject *IfcDistributionElementType_Factory::create(Step::StepId id) {
  IfcDistributionElementType *ret = new IfcDistributionElementType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionElementType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDistributionElementType *ret = new IfcDistributionElementType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDistributionElementType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDistributionElementType *ret = new IfcDistributionElementType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDistributionElementType *IfcDistributionElementType_Factory::generate() {
  return static_cast< IfcDistributionElementType * > (create(m_model->getNewId()));
}

IfcDistributionElementType *IfcDistributionElementType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDistributionElementType * > (it->second);
  }
  else {
    return NULL;
  }
}

