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
#include <ifc2x3/IfcSpatialStructureElement.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>
#include <ifc2x3/IfcRelServicesBuildings.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcSpatialStructureElement::IfcSpatialStructureElement(Step::SPFData *args) : IfcProduct(args) {
  m_longName = getUnset(m_longName);
  m_compositionType = IfcElementCompositionEnum_UNSET;
  m_referencesElements.setUnset(true);
  m_servicedBySystems.setUnset(true);
  m_containsElements.setUnset(true);
}


IfcSpatialStructureElement::~IfcSpatialStructureElement() {
}

bool IfcSpatialStructureElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcSpatialStructureElement(this);
}

const char *IfcSpatialStructureElement::type() {
  return "IfcSpatialStructureElement";
}

Step::ClassType IfcSpatialStructureElement::getClassType() {
  return IfcSpatialStructureElement::s_type;
}

Step::ClassType IfcSpatialStructureElement::getType() const {
  return IfcSpatialStructureElement::s_type;
}

bool IfcSpatialStructureElement::isOfType(Step::ClassType t) {
  return IfcSpatialStructureElement::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcLabel IfcSpatialStructureElement::getLongName() {
  if (Step::BaseObject::inited()) {
    return m_longName;
  }
  else {
    return getUnset(m_longName);
  }
}

void IfcSpatialStructureElement::setLongName(const IfcLabel &value) {
  m_longName = value;
}

IfcElementCompositionEnum IfcSpatialStructureElement::getCompositionType() {
  if (Step::BaseObject::inited()) {
    return m_compositionType;
  }
  else {
    return IfcElementCompositionEnum_UNSET;
  }
}

void IfcSpatialStructureElement::setCompositionType(IfcElementCompositionEnum value) {
  m_compositionType = value;
}

Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > &IfcSpatialStructureElement::getReferencesElements() {
  if (Step::BaseObject::inited()) {
    return m_referencesElements;
  }
  else {
    m_referencesElements.setUnset(true);
    return m_referencesElements;
  }
}

void IfcSpatialStructureElement::setReferencesElements(const Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > &value) {
  m_referencesElements = value;
}

Step::StepSet< Step::RefPtr< IfcRelServicesBuildings > > &IfcSpatialStructureElement::getServicedBySystems() {
  if (Step::BaseObject::inited()) {
    return m_servicedBySystems;
  }
  else {
    m_servicedBySystems.setUnset(true);
    return m_servicedBySystems;
  }
}

void IfcSpatialStructureElement::setServicedBySystems(const Step::StepSet< Step::RefPtr< IfcRelServicesBuildings > > &value) {
  m_servicedBySystems = value;
}

Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &IfcSpatialStructureElement::getContainsElements() {
  if (Step::BaseObject::inited()) {
    return m_containsElements;
  }
  else {
    m_containsElements.setUnset(true);
    return m_containsElements;
  }
}

void IfcSpatialStructureElement::setContainsElements(const Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &value) {
  m_containsElements = value;
}

void IfcSpatialStructureElement::release() {
  IfcProduct::release();
}

bool IfcSpatialStructureElement::init() {
  bool status = IfcProduct::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_longName = getUnset(m_longName);
  }
  else {
    m_longName = Step::spfToString(arg);
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_compositionType = IfcElementCompositionEnum_UNSET;
  }
  else {
    if (arg == ".COMPLEX.") {
      m_compositionType = IfcElementCompositionEnum_COMPLEX;
    }
    else if (arg == ".ELEMENT.") {
      m_compositionType = IfcElementCompositionEnum_ELEMENT;
    }
    else if (arg == ".PARTIAL.") {
      m_compositionType = IfcElementCompositionEnum_PARTIAL;
    }
  }
  inverses = m_args->getInverses(IfcRelReferencedInSpatialStructure::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_referencesElements.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_referencesElements.insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelServicesBuildings::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_servicedBySystems.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_servicedBySystems.insert(static_cast< IfcRelServicesBuildings * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_containsElements.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_containsElements.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpatialStructureElement::s_type = new Step::ClassType_class("IfcSpatialStructureElement");
