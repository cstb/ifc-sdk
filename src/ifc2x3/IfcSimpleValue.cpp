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



#include <ifc2x3/IfcSimpleValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcSimpleValue::IfcSimpleValue() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcSimpleValue::IfcSimpleValue(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcSimpleValue::~IfcSimpleValue() {
    deleteUnion();
}

bool IfcSimpleValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSimpleValue(this);
}

bool IfcSimpleValue::init() {
    return false;
}

const std::string &IfcSimpleValue::type() const {
    return IfcSimpleValue::s_type.getName();
}

const Step::ClassType &IfcSimpleValue::getClassType() {
    return IfcSimpleValue::s_type;
}

const Step::ClassType &IfcSimpleValue::getType() const {
    return IfcSimpleValue::s_type;
}

bool IfcSimpleValue::isOfType(const Step::ClassType &t) const {
    return IfcSimpleValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcSimpleValue::copy(const IfcSimpleValue &obj, const CopyOp &/*copyop*/) {
    switch(obj.m_type) {
    case IFCINTEGER:
        setIfcInteger(obj.m_IfcSimpleValue_union.m_IfcInteger);
        break;
    case IFCREAL:
        setIfcReal(obj.m_IfcSimpleValue_union.m_IfcReal);
        break;
    case IFCBOOLEAN:
        setIfcBoolean(obj.m_IfcSimpleValue_union.m_IfcBoolean);
        break;
    case IFCIDENTIFIER:
        setIfcIdentifier(*obj.m_IfcSimpleValue_union.m_IfcIdentifier);
        break;
    case IFCTEXT:
        setIfcText(*obj.m_IfcSimpleValue_union.m_IfcText);
        break;
    case IFCLABEL:
        setIfcLabel(*obj.m_IfcSimpleValue_union.m_IfcLabel);
        break;
    case IFCLOGICAL:
        setIfcLogical(obj.m_IfcSimpleValue_union.m_IfcLogical);
        break;
    default:
        break;
    }
}

std::string IfcSimpleValue::currentTypeName() const {
    switch(m_type) {
    case IFCINTEGER:
        return "IfcInteger";
        break;
    case IFCREAL:
        return "IfcReal";
        break;
    case IFCBOOLEAN:
        return "IfcBoolean";
        break;
    case IFCIDENTIFIER:
        return "IfcIdentifier";
        break;
    case IFCTEXT:
        return "IfcText";
        break;
    case IFCLABEL:
        return "IfcLabel";
        break;
    case IFCLOGICAL:
        return "IfcLogical";
        break;
    default:
        return "UNSET";
    }
}

IfcSimpleValue::IfcSimpleValue_select IfcSimpleValue::currentType() const {
    return m_type;
}

void IfcSimpleValue::deleteUnion() {
    switch(m_type) {
    case IFCIDENTIFIER:
        delete m_IfcSimpleValue_union.m_IfcIdentifier;
        break;
    case IFCTEXT:
        delete m_IfcSimpleValue_union.m_IfcText;
        break;
    case IFCLABEL:
        delete m_IfcSimpleValue_union.m_IfcLabel;
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcInteger IfcSimpleValue::getIfcInteger() const {
    if (m_type == IFCINTEGER) {
        return m_IfcSimpleValue_union.m_IfcInteger;
    }
    else {
        return Step::getUnset(m_IfcSimpleValue_union.m_IfcInteger);
    }
}

void IfcSimpleValue::setIfcInteger(IfcInteger value) {
    m_IfcSimpleValue_union.m_IfcInteger = value;
    m_type = IFCINTEGER;
}

IfcReal IfcSimpleValue::getIfcReal() const {
    if (m_type == IFCREAL) {
        return m_IfcSimpleValue_union.m_IfcReal;
    }
    else {
        return Step::getUnset(m_IfcSimpleValue_union.m_IfcReal);
    }
}

void IfcSimpleValue::setIfcReal(IfcReal value) {
    m_IfcSimpleValue_union.m_IfcReal = value;
    m_type = IFCREAL;
}

IfcBoolean IfcSimpleValue::getIfcBoolean() const {
    if (m_type == IFCBOOLEAN) {
        return m_IfcSimpleValue_union.m_IfcBoolean;
    }
    else {
        return Step::getUnset(m_IfcSimpleValue_union.m_IfcBoolean);
    }
}

void IfcSimpleValue::setIfcBoolean(IfcBoolean value) {
    m_IfcSimpleValue_union.m_IfcBoolean = value;
    m_type = IFCBOOLEAN;
}

IfcIdentifier IfcSimpleValue::getIfcIdentifier() const {
    if (m_type == IFCIDENTIFIER) {
        return *m_IfcSimpleValue_union.m_IfcIdentifier;
    }
    else {
        return Step::getUnset(*m_IfcSimpleValue_union.m_IfcIdentifier);
    }
}

void IfcSimpleValue::setIfcIdentifier(const IfcIdentifier &value) {
    m_IfcSimpleValue_union.m_IfcIdentifier = new IfcIdentifier(value);
    m_type = IFCIDENTIFIER;
}

IfcText IfcSimpleValue::getIfcText() const {
    if (m_type == IFCTEXT) {
        return *m_IfcSimpleValue_union.m_IfcText;
    }
    else {
        return Step::getUnset(*m_IfcSimpleValue_union.m_IfcText);
    }
}

void IfcSimpleValue::setIfcText(const IfcText &value) {
    m_IfcSimpleValue_union.m_IfcText = new IfcText(value);
    m_type = IFCTEXT;
}

IfcLabel IfcSimpleValue::getIfcLabel() const {
    if (m_type == IFCLABEL) {
        return *m_IfcSimpleValue_union.m_IfcLabel;
    }
    else {
        return Step::getUnset(*m_IfcSimpleValue_union.m_IfcLabel);
    }
}

void IfcSimpleValue::setIfcLabel(const IfcLabel &value) {
    m_IfcSimpleValue_union.m_IfcLabel = new IfcLabel(value);
    m_type = IFCLABEL;
}

IfcLogical IfcSimpleValue::getIfcLogical() const {
    if (m_type == IFCLOGICAL) {
        return m_IfcSimpleValue_union.m_IfcLogical;
    }
    else {
        return Step::getUnset(m_IfcSimpleValue_union.m_IfcLogical);
    }
}

void IfcSimpleValue::setIfcLogical(IfcLogical value) {
    m_IfcSimpleValue_union.m_IfcLogical = value;
    m_type = IFCLOGICAL;
}

void IfcSimpleValue::set(Step::BaseObject * /*v*/) {
}

IFC2X3_EXPORT Step::ClassType IfcSimpleValue::s_type("IfcSimpleValue");
