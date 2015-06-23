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



#include <ifc2x3/IfcDraughtingCalloutElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAnnotationCurveOccurrence.h>
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>
#include <ifc2x3/IfcAnnotationTextOccurrence.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcDraughtingCalloutElement::~IfcDraughtingCalloutElement() {
    deleteUnion();
}

bool IfcDraughtingCalloutElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDraughtingCalloutElement(this);
}

bool IfcDraughtingCalloutElement::init() {
    return false;
}

const std::string &IfcDraughtingCalloutElement::type() const {
    return IfcDraughtingCalloutElement::s_type.getName();
}

const Step::ClassType &IfcDraughtingCalloutElement::getClassType() {
    return IfcDraughtingCalloutElement::s_type;
}

const Step::ClassType &IfcDraughtingCalloutElement::getType() const {
    return IfcDraughtingCalloutElement::s_type;
}

bool IfcDraughtingCalloutElement::isOfType(const Step::ClassType &t) const {
    return IfcDraughtingCalloutElement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDraughtingCalloutElement::copy(const IfcDraughtingCalloutElement &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCANNOTATIONCURVEOCCURRENCE:
        setIfcAnnotationCurveOccurrence((IfcAnnotationCurveOccurrence *) (copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence)));
        break;
    case IFCANNOTATIONTEXTOCCURRENCE:
        setIfcAnnotationTextOccurrence((IfcAnnotationTextOccurrence *) (copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence)));
        break;
    case IFCANNOTATIONSYMBOLOCCURRENCE:
        setIfcAnnotationSymbolOccurrence((IfcAnnotationSymbolOccurrence *) (copyop(obj.m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence)));
        break;
    default:
        break;
    }
}

std::string IfcDraughtingCalloutElement::currentTypeName() const {
    switch(m_type) {
    case IFCANNOTATIONCURVEOCCURRENCE:
        return "IfcAnnotationCurveOccurrence";
        break;
    case IFCANNOTATIONTEXTOCCURRENCE:
        return "IfcAnnotationTextOccurrence";
        break;
    case IFCANNOTATIONSYMBOLOCCURRENCE:
        return "IfcAnnotationSymbolOccurrence";
        break;
    default:
        return "UNSET";
    }
}

IfcDraughtingCalloutElement::IfcDraughtingCalloutElement_select IfcDraughtingCalloutElement::currentType() const {
    return m_type;
}

void IfcDraughtingCalloutElement::deleteUnion() {
    switch(m_type) {
    case IFCANNOTATIONCURVEOCCURRENCE:
        m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence->unref();
        break;
    case IFCANNOTATIONTEXTOCCURRENCE:
        m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence->unref();
        break;
    case IFCANNOTATIONSYMBOLOCCURRENCE:
        m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcAnnotationCurveOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationCurveOccurrence() const {
    if (m_type == IFCANNOTATIONCURVEOCCURRENCE) {
        return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence;
    }
    else {
        return NULL;
    }
}

void IfcDraughtingCalloutElement::setIfcAnnotationCurveOccurrence(IfcAnnotationCurveOccurrence *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationCurveOccurrence = value;
    if (value) {
        value->ref();
        m_type = IFCANNOTATIONCURVEOCCURRENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCANNOTATIONCURVEOCCURRENCE;
}

IfcAnnotationTextOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationTextOccurrence() const {
    if (m_type == IFCANNOTATIONTEXTOCCURRENCE) {
        return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence;
    }
    else {
        return NULL;
    }
}

void IfcDraughtingCalloutElement::setIfcAnnotationTextOccurrence(IfcAnnotationTextOccurrence *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationTextOccurrence = value;
    if (value) {
        value->ref();
        m_type = IFCANNOTATIONTEXTOCCURRENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCANNOTATIONTEXTOCCURRENCE;
}

IfcAnnotationSymbolOccurrence *IfcDraughtingCalloutElement::getIfcAnnotationSymbolOccurrence() const {
    if (m_type == IFCANNOTATIONSYMBOLOCCURRENCE) {
        return m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence;
    }
    else {
        return NULL;
    }
}

void IfcDraughtingCalloutElement::setIfcAnnotationSymbolOccurrence(IfcAnnotationSymbolOccurrence *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDraughtingCalloutElement_union.m_IfcAnnotationSymbolOccurrence = value;
    if (value) {
        value->ref();
        m_type = IFCANNOTATIONSYMBOLOCCURRENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCANNOTATIONSYMBOLOCCURRENCE;
}

void IfcDraughtingCalloutElement::set(Step::BaseObject *v) {
    if (v->isOfType(IfcAnnotationCurveOccurrence::getClassType())) {
        setIfcAnnotationCurveOccurrence(static_cast< IfcAnnotationCurveOccurrence* > (v));
    }
    else if (v->isOfType(IfcAnnotationTextOccurrence::getClassType())) {
        setIfcAnnotationTextOccurrence(static_cast< IfcAnnotationTextOccurrence* > (v));
    }
    else if (v->isOfType(IfcAnnotationSymbolOccurrence::getClassType())) {
        setIfcAnnotationSymbolOccurrence(static_cast< IfcAnnotationSymbolOccurrence* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcDraughtingCalloutElement::s_type("IfcDraughtingCalloutElement");
