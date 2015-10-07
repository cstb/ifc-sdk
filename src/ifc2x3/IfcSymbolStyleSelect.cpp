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



#include <ifc2x3/IfcSymbolStyleSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcColourSpecification.h>
#include <ifc2x3/IfcPreDefinedColour.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcSymbolStyleSelect::IfcSymbolStyleSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcSymbolStyleSelect::IfcSymbolStyleSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcSymbolStyleSelect::~IfcSymbolStyleSelect() {
    deleteUnion();
}

bool IfcSymbolStyleSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSymbolStyleSelect(this);
}

bool IfcSymbolStyleSelect::init() {
    return false;
}

const std::string &IfcSymbolStyleSelect::type() const {
    return IfcSymbolStyleSelect::s_type.getName();
}

const Step::ClassType &IfcSymbolStyleSelect::getClassType() {
    return IfcSymbolStyleSelect::s_type;
}

const Step::ClassType &IfcSymbolStyleSelect::getType() const {
    return IfcSymbolStyleSelect::s_type;
}

bool IfcSymbolStyleSelect::isOfType(const Step::ClassType &t) const {
    return IfcSymbolStyleSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcSymbolStyleSelect::copy(const IfcSymbolStyleSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCOLOURSPECIFICATION:
        setIfcColourSpecification((IfcColourSpecification *) (copyop(obj.m_IfcSymbolStyleSelect_union.m_IfcColourSpecification)));
        break;
    case IFCPREDEFINEDCOLOUR:
        setIfcPreDefinedColour((IfcPreDefinedColour *) (copyop(obj.m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour)));
        break;
    default:
        break;
    }
}

std::string IfcSymbolStyleSelect::currentTypeName() const {
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

IfcSymbolStyleSelect::IfcSymbolStyleSelect_select IfcSymbolStyleSelect::currentType() const {
    return m_type;
}

void IfcSymbolStyleSelect::deleteUnion() {
    switch(m_type) {
    case IFCCOLOURSPECIFICATION:
        m_IfcSymbolStyleSelect_union.m_IfcColourSpecification->unref();
        break;
    case IFCPREDEFINEDCOLOUR:
        m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcColourSpecification *IfcSymbolStyleSelect::getIfcColourSpecification() const {
    if (m_type == IFCCOLOURSPECIFICATION) {
        return m_IfcSymbolStyleSelect_union.m_IfcColourSpecification;
    }
    else {
        return NULL;
    }
}

void IfcSymbolStyleSelect::setIfcColourSpecification(IfcColourSpecification *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcSymbolStyleSelect_union.m_IfcColourSpecification = value;
    if (value) {
        value->ref();
        m_type = IFCCOLOURSPECIFICATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCOLOURSPECIFICATION;
}

IfcPreDefinedColour *IfcSymbolStyleSelect::getIfcPreDefinedColour() const {
    if (m_type == IFCPREDEFINEDCOLOUR) {
        return m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour;
    }
    else {
        return NULL;
    }
}

void IfcSymbolStyleSelect::setIfcPreDefinedColour(IfcPreDefinedColour *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcSymbolStyleSelect_union.m_IfcPreDefinedColour = value;
    if (value) {
        value->ref();
        m_type = IFCPREDEFINEDCOLOUR;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPREDEFINEDCOLOUR;
}

void IfcSymbolStyleSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcColourSpecification::getClassType())) {
        setIfcColourSpecification(static_cast< IfcColourSpecification* > (v));
    }
    else if (v && v->isOfType(IfcPreDefinedColour::getClassType())) {
        setIfcPreDefinedColour(static_cast< IfcPreDefinedColour* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcSymbolStyleSelect::s_type("IfcSymbolStyleSelect");
