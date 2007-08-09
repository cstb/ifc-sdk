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
#include <ifc2x3/IfcCableSegmentType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCableSegmentType::IfcCableSegmentType(Step::SPFData *args) : IfcFlowSegmentType(args) {
  m_predefinedType = IfcCableSegmentTypeEnum_UNSET;
}


IfcCableSegmentType::~IfcCableSegmentType() {
}

bool IfcCableSegmentType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCableSegmentType(this);
}

const char *IfcCableSegmentType::type() {
  return "IfcCableSegmentType";
}

Step::ClassType IfcCableSegmentType::getClassType() {
  return IfcCableSegmentType::s_type;
}

Step::ClassType IfcCableSegmentType::getType() const {
  return IfcCableSegmentType::s_type;
}

bool IfcCableSegmentType::isOfType(Step::ClassType t) {
  return IfcCableSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcCableSegmentTypeEnum IfcCableSegmentType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCableSegmentTypeEnum_UNSET;
  }
}

void IfcCableSegmentType::setPredefinedType(IfcCableSegmentTypeEnum value) {
  m_predefinedType = value;
}

void IfcCableSegmentType::release() {
  IfcFlowSegmentType::release();
}

bool IfcCableSegmentType::init() {
  bool status = IfcFlowSegmentType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCableSegmentTypeEnum_UNSET;
  }
  else {
    if (arg == ".CABLESEGMENT.") {
      m_predefinedType = IfcCableSegmentTypeEnum_CABLESEGMENT;
    }
    else if (arg == ".CONDUCTORSEGMENT.") {
      m_predefinedType = IfcCableSegmentTypeEnum_CONDUCTORSEGMENT;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCableSegmentTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCableSegmentTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCableSegmentType::s_type = new Step::ClassType_class("IfcCableSegmentType");
IfcCableSegmentType_Factory::IfcCableSegmentType_Factory() {
}

IfcCableSegmentType_Factory::~IfcCableSegmentType_Factory() {
  clear(true);
}

void IfcCableSegmentType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCableSegmentType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCableSegmentType_Factory::end() {
  return m_idMap.end();
}

IfcCableSegmentType *IfcCableSegmentType_Factory::get(Step::StepId id) {
  IfcCableSegmentType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCableSegmentType * > (it->second);
  }
  else {
    LOG_ERROR("IfcCableSegmentType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCableSegmentType * > (create(id));
  }
}

Step::BaseObject *IfcCableSegmentType_Factory::create(Step::StepId id) {
  IfcCableSegmentType *ret = new IfcCableSegmentType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCableSegmentType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCableSegmentType *ret = new IfcCableSegmentType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCableSegmentType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCableSegmentType *ret = new IfcCableSegmentType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCableSegmentType *IfcCableSegmentType_Factory::generate() {
  return static_cast< IfcCableSegmentType * > (create(m_model->getNewId()));
}

IfcCableSegmentType *IfcCableSegmentType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCableSegmentType * > (it->second);
  }
  else {
    return NULL;
  }
}

