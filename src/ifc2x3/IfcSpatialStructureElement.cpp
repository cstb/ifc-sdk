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

#include "ifc2x3/IfcSpatialStructureElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelContainedInSpatialStructure.h"
#include "ifc2x3/IfcRelReferencedInSpatialStructure.h"
#include "ifc2x3/IfcRelServicesBuildings.h"
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

IfcSpatialStructureElement::IfcSpatialStructureElement(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_longName = Step::getUnset(m_longName);
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

const std::string &IfcSpatialStructureElement::type() {
    return IfcSpatialStructureElement::s_type.getName();
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
        return Step::getUnset(m_longName);
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

Step::Set< Step::ObsPtr< IfcRelReferencedInSpatialStructure > > &IfcSpatialStructureElement::getReferencesElements() {
    if (Step::BaseObject::inited()) {
        return m_referencesElements;
    }
    else {
        m_referencesElements.setUnset(true);
        return m_referencesElements;
    }
}

Step::Set< Step::ObsPtr< IfcRelServicesBuildings > > &IfcSpatialStructureElement::getServicedBySystems() {
    if (Step::BaseObject::inited()) {
        return m_servicedBySystems;
    }
    else {
        m_servicedBySystems.setUnset(true);
        return m_servicedBySystems;
    }
}

Step::Set< Step::ObsPtr< IfcRelContainedInSpatialStructure > > &IfcSpatialStructureElement::getContainsElements() {
    if (Step::BaseObject::inited()) {
        return m_containsElements;
    }
    else {
        m_containsElements.setUnset(true);
        return m_containsElements;
    }
}

void IfcSpatialStructureElement::release() {
    IfcProduct::release();
}

bool IfcSpatialStructureElement::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longName = Step::getUnset(m_longName);
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
            m_referencesElements.insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelServicesBuildings::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_servicedBySystems.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_servicedBySystems.insert(static_cast< IfcRelServicesBuildings * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_containsElements.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containsElements.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSpatialStructureElement::copy(const IfcSpatialStructureElement &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    setLongName(obj.m_longName);
    setCompositionType(obj.m_compositionType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpatialStructureElement::s_type("IfcSpatialStructureElement");
