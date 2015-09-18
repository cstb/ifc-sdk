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



#include <ifc2x3/IfcVibrationIsolatorType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDiscreteAccessoryType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcVibrationIsolatorType::IfcVibrationIsolatorType(Step::Id id, Step::SPFData *args) : IfcDiscreteAccessoryType(id, args) {
    m_predefinedType = IfcVibrationIsolatorTypeEnum_UNSET;
}

IfcVibrationIsolatorType::~IfcVibrationIsolatorType() {
}

bool IfcVibrationIsolatorType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVibrationIsolatorType(this);
}

const std::string &IfcVibrationIsolatorType::type() const {
    return IfcVibrationIsolatorType::s_type.getName();
}

const Step::ClassType &IfcVibrationIsolatorType::getClassType() {
    return IfcVibrationIsolatorType::s_type;
}

const Step::ClassType &IfcVibrationIsolatorType::getType() const {
    return IfcVibrationIsolatorType::s_type;
}

bool IfcVibrationIsolatorType::isOfType(const Step::ClassType &t) const {
    return IfcVibrationIsolatorType::s_type == t ? true : IfcDiscreteAccessoryType::isOfType(t);
}

IfcVibrationIsolatorTypeEnum IfcVibrationIsolatorType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcVibrationIsolatorTypeEnum_UNSET;
    }
}

const IfcVibrationIsolatorTypeEnum IfcVibrationIsolatorType::getPredefinedType() const {
    IfcVibrationIsolatorType * deConstObject = const_cast< IfcVibrationIsolatorType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcVibrationIsolatorType::setPredefinedType(IfcVibrationIsolatorTypeEnum value) {
    m_predefinedType = value;
}

void IfcVibrationIsolatorType::unsetPredefinedType() {
    m_predefinedType = IfcVibrationIsolatorTypeEnum_UNSET;
}

bool IfcVibrationIsolatorType::testPredefinedType() const {
    return getPredefinedType() != IfcVibrationIsolatorTypeEnum_UNSET;
}

bool IfcVibrationIsolatorType::init() {
    bool status = IfcDiscreteAccessoryType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcVibrationIsolatorTypeEnum_UNSET;
    }
    else {
        if (arg == ".COMPRESSION.") {
            m_predefinedType = IfcVibrationIsolatorTypeEnum_COMPRESSION;
        }
        else if (arg == ".SPRING.") {
            m_predefinedType = IfcVibrationIsolatorTypeEnum_SPRING;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcVibrationIsolatorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcVibrationIsolatorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcVibrationIsolatorType::copy(const IfcVibrationIsolatorType &obj, const CopyOp &copyop) {
    IfcDiscreteAccessoryType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcVibrationIsolatorType::s_type("IfcVibrationIsolatorType");
