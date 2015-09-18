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



#include <ifc2x3/IfcRamp.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRamp::IfcRamp(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_shapeType = IfcRampTypeEnum_UNSET;
}

IfcRamp::~IfcRamp() {
}

bool IfcRamp::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRamp(this);
}

const std::string &IfcRamp::type() const {
    return IfcRamp::s_type.getName();
}

const Step::ClassType &IfcRamp::getClassType() {
    return IfcRamp::s_type;
}

const Step::ClassType &IfcRamp::getType() const {
    return IfcRamp::s_type;
}

bool IfcRamp::isOfType(const Step::ClassType &t) const {
    return IfcRamp::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcRampTypeEnum IfcRamp::getShapeType() {
    if (Step::BaseObject::inited()) {
        return m_shapeType;
    }
    else {
        return IfcRampTypeEnum_UNSET;
    }
}

const IfcRampTypeEnum IfcRamp::getShapeType() const {
    IfcRamp * deConstObject = const_cast< IfcRamp * > (this);
    return deConstObject->getShapeType();
}

void IfcRamp::setShapeType(IfcRampTypeEnum value) {
    m_shapeType = value;
}

void IfcRamp::unsetShapeType() {
    m_shapeType = IfcRampTypeEnum_UNSET;
}

bool IfcRamp::testShapeType() const {
    return getShapeType() != IfcRampTypeEnum_UNSET;
}

bool IfcRamp::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeType = IfcRampTypeEnum_UNSET;
    }
    else {
        if (arg == ".STRAIGHT_RUN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_STRAIGHT_RUN_RAMP;
        }
        else if (arg == ".TWO_STRAIGHT_RUN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_TWO_STRAIGHT_RUN_RAMP;
        }
        else if (arg == ".QUARTER_TURN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_QUARTER_TURN_RAMP;
        }
        else if (arg == ".TWO_QUARTER_TURN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_TWO_QUARTER_TURN_RAMP;
        }
        else if (arg == ".HALF_TURN_RAMP.") {
            m_shapeType = IfcRampTypeEnum_HALF_TURN_RAMP;
        }
        else if (arg == ".SPIRAL_RAMP.") {
            m_shapeType = IfcRampTypeEnum_SPIRAL_RAMP;
        }
        else if (arg == ".USERDEFINED.") {
            m_shapeType = IfcRampTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_shapeType = IfcRampTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRamp::copy(const IfcRamp &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setShapeType(obj.m_shapeType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRamp::s_type("IfcRamp");
