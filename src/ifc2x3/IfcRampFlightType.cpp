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



#include <ifc2x3/IfcRampFlightType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRampFlightType::IfcRampFlightType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcRampFlightTypeEnum_UNSET;
}

IfcRampFlightType::~IfcRampFlightType() {
}

bool IfcRampFlightType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRampFlightType(this);
}

const std::string &IfcRampFlightType::type() const {
    return IfcRampFlightType::s_type.getName();
}

const Step::ClassType &IfcRampFlightType::getClassType() {
    return IfcRampFlightType::s_type;
}

const Step::ClassType &IfcRampFlightType::getType() const {
    return IfcRampFlightType::s_type;
}

bool IfcRampFlightType::isOfType(const Step::ClassType &t) const {
    return IfcRampFlightType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcRampFlightTypeEnum IfcRampFlightType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcRampFlightTypeEnum_UNSET;
    }
}

const IfcRampFlightTypeEnum IfcRampFlightType::getPredefinedType() const {
    IfcRampFlightType * deConstObject = const_cast< IfcRampFlightType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcRampFlightType::setPredefinedType(IfcRampFlightTypeEnum value) {
    m_predefinedType = value;
}

void IfcRampFlightType::unsetPredefinedType() {
    m_predefinedType = IfcRampFlightTypeEnum_UNSET;
}

bool IfcRampFlightType::testPredefinedType() const {
    return getPredefinedType() != IfcRampFlightTypeEnum_UNSET;
}

bool IfcRampFlightType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcRampFlightTypeEnum_UNSET;
    }
    else {
        if (arg == ".STRAIGHT.") {
            m_predefinedType = IfcRampFlightTypeEnum_STRAIGHT;
        }
        else if (arg == ".SPIRAL.") {
            m_predefinedType = IfcRampFlightTypeEnum_SPIRAL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcRampFlightTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcRampFlightTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRampFlightType::copy(const IfcRampFlightType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRampFlightType::s_type("IfcRampFlightType");
