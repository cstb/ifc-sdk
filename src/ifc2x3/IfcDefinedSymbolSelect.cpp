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



#include <ifc2x3/IfcDefinedSymbolSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcExternallyDefinedSymbol.h>
#include <ifc2x3/IfcPreDefinedSymbol.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcDefinedSymbolSelect::IfcDefinedSymbolSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcDefinedSymbolSelect::IfcDefinedSymbolSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcDefinedSymbolSelect::~IfcDefinedSymbolSelect() {
    deleteUnion();
}

bool IfcDefinedSymbolSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDefinedSymbolSelect(this);
}

bool IfcDefinedSymbolSelect::init() {
    return false;
}

const std::string &IfcDefinedSymbolSelect::type() const {
    return IfcDefinedSymbolSelect::s_type.getName();
}

const Step::ClassType &IfcDefinedSymbolSelect::getClassType() {
    return IfcDefinedSymbolSelect::s_type;
}

const Step::ClassType &IfcDefinedSymbolSelect::getType() const {
    return IfcDefinedSymbolSelect::s_type;
}

bool IfcDefinedSymbolSelect::isOfType(const Step::ClassType &t) const {
    return IfcDefinedSymbolSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDefinedSymbolSelect::copy(const IfcDefinedSymbolSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCPREDEFINEDSYMBOL:
        setIfcPreDefinedSymbol((IfcPreDefinedSymbol *) (copyop(obj.m_IfcDefinedSymbolSelect_union.m_IfcPreDefinedSymbol)));
        break;
    case IFCEXTERNALLYDEFINEDSYMBOL:
        setIfcExternallyDefinedSymbol((IfcExternallyDefinedSymbol *) (copyop(obj.m_IfcDefinedSymbolSelect_union.m_IfcExternallyDefinedSymbol)));
        break;
    default:
        break;
    }
}

std::string IfcDefinedSymbolSelect::currentTypeName() const {
    switch(m_type) {
    case IFCPREDEFINEDSYMBOL:
        return "IfcPreDefinedSymbol";
        break;
    case IFCEXTERNALLYDEFINEDSYMBOL:
        return "IfcExternallyDefinedSymbol";
        break;
    default:
        return "UNSET";
    }
}

IfcDefinedSymbolSelect::IfcDefinedSymbolSelect_select IfcDefinedSymbolSelect::currentType() const {
    return m_type;
}

void IfcDefinedSymbolSelect::deleteUnion() {
    switch(m_type) {
    case IFCPREDEFINEDSYMBOL:
        m_IfcDefinedSymbolSelect_union.m_IfcPreDefinedSymbol->unref();
        break;
    case IFCEXTERNALLYDEFINEDSYMBOL:
        m_IfcDefinedSymbolSelect_union.m_IfcExternallyDefinedSymbol->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcPreDefinedSymbol *IfcDefinedSymbolSelect::getIfcPreDefinedSymbol() const {
    if (m_type == IFCPREDEFINEDSYMBOL) {
        return m_IfcDefinedSymbolSelect_union.m_IfcPreDefinedSymbol;
    }
    else {
        return NULL;
    }
}

void IfcDefinedSymbolSelect::setIfcPreDefinedSymbol(IfcPreDefinedSymbol *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDefinedSymbolSelect_union.m_IfcPreDefinedSymbol = value;
    if (value) {
        value->ref();
        m_type = IFCPREDEFINEDSYMBOL;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPREDEFINEDSYMBOL;
}

IfcExternallyDefinedSymbol *IfcDefinedSymbolSelect::getIfcExternallyDefinedSymbol() const {
    if (m_type == IFCEXTERNALLYDEFINEDSYMBOL) {
        return m_IfcDefinedSymbolSelect_union.m_IfcExternallyDefinedSymbol;
    }
    else {
        return NULL;
    }
}

void IfcDefinedSymbolSelect::setIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDefinedSymbolSelect_union.m_IfcExternallyDefinedSymbol = value;
    if (value) {
        value->ref();
        m_type = IFCEXTERNALLYDEFINEDSYMBOL;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCEXTERNALLYDEFINEDSYMBOL;
}

void IfcDefinedSymbolSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcPreDefinedSymbol::getClassType())) {
        setIfcPreDefinedSymbol(static_cast< IfcPreDefinedSymbol* > (v));
    }
    else if (v && v->isOfType(IfcExternallyDefinedSymbol::getClassType())) {
        setIfcExternallyDefinedSymbol(static_cast< IfcExternallyDefinedSymbol* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcDefinedSymbolSelect::s_type("IfcDefinedSymbolSelect");
