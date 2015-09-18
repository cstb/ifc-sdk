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



#include <ifc2x3/IfcTubeBundleType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTubeBundleType::IfcTubeBundleType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcTubeBundleTypeEnum_UNSET;
}

IfcTubeBundleType::~IfcTubeBundleType() {
}

bool IfcTubeBundleType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTubeBundleType(this);
}

const std::string &IfcTubeBundleType::type() const {
    return IfcTubeBundleType::s_type.getName();
}

const Step::ClassType &IfcTubeBundleType::getClassType() {
    return IfcTubeBundleType::s_type;
}

const Step::ClassType &IfcTubeBundleType::getType() const {
    return IfcTubeBundleType::s_type;
}

bool IfcTubeBundleType::isOfType(const Step::ClassType &t) const {
    return IfcTubeBundleType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcTubeBundleTypeEnum IfcTubeBundleType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcTubeBundleTypeEnum_UNSET;
    }
}

const IfcTubeBundleTypeEnum IfcTubeBundleType::getPredefinedType() const {
    IfcTubeBundleType * deConstObject = const_cast< IfcTubeBundleType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcTubeBundleType::setPredefinedType(IfcTubeBundleTypeEnum value) {
    m_predefinedType = value;
}

void IfcTubeBundleType::unsetPredefinedType() {
    m_predefinedType = IfcTubeBundleTypeEnum_UNSET;
}

bool IfcTubeBundleType::testPredefinedType() const {
    return getPredefinedType() != IfcTubeBundleTypeEnum_UNSET;
}

bool IfcTubeBundleType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcTubeBundleTypeEnum_UNSET;
    }
    else {
        if (arg == ".FINNED.") {
            m_predefinedType = IfcTubeBundleTypeEnum_FINNED;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcTubeBundleTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcTubeBundleTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTubeBundleType::copy(const IfcTubeBundleType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTubeBundleType::s_type("IfcTubeBundleType");
