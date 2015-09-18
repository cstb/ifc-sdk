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



#include <ifc2x3/IfcPipeSegmentType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowSegmentType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPipeSegmentType::IfcPipeSegmentType(Step::Id id, Step::SPFData *args) : IfcFlowSegmentType(id, args) {
    m_predefinedType = IfcPipeSegmentTypeEnum_UNSET;
}

IfcPipeSegmentType::~IfcPipeSegmentType() {
}

bool IfcPipeSegmentType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPipeSegmentType(this);
}

const std::string &IfcPipeSegmentType::type() const {
    return IfcPipeSegmentType::s_type.getName();
}

const Step::ClassType &IfcPipeSegmentType::getClassType() {
    return IfcPipeSegmentType::s_type;
}

const Step::ClassType &IfcPipeSegmentType::getType() const {
    return IfcPipeSegmentType::s_type;
}

bool IfcPipeSegmentType::isOfType(const Step::ClassType &t) const {
    return IfcPipeSegmentType::s_type == t ? true : IfcFlowSegmentType::isOfType(t);
}

IfcPipeSegmentTypeEnum IfcPipeSegmentType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcPipeSegmentTypeEnum_UNSET;
    }
}

const IfcPipeSegmentTypeEnum IfcPipeSegmentType::getPredefinedType() const {
    IfcPipeSegmentType * deConstObject = const_cast< IfcPipeSegmentType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcPipeSegmentType::setPredefinedType(IfcPipeSegmentTypeEnum value) {
    m_predefinedType = value;
}

void IfcPipeSegmentType::unsetPredefinedType() {
    m_predefinedType = IfcPipeSegmentTypeEnum_UNSET;
}

bool IfcPipeSegmentType::testPredefinedType() const {
    return getPredefinedType() != IfcPipeSegmentTypeEnum_UNSET;
}

bool IfcPipeSegmentType::init() {
    bool status = IfcFlowSegmentType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcPipeSegmentTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLEXIBLESEGMENT.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_FLEXIBLESEGMENT;
        }
        else if (arg == ".RIGIDSEGMENT.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_RIGIDSEGMENT;
        }
        else if (arg == ".GUTTER.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_GUTTER;
        }
        else if (arg == ".SPOOL.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_SPOOL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcPipeSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPipeSegmentType::copy(const IfcPipeSegmentType &obj, const CopyOp &copyop) {
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPipeSegmentType::s_type("IfcPipeSegmentType");
