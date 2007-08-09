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
#include <ifc2x3/IfcPipeSegmentType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcPipeSegmentType::IfcPipeSegmentType(Step::SPFData *args) : IfcFlowSegmentType(args) {
  m_predefinedType = IfcPipeSegmentTypeEnum_UNSET;
}


IfcPipeSegmentType::~IfcPipeSegmentType() {
}

bool IfcPipeSegmentType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcPipeSegmentType(this);
}

const char *IfcPipeSegmentType::type() {
  return "IfcPipeSegmentType";
}

Step::ClassType IfcPipeSegmentType::getClassType() {
  return IfcPipeSegmentType::s_type;
}

Step::ClassType IfcPipeSegmentType::getType() const {
  return IfcPipeSegmentType::s_type;
}

bool IfcPipeSegmentType::isOfType(Step::ClassType t) {
  return IfcPipeSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcPipeSegmentTypeEnum IfcPipeSegmentType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcPipeSegmentTypeEnum_UNSET;
  }
}

void IfcPipeSegmentType::setPredefinedType(IfcPipeSegmentTypeEnum value) {
  m_predefinedType = value;
}

void IfcPipeSegmentType::release() {
  IfcFlowSegmentType::release();
}

bool IfcPipeSegmentType::init() {
  bool status = IfcFlowSegmentType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcPipeSegmentTypeEnum_UNSET;
  }
  else {
    if (arg == ".FLEXIBLESEGMENT.") {
      m_predefinedType = IfcPipeSegmentTypeEnum_FLEXIBLESEGMENT;
    }
    else if (arg == ".RIGIDSEGMENT.") {
      m_predefinedType = IfcPipeSegmentTypeEnum_RIGIDSEGMENT;
    }
    else if (arg == ".GUTTER.") {
      m_predefinedType = IfcPipeSegmentTypeEnum_GUTTER;
    }
    else if (arg == ".SPOOL.") {
      m_predefinedType = IfcPipeSegmentTypeEnum_SPOOL;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcPipeSegmentTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcPipeSegmentTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcPipeSegmentType::s_type = new Step::ClassType_class("IfcPipeSegmentType");
IfcPipeSegmentType_Factory::IfcPipeSegmentType_Factory() {
}

IfcPipeSegmentType_Factory::~IfcPipeSegmentType_Factory() {
  clear(true);
}

void IfcPipeSegmentType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPipeSegmentType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcPipeSegmentType_Factory::end() {
  return m_idMap.end();
}

IfcPipeSegmentType *IfcPipeSegmentType_Factory::get(Step::StepId id) {
  IfcPipeSegmentType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcPipeSegmentType * > (it->second);
  }
  else {
    LOG_ERROR("IfcPipeSegmentType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcPipeSegmentType * > (create(id));
  }
}

Step::BaseObject *IfcPipeSegmentType_Factory::create(Step::StepId id) {
  IfcPipeSegmentType *ret = new IfcPipeSegmentType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcPipeSegmentType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcPipeSegmentType *ret = new IfcPipeSegmentType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcPipeSegmentType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcPipeSegmentType *ret = new IfcPipeSegmentType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcPipeSegmentType *IfcPipeSegmentType_Factory::generate() {
  return static_cast< IfcPipeSegmentType * > (create(m_model->getNewId()));
}

IfcPipeSegmentType *IfcPipeSegmentType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcPipeSegmentType * > (it->second);
  }
  else {
    return NULL;
  }
}

