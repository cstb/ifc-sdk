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
#include <ifc2x3/IfcCovering.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelCoversBldgElements.h>
#include <ifc2x3/IfcRelCoversSpaces.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcCovering::IfcCovering(Step::SPFData *args) : IfcBuildingElement(args) {
  m_predefinedType = IfcCoveringTypeEnum_UNSET;
  m_coversSpaces.setUnset(true);
  m_covers.setUnset(true);
}


IfcCovering::~IfcCovering() {
}

bool IfcCovering::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcCovering(this);
}

const char *IfcCovering::type() {
  return "IfcCovering";
}

Step::ClassType IfcCovering::getClassType() {
  return IfcCovering::s_type;
}

Step::ClassType IfcCovering::getType() const {
  return IfcCovering::s_type;
}

bool IfcCovering::isOfType(Step::ClassType t) {
  return IfcCovering::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcCoveringTypeEnum IfcCovering::getPredefinedType() {
  if (Step::BaseObject::inited()) {
    return m_predefinedType;
  }
  else {
    return IfcCoveringTypeEnum_UNSET;
  }
}

void IfcCovering::setPredefinedType(IfcCoveringTypeEnum value) {
  m_predefinedType = value;
}

Step::StepSet< Step::RefPtr< IfcRelCoversSpaces > > &IfcCovering::getCoversSpaces() {
  if (Step::BaseObject::inited()) {
    return m_coversSpaces;
  }
  else {
    m_coversSpaces.setUnset(true);
    return m_coversSpaces;
  }
}

void IfcCovering::setCoversSpaces(const Step::StepSet< Step::RefPtr< IfcRelCoversSpaces > > &value) {
  m_coversSpaces = value;
}

Step::StepSet< Step::RefPtr< IfcRelCoversBldgElements > > &IfcCovering::getCovers() {
  if (Step::BaseObject::inited()) {
    return m_covers;
  }
  else {
    m_covers.setUnset(true);
    return m_covers;
  }
}

void IfcCovering::setCovers(const Step::StepSet< Step::RefPtr< IfcRelCoversBldgElements > > &value) {
  m_covers = value;
}

void IfcCovering::release() {
  IfcBuildingElement::release();
}

bool IfcCovering::init() {
  bool status = IfcBuildingElement::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_predefinedType = IfcCoveringTypeEnum_UNSET;
  }
  else {
    if (arg == ".CEILING.") {
      m_predefinedType = IfcCoveringTypeEnum_CEILING;
    }
    else if (arg == ".FLOORING.") {
      m_predefinedType = IfcCoveringTypeEnum_FLOORING;
    }
    else if (arg == ".CLADDING.") {
      m_predefinedType = IfcCoveringTypeEnum_CLADDING;
    }
    else if (arg == ".ROOFING.") {
      m_predefinedType = IfcCoveringTypeEnum_ROOFING;
    }
    else if (arg == ".INSULATION.") {
      m_predefinedType = IfcCoveringTypeEnum_INSULATION;
    }
    else if (arg == ".MEMBRANE.") {
      m_predefinedType = IfcCoveringTypeEnum_MEMBRANE;
    }
    else if (arg == ".SLEEVING.") {
      m_predefinedType = IfcCoveringTypeEnum_SLEEVING;
    }
    else if (arg == ".WRAPPING.") {
      m_predefinedType = IfcCoveringTypeEnum_WRAPPING;
    }
    else if (arg == ".USERDEFINED.") {
      m_predefinedType = IfcCoveringTypeEnum_USERDEFINED;
    }
    else if (arg == ".NOTDEFINED.") {
      m_predefinedType = IfcCoveringTypeEnum_NOTDEFINED;
    }
  }
  inverses = m_args->getInverses(IfcRelCoversSpaces::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_coversSpaces.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_coversSpaces.insert(static_cast< IfcRelCoversSpaces * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_covers.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_covers.insert(static_cast< IfcRelCoversBldgElements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcCovering::s_type = new Step::ClassType_class("IfcCovering");
IfcCovering_Factory::IfcCovering_Factory() {
}

IfcCovering_Factory::~IfcCovering_Factory() {
  clear(true);
}

void IfcCovering_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCovering_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcCovering_Factory::end() {
  return m_idMap.end();
}

IfcCovering *IfcCovering_Factory::get(Step::StepId id) {
  IfcCovering *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcCovering * > (it->second);
  }
  else {
    LOG_ERROR("IfcCovering_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcCovering * > (create(id));
  }
}

Step::BaseObject *IfcCovering_Factory::create(Step::StepId id) {
  IfcCovering *ret = new IfcCovering(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcCovering_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcCovering *ret = new IfcCovering(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcCovering_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcCovering *ret = new IfcCovering(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcCovering *IfcCovering_Factory::generate() {
  return static_cast< IfcCovering * > (create(m_model->getNewId()));
}

IfcCovering *IfcCovering_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcCovering * > (it->second);
  }
  else {
    return NULL;
  }
}

