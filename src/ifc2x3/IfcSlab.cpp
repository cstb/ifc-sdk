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



#include <ifc2x3/IfcSlab.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSlab::IfcSlab(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_predefinedType = IfcSlabTypeEnum_UNSET;
}

IfcSlab::~IfcSlab() {
}

bool IfcSlab::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSlab(this);
}

const std::string &IfcSlab::type() const {
    return IfcSlab::s_type.getName();
}

const Step::ClassType &IfcSlab::getClassType() {
    return IfcSlab::s_type;
}

const Step::ClassType &IfcSlab::getType() const {
    return IfcSlab::s_type;
}

bool IfcSlab::isOfType(const Step::ClassType &t) const {
    return IfcSlab::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcSlabTypeEnum IfcSlab::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcSlabTypeEnum_UNSET;
    }
}

const IfcSlabTypeEnum IfcSlab::getPredefinedType() const {
    IfcSlab * deConstObject = const_cast< IfcSlab * > (this);
    return deConstObject->getPredefinedType();
}

void IfcSlab::setPredefinedType(IfcSlabTypeEnum value) {
    m_predefinedType = value;
}

void IfcSlab::unsetPredefinedType() {
    m_predefinedType = IfcSlabTypeEnum_UNSET;
}

bool IfcSlab::testPredefinedType() const {
    return getPredefinedType() != IfcSlabTypeEnum_UNSET;
}

bool IfcSlab::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcSlabTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLOOR.") {
            m_predefinedType = IfcSlabTypeEnum_FLOOR;
        }
        else if (arg == ".ROOF.") {
            m_predefinedType = IfcSlabTypeEnum_ROOF;
        }
        else if (arg == ".LANDING.") {
            m_predefinedType = IfcSlabTypeEnum_LANDING;
        }
        else if (arg == ".BASESLAB.") {
            m_predefinedType = IfcSlabTypeEnum_BASESLAB;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcSlabTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcSlabTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSlab::copy(const IfcSlab &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSlab::s_type("IfcSlab");
