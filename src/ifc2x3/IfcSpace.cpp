// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcSpace.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelCoversSpaces.h>
#include <ifc2x3/IfcRelSpaceBoundary.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcSpace::IfcSpace(Step::Id id, Step::SPFData *args) : IfcSpatialStructureElement(id, args) {
    m_interiorOrExteriorSpace = IfcInternalOrExternalEnum_UNSET;
    m_elevationWithFlooring = Step::getUnset(m_elevationWithFlooring);
}

IfcSpace::~IfcSpace() {
}

bool IfcSpace::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpace(this);
}

const std::string &IfcSpace::type() const {
    return IfcSpace::s_type.getName();
}

const Step::ClassType &IfcSpace::getClassType() {
    return IfcSpace::s_type;
}

const Step::ClassType &IfcSpace::getType() const {
    return IfcSpace::s_type;
}

bool IfcSpace::isOfType(const Step::ClassType &t) const {
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

const IfcInternalOrExternalEnum IfcSpace::getInteriorOrExteriorSpace() const {
    IfcSpace * deConstObject = const_cast< IfcSpace * > (this);
    return deConstObject->getInteriorOrExteriorSpace();
}

void IfcSpace::setInteriorOrExteriorSpace(IfcInternalOrExternalEnum value) {
    m_interiorOrExteriorSpace = value;
}

void IfcSpace::unsetInteriorOrExteriorSpace() {
    m_interiorOrExteriorSpace = IfcInternalOrExternalEnum_UNSET;
}

bool IfcSpace::testInteriorOrExteriorSpace() const {
    return getInteriorOrExteriorSpace() != IfcInternalOrExternalEnum_UNSET;
}

IfcLengthMeasure IfcSpace::getElevationWithFlooring() {
    if (Step::BaseObject::inited()) {
        return m_elevationWithFlooring;
    }
    else {
        return Step::getUnset(m_elevationWithFlooring);
    }
}

const IfcLengthMeasure IfcSpace::getElevationWithFlooring() const {
    IfcSpace * deConstObject = const_cast< IfcSpace * > (this);
    return deConstObject->getElevationWithFlooring();
}

void IfcSpace::setElevationWithFlooring(IfcLengthMeasure value) {
    m_elevationWithFlooring = value;
}

void IfcSpace::unsetElevationWithFlooring() {
    m_elevationWithFlooring = Step::getUnset(getElevationWithFlooring());
}

bool IfcSpace::testElevationWithFlooring() const {
    return !Step::isUnset(getElevationWithFlooring());
}

Inverse_Set_IfcRelCoversSpaces_0_n &IfcSpace::getHasCoverings() {
    if (Step::BaseObject::inited()) {
        return m_hasCoverings;
    }
    else {
        m_hasCoverings.setUnset(true);
        return m_hasCoverings;
    }
}

const Inverse_Set_IfcRelCoversSpaces_0_n &IfcSpace::getHasCoverings() const {
    IfcSpace * deConstObject = const_cast< IfcSpace * > (this);
    return deConstObject->getHasCoverings();
}

bool IfcSpace::testHasCoverings() const {
    return !m_hasCoverings.isUnset();
}

Inverse_Set_IfcRelSpaceBoundary_0_n &IfcSpace::getBoundedBy() {
    if (Step::BaseObject::inited()) {
        return m_boundedBy;
    }
    else {
        m_boundedBy.setUnset(true);
        return m_boundedBy;
    }
}

const Inverse_Set_IfcRelSpaceBoundary_0_n &IfcSpace::getBoundedBy() const {
    IfcSpace * deConstObject = const_cast< IfcSpace * > (this);
    return deConstObject->getBoundedBy();
}

bool IfcSpace::testBoundedBy() const {
    return !m_boundedBy.isUnset();
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

IFC2X3_EXPORT Step::ClassType IfcSpace::s_type("IfcSpace");
