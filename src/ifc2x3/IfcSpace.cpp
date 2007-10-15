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

#include "ifc2x3/IfcSpace.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelCoversSpaces.h"
#include "ifc2x3/IfcRelSpaceBoundary.h"
#include "ifc2x3/IfcSpatialStructureElement.h"
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

IfcSpace::IfcSpace(Step::Id id, Step::SPFData *args) : IfcSpatialStructureElement(id, args) {
    m_interiorOrExteriorSpace = IfcInternalOrExternalEnum_UNSET;
    m_elevationWithFlooring = Step::getUnset(m_elevationWithFlooring);
    m_hasCoverings.setUnset(true);
    m_boundedBy.setUnset(true);
}

IfcSpace::~IfcSpace() {
}

bool IfcSpace::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSpace(this);
}

const std::string &IfcSpace::type() {
    return IfcSpace::s_type.getName();
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
        return Step::getUnset(m_elevationWithFlooring);
    }
}

void IfcSpace::setElevationWithFlooring(IfcLengthMeasure value) {
    m_elevationWithFlooring = value;
}

Step::Set< Step::ObsPtr< IfcRelCoversSpaces > > &IfcSpace::getHasCoverings() {
    if (Step::BaseObject::inited()) {
        return m_hasCoverings;
    }
    else {
        m_hasCoverings.setUnset(true);
        return m_hasCoverings;
    }
}

Step::Set< Step::ObsPtr< IfcRelSpaceBoundary > > &IfcSpace::getBoundedBy() {
    if (Step::BaseObject::inited()) {
        return m_boundedBy;
    }
    else {
        m_boundedBy.setUnset(true);
        return m_boundedBy;
    }
}

void IfcSpace::release() {
    IfcSpatialStructureElement::release();
}

bool IfcSpace::init() {
    bool status = IfcSpatialStructureElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
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
        m_elevationWithFlooring = Step::getUnset(m_elevationWithFlooring);
    }
    else {
        m_elevationWithFlooring = Step::spfToReal(arg);
    }
    inverses = m_args->getInverses(IfcRelCoversSpaces::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasCoverings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasCoverings.insert(static_cast< IfcRelCoversSpaces * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSpaceBoundary::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_boundedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_boundedBy.insert(static_cast< IfcRelSpaceBoundary * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSpace::copy(const IfcSpace &obj, const CopyOp &copyop) {
    IfcSpatialStructureElement::copy(obj, copyop);
    setInteriorOrExteriorSpace(obj.m_interiorOrExteriorSpace);
    setElevationWithFlooring(obj.m_elevationWithFlooring);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpace::s_type("IfcSpace");
