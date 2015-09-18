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



#include <ifc2x3/IfcRailingType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRailingType::IfcRailingType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcRailingTypeEnum_UNSET;
}

IfcRailingType::~IfcRailingType() {
}

bool IfcRailingType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRailingType(this);
}

const std::string &IfcRailingType::type() const {
    return IfcRailingType::s_type.getName();
}

const Step::ClassType &IfcRailingType::getClassType() {
    return IfcRailingType::s_type;
}

const Step::ClassType &IfcRailingType::getType() const {
    return IfcRailingType::s_type;
}

bool IfcRailingType::isOfType(const Step::ClassType &t) const {
    return IfcRailingType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcRailingTypeEnum IfcRailingType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcRailingTypeEnum_UNSET;
    }
}

const IfcRailingTypeEnum IfcRailingType::getPredefinedType() const {
    IfcRailingType * deConstObject = const_cast< IfcRailingType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcRailingType::setPredefinedType(IfcRailingTypeEnum value) {
    m_predefinedType = value;
}

void IfcRailingType::unsetPredefinedType() {
    m_predefinedType = IfcRailingTypeEnum_UNSET;
}

bool IfcRailingType::testPredefinedType() const {
    return getPredefinedType() != IfcRailingTypeEnum_UNSET;
}

bool IfcRailingType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcRailingTypeEnum_UNSET;
    }
    else {
        if (arg == ".HANDRAIL.") {
            m_predefinedType = IfcRailingTypeEnum_HANDRAIL;
        }
        else if (arg == ".GUARDRAIL.") {
            m_predefinedType = IfcRailingTypeEnum_GUARDRAIL;
        }
        else if (arg == ".BALUSTRADE.") {
            m_predefinedType = IfcRailingTypeEnum_BALUSTRADE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcRailingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcRailingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRailingType::copy(const IfcRailingType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRailingType::s_type("IfcRailingType");
