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



#include <ifc2x3/IfcElectricFlowStorageDeviceType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowStorageDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElectricFlowStorageDeviceType::IfcElectricFlowStorageDeviceType(Step::Id id, Step::SPFData *args) : IfcFlowStorageDeviceType(id, args) {
    m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
}

IfcElectricFlowStorageDeviceType::~IfcElectricFlowStorageDeviceType() {
}

bool IfcElectricFlowStorageDeviceType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricFlowStorageDeviceType(this);
}

const std::string &IfcElectricFlowStorageDeviceType::type() const {
    return IfcElectricFlowStorageDeviceType::s_type.getName();
}

const Step::ClassType &IfcElectricFlowStorageDeviceType::getClassType() {
    return IfcElectricFlowStorageDeviceType::s_type;
}

const Step::ClassType &IfcElectricFlowStorageDeviceType::getType() const {
    return IfcElectricFlowStorageDeviceType::s_type;
}

bool IfcElectricFlowStorageDeviceType::isOfType(const Step::ClassType &t) const {
    return IfcElectricFlowStorageDeviceType::s_type == t ? true : IfcFlowStorageDeviceType::isOfType(t);
}

IfcElectricFlowStorageDeviceTypeEnum IfcElectricFlowStorageDeviceType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricFlowStorageDeviceTypeEnum_UNSET;
    }
}

const IfcElectricFlowStorageDeviceTypeEnum IfcElectricFlowStorageDeviceType::getPredefinedType() const {
    IfcElectricFlowStorageDeviceType * deConstObject = const_cast< IfcElectricFlowStorageDeviceType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcElectricFlowStorageDeviceType::setPredefinedType(IfcElectricFlowStorageDeviceTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricFlowStorageDeviceType::unsetPredefinedType() {
    m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
}

bool IfcElectricFlowStorageDeviceType::testPredefinedType() const {
    return getPredefinedType() != IfcElectricFlowStorageDeviceTypeEnum_UNSET;
}

bool IfcElectricFlowStorageDeviceType::init() {
    bool status = IfcFlowStorageDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
    }
    else {
        if (arg == ".BATTERY.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_BATTERY;
        }
        else if (arg == ".CAPACITORBANK.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_CAPACITORBANK;
        }
        else if (arg == ".HARMONICFILTER.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_HARMONICFILTER;
        }
        else if (arg == ".INDUCTORBANK.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_INDUCTORBANK;
        }
        else if (arg == ".UPS.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_UPS;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricFlowStorageDeviceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricFlowStorageDeviceType::copy(const IfcElectricFlowStorageDeviceType &obj, const CopyOp &copyop) {
    IfcFlowStorageDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElectricFlowStorageDeviceType::s_type("IfcElectricFlowStorageDeviceType");
