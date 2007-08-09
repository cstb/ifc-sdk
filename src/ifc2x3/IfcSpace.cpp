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
#include <ifc2x3/IfcSpace.h>


#include <Step/BaseModel.h>
#include <Step/logger.h>
#include <ifc2x3/IfcRelCoversSpaces.h>
#include <ifc2x3/IfcRelSpaceBoundary.h>
#include <ifc2x3/Visitor.h>
#include <ifc2x3/ifc2x3DLL.h>

using namespace ifc2x3;

IfcSpace::IfcSpace(Step::SPFData *args) : IfcSpatialStructureElement(args) {
  m_interiorOrExteriorSpace = IfcInternalOrExternalEnum_UNSET;
  m_elevationWithFlooring = getUnset(m_elevationWithFlooring);
  m_hasCoverings.setUnset(true);
  m_boundedBy.setUnset(true);
}


IfcSpace::~IfcSpace() {
}

bool IfcSpace::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSpace(this);
}

const char *IfcSpace::type() {
  return "IfcSpace";
}

Step::ClassType IfcSpace::getClassType() {
  return IfcSpace::s_type;
}

Step::ClassType IfcSpace::getType() const {
  return IfcSpace::s_type;
}

bool IfcSpace::isOfType(Step::ClassType t) {
  return IfcSpace::s_type == t ? true : IfcSpatialStructureElement::isOfType(t);
}

IfcInternalOrExternalEnum IfcSpace::getInteriorOrExteriorSpace() {
  if (Step::BaseObject::inited()) {
    return m_interiorOrExteriorSpace;
  }
  else {
    return IfcInternalOrExternalEnum_UNSET;
  }
}

void IfcSpace::setInteriorOrExteriorSpace(IfcInternalOrExternalEnum value) {
  m_interiorOrExteriorSpace = value;
}

IfcLengthMeasure IfcSpace::getElevationWithFlooring() {
  if (Step::BaseObject::inited()) {
    return m_elevationWithFlooring;
  }
  else {
    return getUnset(m_elevationWithFlooring);
  }
}

void IfcSpace::setElevationWithFlooring(IfcLengthMeasure value) {
  m_elevationWithFlooring = value;
}

Step::StepSet< Step::RefPtr< IfcRelCoversSpaces > > &IfcSpace::getHasCoverings() {
  if (Step::BaseObject::inited()) {
    return m_hasCoverings;
  }
  else {
    m_hasCoverings.setUnset(true);
    return m_hasCoverings;
  }
}

void IfcSpace::setHasCoverings(const Step::StepSet< Step::RefPtr< IfcRelCoversSpaces > > &value) {
  m_hasCoverings = value;
}

Step::StepSet< Step::RefPtr< IfcRelSpaceBoundary > > &IfcSpace::getBoundedBy() {
  if (Step::BaseObject::inited()) {
    return m_boundedBy;
  }
  else {
    m_boundedBy.setUnset(true);
    return m_boundedBy;
  }
}

void IfcSpace::setBoundedBy(const Step::StepSet< Step::RefPtr< IfcRelSpaceBoundary > > &value) {
  m_boundedBy = value;
}

void IfcSpace::release() {
  IfcSpatialStructureElement::release();
}

bool IfcSpace::init() {
  bool status = IfcSpatialStructureElement::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_interiorOrExteriorSpace = IfcInternalOrExternalEnum_UNSET;
  }
  else {
    if (arg == ".INTERNAL.") {
      m_interiorOrExteriorSpace = IfcInternalOrExternalEnum_INTERNAL;
    }
    else if (arg == ".EXTERNAL.") {
      m_interiorOrExteriorSpace = IfcInternalOrExternalEnum_EXTERNAL;
    }
    else if (arg == ".NOTDEFINED.") {
      m_interiorOrExteriorSpace = IfcInternalOrExternalEnum_NOTDEFINED;
    }
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_elevationWithFlooring = getUnset(m_elevationWithFlooring);
  }
  else {
    m_elevationWithFlooring = Step::spfToReal(arg);
  }
  inverses = m_args->getInverses(IfcRelCoversSpaces::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasCoverings.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasCoverings.insert(static_cast< IfcRelCoversSpaces * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelSpaceBoundary::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_boundedBy.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_boundedBy.insert(static_cast< IfcRelSpaceBoundary * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpace::s_type = new Step::ClassType_class("IfcSpace");
IfcSpace_Factory::IfcSpace_Factory() {
}

IfcSpace_Factory::~IfcSpace_Factory() {
  clear(true);
}

void IfcSpace_Factory::clear(bool b) {
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpace_Factory::begin() {
  return m_idMap.begin();
}

std::map<Step::StepId,Step::BaseObject*>::iterator IfcSpace_Factory::end() {
  return m_idMap.end();
}

IfcSpace *IfcSpace_Factory::get(Step::StepId id) {
  IfcSpace *value;
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    value = static_cast< IfcSpace * > (it->second);
  }
  else {
    LOG_ERROR("IfcSpace_Factory::get() : Key not found.");
    return NULL;
  }
  if (value) {
    return value;
  }
  else {
    return static_cast< IfcSpace * > (create(id));
  }
}

Step::BaseObject *IfcSpace_Factory::create(Step::StepId id) {
  IfcSpace *ret = new IfcSpace(m_model->getArgs(id));
  ret->set_key(id);
  m_model->registerObject(id, ret);
  m_idMap[id] = ret;
  return ret;
}

Step::BaseObject *IfcSpace_Factory::create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it) {
  IfcSpace *ret = new IfcSpace(it->second->getArgs());
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  m_idMap[it->first] = ret;
  return ret;
}

Step::BaseObject *IfcSpace_Factory::create(std::map<Step::StepId, Step::BaseObject*>::iterator it) {
  IfcSpace *ret = new IfcSpace(m_model->getArgs(it->first));
  ret->set_key(it->first);
  m_model->registerObject(it->first, ret);
  it->second = ret;
  return ret;
}

IfcSpace *IfcSpace_Factory::generate() {
  return static_cast< IfcSpace * > (create(m_model->getNewId()));
}

IfcSpace *IfcSpace_Factory::find(Step::StepId id) {
  std::map<Step::StepId,Step::BaseObject*>::iterator it = m_idMap.find(id);
  if (it != m_idMap.end()) {
    return static_cast< IfcSpace * > (it->second);
  }
  else {
    return NULL;
  }
}

