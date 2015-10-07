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



#include <ifc2x3/IfcRelVoidsElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcFeatureElementSubtraction.h>
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

IfcRelVoidsElement::IfcRelVoidsElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingBuildingElement = NULL;
    m_relatedOpeningElement = NULL;
}

IfcRelVoidsElement::~IfcRelVoidsElement() {
}

bool IfcRelVoidsElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelVoidsElement(this);
}

const std::string &IfcRelVoidsElement::type() const {
    return IfcRelVoidsElement::s_type.getName();
}

const Step::ClassType &IfcRelVoidsElement::getClassType() {
    return IfcRelVoidsElement::s_type;
}

const Step::ClassType &IfcRelVoidsElement::getType() const {
    return IfcRelVoidsElement::s_type;
}

bool IfcRelVoidsElement::isOfType(const Step::ClassType &t) const {
    return IfcRelVoidsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelVoidsElement::getRelatingBuildingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingBuildingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcElement *IfcRelVoidsElement::getRelatingBuildingElement() const {
    IfcRelVoidsElement * deConstObject = const_cast< IfcRelVoidsElement * > (this);
    return deConstObject->getRelatingBuildingElement();
}

void IfcRelVoidsElement::setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value) {
    if (m_relatingBuildingElement.valid()) {
        m_relatingBuildingElement->m_hasOpenings.erase(this);
    }
    if (value.valid()) {
        value->m_hasOpenings.insert(this);
    }
    m_relatingBuildingElement = value;
}

void IfcRelVoidsElement::unsetRelatingBuildingElement() {
    m_relatingBuildingElement = Step::getUnset(getRelatingBuildingElement());
}

bool IfcRelVoidsElement::testRelatingBuildingElement() const {
    return !Step::isUnset(getRelatingBuildingElement());
}

IfcFeatureElementSubtraction *IfcRelVoidsElement::getRelatedOpeningElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedOpeningElement.get();
    }
    else {
        return NULL;
    }
}

const IfcFeatureElementSubtraction *IfcRelVoidsElement::getRelatedOpeningElement() const {
    IfcRelVoidsElement * deConstObject = const_cast< IfcRelVoidsElement * > (this);
    return deConstObject->getRelatedOpeningElement();
}

void IfcRelVoidsElement::setRelatedOpeningElement(const Step::RefPtr< IfcFeatureElementSubtraction > &value) {
    if (m_relatedOpeningElement.valid()) {
        m_relatedOpeningElement->m_voidsElements = NULL;
    }
    if (value.valid()) {
        value->m_voidsElements = this;
    }
    m_relatedOpeningElement = value;
}

void IfcRelVoidsElement::unsetRelatedOpeningElement() {
    m_relatedOpeningElement = Step::getUnset(getRelatedOpeningElement());
}

bool IfcRelVoidsElement::testRelatedOpeningElement() const {
    return !Step::isUnset(getRelatedOpeningElement());
}

bool IfcRelVoidsElement::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingBuildingElement = NULL;
    }
    else {
        m_relatingBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedOpeningElement = NULL;
    }
    else {
        m_relatedOpeningElement = static_cast< IfcFeatureElementSubtraction * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelVoidsElement::copy(const IfcRelVoidsElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingBuildingElement((IfcElement*)copyop(obj.m_relatingBuildingElement.get()));
    setRelatedOpeningElement((IfcFeatureElementSubtraction*)copyop(obj.m_relatedOpeningElement.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelVoidsElement::s_type("IfcRelVoidsElement");
