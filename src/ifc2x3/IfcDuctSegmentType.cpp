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
#include <ifc2x3/IfcDuctSegmentType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcDuctSegmentType::IfcDuctSegmentType(Step::SPFData *args) : IfcFlowSegmentType(args) {
  m_predefinedType = IfcDuctSegmentTypeEnum_UNSET;
}


IfcDuctSegmentType::~IfcDuctSegmentType() {
}

bool IfcDuctSegmentType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcDuctSegmentType(this);
}

const char *IfcDuctSegmentType::type() {
  return "IfcDuctSegmentType";
}

Step::ClassType IfcDuctSegmentType::getClassType() {
  return IfcDuctSegmentType::s_type;
}

Step::ClassType IfcDuctSegmentType::getType() const {
  return IfcDuctSegmentType::s_type;
}

bool IfcDuctSegmentType::isOfType(Step::ClassType t) {
  return IfcDuctSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcDuctSegmentTypeEnum IfcDuctSegmentType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcDuctSegmentTypeEnum_UNSET;
  }
}

void IfcDuctSegmentType::setPredefinedType(IfcDuctSegmentTypeEnum value) {
  m_predefinedType = value;
}

void IfcDuctSegmentType::release() {
  IfcFlowSegmentType::release();
}

bool IfcDuctSegmentType::init() {
  bool status = IfcFlowSegmentType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcDuctSegmentTypeEnum_UNSET;
  }
  else {
    if (arg == ".RIGIDSEGMENT.") {
      m_predefinedType = IfcDuctSegmentTypeEnum_RIGIDSEGMENT;
    }
    else if (arg == ".FLEXIBLESEGMENT.") {
      m_predefinedType = IfcDuctSegmentTypeEnum_FLEXIBLESEGMENT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcDuctSegmentTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcDuctSegmentTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcDuctSegmentType::s_type = new Step::ClassType_class("IfcDuctSegmentType");
IfcDuctSegmentType_Factory::IfcDuctSegmentType_Factory() {
}

IfcDuctSegmentType_Factory::~IfcDuctSegmentType_Factory() {
  clear(true);
}

void IfcDuctSegmentType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDuctSegmentType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcDuctSegmentType_Factory::end() {
  return m_idMap.end();
}

IfcDuctSegmentType *IfcDuctSegmentType_Factory::get(Step::StepId id) {
  IfcDuctSegmentType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcDuctSegmentType * > (it->second);
  }
  else {
    LOG_ERROR("IfcDuctSegmentType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcDuctSegmentType * > (create(id));
  }
}

Step::BaseObject *IfcDuctSegmentType_Factory::create(Step::StepId id) {
  IfcDuctSegmentType *ret = new IfcDuctSegmentType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcDuctSegmentType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcDuctSegmentType *ret = new IfcDuctSegmentType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcDuctSegmentType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcDuctSegmentType *ret = new IfcDuctSegmentType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcDuctSegmentType *IfcDuctSegmentType_Factory::generate() {
  return static_cast< IfcDuctSegmentType * > (create(m_model->getNewId()));
}

IfcDuctSegmentType *IfcDuctSegmentType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcDuctSegmentType * > (it->second);
  }
  else {
    return NULL;
  }
}

