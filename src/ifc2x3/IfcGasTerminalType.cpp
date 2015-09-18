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



#include <ifc2x3/IfcGasTerminalType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowTerminalType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcGasTerminalType::IfcGasTerminalType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcGasTerminalTypeEnum_UNSET;
}

IfcGasTerminalType::~IfcGasTerminalType() {
}

bool IfcGasTerminalType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGasTerminalType(this);
}

const std::string &IfcGasTerminalType::type() const {
    return IfcGasTerminalType::s_type.getName();
}

const Step::ClassType &IfcGasTerminalType::getClassType() {
    return IfcGasTerminalType::s_type;
}

const Step::ClassType &IfcGasTerminalType::getType() const {
    return IfcGasTerminalType::s_type;
}

bool IfcGasTerminalType::isOfType(const Step::ClassType &t) const {
    return IfcGasTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcGasTerminalTypeEnum IfcGasTerminalType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcGasTerminalTypeEnum_UNSET;
    }
}

const IfcGasTerminalTypeEnum IfcGasTerminalType::getPredefinedType() const {
    IfcGasTerminalType * deConstObject = const_cast< IfcGasTerminalType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcGasTerminalType::setPredefinedType(IfcGasTerminalTypeEnum value) {
    m_predefinedType = value;
}

void IfcGasTerminalType::unsetPredefinedType() {
    m_predefinedType = IfcGasTerminalTypeEnum_UNSET;
}

bool IfcGasTerminalType::testPredefinedType() const {
    return getPredefinedType() != IfcGasTerminalTypeEnum_UNSET;
}

bool IfcGasTerminalType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcGasTerminalTypeEnum_UNSET;
    }
    else {
        if (arg == ".GASAPPLIANCE.") {
            m_predefinedType = IfcGasTerminalTypeEnum_GASAPPLIANCE;
        }
        else if (arg == ".GASBOOSTER.") {
            m_predefinedType = IfcGasTerminalTypeEnum_GASBOOSTER;
        }
        else if (arg == ".GASBURNER.") {
            m_predefinedType = IfcGasTerminalTypeEnum_GASBURNER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcGasTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcGasTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcGasTerminalType::copy(const IfcGasTerminalType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGasTerminalType::s_type("IfcGasTerminalType");
