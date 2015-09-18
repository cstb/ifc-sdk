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



#include <ifc2x3/IfcEvaporatorType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcEvaporatorType::IfcEvaporatorType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcEvaporatorTypeEnum_UNSET;
}

IfcEvaporatorType::~IfcEvaporatorType() {
}

bool IfcEvaporatorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEvaporatorType(this);
}

const std::string &IfcEvaporatorType::type() const {
    return IfcEvaporatorType::s_type.getName();
}

const Step::ClassType &IfcEvaporatorType::getClassType() {
    return IfcEvaporatorType::s_type;
}

const Step::ClassType &IfcEvaporatorType::getType() const {
    return IfcEvaporatorType::s_type;
}

bool IfcEvaporatorType::isOfType(const Step::ClassType &t) const {
    return IfcEvaporatorType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcEvaporatorTypeEnum IfcEvaporatorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcEvaporatorTypeEnum_UNSET;
    }
}

const IfcEvaporatorTypeEnum IfcEvaporatorType::getPredefinedType() const {
    IfcEvaporatorType * deConstObject = const_cast< IfcEvaporatorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcEvaporatorType::setPredefinedType(IfcEvaporatorTypeEnum value) {
    m_predefinedType = value;
}

void IfcEvaporatorType::unsetPredefinedType() {
    m_predefinedType = IfcEvaporatorTypeEnum_UNSET;
}

bool IfcEvaporatorType::testPredefinedType() const {
    return getPredefinedType() != IfcEvaporatorTypeEnum_UNSET;
}

bool IfcEvaporatorType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcEvaporatorTypeEnum_UNSET;
    }
    else {
        if (arg == ".DIRECTEXPANSIONSHELLANDTUBE.") {
            m_predefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONSHELLANDTUBE;
        }
        else if (arg == ".DIRECTEXPANSIONTUBEINTUBE.") {
            m_predefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONTUBEINTUBE;
        }
        else if (arg == ".DIRECTEXPANSIONBRAZEDPLATE.") {
            m_predefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONBRAZEDPLATE;
        }
        else if (arg == ".FLOODEDSHELLANDTUBE.") {
            m_predefinedType = IfcEvaporatorTypeEnum_FLOODEDSHELLANDTUBE;
        }
        else if (arg == ".SHELLANDCOIL.") {
            m_predefinedType = IfcEvaporatorTypeEnum_SHELLANDCOIL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcEvaporatorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcEvaporatorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcEvaporatorType::copy(const IfcEvaporatorType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcEvaporatorType::s_type("IfcEvaporatorType");
