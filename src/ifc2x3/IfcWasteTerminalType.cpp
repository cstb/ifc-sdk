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



#include <ifc2x3/IfcWasteTerminalType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowTerminalType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcWasteTerminalType::IfcWasteTerminalType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcWasteTerminalTypeEnum_UNSET;
}

IfcWasteTerminalType::~IfcWasteTerminalType() {
}

bool IfcWasteTerminalType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWasteTerminalType(this);
}

const std::string &IfcWasteTerminalType::type() const {
    return IfcWasteTerminalType::s_type.getName();
}

const Step::ClassType &IfcWasteTerminalType::getClassType() {
    return IfcWasteTerminalType::s_type;
}

const Step::ClassType &IfcWasteTerminalType::getType() const {
    return IfcWasteTerminalType::s_type;
}

bool IfcWasteTerminalType::isOfType(const Step::ClassType &t) const {
    return IfcWasteTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcWasteTerminalTypeEnum IfcWasteTerminalType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcWasteTerminalTypeEnum_UNSET;
    }
}

const IfcWasteTerminalTypeEnum IfcWasteTerminalType::getPredefinedType() const {
    IfcWasteTerminalType * deConstObject = const_cast< IfcWasteTerminalType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcWasteTerminalType::setPredefinedType(IfcWasteTerminalTypeEnum value) {
    m_predefinedType = value;
}

void IfcWasteTerminalType::unsetPredefinedType() {
    m_predefinedType = IfcWasteTerminalTypeEnum_UNSET;
}

bool IfcWasteTerminalType::testPredefinedType() const {
    return getPredefinedType() != IfcWasteTerminalTypeEnum_UNSET;
}

bool IfcWasteTerminalType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcWasteTerminalTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLOORTRAP.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_FLOORTRAP;
        }
        else if (arg == ".FLOORWASTE.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_FLOORWASTE;
        }
        else if (arg == ".GULLYSUMP.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_GULLYSUMP;
        }
        else if (arg == ".GULLYTRAP.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_GULLYTRAP;
        }
        else if (arg == ".GREASEINTERCEPTOR.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_GREASEINTERCEPTOR;
        }
        else if (arg == ".OILINTERCEPTOR.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_OILINTERCEPTOR;
        }
        else if (arg == ".PETROLINTERCEPTOR.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_PETROLINTERCEPTOR;
        }
        else if (arg == ".ROOFDRAIN.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_ROOFDRAIN;
        }
        else if (arg == ".WASTEDISPOSALUNIT.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_WASTEDISPOSALUNIT;
        }
        else if (arg == ".WASTETRAP.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_WASTETRAP;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcWasteTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcWasteTerminalType::copy(const IfcWasteTerminalType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcWasteTerminalType::s_type("IfcWasteTerminalType");
