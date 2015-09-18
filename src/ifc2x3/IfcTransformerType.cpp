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



#include <ifc2x3/IfcTransformerType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTransformerType::IfcTransformerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcTransformerTypeEnum_UNSET;
}

IfcTransformerType::~IfcTransformerType() {
}

bool IfcTransformerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTransformerType(this);
}

const std::string &IfcTransformerType::type() const {
    return IfcTransformerType::s_type.getName();
}

const Step::ClassType &IfcTransformerType::getClassType() {
    return IfcTransformerType::s_type;
}

const Step::ClassType &IfcTransformerType::getType() const {
    return IfcTransformerType::s_type;
}

bool IfcTransformerType::isOfType(const Step::ClassType &t) const {
    return IfcTransformerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcTransformerTypeEnum IfcTransformerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcTransformerTypeEnum_UNSET;
    }
}

const IfcTransformerTypeEnum IfcTransformerType::getPredefinedType() const {
    IfcTransformerType * deConstObject = const_cast< IfcTransformerType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcTransformerType::setPredefinedType(IfcTransformerTypeEnum value) {
    m_predefinedType = value;
}

void IfcTransformerType::unsetPredefinedType() {
    m_predefinedType = IfcTransformerTypeEnum_UNSET;
}

bool IfcTransformerType::testPredefinedType() const {
    return getPredefinedType() != IfcTransformerTypeEnum_UNSET;
}

bool IfcTransformerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcTransformerTypeEnum_UNSET;
    }
    else {
        if (arg == ".CURRENT.") {
            m_predefinedType = IfcTransformerTypeEnum_CURRENT;
        }
        else if (arg == ".FREQUENCY.") {
            m_predefinedType = IfcTransformerTypeEnum_FREQUENCY;
        }
        else if (arg == ".VOLTAGE.") {
            m_predefinedType = IfcTransformerTypeEnum_VOLTAGE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcTransformerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcTransformerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTransformerType::copy(const IfcTransformerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTransformerType::s_type("IfcTransformerType");
