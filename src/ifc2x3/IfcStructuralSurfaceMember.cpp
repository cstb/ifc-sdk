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



#include <ifc2x3/IfcStructuralSurfaceMember.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralMember.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralSurfaceMember::IfcStructuralSurfaceMember(Step::Id id, Step::SPFData *args) : IfcStructuralMember(id, args) {
    m_predefinedType = IfcStructuralSurfaceTypeEnum_UNSET;
    m_thickness = Step::getUnset(m_thickness);
}

IfcStructuralSurfaceMember::~IfcStructuralSurfaceMember() {
}

bool IfcStructuralSurfaceMember::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralSurfaceMember(this);
}

const std::string &IfcStructuralSurfaceMember::type() const {
    return IfcStructuralSurfaceMember::s_type.getName();
}

const Step::ClassType &IfcStructuralSurfaceMember::getClassType() {
    return IfcStructuralSurfaceMember::s_type;
}

const Step::ClassType &IfcStructuralSurfaceMember::getType() const {
    return IfcStructuralSurfaceMember::s_type;
}

bool IfcStructuralSurfaceMember::isOfType(const Step::ClassType &t) const {
    return IfcStructuralSurfaceMember::s_type == t ? true : IfcStructuralMember::isOfType(t);
}

IfcStructuralSurfaceTypeEnum IfcStructuralSurfaceMember::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcStructuralSurfaceTypeEnum_UNSET;
    }
}

const IfcStructuralSurfaceTypeEnum IfcStructuralSurfaceMember::getPredefinedType() const {
    IfcStructuralSurfaceMember * deConstObject = const_cast< IfcStructuralSurfaceMember * > (this);
    return deConstObject->getPredefinedType();
}

void IfcStructuralSurfaceMember::setPredefinedType(IfcStructuralSurfaceTypeEnum value) {
    m_predefinedType = value;
}

void IfcStructuralSurfaceMember::unsetPredefinedType() {
    m_predefinedType = IfcStructuralSurfaceTypeEnum_UNSET;
}

bool IfcStructuralSurfaceMember::testPredefinedType() const {
    return getPredefinedType() != IfcStructuralSurfaceTypeEnum_UNSET;
}

IfcPositiveLengthMeasure IfcStructuralSurfaceMember::getThickness() {
    if (Step::BaseObject::inited()) {
        return m_thickness;
    }
    else {
        return Step::getUnset(m_thickness);
    }
}

const IfcPositiveLengthMeasure IfcStructuralSurfaceMember::getThickness() const {
    IfcStructuralSurfaceMember * deConstObject = const_cast< IfcStructuralSurfaceMember * > (this);
    return deConstObject->getThickness();
}

void IfcStructuralSurfaceMember::setThickness(IfcPositiveLengthMeasure value) {
    m_thickness = value;
}

void IfcStructuralSurfaceMember::unsetThickness() {
    m_thickness = Step::getUnset(getThickness());
}

bool IfcStructuralSurfaceMember::testThickness() const {
    return !Step::isUnset(getThickness());
}

bool IfcStructuralSurfaceMember::init() {
    bool status = IfcStructuralMember::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcStructuralSurfaceTypeEnum_UNSET;
    }
    else {
        if (arg == ".BENDING_ELEMENT.") {
            m_predefinedType = IfcStructuralSurfaceTypeEnum_BENDING_ELEMENT;
        }
        else if (arg == ".MEMBRANE_ELEMENT.") {
            m_predefinedType = IfcStructuralSurfaceTypeEnum_MEMBRANE_ELEMENT;
        }
        else if (arg == ".SHELL.") {
            m_predefinedType = IfcStructuralSurfaceTypeEnum_SHELL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcStructuralSurfaceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcStructuralSurfaceTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thickness = Step::getUnset(m_thickness);
    }
    else {
        m_thickness = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralSurfaceMember::copy(const IfcStructuralSurfaceMember &obj, const CopyOp &copyop) {
    IfcStructuralMember::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    setThickness(obj.m_thickness);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralSurfaceMember::s_type("IfcStructuralSurfaceMember");
