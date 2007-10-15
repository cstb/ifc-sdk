/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelConnectsElements.h"
#include "ifc2x3/IfcRelConnectsPortToElement.h"
#include "ifc2x3/IfcRelConnectsStructuralElement.h"
#include "ifc2x3/IfcRelConnectsWithRealizingElements.h"
#include "ifc2x3/IfcRelContainedInSpatialStructure.h"
#include "ifc2x3/IfcRelCoversBldgElements.h"
#include "ifc2x3/IfcRelFillsElement.h"
#include "ifc2x3/IfcRelProjectsElement.h"
#include "ifc2x3/IfcRelReferencedInSpatialStructure.h"
#include "ifc2x3/IfcRelSpaceBoundary.h"
#include "ifc2x3/IfcRelVoidsElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcElement::IfcElement(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_tag = Step::getUnset(m_tag);
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

const std::string &IfcElement::type() {
    return IfcElement::s_type.getName();
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
        return Step::getUnset(m_tag);
    }
}

void IfcElement::setTag(const IfcIdentifier &value) {
    m_tag = value;
}

Step::Set< Step::ObsPtr< IfcRelFillsElement > > &IfcElement::getFillsVoids() {
    if (Step::BaseObject::inited()) {
        return m_fillsVoids;
    }
    else {
        m_fillsVoids.setUnset(true);
        return m_fillsVoids;
    }
}

Step::Set< Step::ObsPtr< IfcRelConnectsElements > > &IfcElement::getConnectedTo() {
    if (Step::BaseObject::inited()) {
        return m_connectedTo;
    }
    else {
        m_connectedTo.setUnset(true);
        return m_connectedTo;
    }
}

Step::Set< Step::ObsPtr< IfcRelCoversBldgElements > > &IfcElement::getHasCoverings() {
    if (Step::BaseObject::inited()) {
        return m_hasCoverings;
    }
    else {
        m_hasCoverings.setUnset(true);
        return m_hasCoverings;
    }
}

Step::Set< Step::ObsPtr< IfcRelProjectsElement > > &IfcElement::getHasProjections() {
    if (Step::BaseObject::inited()) {
        return m_hasProjections;
    }
    else {
        m_hasProjections.setUnset(true);
        return m_hasProjections;
    }
}

Step::Set< Step::ObsPtr< IfcRelConnectsStructuralElement > > &IfcElement::getHasStructuralMember() {
    if (Step::BaseObject::inited()) {
        return m_hasStructuralMember;
    }
    else {
        m_hasStructuralMember.setUnset(true);
        return m_hasStructuralMember;
    }
}

Step::Set< Step::ObsPtr< IfcRelReferencedInSpatialStructure > > &IfcElement::getReferencedInStructures() {
    if (Step::BaseObject::inited()) {
        return m_referencedInStructures;
    }
    else {
        m_referencedInStructures.setUnset(true);
        return m_referencedInStructures;
    }
}

Step::Set< Step::ObsPtr< IfcRelConnectsPortToElement > > &IfcElement::getHasPorts() {
    if (Step::BaseObject::inited()) {
        return m_hasPorts;
    }
    else {
        m_hasPorts.setUnset(true);
        return m_hasPorts;
    }
}

Step::Set< Step::ObsPtr< IfcRelVoidsElement > > &IfcElement::getHasOpenings() {
    if (Step::BaseObject::inited()) {
        return m_hasOpenings;
    }
    else {
        m_hasOpenings.setUnset(true);
        return m_hasOpenings;
    }
}

Step::Set< Step::ObsPtr< IfcRelConnectsWithRealizingElements > > &IfcElement::getIsConnectionRealization() {
    if (Step::BaseObject::inited()) {
        return m_isConnectionRealization;
    }
    else {
        m_isConnectionRealization.setUnset(true);
        return m_isConnectionRealization;
    }
}

Step::Set< Step::ObsPtr< IfcRelSpaceBoundary > > &IfcElement::getProvidesBoundaries() {
    if (Step::BaseObject::inited()) {
        return m_providesBoundaries;
    }
    else {
        m_providesBoundaries.setUnset(true);
        return m_providesBoundaries;
    }
}

Step::Set< Step::ObsPtr< IfcRelConnectsElements > > &IfcElement::getConnectedFrom() {
    if (Step::BaseObject::inited()) {
        return m_connectedFrom;
    }
    else {
        m_connectedFrom.setUnset(true);
        return m_connectedFrom;
    }
}

Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > &IfcElement::getContainedInStructure() {
    if (Step::BaseObject::inited()) {
        return m_containedInStructure;
    }
    else {
        m_containedInStructure.setUnset(true);
        return m_containedInStructure;
    }
}

void IfcElement::release() {
    IfcProduct::release();
}

bool IfcElement::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tag = Step::getUnset(m_tag);
    }
    else {
        m_tag = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_fillsVoids.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_fillsVoids.insert(static_cast< IfcRelFillsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_connectedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedTo.insert(static_cast< IfcRelConnectsElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasCoverings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasCoverings.insert(static_cast< IfcRelCoversBldgElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelProjectsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasProjections.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasProjections.insert(static_cast< IfcRelProjectsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasStructuralMember.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasStructuralMember.insert(static_cast< IfcRelConnectsStructuralElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelReferencedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_referencedInStructures.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencedInStructures.insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_hasPorts.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasPorts.insert(static_cast< IfcRelConnectsPortToElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelVoidsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasOpenings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasOpenings.insert(static_cast< IfcRelVoidsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsWithRealizingElements::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_isConnectionRealization.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isConnectionRealization.insert(static_cast< IfcRelConnectsWithRealizingElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSpaceBoundary::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_providesBoundaries.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_providesBoundaries.insert(static_cast< IfcRelSpaceBoundary * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_connectedFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedFrom.insert(static_cast< IfcRelConnectsElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_containedInStructure.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcElement::copy(const IfcElement &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    setTag(obj.m_tag);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElement::s_type("IfcElement");
