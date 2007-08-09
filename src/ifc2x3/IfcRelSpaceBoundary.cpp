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
#include <ifc2x3/IfcRelSpaceBoundary.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcSpace.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcRelSpaceBoundary::IfcRelSpaceBoundary(Step::SPFData *args) : IfcRelConnects(args) {
  m_relatingSpace = NULL;
  m_relatedBuildingElement = NULL;
  m_connectionGeometry = NULL;
  m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_UNSET;
  m_internalOrExternalBoundary = IfcInternalOrExternalEnum_UNSET;
}


IfcRelSpaceBoundary::~IfcRelSpaceBoundary() {
}

bool IfcRelSpaceBoundary::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcRelSpaceBoundary(this);
}

const char *IfcRelSpaceBoundary::type() {
  return "IfcRelSpaceBoundary";
}

Step::ClassType IfcRelSpaceBoundary::getClassType() {
  return IfcRelSpaceBoundary::s_type;
}

Step::ClassType IfcRelSpaceBoundary::getType() const {
  return IfcRelSpaceBoundary::s_type;
}

bool IfcRelSpaceBoundary::isOfType(Step::ClassType t) {
  return IfcRelSpaceBoundary::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcSpace *IfcRelSpaceBoundary::getRelatingSpace() {
  if (Step::BaseObject::inited()) {
    return m_relatingSpace.get();
  }
  else {
    return NULL;
  }
}

void IfcRelSpaceBoundary::setRelatingSpace(const Step::RefPtr< IfcSpace > &value) {
  m_relatingSpace = value;
}

IfcElement *IfcRelSpaceBoundary::getRelatedBuildingElement() {
  if (Step::BaseObject::inited()) {
    return m_relatedBuildingElement.get();
  }
  else {
    return NULL;
  }
}

void IfcRelSpaceBoundary::setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value) {
  m_relatedBuildingElement = value;
}

IfcConnectionGeometry *IfcRelSpaceBoundary::getConnectionGeometry() {
  if (Step::BaseObject::inited()) {
    return m_connectionGeometry.get();
  }
  else {
    return NULL;
  }
}

void IfcRelSpaceBoundary::setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value) {
  m_connectionGeometry = value;
}

IfcPhysicalOrVirtualEnum IfcRelSpaceBoundary::getPhysicalOrVirtualBoundary() {
  if (Step::BaseObject::inited()) {
    return m_physicalOrVirtualBoundary;
  }
  else {
    return IfcPhysicalOrVirtualEnum_UNSET;
  }
}

void IfcRelSpaceBoundary::setPhysicalOrVirtualBoundary(IfcPhysicalOrVirtualEnum value) {
  m_physicalOrVirtualBoundary = value;
}

IfcInternalOrExternalEnum IfcRelSpaceBoundary::getInternalOrExternalBoundary() {
  if (Step::BaseObject::inited()) {
    return m_internalOrExternalBoundary;
  }
  else {
    return IfcInternalOrExternalEnum_UNSET;
  }
}

void IfcRelSpaceBoundary::setInternalOrExternalBoundary(IfcInternalOrExternalEnum value) {
  m_internalOrExternalBoundary = value;
}

void IfcRelSpaceBoundary::release() {
  IfcRelConnects::release();
  m_relatingSpace.release();
  m_relatedBuildingElement.release();
  m_connectionGeometry.release();
}

bool IfcRelSpaceBoundary::init() {
  bool status = IfcRelConnects::init();
  std::string arg;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatingSpace = NULL;
  }
  else {
    m_relatingSpace = static_cast< IfcSpace * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_relatedBuildingElement = NULL;
  }
  else {
    m_relatedBuildingElement = static_cast< IfcElement * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_connectionGeometry = NULL;
  }
  else {
    m_connectionGeometry = static_cast< IfcConnectionGeometry * > (m_model->getObjectById(atoi(arg.c_str() + 1)));
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_UNSET;
  }
  else {
    if (arg == ".PHYSICAL.") {
      m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_PHYSICAL;
    }
    else if (arg == ".VIRTUAL.") {
      m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_VIRTUAL;
    }
    else if (arg == ".NOTDEFINED.") {
      m_physicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_internalOrExternalBoundary = IfcInternalOrExternalEnum_UNSET;
  }
  else {
    if (arg == ".INTERNAL.") {
      m_internalOrExternalBoundary = IfcInternalOrExternalEnum_INTERNAL;
    }
    else if (arg == ".EXTERNAL.") {
      m_internalOrExternalBoundary = IfcInternalOrExternalEnum_EXTERNAL;
    }
    else if (arg == ".NOTDEFINED.") {
      m_internalOrExternalBoundary = IfcInternalOrExternalEnum_NOTDEFINED;
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelSpaceBoundary::s_type = new Step::ClassType_class("IfcRelSpaceBoundary");
IfcRelSpaceBoundary_Factory::IfcRelSpaceBoundary_Factory() {
}

IfcRelSpaceBoundary_Factory::~IfcRelSpaceBoundary_Factory() {
  clear(true);
}

void IfcRelSpaceBoundary_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelSpaceBoundary_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcRelSpaceBoundary_Factory::end() {
  return m_idMap.end();
}

IfcRelSpaceBoundary *IfcRelSpaceBoundary_Factory::get(Step::StepId id) {
  IfcRelSpaceBoundary *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcRelSpaceBoundary * > (it->second);
  }
  else {
    LOG_ERROR("IfcRelSpaceBoundary_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcRelSpaceBoundary * > (create(id));
  }
}

Step::BaseObject *IfcRelSpaceBoundary_Factory::create(Step::StepId id) {
  IfcRelSpaceBoundary *ret = new IfcRelSpaceBoundary(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcRelSpaceBoundary_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcRelSpaceBoundary *ret = new IfcRelSpaceBoundary(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcRelSpaceBoundary_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcRelSpaceBoundary *ret = new IfcRelSpaceBoundary(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcRelSpaceBoundary *IfcRelSpaceBoundary_Factory::generate() {
  return static_cast< IfcRelSpaceBoundary * > (create(m_model->getNewId()));
}

IfcRelSpaceBoundary *IfcRelSpaceBoundary_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcRelSpaceBoundary * > (it->second);
  }
  else {
    return NULL;
  }
}

