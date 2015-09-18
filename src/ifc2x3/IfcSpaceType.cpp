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



#include <ifc2x3/IfcSpaceType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcSpatialStructureElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSpaceType::IfcSpaceType(Step::Id id, Step::SPFData *args) : IfcSpatialStructureElementType(id, args) {
    m_predefinedType = IfcSpaceTypeEnum_UNSET;
}

IfcSpaceType::~IfcSpaceType() {
}

bool IfcSpaceType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpaceType(this);
}

const std::string &IfcSpaceType::type() const {
    return IfcSpaceType::s_type.getName();
}

const Step::ClassType &IfcSpaceType::getClassType() {
    return IfcSpaceType::s_type;
}

const Step::ClassType &IfcSpaceType::getType() const {
    return IfcSpaceType::s_type;
}

bool IfcSpaceType::isOfType(const Step::ClassType &t) const {
    return IfcSpaceType::s_type == t ? true : IfcSpatialStructureElementType::isOfType(t);
}

IfcSpaceTypeEnum IfcSpaceType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcSpaceTypeEnum_UNSET;
    }
}

const IfcSpaceTypeEnum IfcSpaceType::getPredefinedType() const {
    IfcSpaceType * deConstObject = const_cast< IfcSpaceType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcSpaceType::setPredefinedType(IfcSpaceTypeEnum value) {
    m_predefinedType = value;
}

void IfcSpaceType::unsetPredefinedType() {
    m_predefinedType = IfcSpaceTypeEnum_UNSET;
}

bool IfcSpaceType::testPredefinedType() const {
    return getPredefinedType() != IfcSpaceTypeEnum_UNSET;
}

bool IfcSpaceType::init() {
    bool status = IfcSpatialStructureElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcSpaceTypeEnum_UNSET;
    }
    else {
        if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcSpaceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcSpaceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSpaceType::copy(const IfcSpaceType &obj, const CopyOp &copyop) {
    IfcSpatialStructureElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSpaceType::s_type("IfcSpaceType");
