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
#include <ifc2x3/IfcStructuralSurfaceMember.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcStructuralSurfaceMember::IfcStructuralSurfaceMember(Step::SPFData *args) : IfcStructuralMember(args) {
  m_predefinedType = IfcStructuralSurfaceTypeEnum_UNSET;
  m_thickness = getUnset(m_thickness);
}


IfcStructuralSurfaceMember::~IfcStructuralSurfaceMember() {
}

bool IfcStructuralSurfaceMember::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcStructuralSurfaceMember(this);
}

const char *IfcStructuralSurfaceMember::type() {
  return "IfcStructuralSurfaceMember";
}

Step::ClassType IfcStructuralSurfaceMember::getClassType() {
  return IfcStructuralSurfaceMember::s_type;
}

Step::ClassType IfcStructuralSurfaceMember::getType() const {
  return IfcStructuralSurfaceMember::s_type;
}

bool IfcStructuralSurfaceMember::isOfType(Step::ClassType t) {
  return IfcStructuralSurfaceMember::s_type == t ? true : IfcStructuralMember::isOfType(t);
}

IfcStructuralSurfaceTypeEnum IfcStructuralSurfaceMember::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcStructuralSurfaceTypeEnum_UNSET;
  }
}

void IfcStructuralSurfaceMember::setPredefinedType(IfcStructuralSurfaceTypeEnum value) {
  m_predefinedType = value;
}

IfcPositiveLengthMeasure IfcStructuralSurfaceMember::getThickness() {
  if (Step::BaseObject::inited()) {
    return m_thickness;
  }
  else {
    return getUnset(m_thickness);
  }
}

void IfcStructuralSurfaceMember::setThickness(IfcPositiveLengthMeasure value) {
  m_thickness = value;
}

void IfcStructuralSurfaceMember::release() {
  IfcStructuralMember::release();
}

bool IfcStructuralSurfaceMember::init() {
  bool status = IfcStructuralMember::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcStructuralSurfaceTypeEnum_UNSET;
  }
  else {
    if (arg == ".BENDING_ELEMENT.") {
      m_predefinedType = IfcStructuralSurfaceTypeEnum_BENDING_ELEMENT;
    }
    else if (arg == ".MEMBRANE_ELEMENT.") {
      m_predefinedType = IfcStructuralSurfaceTypeEnum_MEMBRANE_ELEMENT;
    }
    else if (arg == ".SHELL.") {
      m_predefinedType = IfcStructuralSurfaceTypeEnum_SHELL;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcStructuralSurfaceTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcStructuralSurfaceTypeEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_thickness = getUnset(m_thickness);
  }
  else {
    m_thickness = Step::spfToReal(arg);
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralSurfaceMember::s_type = new Step::ClassType_class("IfcStructuralSurfaceMember");
IfcStructuralSurfaceMember_Factory::IfcStructuralSurfaceMember_Factory() {
}

IfcStructuralSurfaceMember_Factory::~IfcStructuralSurfaceMember_Factory() {
  clear(true);
}

void IfcStructuralSurfaceMember_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralSurfaceMember_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcStructuralSurfaceMember_Factory::end() {
  return m_idMap.end();
}

IfcStructuralSurfaceMember *IfcStructuralSurfaceMember_Factory::get(Step::StepId id) {
  IfcStructuralSurfaceMember *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcStructuralSurfaceMember * > (it->second);
  }
  else {
    LOG_ERROR("IfcStructuralSurfaceMember_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcStructuralSurfaceMember * > (create(id));
  }
}

Step::BaseObject *IfcStructuralSurfaceMember_Factory::create(Step::StepId id) {
  IfcStructuralSurfaceMember *ret = new IfcStructuralSurfaceMember(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralSurfaceMember_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcStructuralSurfaceMember *ret = new IfcStructuralSurfaceMember(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcStructuralSurfaceMember_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcStructuralSurfaceMember *ret = new IfcStructuralSurfaceMember(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcStructuralSurfaceMember *IfcStructuralSurfaceMember_Factory::generate() {
  return static_cast< IfcStructuralSurfaceMember * > (create(m_model->getNewId()));
}

IfcStructuralSurfaceMember *IfcStructuralSurfaceMember_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcStructuralSurfaceMember * > (it->second);
  }
  else {
    return NULL;
  }
}

