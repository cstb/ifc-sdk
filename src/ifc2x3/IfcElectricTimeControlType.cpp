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



#include <ifc2x3/IfcElectricTimeControlType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowControllerType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElectricTimeControlType::IfcElectricTimeControlType(Step::Id id, Step::SPFData *args) : IfcFlowControllerType(id, args) {
    m_predefinedType = IfcElectricTimeControlTypeEnum_UNSET;
}

IfcElectricTimeControlType::~IfcElectricTimeControlType() {
}

bool IfcElectricTimeControlType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricTimeControlType(this);
}

const std::string &IfcElectricTimeControlType::type() const {
    return IfcElectricTimeControlType::s_type.getName();
}

const Step::ClassType &IfcElectricTimeControlType::getClassType() {
    return IfcElectricTimeControlType::s_type;
}

const Step::ClassType &IfcElectricTimeControlType::getType() const {
    return IfcElectricTimeControlType::s_type;
}

bool IfcElectricTimeControlType::isOfType(const Step::ClassType &t) const {
    return IfcElectricTimeControlType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcElectricTimeControlTypeEnum IfcElectricTimeControlType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricTimeControlTypeEnum_UNSET;
    }
}

const IfcElectricTimeControlTypeEnum IfcElectricTimeControlType::getPredefinedType() const {
    IfcElectricTimeControlType * deConstObject = const_cast< IfcElectricTimeControlType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcElectricTimeControlType::setPredefinedType(IfcElectricTimeControlTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricTimeControlType::unsetPredefinedType() {
    m_predefinedType = IfcElectricTimeControlTypeEnum_UNSET;
}

bool IfcElectricTimeControlType::testPredefinedType() const {
    return getPredefinedType() != IfcElectricTimeControlTypeEnum_UNSET;
}

bool IfcElectricTimeControlType::init() {
    bool status = IfcFlowControllerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricTimeControlTypeEnum_UNSET;
    }
    else {
        if (arg == ".TIMECLOCK.") {
            m_predefinedType = IfcElectricTimeControlTypeEnum_TIMECLOCK;
        }
        else if (arg == ".TIMEDELAY.") {
            m_predefinedType = IfcElectricTimeControlTypeEnum_TIMEDELAY;
        }
        else if (arg == ".RELAY.") {
            m_predefinedType = IfcElectricTimeControlTypeEnum_RELAY;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricTimeControlTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricTimeControlTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricTimeControlType::copy(const IfcElectricTimeControlType &obj, const CopyOp &copyop) {
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElectricTimeControlType::s_type("IfcElectricTimeControlType");
