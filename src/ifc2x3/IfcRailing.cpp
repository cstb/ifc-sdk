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



#include <ifc2x3/IfcRailing.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRailing::IfcRailing(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_predefinedType = IfcRailingTypeEnum_UNSET;
}

IfcRailing::~IfcRailing() {
}

bool IfcRailing::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRailing(this);
}

const std::string &IfcRailing::type() const {
    return IfcRailing::s_type.getName();
}

const Step::ClassType &IfcRailing::getClassType() {
    return IfcRailing::s_type;
}

const Step::ClassType &IfcRailing::getType() const {
    return IfcRailing::s_type;
}

bool IfcRailing::isOfType(const Step::ClassType &t) const {
    return IfcRailing::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcRailingTypeEnum IfcRailing::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcRailingTypeEnum_UNSET;
    }
}

const IfcRailingTypeEnum IfcRailing::getPredefinedType() const {
    IfcRailing * deConstObject = const_cast< IfcRailing * > (this);
    return deConstObject->getPredefinedType();
}

void IfcRailing::setPredefinedType(IfcRailingTypeEnum value) {
    m_predefinedType = value;
}

void IfcRailing::unsetPredefinedType() {
    m_predefinedType = IfcRailingTypeEnum_UNSET;
}

bool IfcRailing::testPredefinedType() const {
    return getPredefinedType() != IfcRailingTypeEnum_UNSET;
}

bool IfcRailing::init() {
    bool status = IfcBuildingElement::init();
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

void IfcRailing::copy(const IfcRailing &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRailing::s_type("IfcRailing");
