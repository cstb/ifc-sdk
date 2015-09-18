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



#include <ifc2x3/IfcCooledBeamType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCooledBeamType::IfcCooledBeamType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcCooledBeamTypeEnum_UNSET;
}

IfcCooledBeamType::~IfcCooledBeamType() {
}

bool IfcCooledBeamType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCooledBeamType(this);
}

const std::string &IfcCooledBeamType::type() const {
    return IfcCooledBeamType::s_type.getName();
}

const Step::ClassType &IfcCooledBeamType::getClassType() {
    return IfcCooledBeamType::s_type;
}

const Step::ClassType &IfcCooledBeamType::getType() const {
    return IfcCooledBeamType::s_type;
}

bool IfcCooledBeamType::isOfType(const Step::ClassType &t) const {
    return IfcCooledBeamType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcCooledBeamTypeEnum IfcCooledBeamType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCooledBeamTypeEnum_UNSET;
    }
}

const IfcCooledBeamTypeEnum IfcCooledBeamType::getPredefinedType() const {
    IfcCooledBeamType * deConstObject = const_cast< IfcCooledBeamType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCooledBeamType::setPredefinedType(IfcCooledBeamTypeEnum value) {
    m_predefinedType = value;
}

void IfcCooledBeamType::unsetPredefinedType() {
    m_predefinedType = IfcCooledBeamTypeEnum_UNSET;
}

bool IfcCooledBeamType::testPredefinedType() const {
    return getPredefinedType() != IfcCooledBeamTypeEnum_UNSET;
}

bool IfcCooledBeamType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCooledBeamTypeEnum_UNSET;
    }
    else {
        if (arg == ".ACTIVE.") {
            m_predefinedType = IfcCooledBeamTypeEnum_ACTIVE;
        }
        else if (arg == ".PASSIVE.") {
            m_predefinedType = IfcCooledBeamTypeEnum_PASSIVE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCooledBeamTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCooledBeamTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCooledBeamType::copy(const IfcCooledBeamType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCooledBeamType::s_type("IfcCooledBeamType");
