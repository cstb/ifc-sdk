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



#include <ifc2x3/IfcCurtainWallType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCurtainWallType::IfcCurtainWallType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcCurtainWallTypeEnum_UNSET;
}

IfcCurtainWallType::~IfcCurtainWallType() {
}

bool IfcCurtainWallType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurtainWallType(this);
}

const std::string &IfcCurtainWallType::type() const {
    return IfcCurtainWallType::s_type.getName();
}

const Step::ClassType &IfcCurtainWallType::getClassType() {
    return IfcCurtainWallType::s_type;
}

const Step::ClassType &IfcCurtainWallType::getType() const {
    return IfcCurtainWallType::s_type;
}

bool IfcCurtainWallType::isOfType(const Step::ClassType &t) const {
    return IfcCurtainWallType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcCurtainWallTypeEnum IfcCurtainWallType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCurtainWallTypeEnum_UNSET;
    }
}

const IfcCurtainWallTypeEnum IfcCurtainWallType::getPredefinedType() const {
    IfcCurtainWallType * deConstObject = const_cast< IfcCurtainWallType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCurtainWallType::setPredefinedType(IfcCurtainWallTypeEnum value) {
    m_predefinedType = value;
}

void IfcCurtainWallType::unsetPredefinedType() {
    m_predefinedType = IfcCurtainWallTypeEnum_UNSET;
}

bool IfcCurtainWallType::testPredefinedType() const {
    return getPredefinedType() != IfcCurtainWallTypeEnum_UNSET;
}

bool IfcCurtainWallType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCurtainWallTypeEnum_UNSET;
    }
    else {
        if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCurtainWallTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCurtainWallTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCurtainWallType::copy(const IfcCurtainWallType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCurtainWallType::s_type("IfcCurtainWallType");
