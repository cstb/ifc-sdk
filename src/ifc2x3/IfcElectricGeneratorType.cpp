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



#include <ifc2x3/IfcElectricGeneratorType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElectricGeneratorType::IfcElectricGeneratorType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcElectricGeneratorTypeEnum_UNSET;
}

IfcElectricGeneratorType::~IfcElectricGeneratorType() {
}

bool IfcElectricGeneratorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricGeneratorType(this);
}

const std::string &IfcElectricGeneratorType::type() const {
    return IfcElectricGeneratorType::s_type.getName();
}

const Step::ClassType &IfcElectricGeneratorType::getClassType() {
    return IfcElectricGeneratorType::s_type;
}

const Step::ClassType &IfcElectricGeneratorType::getType() const {
    return IfcElectricGeneratorType::s_type;
}

bool IfcElectricGeneratorType::isOfType(const Step::ClassType &t) const {
    return IfcElectricGeneratorType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcElectricGeneratorTypeEnum IfcElectricGeneratorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricGeneratorTypeEnum_UNSET;
    }
}

const IfcElectricGeneratorTypeEnum IfcElectricGeneratorType::getPredefinedType() const {
    IfcElectricGeneratorType * deConstObject = const_cast< IfcElectricGeneratorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcElectricGeneratorType::setPredefinedType(IfcElectricGeneratorTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricGeneratorType::unsetPredefinedType() {
    m_predefinedType = IfcElectricGeneratorTypeEnum_UNSET;
}

bool IfcElectricGeneratorType::testPredefinedType() const {
    return getPredefinedType() != IfcElectricGeneratorTypeEnum_UNSET;
}

bool IfcElectricGeneratorType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricGeneratorTypeEnum_UNSET;
    }
    else {
        if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricGeneratorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricGeneratorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricGeneratorType::copy(const IfcElectricGeneratorType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElectricGeneratorType::s_type("IfcElectricGeneratorType");
