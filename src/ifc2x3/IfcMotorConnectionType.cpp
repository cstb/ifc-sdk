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



#include <ifc2x3/IfcMotorConnectionType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMotorConnectionType::IfcMotorConnectionType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcMotorConnectionTypeEnum_UNSET;
}

IfcMotorConnectionType::~IfcMotorConnectionType() {
}

bool IfcMotorConnectionType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMotorConnectionType(this);
}

const std::string &IfcMotorConnectionType::type() const {
    return IfcMotorConnectionType::s_type.getName();
}

const Step::ClassType &IfcMotorConnectionType::getClassType() {
    return IfcMotorConnectionType::s_type;
}

const Step::ClassType &IfcMotorConnectionType::getType() const {
    return IfcMotorConnectionType::s_type;
}

bool IfcMotorConnectionType::isOfType(const Step::ClassType &t) const {
    return IfcMotorConnectionType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcMotorConnectionTypeEnum IfcMotorConnectionType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcMotorConnectionTypeEnum_UNSET;
    }
}

const IfcMotorConnectionTypeEnum IfcMotorConnectionType::getPredefinedType() const {
    IfcMotorConnectionType * deConstObject = const_cast< IfcMotorConnectionType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcMotorConnectionType::setPredefinedType(IfcMotorConnectionTypeEnum value) {
    m_predefinedType = value;
}

void IfcMotorConnectionType::unsetPredefinedType() {
    m_predefinedType = IfcMotorConnectionTypeEnum_UNSET;
}

bool IfcMotorConnectionType::testPredefinedType() const {
    return getPredefinedType() != IfcMotorConnectionTypeEnum_UNSET;
}

bool IfcMotorConnectionType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcMotorConnectionTypeEnum_UNSET;
    }
    else {
        if (arg == ".BELTDRIVE.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_BELTDRIVE;
        }
        else if (arg == ".COUPLING.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_COUPLING;
        }
        else if (arg == ".DIRECTDRIVE.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_DIRECTDRIVE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcMotorConnectionType::copy(const IfcMotorConnectionType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMotorConnectionType::s_type("IfcMotorConnectionType");
