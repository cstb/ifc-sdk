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



#include <ifc2x3/IfcColumnType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcColumnType::IfcColumnType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcColumnTypeEnum_UNSET;
}

IfcColumnType::~IfcColumnType() {
}

bool IfcColumnType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcColumnType(this);
}

const std::string &IfcColumnType::type() const {
    return IfcColumnType::s_type.getName();
}

const Step::ClassType &IfcColumnType::getClassType() {
    return IfcColumnType::s_type;
}

const Step::ClassType &IfcColumnType::getType() const {
    return IfcColumnType::s_type;
}

bool IfcColumnType::isOfType(const Step::ClassType &t) const {
    return IfcColumnType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcColumnTypeEnum IfcColumnType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcColumnTypeEnum_UNSET;
    }
}

const IfcColumnTypeEnum IfcColumnType::getPredefinedType() const {
    IfcColumnType * deConstObject = const_cast< IfcColumnType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcColumnType::setPredefinedType(IfcColumnTypeEnum value) {
    m_predefinedType = value;
}

void IfcColumnType::unsetPredefinedType() {
    m_predefinedType = IfcColumnTypeEnum_UNSET;
}

bool IfcColumnType::testPredefinedType() const {
    return getPredefinedType() != IfcColumnTypeEnum_UNSET;
}

bool IfcColumnType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcColumnTypeEnum_UNSET;
    }
    else {
        if (arg == ".COLUMN.") {
            m_predefinedType = IfcColumnTypeEnum_COLUMN;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcColumnTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcColumnTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcColumnType::copy(const IfcColumnType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcColumnType::s_type("IfcColumnType");
