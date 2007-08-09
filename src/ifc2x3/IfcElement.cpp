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
#include <ifc2x3/IfcElement.h>

#include <Step/BaseModel.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelConnectsElements.h>
#include <ifc2x3/IfcRelConnectsPortToElement.h>
#include <ifc2x3/IfcRelConnectsStructuralElement.h>
#include <ifc2x3/IfcRelConnectsWithRealizingElements.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/IfcRelCoversBldgElements.h>
#include <ifc2x3/IfcRelFillsElement.h>
#include <ifc2x3/IfcRelProjectsElement.h>
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>
#include <ifc2x3/IfcRelSpaceBoundary.h>
#include <ifc2x3/IfcRelVoidsElement.h>
#include <ifc2x3/Visitor.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcElement::IfcElement(Step::SPFData *args) : IfcProduct(args) {
  m_tag = getUnset(m_tag);
  m_fillsVoids.setUnset(true);
  m_connectedTo.setUnset(true);
  m_hasCoverings.setUnset(true);
  m_hasProjections.setUnset(true);
  m_hasStructuralMember.setUnset(true);
  m_referencedInStructures.setUnset(true);
  m_hasPorts.setUnset(true);
  m_hasOpenings.setUnset(true);
  m_isConnectionRealization.setUnset(true);
  m_providesBoundaries.setUnset(true);
  m_connectedFrom.setUnset(true);
  m_containedInStructure.setUnset(true);
}


IfcElement::~IfcElement() {
}

bool IfcElement::acceptVisitor(Step::BaseVisitor *v) {
  return static_cast< Visitor * > (v)->visitIfcElement(this);
}

const char *IfcElement::type() {
  return "IfcElement";
}

Step::ClassType IfcElement::getClassType() {
  return IfcElement::s_type;
}

Step::ClassType IfcElement::getType() const {
  return IfcElement::s_type;
}

