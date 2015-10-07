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



#include <ifc2x3/IfcTransportElementType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTransportElementType::IfcTransportElementType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
    m_predefinedType = IfcTransportElementTypeEnum_UNSET;
}

IfcTransportElementType::~IfcTransportElementType() {
}

bool IfcTransportElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTransportElementType(this);
}

const std::string &IfcTransportElementType::type() const {
    return IfcTransportElementType::s_type.getName();
}

const Step::ClassType &IfcTransportElementType::getClassType() {
    return IfcTransportElementType::s_type;
}

const Step::ClassType &IfcTransportElementType::getType() const {
    return IfcTransportElementType::s_type;
}

bool IfcTransportElementType::isOfType(const Step::ClassType &t) const {
    return IfcTransportElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

IfcTransportElementTypeEnum IfcTransportElementType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcTransportElementTypeEnum_UNSET;
    }
}

const IfcTransportElementTypeEnum IfcTransportElementType::getPredefinedType() const {
    IfcTransportElementType * deConstObject = const_cast< IfcTransportElementType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcTransportElementType::setPredefinedType(IfcTransportElementTypeEnum value) {
    m_predefinedType = value;
}

void IfcTransportElementType::unsetPredefinedType() {
    m_predefinedType = IfcTransportElementTypeEnum_UNSET;
}

bool IfcTransportElementType::testPredefinedType() const {
    return getPredefinedType() != IfcTransportElementTypeEnum_UNSET;
}

bool IfcTransportElementType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcTransportElementTypeEnum_UNSET;
    }
    else {
        if (arg == ".ELEVATOR.") {
            m_predefinedType = IfcTransportElementTypeEnum_ELEVATOR;
        }
        else if (arg == ".ESCALATOR.") {
            m_predefinedType = IfcTransportElementTypeEnum_ESCALATOR;
        }
        else if (arg == ".MOVINGWALKWAY.") {
            m_predefinedType = IfcTransportElementTypeEnum_MOVINGWALKWAY;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcTransportElementTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcTransportElementTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTransportElementType::copy(const IfcTransportElementType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTransportElementType::s_type("IfcTransportElementType");
