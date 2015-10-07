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



#include <ifc2x3/IfcRelFillsElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcOpeningElement.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelFillsElement::IfcRelFillsElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingOpeningElement = NULL;
    m_relatedBuildingElement = NULL;
}

IfcRelFillsElement::~IfcRelFillsElement() {
}

bool IfcRelFillsElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelFillsElement(this);
}

const std::string &IfcRelFillsElement::type() const {
    return IfcRelFillsElement::s_type.getName();
}

const Step::ClassType &IfcRelFillsElement::getClassType() {
    return IfcRelFillsElement::s_type;
}

const Step::ClassType &IfcRelFillsElement::getType() const {
    return IfcRelFillsElement::s_type;
}

bool IfcRelFillsElement::isOfType(const Step::ClassType &t) const {
    return IfcRelFillsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcOpeningElement *IfcRelFillsElement::getRelatingOpeningElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingOpeningElement.get();
    }
    else {
        return NULL;
    }
}

const IfcOpeningElement *IfcRelFillsElement::getRelatingOpeningElement() const {
    IfcRelFillsElement * deConstObject = const_cast< IfcRelFillsElement * > (this);
    return deConstObject->getRelatingOpeningElement();
}

void IfcRelFillsElement::setRelatingOpeningElement(const Step::RefPtr< IfcOpeningElement > &value) {
    if (m_relatingOpeningElement.valid()) {
        m_relatingOpeningElement->m_hasFillings.erase(this);
    }
    if (value.valid()) {
        value->m_hasFillings.insert(this);
    }
    m_relatingOpeningElement = value;
}

void IfcRelFillsElement::unsetRelatingOpeningElement() {
    m_relatingOpeningElement = Step::getUnset(getRelatingOpeningElement());
}

bool IfcRelFillsElement::testRelatingOpeningElement() const {
    return !Step::isUnset(getRelatingOpeningElement());
}

IfcElement *IfcRelFillsElement::getRelatedBuildingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedBuildingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcElement *IfcRelFillsElement::getRelatedBuildingElement() const {
    IfcRelFillsElement * deConstObject = const_cast< IfcRelFillsElement * > (this);
    return deConstObject->getRelatedBuildingElement();
}

void IfcRelFillsElement::setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value) {
    if (m_relatedBuildingElement.valid()) {
        m_relatedBuildingElement->m_fillsVoids.erase(this);
    }
    if (value.valid()) {
        value->m_fillsVoids.insert(this);
    }
    m_relatedBuildingElement = value;
}

void IfcRelFillsElement::unsetRelatedBuildingElement() {
    m_relatedBuildingElement = Step::getUnset(getRelatedBuildingElement());
}

bool IfcRelFillsElement::testRelatedBuildingElement() const {
    return !Step::isUnset(getRelatedBuildingElement());
}

bool IfcRelFillsElement::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingOpeningElement = NULL;
    }
    else {
        m_relatingOpeningElement = static_cast< IfcOpeningElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedBuildingElement = NULL;
    }
    else {
        m_relatedBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelFillsElement::copy(const IfcRelFillsElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingOpeningElement((IfcOpeningElement*)copyop(obj.m_relatingOpeningElement.get()));
    setRelatedBuildingElement((IfcElement*)copyop(obj.m_relatedBuildingElement.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelFillsElement::s_type("IfcRelFillsElement");
