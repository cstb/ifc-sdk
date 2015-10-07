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



#include <ifc2x3/IfcCoveringType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCoveringType::IfcCoveringType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcCoveringTypeEnum_UNSET;
}

IfcCoveringType::~IfcCoveringType() {
}

bool IfcCoveringType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCoveringType(this);
}

const std::string &IfcCoveringType::type() const {
    return IfcCoveringType::s_type.getName();
}

const Step::ClassType &IfcCoveringType::getClassType() {
    return IfcCoveringType::s_type;
}

const Step::ClassType &IfcCoveringType::getType() const {
    return IfcCoveringType::s_type;
}

bool IfcCoveringType::isOfType(const Step::ClassType &t) const {
    return IfcCoveringType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcCoveringTypeEnum IfcCoveringType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCoveringTypeEnum_UNSET;
    }
}

const IfcCoveringTypeEnum IfcCoveringType::getPredefinedType() const {
    IfcCoveringType * deConstObject = const_cast< IfcCoveringType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCoveringType::setPredefinedType(IfcCoveringTypeEnum value) {
    m_predefinedType = value;
}

void IfcCoveringType::unsetPredefinedType() {
    m_predefinedType = IfcCoveringTypeEnum_UNSET;
}

bool IfcCoveringType::testPredefinedType() const {
    return getPredefinedType() != IfcCoveringTypeEnum_UNSET;
}

bool IfcCoveringType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
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
    return true;
}

void IfcCoveringType::copy(const IfcCoveringType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCoveringType::s_type("IfcCoveringType");
