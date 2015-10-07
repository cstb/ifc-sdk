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



#include <ifc2x3/IfcWallType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcWallType::IfcWallType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcWallTypeEnum_UNSET;
}

IfcWallType::~IfcWallType() {
}

bool IfcWallType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWallType(this);
}

const std::string &IfcWallType::type() const {
    return IfcWallType::s_type.getName();
}

const Step::ClassType &IfcWallType::getClassType() {
    return IfcWallType::s_type;
}

const Step::ClassType &IfcWallType::getType() const {
    return IfcWallType::s_type;
}

bool IfcWallType::isOfType(const Step::ClassType &t) const {
    return IfcWallType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcWallTypeEnum IfcWallType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcWallTypeEnum_UNSET;
    }
}

const IfcWallTypeEnum IfcWallType::getPredefinedType() const {
    IfcWallType * deConstObject = const_cast< IfcWallType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcWallType::setPredefinedType(IfcWallTypeEnum value) {
    m_predefinedType = value;
}

void IfcWallType::unsetPredefinedType() {
    m_predefinedType = IfcWallTypeEnum_UNSET;
}

bool IfcWallType::testPredefinedType() const {
    return getPredefinedType() != IfcWallTypeEnum_UNSET;
}

bool IfcWallType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcWallTypeEnum_UNSET;
    }
    else {
        if (arg == ".STANDARD.") {
            m_predefinedType = IfcWallTypeEnum_STANDARD;
        }
        else if (arg == ".POLYGONAL.") {
            m_predefinedType = IfcWallTypeEnum_POLYGONAL;
        }
        else if (arg == ".SHEAR.") {
            m_predefinedType = IfcWallTypeEnum_SHEAR;
        }
        else if (arg == ".ELEMENTEDWALL.") {
            m_predefinedType = IfcWallTypeEnum_ELEMENTEDWALL;
        }
        else if (arg == ".PLUMBINGWALL.") {
            m_predefinedType = IfcWallTypeEnum_PLUMBINGWALL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcWallTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcWallTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcWallType::copy(const IfcWallType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcWallType::s_type("IfcWallType");
