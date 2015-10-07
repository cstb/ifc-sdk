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



#include <ifc2x3/IfcCompressorType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowMovingDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCompressorType::IfcCompressorType(Step::Id id, Step::SPFData *args) : IfcFlowMovingDeviceType(id, args) {
    m_predefinedType = IfcCompressorTypeEnum_UNSET;
}

IfcCompressorType::~IfcCompressorType() {
}

bool IfcCompressorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCompressorType(this);
}

const std::string &IfcCompressorType::type() const {
    return IfcCompressorType::s_type.getName();
}

const Step::ClassType &IfcCompressorType::getClassType() {
    return IfcCompressorType::s_type;
}

const Step::ClassType &IfcCompressorType::getType() const {
    return IfcCompressorType::s_type;
}

bool IfcCompressorType::isOfType(const Step::ClassType &t) const {
    return IfcCompressorType::s_type == t ? true : IfcFlowMovingDeviceType::isOfType(t);
}

IfcCompressorTypeEnum IfcCompressorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCompressorTypeEnum_UNSET;
    }
}

const IfcCompressorTypeEnum IfcCompressorType::getPredefinedType() const {
    IfcCompressorType * deConstObject = const_cast< IfcCompressorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCompressorType::setPredefinedType(IfcCompressorTypeEnum value) {
    m_predefinedType = value;
}

void IfcCompressorType::unsetPredefinedType() {
    m_predefinedType = IfcCompressorTypeEnum_UNSET;
}

bool IfcCompressorType::testPredefinedType() const {
    return getPredefinedType() != IfcCompressorTypeEnum_UNSET;
}

bool IfcCompressorType::init() {
    bool status = IfcFlowMovingDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCompressorTypeEnum_UNSET;
    }
    else {
        if (arg == ".DYNAMIC.") {
            m_predefinedType = IfcCompressorTypeEnum_DYNAMIC;
        }
        else if (arg == ".RECIPROCATING.") {
            m_predefinedType = IfcCompressorTypeEnum_RECIPROCATING;
        }
        else if (arg == ".ROTARY.") {
            m_predefinedType = IfcCompressorTypeEnum_ROTARY;
        }
        else if (arg == ".SCROLL.") {
            m_predefinedType = IfcCompressorTypeEnum_SCROLL;
        }
        else if (arg == ".TROCHOIDAL.") {
            m_predefinedType = IfcCompressorTypeEnum_TROCHOIDAL;
        }
        else if (arg == ".SINGLESTAGE.") {
            m_predefinedType = IfcCompressorTypeEnum_SINGLESTAGE;
        }
        else if (arg == ".BOOSTER.") {
            m_predefinedType = IfcCompressorTypeEnum_BOOSTER;
        }
        else if (arg == ".OPENTYPE.") {
            m_predefinedType = IfcCompressorTypeEnum_OPENTYPE;
        }
        else if (arg == ".HERMETIC.") {
            m_predefinedType = IfcCompressorTypeEnum_HERMETIC;
        }
        else if (arg == ".SEMIHERMETIC.") {
            m_predefinedType = IfcCompressorTypeEnum_SEMIHERMETIC;
        }
        else if (arg == ".WELDEDSHELLHERMETIC.") {
            m_predefinedType = IfcCompressorTypeEnum_WELDEDSHELLHERMETIC;
        }
        else if (arg == ".ROLLINGPISTON.") {
            m_predefinedType = IfcCompressorTypeEnum_ROLLINGPISTON;
        }
        else if (arg == ".ROTARYVANE.") {
            m_predefinedType = IfcCompressorTypeEnum_ROTARYVANE;
        }
        else if (arg == ".SINGLESCREW.") {
            m_predefinedType = IfcCompressorTypeEnum_SINGLESCREW;
        }
        else if (arg == ".TWINSCREW.") {
            m_predefinedType = IfcCompressorTypeEnum_TWINSCREW;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCompressorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCompressorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCompressorType::copy(const IfcCompressorType &obj, const CopyOp &copyop) {
    IfcFlowMovingDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCompressorType::s_type("IfcCompressorType");
