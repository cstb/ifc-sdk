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



#include <ifc2x3/IfcHeatExchangerType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcHeatExchangerType::IfcHeatExchangerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcHeatExchangerTypeEnum_UNSET;
}

IfcHeatExchangerType::~IfcHeatExchangerType() {
}

bool IfcHeatExchangerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcHeatExchangerType(this);
}

const std::string &IfcHeatExchangerType::type() const {
    return IfcHeatExchangerType::s_type.getName();
}

const Step::ClassType &IfcHeatExchangerType::getClassType() {
    return IfcHeatExchangerType::s_type;
}

const Step::ClassType &IfcHeatExchangerType::getType() const {
    return IfcHeatExchangerType::s_type;
}

bool IfcHeatExchangerType::isOfType(const Step::ClassType &t) const {
    return IfcHeatExchangerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcHeatExchangerTypeEnum IfcHeatExchangerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcHeatExchangerTypeEnum_UNSET;
    }
}

const IfcHeatExchangerTypeEnum IfcHeatExchangerType::getPredefinedType() const {
    IfcHeatExchangerType * deConstObject = const_cast< IfcHeatExchangerType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcHeatExchangerType::setPredefinedType(IfcHeatExchangerTypeEnum value) {
    m_predefinedType = value;
}

void IfcHeatExchangerType::unsetPredefinedType() {
    m_predefinedType = IfcHeatExchangerTypeEnum_UNSET;
}

bool IfcHeatExchangerType::testPredefinedType() const {
    return getPredefinedType() != IfcHeatExchangerTypeEnum_UNSET;
}

bool IfcHeatExchangerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcHeatExchangerTypeEnum_UNSET;
    }
    else {
        if (arg == ".PLATE.") {
            m_predefinedType = IfcHeatExchangerTypeEnum_PLATE;
        }
        else if (arg == ".SHELLANDTUBE.") {
            m_predefinedType = IfcHeatExchangerTypeEnum_SHELLANDTUBE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcHeatExchangerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcHeatExchangerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcHeatExchangerType::copy(const IfcHeatExchangerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcHeatExchangerType::s_type("IfcHeatExchangerType");
