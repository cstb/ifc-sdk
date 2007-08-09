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
#include <ifc2x3/IfcMemberType.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcMemberType::IfcMemberType(Step::SPFData *args) : IfcBuildingElementType(args) {
  m_predefinedType = IfcMemberTypeEnum_UNSET;
}


IfcMemberType::~IfcMemberType() {
}

bool IfcMemberType::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcMemberType(this);
}

const char *IfcMemberType::type() {
  return "IfcMemberType";
}

Step::ClassType IfcMemberType::getClassType() {
  return IfcMemberType::s_type;
}

Step::ClassType IfcMemberType::getType() const {
  return IfcMemberType::s_type;
}

bool IfcMemberType::isOfType(Step::ClassType t) {
  return IfcMemberType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcMemberTypeEnum IfcMemberType::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcMemberTypeEnum_UNSET;
  }
}

void IfcMemberType::setPredefinedType(IfcMemberTypeEnum value) {
  m_predefinedType = value;
}

void IfcMemberType::release() {
  IfcBuildingElementType::release();
}

bool IfcMemberType::init() {
  bool status = IfcBuildingElementType::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcMemberTypeEnum_UNSET;
  }
  else {
    if (arg == ".BRACE.") {
      m_predefinedType = IfcMemberTypeEnum_BRACE;
    }
    else if (arg == ".CHORD.") {
      m_predefinedType = IfcMemberTypeEnum_CHORD;
    }
    else if (arg == ".COLLAR.") {
      m_predefinedType = IfcMemberTypeEnum_COLLAR;
    }
    else if (arg == ".MEMBER.") {
      m_predefinedType = IfcMemberTypeEnum_MEMBER;
    }
    else if (arg == ".MULLION.") {
      m_predefinedType = IfcMemberTypeEnum_MULLION;
    }
    else if (arg == ".PLATE.") {
      m_predefinedType = IfcMemberTypeEnum_PLATE;
    }
    else if (arg == ".POST.") {
      m_predefinedType = IfcMemberTypeEnum_POST;
    }
    else if (arg == ".PURLIN.") {
      m_predefinedType = IfcMemberTypeEnum_PURLIN;
    }
    else if (arg == ".RAFTER.") {
      m_predefinedType = IfcMemberTypeEnum_RAFTER;
    }
    else if (arg == ".STRINGER.") {
      m_predefinedType = IfcMemberTypeEnum_STRINGER;
    }
    else if (arg == ".STRUT.") {
      m_predefinedType = IfcMemberTypeEnum_STRUT;
    }
    else if (arg == ".STUD.") {
      m_predefinedType = IfcMemberTypeEnum_STUD;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcMemberTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcMemberTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcMemberType::s_type = new Step::ClassType_class("IfcMemberType");
IfcMemberType_Factory::IfcMemberType_Factory() {
}

IfcMemberType_Factory::~IfcMemberType_Factory() {
  clear(true);
}

void IfcMemberType_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMemberType_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcMemberType_Factory::end() {
  return m_idMap.end();
}

IfcMemberType *IfcMemberType_Factory::get(Step::StepId id) {
  IfcMemberType *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcMemberType * > (it->second);
  }
  else {
    LOG_ERROR("IfcMemberType_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcMemberType * > (create(id));
  }
}

Step::BaseObject *IfcMemberType_Factory::create(Step::StepId id) {
  IfcMemberType *ret = new IfcMemberType(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcMemberType_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcMemberType *ret = new IfcMemberType(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcMemberType_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcMemberType *ret = new IfcMemberType(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcMemberType *IfcMemberType_Factory::generate() {
  return static_cast< IfcMemberType * > (create(m_model->getNewId()));
}

IfcMemberType *IfcMemberType_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcMemberType * > (it->second);
  }
  else {
    return NULL;
  }
}

