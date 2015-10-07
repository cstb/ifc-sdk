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



#include <ifc2x3/IfcUnitaryEquipmentType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcUnitaryEquipmentType::IfcUnitaryEquipmentType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcUnitaryEquipmentTypeEnum_UNSET;
}

IfcUnitaryEquipmentType::~IfcUnitaryEquipmentType() {
}

bool IfcUnitaryEquipmentType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcUnitaryEquipmentType(this);
}

const std::string &IfcUnitaryEquipmentType::type() const {
    return IfcUnitaryEquipmentType::s_type.getName();
}

const Step::ClassType &IfcUnitaryEquipmentType::getClassType() {
    return IfcUnitaryEquipmentType::s_type;
}

const Step::ClassType &IfcUnitaryEquipmentType::getType() const {
    return IfcUnitaryEquipmentType::s_type;
}

bool IfcUnitaryEquipmentType::isOfType(const Step::ClassType &t) const {
    return IfcUnitaryEquipmentType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcUnitaryEquipmentTypeEnum IfcUnitaryEquipmentType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcUnitaryEquipmentTypeEnum_UNSET;
    }
}

const IfcUnitaryEquipmentTypeEnum IfcUnitaryEquipmentType::getPredefinedType() const {
    IfcUnitaryEquipmentType * deConstObject = const_cast< IfcUnitaryEquipmentType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcUnitaryEquipmentType::setPredefinedType(IfcUnitaryEquipmentTypeEnum value) {
    m_predefinedType = value;
}

void IfcUnitaryEquipmentType::unsetPredefinedType() {
    m_predefinedType = IfcUnitaryEquipmentTypeEnum_UNSET;
}

bool IfcUnitaryEquipmentType::testPredefinedType() const {
    return getPredefinedType() != IfcUnitaryEquipmentTypeEnum_UNSET;
}

bool IfcUnitaryEquipmentType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcUnitaryEquipmentTypeEnum_UNSET;
    }
    else {
        if (arg == ".AIRHANDLER.") {
            m_predefinedType = IfcUnitaryEquipmentTypeEnum_AIRHANDLER;
        }
        else if (arg == ".AIRCONDITIONINGUNIT.") {
            m_predefinedType = IfcUnitaryEquipmentTypeEnum_AIRCONDITIONINGUNIT;
        }
        else if (arg == ".SPLITSYSTEM.") {
            m_predefinedType = IfcUnitaryEquipmentTypeEnum_SPLITSYSTEM;
        }
        else if (arg == ".ROOFTOPUNIT.") {
            m_predefinedType = IfcUnitaryEquipmentTypeEnum_ROOFTOPUNIT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcUnitaryEquipmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcUnitaryEquipmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcUnitaryEquipmentType::copy(const IfcUnitaryEquipmentType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcUnitaryEquipmentType::s_type("IfcUnitaryEquipmentType");
