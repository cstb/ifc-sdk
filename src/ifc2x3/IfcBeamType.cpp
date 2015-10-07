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



#include <ifc2x3/IfcBeamType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBeamType::IfcBeamType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcBeamTypeEnum_UNSET;
}

IfcBeamType::~IfcBeamType() {
}

bool IfcBeamType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBeamType(this);
}

const std::string &IfcBeamType::type() const {
    return IfcBeamType::s_type.getName();
}

const Step::ClassType &IfcBeamType::getClassType() {
    return IfcBeamType::s_type;
}

const Step::ClassType &IfcBeamType::getType() const {
    return IfcBeamType::s_type;
}

bool IfcBeamType::isOfType(const Step::ClassType &t) const {
    return IfcBeamType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcBeamTypeEnum IfcBeamType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcBeamTypeEnum_UNSET;
    }
}

const IfcBeamTypeEnum IfcBeamType::getPredefinedType() const {
    IfcBeamType * deConstObject = const_cast< IfcBeamType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcBeamType::setPredefinedType(IfcBeamTypeEnum value) {
    m_predefinedType = value;
}

void IfcBeamType::unsetPredefinedType() {
    m_predefinedType = IfcBeamTypeEnum_UNSET;
}

bool IfcBeamType::testPredefinedType() const {
    return getPredefinedType() != IfcBeamTypeEnum_UNSET;
}

bool IfcBeamType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcBeamTypeEnum_UNSET;
    }
    else {
        if (arg == ".BEAM.") {
            m_predefinedType = IfcBeamTypeEnum_BEAM;
        }
        else if (arg == ".JOIST.") {
            m_predefinedType = IfcBeamTypeEnum_JOIST;
        }
        else if (arg == ".LINTEL.") {
            m_predefinedType = IfcBeamTypeEnum_LINTEL;
        }
        else if (arg == ".T_BEAM.") {
            m_predefinedType = IfcBeamTypeEnum_T_BEAM;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcBeamTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcBeamTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcBeamType::copy(const IfcBeamType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBeamType::s_type("IfcBeamType");
