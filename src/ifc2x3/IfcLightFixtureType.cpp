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



#include <ifc2x3/IfcLightFixtureType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowTerminalType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLightFixtureType::IfcLightFixtureType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcLightFixtureTypeEnum_UNSET;
}

IfcLightFixtureType::~IfcLightFixtureType() {
}

bool IfcLightFixtureType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightFixtureType(this);
}

const std::string &IfcLightFixtureType::type() const {
    return IfcLightFixtureType::s_type.getName();
}

const Step::ClassType &IfcLightFixtureType::getClassType() {
    return IfcLightFixtureType::s_type;
}

const Step::ClassType &IfcLightFixtureType::getType() const {
    return IfcLightFixtureType::s_type;
}

bool IfcLightFixtureType::isOfType(const Step::ClassType &t) const {
    return IfcLightFixtureType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcLightFixtureTypeEnum IfcLightFixtureType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcLightFixtureTypeEnum_UNSET;
    }
}

const IfcLightFixtureTypeEnum IfcLightFixtureType::getPredefinedType() const {
    IfcLightFixtureType * deConstObject = const_cast< IfcLightFixtureType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcLightFixtureType::setPredefinedType(IfcLightFixtureTypeEnum value) {
    m_predefinedType = value;
}

void IfcLightFixtureType::unsetPredefinedType() {
    m_predefinedType = IfcLightFixtureTypeEnum_UNSET;
}

bool IfcLightFixtureType::testPredefinedType() const {
    return getPredefinedType() != IfcLightFixtureTypeEnum_UNSET;
}

bool IfcLightFixtureType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcLightFixtureTypeEnum_UNSET;
    }
    else {
        if (arg == ".POINTSOURCE.") {
            m_predefinedType = IfcLightFixtureTypeEnum_POINTSOURCE;
        }
        else if (arg == ".DIRECTIONSOURCE.") {
            m_predefinedType = IfcLightFixtureTypeEnum_DIRECTIONSOURCE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcLightFixtureTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcLightFixtureTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcLightFixtureType::copy(const IfcLightFixtureType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLightFixtureType::s_type("IfcLightFixtureType");
