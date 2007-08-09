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
#include <ifc2x3/IfcElementAssembly.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcElementAssembly::IfcElementAssembly(Step::SPFData *args) : IfcElement(args) {
  m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
  m_predefinedType = IfcElementAssemblyTypeEnum_UNSET;
}


IfcElementAssembly::~IfcElementAssembly() {
}

bool IfcElementAssembly::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElementAssembly(this);
}

const char *IfcElementAssembly::type() {
  return "IfcElementAssembly";
}

Step::ClassType IfcElementAssembly::getClassType() {
  return IfcElementAssembly::s_type;
}

Step::ClassType IfcElementAssembly::getType() const {
  return IfcElementAssembly::s_type;
}

bool IfcElementAssembly::isOfType(Step::ClassType t) {
  return IfcElementAssembly::s_type == t ? true : IfcElement::isOfType(t);
}

IfcAssemblyPlaceEnum IfcElementAssembly::getAssemblyPlace() {
  if (Step::BaseObject::inited()) {
    return m_assemblyPlace;
  }
  else {
    return IfcAssemblyPlaceEnum_UNSET;
  }
}

void IfcElementAssembly::setAssemblyPlace(IfcAssemblyPlaceEnum value) {
  m_assemblyPlace = value;
}

IfcElementAssemblyTypeEnum IfcElementAssembly::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcElementAssemblyTypeEnum_UNSET;
  }
}

void IfcElementAssembly::setPredefinedType(IfcElementAssemblyTypeEnum value) {
  m_predefinedType = value;
}

void IfcElementAssembly::release() {
  IfcElement::release();
}

bool IfcElementAssembly::init() {
  bool status = IfcElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_assemblyPlace = IfcAssemblyPlaceEnum_UNSET;
  }
  else {
    if (arg == ".SITE.") {
      m_assemblyPlace = IfcAssemblyPlaceEnum_SITE;
    }
    else if (arg == ".FACTORY.") {
      m_assemblyPlace = IfcAssemblyPlaceEnum_FACTORY;
    }
    else if (arg == ".NOTDEFINED.") {
      m_assemblyPlace = IfcAssemblyPlaceEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcElementAssemblyTypeEnum_UNSET;
  }
  else {
    if (arg == ".ACCESSORY_ASSEMBLY.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_ACCESSORY_ASSEMBLY;
    }
    else if (arg == ".ARCH.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_ARCH;
    }
    else if (arg == ".BEAM_GRID.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_BEAM_GRID;
    }
    else if (arg == ".BRACED_FRAME.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_BRACED_FRAME;
    }
    else if (arg == ".GIRDER.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_GIRDER;
    }
    else if (arg == ".REINFORCEMENT_UNIT.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_REINFORCEMENT_UNIT;
    }
    else if (arg == ".RIGID_FRAME.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_RIGID_FRAME;
    }
    else if (arg == ".SLAB_FIELD.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_SLAB_FIELD;
    }
    else if (arg == ".TRUSS.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_TRUSS;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcElementAssemblyTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementAssembly::s_type = new Step::ClassType_class("IfcElementAssembly");
IfcElementAssembly_Factory::IfcElementAssembly_Factory() {
}

IfcElementAssembly_Factory::~IfcElementAssembly_Factory() {
  clear(true);
}

void IfcElementAssembly_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElementAssembly_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcElementAssembly_Factory::end() {
  return m_idMap.end();
}

IfcElementAssembly *IfcElementAssembly_Factory::get(Step::StepId id) {
  IfcElementAssembly *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcElementAssembly * > (it->second);
  }
  else {
    LOG_ERROR("IfcElementAssembly_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcElementAssembly * > (create(id));
  }
}

Step::BaseObject *IfcElementAssembly_Factory::create(Step::StepId id) {
  IfcElementAssembly *ret = new IfcElementAssembly(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcElementAssembly_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcElementAssembly *ret = new IfcElementAssembly(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcElementAssembly_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcElementAssembly *ret = new IfcElementAssembly(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcElementAssembly *IfcElementAssembly_Factory::generate() {
  return static_cast< IfcElementAssembly * > (create(m_model->getNewId()));
}

IfcElementAssembly *IfcElementAssembly_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcElementAssembly * > (it->second);
  }
  else {
    return NULL;
  }
}

