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



#include <ifc2x3/IfcCableSegmentType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowSegmentType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCableSegmentType::IfcCableSegmentType(Step::Id id, Step::SPFData *args) : IfcFlowSegmentType(id, args) {
    m_predefinedType = IfcCableSegmentTypeEnum_UNSET;
}

IfcCableSegmentType::~IfcCableSegmentType() {
}

bool IfcCableSegmentType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCableSegmentType(this);
}

const std::string &IfcCableSegmentType::type() const {
    return IfcCableSegmentType::s_type.getName();
}

const Step::ClassType &IfcCableSegmentType::getClassType() {
    return IfcCableSegmentType::s_type;
}

const Step::ClassType &IfcCableSegmentType::getType() const {
    return IfcCableSegmentType::s_type;
}

bool IfcCableSegmentType::isOfType(const Step::ClassType &t) const {
    return IfcCableSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcCableSegmentTypeEnum IfcCableSegmentType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCableSegmentTypeEnum_UNSET;
    }
}

const IfcCableSegmentTypeEnum IfcCableSegmentType::getPredefinedType() const {
    IfcCableSegmentType * deConstObject = const_cast< IfcCableSegmentType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCableSegmentType::setPredefinedType(IfcCableSegmentTypeEnum value) {
    m_predefinedType = value;
}

void IfcCableSegmentType::unsetPredefinedType() {
    m_predefinedType = IfcCableSegmentTypeEnum_UNSET;
}

bool IfcCableSegmentType::testPredefinedType() const {
    return getPredefinedType() != IfcCableSegmentTypeEnum_UNSET;
}

bool IfcCableSegmentType::init() {
    bool status = IfcFlowSegmentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCableSegmentTypeEnum_UNSET;
    }
    else {
        if (arg == ".CABLESEGMENT.") {
            m_predefinedType = IfcCableSegmentTypeEnum_CABLESEGMENT;
        }
        else if (arg == ".CONDUCTORSEGMENT.") {
            m_predefinedType = IfcCableSegmentTypeEnum_CONDUCTORSEGMENT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCableSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCableSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCableSegmentType::copy(const IfcCableSegmentType &obj, const CopyOp &copyop) {
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCableSegmentType::s_type("IfcCableSegmentType");