bool IfcElement::isOfType(Step::ClassType t) {
  return IfcElement::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcIdentifier IfcElement::getTag() {
  if (Step::BaseObject::inited()) {
    return m_tag;
  }
  else {
    return getUnset(m_tag);
  }
}

void IfcElement::setTag(const IfcIdentifier &value) {
  m_tag = value;
}

Step::StepSet< Step::RefPtr< IfcRelFillsElement > > &IfcElement::getFillsVoids() {
  if (Step::BaseObject::inited()) {
    return m_fillsVoids;
  }
  else {
    m_fillsVoids.setUnset(true);
    return m_fillsVoids;
  }
}

void IfcElement::setFillsVoids(const Step::StepSet< Step::RefPtr< IfcRelFillsElement > > &value) {
  m_fillsVoids = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > &IfcElement::getConnectedTo() {
  if (Step::BaseObject::inited()) {
    return m_connectedTo;
  }
  else {
    m_connectedTo.setUnset(true);
    return m_connectedTo;
  }
}

void IfcElement::setConnectedTo(const Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > &value) {
  m_connectedTo = value;
}

Step::StepSet< Step::RefPtr< IfcRelCoversBldgElements > > &IfcElement::getHasCoverings() {
  if (Step::BaseObject::inited()) {
    return m_hasCoverings;
  }
  else {
    m_hasCoverings.setUnset(true);
    return m_hasCoverings;
  }
}

void IfcElement::setHasCoverings(const Step::StepSet< Step::RefPtr< IfcRelCoversBldgElements > > &value) {
  m_hasCoverings = value;
}

Step::StepSet< Step::RefPtr< IfcRelProjectsElement > > &IfcElement::getHasProjections() {
  if (Step::BaseObject::inited()) {
    return m_hasProjections;
  }
  else {
    m_hasProjections.setUnset(true);
    return m_hasProjections;
  }
}

void IfcElement::setHasProjections(const Step::StepSet< Step::RefPtr< IfcRelProjectsElement > > &value) {
  m_hasProjections = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > &IfcElement::getHasStructuralMember() {
  if (Step::BaseObject::inited()) {
    return m_hasStructuralMember;
  }
  else {
    m_hasStructuralMember.setUnset(true);
    return m_hasStructuralMember;
  }
}

void IfcElement::setHasStructuralMember(const Step::StepSet< Step::RefPtr< IfcRelConnectsStructuralElement > > &value) {
  m_hasStructuralMember = value;
}

Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > &IfcElement::getReferencedInStructures() {
  if (Step::BaseObject::inited()) {
    return m_referencedInStructures;
  }
  else {
    m_referencedInStructures.setUnset(true);
    return m_referencedInStructures;
  }
}

void IfcElement::setReferencedInStructures(const Step::StepSet< Step::RefPtr< IfcRelReferencedInSpatialStructure > > &value) {
  m_referencedInStructures = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsPortToElement > > &IfcElement::getHasPorts() {
  if (Step::BaseObject::inited()) {
    return m_hasPorts;
  }
  else {
    m_hasPorts.setUnset(true);
    return m_hasPorts;
  }
}

void IfcElement::setHasPorts(const Step::StepSet< Step::RefPtr< IfcRelConnectsPortToElement > > &value) {
  m_hasPorts = value;
}

Step::StepSet< Step::RefPtr< IfcRelVoidsElement > > &IfcElement::getHasOpenings() {
  if (Step::BaseObject::inited()) {
    return m_hasOpenings;
  }
  else {
    m_hasOpenings.setUnset(true);
    return m_hasOpenings;
  }
}

void IfcElement::setHasOpenings(const Step::StepSet< Step::RefPtr< IfcRelVoidsElement > > &value) {
  m_hasOpenings = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsWithRealizingElements > > &IfcElement::getIsConnectionRealization() {
  if (Step::BaseObject::inited()) {
    return m_isConnectionRealization;
  }
  else {
    m_isConnectionRealization.setUnset(true);
    return m_isConnectionRealization;
  }
}

void IfcElement::setIsConnectionRealization(const Step::StepSet< Step::RefPtr< IfcRelConnectsWithRealizingElements > > &value) {
  m_isConnectionRealization = value;
}

Step::StepSet< Step::RefPtr< IfcRelSpaceBoundary > > &IfcElement::getProvidesBoundaries() {
  if (Step::BaseObject::inited()) {
    return m_providesBoundaries;
  }
  else {
    m_providesBoundaries.setUnset(true);
    return m_providesBoundaries;
  }
}

void IfcElement::setProvidesBoundaries(const Step::StepSet< Step::RefPtr< IfcRelSpaceBoundary > > &value) {
  m_providesBoundaries = value;
}

Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > &IfcElement::getConnectedFrom() {
  if (Step::BaseObject::inited()) {
    return m_connectedFrom;
  }
  else {
    m_connectedFrom.setUnset(true);
    return m_connectedFrom;
  }
}

void IfcElement::setConnectedFrom(const Step::StepSet< Step::RefPtr< IfcRelConnectsElements > > &value) {
  m_connectedFrom = value;
}

Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &IfcElement::getContainedInStructure() {
  if (Step::BaseObject::inited()) {
    return m_containedInStructure;
  }
  else {
    m_containedInStructure.setUnset(true);
    return m_containedInStructure;
  }
}

void IfcElement::setContainedInStructure(const Step::StepSet< Step::RefPtr< IfcRelContainedInSpatialStructure > > &value) {
  m_containedInStructure = value;
}

void IfcElement::release() {
  IfcProduct::release();
}

bool IfcElement::init() {
  bool status = IfcProduct::init();
  std::string arg;
  std::vector< Step::StepId > *inverses;
  if (!status) {
    return false;
  }
  arg = m_args->getNext();
  if (arg == "$" || arg == "*") {
    m_tag = getUnset(m_tag);
  }
  else {
    m_tag = Step::spfToString(arg);
  }
  inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_fillsVoids.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_fillsVoids.insert(static_cast< IfcRelFillsElement * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_connectedTo.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_connectedTo.insert(static_cast< IfcRelConnectsElements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasCoverings.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasCoverings.insert(static_cast< IfcRelCoversBldgElements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelProjectsElement::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasProjections.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasProjections.insert(static_cast< IfcRelProjectsElement * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelConnectsStructuralElement::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasStructuralMember.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasStructuralMember.insert(static_cast< IfcRelConnectsStructuralElement * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelReferencedInSpatialStructure::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_referencedInStructures.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_referencedInStructures.insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_hasPorts.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasPorts.insert(static_cast< IfcRelConnectsPortToElement * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelVoidsElement::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_hasOpenings.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_hasOpenings.insert(static_cast< IfcRelVoidsElement * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelConnectsWithRealizingElements::getClassType(), 7);
  if (inverses) {
    unsigned int i;
    m_isConnectionRealization.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_isConnectionRealization.insert(static_cast< IfcRelConnectsWithRealizingElements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelSpaceBoundary::getClassType(), 5);
  if (inverses) {
    unsigned int i;
    m_providesBoundaries.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_providesBoundaries.insert(static_cast< IfcRelSpaceBoundary * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 6);
  if (inverses) {
    unsigned int i;
    m_connectedFrom.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_connectedFrom.insert(static_cast< IfcRelConnectsElements * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
  if (inverses) {
    unsigned int i;
    m_containedInStructure.setUnset(false);
    for (i = 0; i < inverses->size(); i++) {
      m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_model->getObjectById((*inverses)[i])));
    }
  }
  return true;
}

IFC2X3_DLL_DEF Step::ClassType IfcElement::s_type = new Step::ClassType_class("IfcElement");
