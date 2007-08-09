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
#include <ifc2x3/IfcSlab.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSlab::IfcSlab(Step::SPFData *args) : IfcBuildingElement(args) {
  m_predefinedType = IfcSlabTypeEnum_UNSET;
}


IfcSlab::~IfcSlab() {
}

bool IfcSlab::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSlab(this);
}

const char *IfcSlab::type() {
  return "IfcSlab";
}

Step::ClassType IfcSlab::getClassType() {
  return IfcSlab::s_type;
}

Step::ClassType IfcSlab::getType() const {
  return IfcSlab::s_type;
}

bool IfcSlab::isOfType(Step::ClassType t) {
  return IfcSlab::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcSlabTypeEnum IfcSlab::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcSlabTypeEnum_UNSET;
  }
}

void IfcSlab::setPredefinedType(IfcSlabTypeEnum value) {
  m_predefinedType = value;
}

void IfcSlab::release() {
  IfcBuildingElement::release();
}

bool IfcSlab::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcSlabTypeEnum_UNSET;
  }
  else {
    if (arg == ".FLOOR.") {
      m_predefinedType = IfcSlabTypeEnum_FLOOR;
    }
    else if (arg == ".ROOF.") {
      m_predefinedType = IfcSlabTypeEnum_ROOF;
    }
    else if (arg == ".LANDING.") {
      m_predefinedType = IfcSlabTypeEnum_LANDING;
    }
    else if (arg == ".BASESLAB.") {
      m_predefinedType = IfcSlabTypeEnum_BASESLAB;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcSlabTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcSlabTypeEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSlab::s_type = new Step::ClassType_class("IfcSlab");
IfcSlab_Factory::IfcSlab_Factory() {
}

IfcSlab_Factory::~IfcSlab_Factory() {
  clear(true);
}

void IfcSlab_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSlab_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSlab_Factory::end() {
  return m_idMap.end();
}

IfcSlab *IfcSlab_Factory::get(Step::StepId id) {
  IfcSlab *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSlab * > (it->second);
  }
  else {
    LOG_ERROR("IfcSlab_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSlab * > (create(id));
  }
}

Step::BaseObject *IfcSlab_Factory::create(Step::StepId id) {
  IfcSlab *ret = new IfcSlab(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSlab_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSlab *ret = new IfcSlab(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSlab_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSlab *ret = new IfcSlab(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSlab *IfcSlab_Factory::generate() {
  return static_cast< IfcSlab * > (create(m_model->getNewId()));
}

IfcSlab *IfcSlab_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSlab * > (it->second);
  }
  else {
    return NULL;
  }
}

