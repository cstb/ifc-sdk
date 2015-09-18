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



#include <ifc2x3/IfcTankType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowStorageDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTankType::IfcTankType(Step::Id id, Step::SPFData *args) : IfcFlowStorageDeviceType(id, args) {
    m_predefinedType = IfcTankTypeEnum_UNSET;
}

IfcTankType::~IfcTankType() {
}

bool IfcTankType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTankType(this);
}

const std::string &IfcTankType::type() const {
    return IfcTankType::s_type.getName();
}

const Step::ClassType &IfcTankType::getClassType() {
    return IfcTankType::s_type;
}

const Step::ClassType &IfcTankType::getType() const {
    return IfcTankType::s_type;
}

bool IfcTankType::isOfType(const Step::ClassType &t) const {
    return IfcTankType::s_type == t ? true : IfcFlowStorageDeviceType::isOfType(t);
}

IfcTankTypeEnum IfcTankType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcTankTypeEnum_UNSET;
    }
}

const IfcTankTypeEnum IfcTankType::getPredefinedType() const {
    IfcTankType * deConstObject = const_cast< IfcTankType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcTankType::setPredefinedType(IfcTankTypeEnum value) {
    m_predefinedType = value;
}

void IfcTankType::unsetPredefinedType() {
    m_predefinedType = IfcTankTypeEnum_UNSET;
}

bool IfcTankType::testPredefinedType() const {
    return getPredefinedType() != IfcTankTypeEnum_UNSET;
}

bool IfcTankType::init() {
    bool status = IfcFlowStorageDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcTankTypeEnum_UNSET;
    }
    else {
        if (arg == ".PREFORMED.") {
            m_predefinedType = IfcTankTypeEnum_PREFORMED;
        }
        else if (arg == ".SECTIONAL.") {
            m_predefinedType = IfcTankTypeEnum_SECTIONAL;
        }
        else if (arg == ".EXPANSION.") {
            m_predefinedType = IfcTankTypeEnum_EXPANSION;
        }
        else if (arg == ".PRESSUREVESSEL.") {
            m_predefinedType = IfcTankTypeEnum_PRESSUREVESSEL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcTankTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcTankTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTankType::copy(const IfcTankType &obj, const CopyOp &copyop) {
    IfcFlowStorageDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTankType::s_type("IfcTankType");
