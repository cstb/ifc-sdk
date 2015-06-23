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



#include <ifc2x3/IfcUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDerivedUnit.h>
#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcUnit::IfcUnit() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcUnit::IfcUnit(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcUnit::~IfcUnit() {
    deleteUnion();
}

bool IfcUnit::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcUnit(this);
}

bool IfcUnit::init() {
    return false;
}

const std::string &IfcUnit::type() const {
    return IfcUnit::s_type.getName();
}

const Step::ClassType &IfcUnit::getClassType() {
    return IfcUnit::s_type;
}

const Step::ClassType &IfcUnit::getType() const {
    return IfcUnit::s_type;
}

bool IfcUnit::isOfType(const Step::ClassType &t) const {
    return IfcUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcUnit::copy(const IfcUnit &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCDERIVEDUNIT:
        setIfcDerivedUnit((IfcDerivedUnit *) (copyop(obj.m_IfcUnit_union.m_IfcDerivedUnit)));
        break;
    case IFCNAMEDUNIT:
        setIfcNamedUnit((IfcNamedUnit *) (copyop(obj.m_IfcUnit_union.m_IfcNamedUnit)));
        break;
    case IFCMONETARYUNIT:
        setIfcMonetaryUnit((IfcMonetaryUnit *) (copyop(obj.m_IfcUnit_union.m_IfcMonetaryUnit)));
        break;
    default:
        break;
    }
}

std::string IfcUnit::currentTypeName() const {
    switch(m_type) {
    case IFCDERIVEDUNIT:
        return "IfcDerivedUnit";
        break;
    case IFCNAMEDUNIT:
        return "IfcNamedUnit";
        break;
    case IFCMONETARYUNIT:
        return "IfcMonetaryUnit";
        break;
    default:
        return "UNSET";
    }
}

IfcUnit::IfcUnit_select IfcUnit::currentType() const {
    return m_type;
}

void IfcUnit::deleteUnion() {
    switch(m_type) {
    case IFCDERIVEDUNIT:
        m_IfcUnit_union.m_IfcDerivedUnit->unref();
        break;
    case IFCNAMEDUNIT:
        m_IfcUnit_union.m_IfcNamedUnit->unref();
        break;
    case IFCMONETARYUNIT:
        m_IfcUnit_union.m_IfcMonetaryUnit->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcDerivedUnit *IfcUnit::getIfcDerivedUnit() const {
    if (m_type == IFCDERIVEDUNIT) {
        return m_IfcUnit_union.m_IfcDerivedUnit;
    }
    else {
        return NULL;
    }
}

void IfcUnit::setIfcDerivedUnit(IfcDerivedUnit *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcUnit_union.m_IfcDerivedUnit = value;
    if (value) {
        value->ref();
        m_type = IFCDERIVEDUNIT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDERIVEDUNIT;
}

IfcNamedUnit *IfcUnit::getIfcNamedUnit() const {
    if (m_type == IFCNAMEDUNIT) {
        return m_IfcUnit_union.m_IfcNamedUnit;
    }
    else {
        return NULL;
    }
}

void IfcUnit::setIfcNamedUnit(IfcNamedUnit *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcUnit_union.m_IfcNamedUnit = value;
    if (value) {
        value->ref();
        m_type = IFCNAMEDUNIT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCNAMEDUNIT;
}

IfcMonetaryUnit *IfcUnit::getIfcMonetaryUnit() const {
    if (m_type == IFCMONETARYUNIT) {
        return m_IfcUnit_union.m_IfcMonetaryUnit;
    }
    else {
        return NULL;
    }
}

void IfcUnit::setIfcMonetaryUnit(IfcMonetaryUnit *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcUnit_union.m_IfcMonetaryUnit = value;
    if (value) {
        value->ref();
        m_type = IFCMONETARYUNIT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMONETARYUNIT;
}

void IfcUnit::set(Step::BaseObject *v) {
    if (v->isOfType(IfcDerivedUnit::getClassType())) {
        setIfcDerivedUnit(static_cast< IfcDerivedUnit* > (v));
    }
    else if (v->isOfType(IfcNamedUnit::getClassType())) {
        setIfcNamedUnit(static_cast< IfcNamedUnit* > (v));
    }
    else if (v->isOfType(IfcMonetaryUnit::getClassType())) {
        setIfcMonetaryUnit(static_cast< IfcMonetaryUnit* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcUnit::s_type("IfcUnit");
