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



#include <ifc2x3/IfcFlowMeterType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowControllerType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFlowMeterType::IfcFlowMeterType(Step::Id id, Step::SPFData *args) : IfcFlowControllerType(id, args) {
    m_predefinedType = IfcFlowMeterTypeEnum_UNSET;
}

IfcFlowMeterType::~IfcFlowMeterType() {
}

bool IfcFlowMeterType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowMeterType(this);
}

const std::string &IfcFlowMeterType::type() const {
    return IfcFlowMeterType::s_type.getName();
}

const Step::ClassType &IfcFlowMeterType::getClassType() {
    return IfcFlowMeterType::s_type;
}

const Step::ClassType &IfcFlowMeterType::getType() const {
    return IfcFlowMeterType::s_type;
}

bool IfcFlowMeterType::isOfType(const Step::ClassType &t) const {
    return IfcFlowMeterType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcFlowMeterTypeEnum IfcFlowMeterType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcFlowMeterTypeEnum_UNSET;
    }
}

const IfcFlowMeterTypeEnum IfcFlowMeterType::getPredefinedType() const {
    IfcFlowMeterType * deConstObject = const_cast< IfcFlowMeterType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcFlowMeterType::setPredefinedType(IfcFlowMeterTypeEnum value) {
    m_predefinedType = value;
}

void IfcFlowMeterType::unsetPredefinedType() {
    m_predefinedType = IfcFlowMeterTypeEnum_UNSET;
}

bool IfcFlowMeterType::testPredefinedType() const {
    return getPredefinedType() != IfcFlowMeterTypeEnum_UNSET;
}

bool IfcFlowMeterType::init() {
    bool status = IfcFlowControllerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcFlowMeterTypeEnum_UNSET;
    }
    else {
        if (arg == ".ELECTRICMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_ELECTRICMETER;
        }
        else if (arg == ".ENERGYMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_ENERGYMETER;
        }
        else if (arg == ".FLOWMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_FLOWMETER;
        }
        else if (arg == ".GASMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_GASMETER;
        }
        else if (arg == ".OILMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_OILMETER;
        }
        else if (arg == ".WATERMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_WATERMETER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcFlowMeterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcFlowMeterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFlowMeterType::copy(const IfcFlowMeterType &obj, const CopyOp &copyop) {
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFlowMeterType::s_type("IfcFlowMeterType");
