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



#include <ifc2x3/IfcStackTerminalType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowTerminalType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStackTerminalType::IfcStackTerminalType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcStackTerminalTypeEnum_UNSET;
}

IfcStackTerminalType::~IfcStackTerminalType() {
}

bool IfcStackTerminalType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStackTerminalType(this);
}

const std::string &IfcStackTerminalType::type() const {
    return IfcStackTerminalType::s_type.getName();
}

const Step::ClassType &IfcStackTerminalType::getClassType() {
    return IfcStackTerminalType::s_type;
}

const Step::ClassType &IfcStackTerminalType::getType() const {
    return IfcStackTerminalType::s_type;
}

bool IfcStackTerminalType::isOfType(const Step::ClassType &t) const {
    return IfcStackTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcStackTerminalTypeEnum IfcStackTerminalType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcStackTerminalTypeEnum_UNSET;
    }
}

const IfcStackTerminalTypeEnum IfcStackTerminalType::getPredefinedType() const {
    IfcStackTerminalType * deConstObject = const_cast< IfcStackTerminalType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcStackTerminalType::setPredefinedType(IfcStackTerminalTypeEnum value) {
    m_predefinedType = value;
}

void IfcStackTerminalType::unsetPredefinedType() {
    m_predefinedType = IfcStackTerminalTypeEnum_UNSET;
}

bool IfcStackTerminalType::testPredefinedType() const {
    return getPredefinedType() != IfcStackTerminalTypeEnum_UNSET;
}

bool IfcStackTerminalType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcStackTerminalTypeEnum_UNSET;
    }
    else {
        if (arg == ".BIRDCAGE.") {
            m_predefinedType = IfcStackTerminalTypeEnum_BIRDCAGE;
        }
        else if (arg == ".COWL.") {
            m_predefinedType = IfcStackTerminalTypeEnum_COWL;
        }
        else if (arg == ".RAINWATERHOPPER.") {
            m_predefinedType = IfcStackTerminalTypeEnum_RAINWATERHOPPER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcStackTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcStackTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcStackTerminalType::copy(const IfcStackTerminalType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStackTerminalType::s_type("IfcStackTerminalType");
