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



#include <ifc2x3/IfcElectricMotorType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElectricMotorType::IfcElectricMotorType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcElectricMotorTypeEnum_UNSET;
}

IfcElectricMotorType::~IfcElectricMotorType() {
}

bool IfcElectricMotorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricMotorType(this);
}

const std::string &IfcElectricMotorType::type() const {
    return IfcElectricMotorType::s_type.getName();
}

const Step::ClassType &IfcElectricMotorType::getClassType() {
    return IfcElectricMotorType::s_type;
}

const Step::ClassType &IfcElectricMotorType::getType() const {
    return IfcElectricMotorType::s_type;
}

bool IfcElectricMotorType::isOfType(const Step::ClassType &t) const {
    return IfcElectricMotorType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcElectricMotorTypeEnum IfcElectricMotorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricMotorTypeEnum_UNSET;
    }
}

const IfcElectricMotorTypeEnum IfcElectricMotorType::getPredefinedType() const {
    IfcElectricMotorType * deConstObject = const_cast< IfcElectricMotorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcElectricMotorType::setPredefinedType(IfcElectricMotorTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricMotorType::unsetPredefinedType() {
    m_predefinedType = IfcElectricMotorTypeEnum_UNSET;
}

bool IfcElectricMotorType::testPredefinedType() const {
    return getPredefinedType() != IfcElectricMotorTypeEnum_UNSET;
}

bool IfcElectricMotorType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricMotorTypeEnum_UNSET;
    }
    else {
        if (arg == ".DC.") {
            m_predefinedType = IfcElectricMotorTypeEnum_DC;
        }
        else if (arg == ".INDUCTION.") {
            m_predefinedType = IfcElectricMotorTypeEnum_INDUCTION;
        }
        else if (arg == ".POLYPHASE.") {
            m_predefinedType = IfcElectricMotorTypeEnum_POLYPHASE;
        }
        else if (arg == ".RELUCTANCESYNCHRONOUS.") {
            m_predefinedType = IfcElectricMotorTypeEnum_RELUCTANCESYNCHRONOUS;
        }
        else if (arg == ".SYNCHRONOUS.") {
            m_predefinedType = IfcElectricMotorTypeEnum_SYNCHRONOUS;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricMotorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricMotorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricMotorType::copy(const IfcElectricMotorType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElectricMotorType::s_type("IfcElectricMotorType");
