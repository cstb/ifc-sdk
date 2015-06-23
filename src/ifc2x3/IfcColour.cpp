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



#include <ifc2x3/IfcColour.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcColourSpecification.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcColour::IfcColour() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcColour::IfcColour(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcColour::~IfcColour() {
    deleteUnion();
}

bool IfcColour::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcColour(this);
}

bool IfcColour::init() {
    return false;
}

const std::string &IfcColour::type() const {
    return IfcColour::s_type.getName();
}

const Step::ClassType &IfcColour::getClassType() {
    return IfcColour::s_type;
}

const Step::ClassType &IfcColour::getType() const {
    return IfcColour::s_type;
}

bool IfcColour::isOfType(const Step::ClassType &t) const {
    return IfcColour::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcColour::copy(const IfcColour &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCOLOURSPECIFICATION:
        setIfcColourSpecification((IfcColourSpecification *) (copyop(obj.m_IfcColour_union.m_IfcColourSpecification)));
        break;
    case IFCPREDEFINEDCOLOUR:
        setIfcPreDefinedColour((IfcPreDefinedColour *) (copyop(obj.m_IfcColour_union.m_IfcPreDefinedColour)));
        break;
    default:
        break;
    }
}

std::string IfcColour::currentTypeName() const {
    switch(m_type) {
    case IFCCOLOURSPECIFICATION:
        return "IfcColourSpecification";
        break;
    case IFCPREDEFINEDCOLOUR:
        return "IfcPreDefinedColour";
        break;
    default:
        return "UNSET";
    }
}

IfcColour::IfcColour_select IfcColour::currentType() const {
    return m_type;
}

void IfcColour::deleteUnion() {
    switch(m_type) {
    case IFCCOLOURSPECIFICATION:
        m_IfcColour_union.m_IfcColourSpecification->unref();
        break;
    case IFCPREDEFINEDCOLOUR:
        m_IfcColour_union.m_IfcPreDefinedColour->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcColourSpecification *IfcColour::getIfcColourSpecification() const {
    if (m_type == IFCCOLOURSPECIFICATION) {
        return m_IfcColour_union.m_IfcColourSpecification;
    }
    else {
        return NULL;
    }
}

void IfcColour::setIfcColourSpecification(IfcColourSpecification *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcColour_union.m_IfcColourSpecification = value;
    if (value) {
        value->ref();
        m_type = IFCCOLOURSPECIFICATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCOLOURSPECIFICATION;
}

IfcPreDefinedColour *IfcColour::getIfcPreDefinedColour() const {
    if (m_type == IFCPREDEFINEDCOLOUR) {
        return m_IfcColour_union.m_IfcPreDefinedColour;
    }
    else {
        return NULL;
    }
}

void IfcColour::setIfcPreDefinedColour(IfcPreDefinedColour *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcColour_union.m_IfcPreDefinedColour = value;
    if (value) {
        value->ref();
        m_type = IFCPREDEFINEDCOLOUR;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPREDEFINEDCOLOUR;
}

void IfcColour::set(Step::BaseObject *v) {
    if (v->isOfType(IfcColourSpecification::getClassType())) {
        setIfcColourSpecification(static_cast< IfcColourSpecification* > (v));
    }
    else if (v->isOfType(IfcPreDefinedColour::getClassType())) {
        setIfcPreDefinedColour(static_cast< IfcPreDefinedColour* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcColour::s_type("IfcColour");
