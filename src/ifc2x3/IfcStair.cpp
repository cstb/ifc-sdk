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



#include <ifc2x3/IfcStair.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStair::IfcStair(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_shapeType = IfcStairTypeEnum_UNSET;
}

IfcStair::~IfcStair() {
}

bool IfcStair::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStair(this);
}

const std::string &IfcStair::type() const {
    return IfcStair::s_type.getName();
}

const Step::ClassType &IfcStair::getClassType() {
    return IfcStair::s_type;
}

const Step::ClassType &IfcStair::getType() const {
    return IfcStair::s_type;
}

bool IfcStair::isOfType(const Step::ClassType &t) const {
    return IfcStair::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcStairTypeEnum IfcStair::getShapeType() {
    if (Step::BaseObject::inited()) {
        return m_shapeType;
    }
    else {
        return IfcStairTypeEnum_UNSET;
    }
}

const IfcStairTypeEnum IfcStair::getShapeType() const {
    IfcStair * deConstObject = const_cast< IfcStair * > (this);
    return deConstObject->getShapeType();
}

void IfcStair::setShapeType(IfcStairTypeEnum value) {
    m_shapeType = value;
}

void IfcStair::unsetShapeType() {
    m_shapeType = IfcStairTypeEnum_UNSET;
}

bool IfcStair::testShapeType() const {
    return getShapeType() != IfcStairTypeEnum_UNSET;
}

bool IfcStair::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeType = IfcStairTypeEnum_UNSET;
    }
    else {
        if (arg == ".STRAIGHT_RUN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_STRAIGHT_RUN_STAIR;
        }
        else if (arg == ".TWO_STRAIGHT_RUN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_TWO_STRAIGHT_RUN_STAIR;
        }
        else if (arg == ".QUARTER_WINDING_STAIR.") {
            m_shapeType = IfcStairTypeEnum_QUARTER_WINDING_STAIR;
        }
        else if (arg == ".QUARTER_TURN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_QUARTER_TURN_STAIR;
        }
        else if (arg == ".HALF_WINDING_STAIR.") {
            m_shapeType = IfcStairTypeEnum_HALF_WINDING_STAIR;
        }
        else if (arg == ".HALF_TURN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_HALF_TURN_STAIR;
        }
        else if (arg == ".TWO_QUARTER_WINDING_STAIR.") {
            m_shapeType = IfcStairTypeEnum_TWO_QUARTER_WINDING_STAIR;
        }
        else if (arg == ".TWO_QUARTER_TURN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_TWO_QUARTER_TURN_STAIR;
        }
        else if (arg == ".THREE_QUARTER_WINDING_STAIR.") {
            m_shapeType = IfcStairTypeEnum_THREE_QUARTER_WINDING_STAIR;
        }
        else if (arg == ".THREE_QUARTER_TURN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_THREE_QUARTER_TURN_STAIR;
        }
        else if (arg == ".SPIRAL_STAIR.") {
            m_shapeType = IfcStairTypeEnum_SPIRAL_STAIR;
        }
        else if (arg == ".DOUBLE_RETURN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_DOUBLE_RETURN_STAIR;
        }
        else if (arg == ".CURVED_RUN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_CURVED_RUN_STAIR;
        }
        else if (arg == ".TWO_CURVED_RUN_STAIR.") {
            m_shapeType = IfcStairTypeEnum_TWO_CURVED_RUN_STAIR;
        }
        else if (arg == ".USERDEFINED.") {
            m_shapeType = IfcStairTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_shapeType = IfcStairTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcStair::copy(const IfcStair &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setShapeType(obj.m_shapeType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStair::s_type("IfcStair");
