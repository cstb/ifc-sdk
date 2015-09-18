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



#include <ifc2x3/IfcLampType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowTerminalType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLampType::IfcLampType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcLampTypeEnum_UNSET;
}

IfcLampType::~IfcLampType() {
}

bool IfcLampType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLampType(this);
}

const std::string &IfcLampType::type() const {
    return IfcLampType::s_type.getName();
}

const Step::ClassType &IfcLampType::getClassType() {
    return IfcLampType::s_type;
}

const Step::ClassType &IfcLampType::getType() const {
    return IfcLampType::s_type;
}

bool IfcLampType::isOfType(const Step::ClassType &t) const {
    return IfcLampType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcLampTypeEnum IfcLampType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcLampTypeEnum_UNSET;
    }
}

const IfcLampTypeEnum IfcLampType::getPredefinedType() const {
    IfcLampType * deConstObject = const_cast< IfcLampType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcLampType::setPredefinedType(IfcLampTypeEnum value) {
    m_predefinedType = value;
}

void IfcLampType::unsetPredefinedType() {
    m_predefinedType = IfcLampTypeEnum_UNSET;
}

bool IfcLampType::testPredefinedType() const {
    return getPredefinedType() != IfcLampTypeEnum_UNSET;
}

bool IfcLampType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcLampTypeEnum_UNSET;
    }
    else {
        if (arg == ".COMPACTFLUORESCENT.") {
            m_predefinedType = IfcLampTypeEnum_COMPACTFLUORESCENT;
        }
        else if (arg == ".FLUORESCENT.") {
            m_predefinedType = IfcLampTypeEnum_FLUORESCENT;
        }
        else if (arg == ".HIGHPRESSUREMERCURY.") {
            m_predefinedType = IfcLampTypeEnum_HIGHPRESSUREMERCURY;
        }
        else if (arg == ".HIGHPRESSURESODIUM.") {
            m_predefinedType = IfcLampTypeEnum_HIGHPRESSURESODIUM;
        }
        else if (arg == ".METALHALIDE.") {
            m_predefinedType = IfcLampTypeEnum_METALHALIDE;
        }
        else if (arg == ".TUNGSTENFILAMENT.") {
            m_predefinedType = IfcLampTypeEnum_TUNGSTENFILAMENT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcLampTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcLampTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcLampType::copy(const IfcLampType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLampType::s_type("IfcLampType");
