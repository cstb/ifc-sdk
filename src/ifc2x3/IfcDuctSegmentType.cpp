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



#include <ifc2x3/IfcDuctSegmentType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowSegmentType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDuctSegmentType::IfcDuctSegmentType(Step::Id id, Step::SPFData *args) : IfcFlowSegmentType(id, args) {
    m_predefinedType = IfcDuctSegmentTypeEnum_UNSET;
}

IfcDuctSegmentType::~IfcDuctSegmentType() {
}

bool IfcDuctSegmentType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDuctSegmentType(this);
}

const std::string &IfcDuctSegmentType::type() const {
    return IfcDuctSegmentType::s_type.getName();
}

const Step::ClassType &IfcDuctSegmentType::getClassType() {
    return IfcDuctSegmentType::s_type;
}

const Step::ClassType &IfcDuctSegmentType::getType() const {
    return IfcDuctSegmentType::s_type;
}

bool IfcDuctSegmentType::isOfType(const Step::ClassType &t) const {
    return IfcDuctSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcDuctSegmentTypeEnum IfcDuctSegmentType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcDuctSegmentTypeEnum_UNSET;
    }
}

const IfcDuctSegmentTypeEnum IfcDuctSegmentType::getPredefinedType() const {
    IfcDuctSegmentType * deConstObject = const_cast< IfcDuctSegmentType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcDuctSegmentType::setPredefinedType(IfcDuctSegmentTypeEnum value) {
    m_predefinedType = value;
}

void IfcDuctSegmentType::unsetPredefinedType() {
    m_predefinedType = IfcDuctSegmentTypeEnum_UNSET;
}

bool IfcDuctSegmentType::testPredefinedType() const {
    return getPredefinedType() != IfcDuctSegmentTypeEnum_UNSET;
}

bool IfcDuctSegmentType::init() {
    bool status = IfcFlowSegmentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcDuctSegmentTypeEnum_UNSET;
    }
    else {
        if (arg == ".RIGIDSEGMENT.") {
            m_predefinedType = IfcDuctSegmentTypeEnum_RIGIDSEGMENT;
        }
        else if (arg == ".FLEXIBLESEGMENT.") {
            m_predefinedType = IfcDuctSegmentTypeEnum_FLEXIBLESEGMENT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcDuctSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcDuctSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDuctSegmentType::copy(const IfcDuctSegmentType &obj, const CopyOp &copyop) {
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDuctSegmentType::s_type("IfcDuctSegmentType");
