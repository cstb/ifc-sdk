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



#include <ifc2x3/IfcFillAreaStyleTileSymbolWithStyle.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAnnotationSymbolOccurrence.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFillAreaStyleTileSymbolWithStyle::IfcFillAreaStyleTileSymbolWithStyle(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_symbol = NULL;
}

IfcFillAreaStyleTileSymbolWithStyle::~IfcFillAreaStyleTileSymbolWithStyle() {
}

bool IfcFillAreaStyleTileSymbolWithStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFillAreaStyleTileSymbolWithStyle(this);
}

const std::string &IfcFillAreaStyleTileSymbolWithStyle::type() const {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type.getName();
}

const Step::ClassType &IfcFillAreaStyleTileSymbolWithStyle::getClassType() {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type;
}

const Step::ClassType &IfcFillAreaStyleTileSymbolWithStyle::getType() const {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type;
}

bool IfcFillAreaStyleTileSymbolWithStyle::isOfType(const Step::ClassType &t) const {
    return IfcFillAreaStyleTileSymbolWithStyle::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcAnnotationSymbolOccurrence *IfcFillAreaStyleTileSymbolWithStyle::getSymbol() {
    if (Step::BaseObject::inited()) {
        return m_symbol.get();
    }
    else {
        return NULL;
    }
}

const IfcAnnotationSymbolOccurrence *IfcFillAreaStyleTileSymbolWithStyle::getSymbol() const {
    IfcFillAreaStyleTileSymbolWithStyle * deConstObject = const_cast< IfcFillAreaStyleTileSymbolWithStyle * > (this);
    return deConstObject->getSymbol();
}

void IfcFillAreaStyleTileSymbolWithStyle::setSymbol(const Step::RefPtr< IfcAnnotationSymbolOccurrence > &value) {
    m_symbol = value;
}

void IfcFillAreaStyleTileSymbolWithStyle::unsetSymbol() {
    m_symbol = Step::getUnset(getSymbol());
}

bool IfcFillAreaStyleTileSymbolWithStyle::testSymbol() const {
    return !Step::isUnset(getSymbol());
}

bool IfcFillAreaStyleTileSymbolWithStyle::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_symbol = NULL;
    }
    else {
        m_symbol = static_cast< IfcAnnotationSymbolOccurrence * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcFillAreaStyleTileSymbolWithStyle::copy(const IfcFillAreaStyleTileSymbolWithStyle &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setSymbol((IfcAnnotationSymbolOccurrence*)copyop(obj.m_symbol.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFillAreaStyleTileSymbolWithStyle::s_type("IfcFillAreaStyleTileSymbolWithStyle");
