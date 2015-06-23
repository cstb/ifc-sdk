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



#include <ifc2x3/IfcLibrarySelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/IfcLibraryReference.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcLibrarySelect::IfcLibrarySelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcLibrarySelect::IfcLibrarySelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcLibrarySelect::~IfcLibrarySelect() {
    deleteUnion();
}

bool IfcLibrarySelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLibrarySelect(this);
}

bool IfcLibrarySelect::init() {
    return false;
}

const std::string &IfcLibrarySelect::type() const {
    return IfcLibrarySelect::s_type.getName();
}

const Step::ClassType &IfcLibrarySelect::getClassType() {
    return IfcLibrarySelect::s_type;
}

const Step::ClassType &IfcLibrarySelect::getType() const {
    return IfcLibrarySelect::s_type;
}

bool IfcLibrarySelect::isOfType(const Step::ClassType &t) const {
    return IfcLibrarySelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcLibrarySelect::copy(const IfcLibrarySelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCLIBRARYREFERENCE:
        setIfcLibraryReference((IfcLibraryReference *) (copyop(obj.m_IfcLibrarySelect_union.m_IfcLibraryReference)));
        break;
    case IFCLIBRARYINFORMATION:
        setIfcLibraryInformation((IfcLibraryInformation *) (copyop(obj.m_IfcLibrarySelect_union.m_IfcLibraryInformation)));
        break;
    default:
        break;
    }
}

std::string IfcLibrarySelect::currentTypeName() const {
    switch(m_type) {
    case IFCLIBRARYREFERENCE:
        return "IfcLibraryReference";
        break;
    case IFCLIBRARYINFORMATION:
        return "IfcLibraryInformation";
        break;
    default:
        return "UNSET";
    }
}

IfcLibrarySelect::IfcLibrarySelect_select IfcLibrarySelect::currentType() const {
    return m_type;
}

void IfcLibrarySelect::deleteUnion() {
    switch(m_type) {
    case IFCLIBRARYREFERENCE:
        m_IfcLibrarySelect_union.m_IfcLibraryReference->unref();
        break;
    case IFCLIBRARYINFORMATION:
        m_IfcLibrarySelect_union.m_IfcLibraryInformation->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcLibraryReference *IfcLibrarySelect::getIfcLibraryReference() const {
    if (m_type == IFCLIBRARYREFERENCE) {
        return m_IfcLibrarySelect_union.m_IfcLibraryReference;
    }
    else {
        return NULL;
    }
}

void IfcLibrarySelect::setIfcLibraryReference(IfcLibraryReference *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcLibrarySelect_union.m_IfcLibraryReference = value;
    if (value) {
        value->ref();
        m_type = IFCLIBRARYREFERENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCLIBRARYREFERENCE;
}

IfcLibraryInformation *IfcLibrarySelect::getIfcLibraryInformation() const {
    if (m_type == IFCLIBRARYINFORMATION) {
        return m_IfcLibrarySelect_union.m_IfcLibraryInformation;
    }
    else {
        return NULL;
    }
}

void IfcLibrarySelect::setIfcLibraryInformation(IfcLibraryInformation *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcLibrarySelect_union.m_IfcLibraryInformation = value;
    if (value) {
        value->ref();
        m_type = IFCLIBRARYINFORMATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCLIBRARYINFORMATION;
}

void IfcLibrarySelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcLibraryReference::getClassType())) {
        setIfcLibraryReference(static_cast< IfcLibraryReference* > (v));
    }
    else if (v && v->isOfType(IfcLibraryInformation::getClassType())) {
        setIfcLibraryInformation(static_cast< IfcLibraryInformation* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcLibrarySelect::s_type("IfcLibrarySelect");
