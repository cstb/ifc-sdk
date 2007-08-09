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
#include <ifc2x3/IfcStructuralCurveMember.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralCurveMember::IfcStructuralCurveMember(Step::SPFData *args) : IfcStructuralMember(args) {
  m_predefinedType = IfcStructuralCurveTypeEnum_UNSET;
}


IfcStructuralCurveMember::~IfcStructuralCurveMember() {
}

bool IfcStructuralCurveMember::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralCurveMember(this);
}

const char *IfcStructuralCurveMember::type() {
  return "IfcStructuralCurveMember";
}

Step::ClassType IfcStructuralCurveMember::getClassType() {
  return IfcStructuralCurveMember::s_type;
}

Step::ClassType IfcStructuralCurveMember::getType() const {
  return IfcStructuralCurveMember::s_type;
}

bool IfcStructuralCurveMember::isOfType(Step::ClassType t) {
  return IfcStructuralCurveMember::s_type == t ? true : IfcStructuralMember::isOfType(t);
}

IfcStructuralCurveTypeEnum IfcStructuralCurveMember::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcStructuralCurveTypeEnum_UNSET;
  }
}

void IfcStructuralCurveMember::setPredefinedType(IfcStructuralCurveTypeEnum value) {
  m_predefinedType = value;
}

void IfcStructuralCurveMember::release() {
  IfcStructuralMember::release();
}

bool IfcStructuralCurveMember::init() {
  bool status = IfcStructuralMember::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcStructuralCurveTypeEnum_UNSET;
  }
  else {
    if (arg == ".RIGID_JOINED_MEMBER.") {
      m_predefinedType = IfcStructuralCurveTypeEnum_RIGID_JOINED_MEMBER;
    }
    else if (arg == ".PIN_JOINED_MEMBER.") {
      m_predefinedType = IfcStructuralCurveTypeEnum_PIN_JOINED_MEMBER;
    }
    else if (arg == ".CABLE.") {
      m_predefinedType = IfcStructuralCurveTypeEnum_CABLE;
    }
    else if (arg == ".TENSION_MEMBER.") {
      m_predefinedType = IfcStructuralCurveTypeEnum_TENSION_MEMBER;
    }
    else if (arg == ".COMPRESSION_MEMBER.") {
      m_predefinedType = IfcStructuralCurveTypeEnum_COMPRESSION_MEMBER;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcStructuralCurveTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcStructuralCurveTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralCurveMember::s_type = new Step::ClassType_class("IfcStructuralCurveMember");
IfcStructuralCurveMember_Factory::IfcStructuralCurveMember_Factory() {
}

IfcStructuralCurveMember_Factory::~IfcStructuralCurveMember_Factory() {
  clear(true);
}

void IfcStructuralCurveMember_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralCurveMember_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralCurveMember_Factory::end() {
  return m_idMap.end();
}

IfcStructuralCurveMember *IfcStructuralCurveMember_Factory::get(Step::StepId id) {
  IfcStructuralCurveMember *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralCurveMember * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralCurveMember_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralCurveMember * > (create(id));
  }
}

Step::BaseObject *IfcStructuralCurveMember_Factory::create(Step::StepId id) {
  IfcStructuralCurveMember *ret = new IfcStructuralCurveMember(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralCurveMember_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralCurveMember *ret = new IfcStructuralCurveMember(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralCurveMember_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralCurveMember *ret = new IfcStructuralCurveMember(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralCurveMember *IfcStructuralCurveMember_Factory::generate() {
  return static_cast< IfcStructuralCurveMember * > (create(m_model->getNewId()));
}

IfcStructuralCurveMember *IfcStructuralCurveMember_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralCurveMember * > (it->second);
  }
  else {
    return NULL;
  }
}

