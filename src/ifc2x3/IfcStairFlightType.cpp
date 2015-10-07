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



#include <ifc2x3/IfcStairFlightType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStairFlightType::IfcStairFlightType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcStairFlightTypeEnum_UNSET;
}

IfcStairFlightType::~IfcStairFlightType() {
}

bool IfcStairFlightType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStairFlightType(this);
}

const std::string &IfcStairFlightType::type() const {
    return IfcStairFlightType::s_type.getName();
}

const Step::ClassType &IfcStairFlightType::getClassType() {
    return IfcStairFlightType::s_type;
}

const Step::ClassType &IfcStairFlightType::getType() const {
    return IfcStairFlightType::s_type;
}

bool IfcStairFlightType::isOfType(const Step::ClassType &t) const {
    return IfcStairFlightType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcStairFlightTypeEnum IfcStairFlightType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcStairFlightTypeEnum_UNSET;
    }
}

const IfcStairFlightTypeEnum IfcStairFlightType::getPredefinedType() const {
    IfcStairFlightType * deConstObject = const_cast< IfcStairFlightType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcStairFlightType::setPredefinedType(IfcStairFlightTypeEnum value) {
    m_predefinedType = value;
}

void IfcStairFlightType::unsetPredefinedType() {
    m_predefinedType = IfcStairFlightTypeEnum_UNSET;
}

bool IfcStairFlightType::testPredefinedType() const {
    return getPredefinedType() != IfcStairFlightTypeEnum_UNSET;
}

bool IfcStairFlightType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcStairFlightTypeEnum_UNSET;
    }
    else {
        if (arg == ".STRAIGHT.") {
            m_predefinedType = IfcStairFlightTypeEnum_STRAIGHT;
        }
        else if (arg == ".WINDER.") {
            m_predefinedType = IfcStairFlightTypeEnum_WINDER;
        }
        else if (arg == ".SPIRAL.") {
            m_predefinedType = IfcStairFlightTypeEnum_SPIRAL;
        }
        else if (arg == ".CURVED.") {
            m_predefinedType = IfcStairFlightTypeEnum_CURVED;
        }
        else if (arg == ".FREEFORM.") {
            m_predefinedType = IfcStairFlightTypeEnum_FREEFORM;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcStairFlightTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcStairFlightTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcStairFlightType::copy(const IfcStairFlightType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStairFlightType::s_type("IfcStairFlightType");
