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



#include <ifc2x3/IfcCovering.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/IfcRelCoversBldgElements.h>
#include <ifc2x3/IfcRelCoversSpaces.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcCovering::IfcCovering(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_predefinedType = IfcCoveringTypeEnum_UNSET;
}

IfcCovering::~IfcCovering() {
}

bool IfcCovering::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCovering(this);
}

const std::string &IfcCovering::type() const {
    return IfcCovering::s_type.getName();
}

const Step::ClassType &IfcCovering::getClassType() {
    return IfcCovering::s_type;
}

const Step::ClassType &IfcCovering::getType() const {
    return IfcCovering::s_type;
}

bool IfcCovering::isOfType(const Step::ClassType &t) const {
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

const IfcCoveringTypeEnum IfcCovering::getPredefinedType() const {
    IfcCovering * deConstObject = const_cast< IfcCovering * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCovering::setPredefinedType(IfcCoveringTypeEnum value) {
    m_predefinedType = value;
}

void IfcCovering::unsetPredefinedType() {
    m_predefinedType = IfcCoveringTypeEnum_UNSET;
}

bool IfcCovering::testPredefinedType() const {
    return getPredefinedType() != IfcCoveringTypeEnum_UNSET;
}

Inverse_Set_IfcRelCoversSpaces_0_1 &IfcCovering::getCoversSpaces() {
    if (Step::BaseObject::inited()) {
        return m_coversSpaces;
    }
    else {
        m_coversSpaces.setUnset(true);
        return m_coversSpaces;
    }
}

const Inverse_Set_IfcRelCoversSpaces_0_1 &IfcCovering::getCoversSpaces() const {
    IfcCovering * deConstObject = const_cast< IfcCovering * > (this);
    return deConstObject->getCoversSpaces();
}

bool IfcCovering::testCoversSpaces() const {
    return !m_coversSpaces.isUnset();
}

Inverse_Set_IfcRelCoversBldgElements_0_1 &IfcCovering::getCovers() {
    if (Step::BaseObject::inited()) {
        return m_covers;
    }
    else {
        m_covers.setUnset(true);
        return m_covers;
    }
}

const Inverse_Set_IfcRelCoversBldgElements_0_1 &IfcCovering::getCovers() const {
    IfcCovering * deConstObject = const_cast< IfcCovering * > (this);
    return deConstObject->getCovers();
}

bool IfcCovering::testCovers() const {
    return !m_covers.isUnset();
}

bool IfcCovering::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
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
            m_coversSpaces.insert(static_cast< IfcRelCoversSpaces * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_covers.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_covers.insert(static_cast< IfcRelCoversBldgElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcCovering::copy(const IfcCovering &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCovering::s_type("IfcCovering");
