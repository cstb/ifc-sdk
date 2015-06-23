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



#include <ifc2x3/IfcDocumentSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDocumentInformation.h>
#include <ifc2x3/IfcDocumentReference.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcDocumentSelect::IfcDocumentSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcDocumentSelect::IfcDocumentSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcDocumentSelect::~IfcDocumentSelect() {
    deleteUnion();
}

bool IfcDocumentSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDocumentSelect(this);
}

bool IfcDocumentSelect::init() {
    return false;
}

const std::string &IfcDocumentSelect::type() const {
    return IfcDocumentSelect::s_type.getName();
}

const Step::ClassType &IfcDocumentSelect::getClassType() {
    return IfcDocumentSelect::s_type;
}

const Step::ClassType &IfcDocumentSelect::getType() const {
    return IfcDocumentSelect::s_type;
}

bool IfcDocumentSelect::isOfType(const Step::ClassType &t) const {
    return IfcDocumentSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDocumentSelect::copy(const IfcDocumentSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCDOCUMENTREFERENCE:
        setIfcDocumentReference((IfcDocumentReference *) (copyop(obj.m_IfcDocumentSelect_union.m_IfcDocumentReference)));
        break;
    case IFCDOCUMENTINFORMATION:
        setIfcDocumentInformation((IfcDocumentInformation *) (copyop(obj.m_IfcDocumentSelect_union.m_IfcDocumentInformation)));
        break;
    default:
        break;
    }
}

std::string IfcDocumentSelect::currentTypeName() const {
    switch(m_type) {
    case IFCDOCUMENTREFERENCE:
        return "IfcDocumentReference";
        break;
    case IFCDOCUMENTINFORMATION:
        return "IfcDocumentInformation";
        break;
    default:
        return "UNSET";
    }
}

IfcDocumentSelect::IfcDocumentSelect_select IfcDocumentSelect::currentType() const {
    return m_type;
}

void IfcDocumentSelect::deleteUnion() {
    switch(m_type) {
    case IFCDOCUMENTREFERENCE:
        m_IfcDocumentSelect_union.m_IfcDocumentReference->unref();
        break;
    case IFCDOCUMENTINFORMATION:
        m_IfcDocumentSelect_union.m_IfcDocumentInformation->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcDocumentReference *IfcDocumentSelect::getIfcDocumentReference() const {
    if (m_type == IFCDOCUMENTREFERENCE) {
        return m_IfcDocumentSelect_union.m_IfcDocumentReference;
    }
    else {
        return NULL;
    }
}

void IfcDocumentSelect::setIfcDocumentReference(IfcDocumentReference *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDocumentSelect_union.m_IfcDocumentReference = value;
    if (value) {
        value->ref();
        m_type = IFCDOCUMENTREFERENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDOCUMENTREFERENCE;
}

IfcDocumentInformation *IfcDocumentSelect::getIfcDocumentInformation() const {
    if (m_type == IFCDOCUMENTINFORMATION) {
        return m_IfcDocumentSelect_union.m_IfcDocumentInformation;
    }
    else {
        return NULL;
    }
}

void IfcDocumentSelect::setIfcDocumentInformation(IfcDocumentInformation *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDocumentSelect_union.m_IfcDocumentInformation = value;
    if (value) {
        value->ref();
        m_type = IFCDOCUMENTINFORMATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDOCUMENTINFORMATION;
}

void IfcDocumentSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcDocumentReference::getClassType())) {
        setIfcDocumentReference(static_cast< IfcDocumentReference* > (v));
    }
    else if (v && v->isOfType(IfcDocumentInformation::getClassType())) {
        setIfcDocumentInformation(static_cast< IfcDocumentInformation* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcDocumentSelect::s_type("IfcDocumentSelect");
