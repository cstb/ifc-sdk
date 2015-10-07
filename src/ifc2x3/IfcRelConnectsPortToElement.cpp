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



#include <ifc2x3/IfcRelConnectsPortToElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcPort.h>
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

IfcRelConnectsPortToElement::IfcRelConnectsPortToElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingPort = NULL;
    m_relatedElement = NULL;
}

IfcRelConnectsPortToElement::~IfcRelConnectsPortToElement() {
}

bool IfcRelConnectsPortToElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsPortToElement(this);
}

const std::string &IfcRelConnectsPortToElement::type() const {
    return IfcRelConnectsPortToElement::s_type.getName();
}

const Step::ClassType &IfcRelConnectsPortToElement::getClassType() {
    return IfcRelConnectsPortToElement::s_type;
}

const Step::ClassType &IfcRelConnectsPortToElement::getType() const {
    return IfcRelConnectsPortToElement::s_type;
}

bool IfcRelConnectsPortToElement::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsPortToElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcPort *IfcRelConnectsPortToElement::getRelatingPort() {
    if (Step::BaseObject::inited()) {
        return m_relatingPort.get();
    }
    else {
        return NULL;
    }
}

const IfcPort *IfcRelConnectsPortToElement::getRelatingPort() const {
    IfcRelConnectsPortToElement * deConstObject = const_cast< IfcRelConnectsPortToElement * > (this);
    return deConstObject->getRelatingPort();
}

void IfcRelConnectsPortToElement::setRelatingPort(const Step::RefPtr< IfcPort > &value) {
    if (m_relatingPort.valid()) {
        m_relatingPort->m_containedIn = NULL;
    }
    if (value.valid()) {
        value->m_containedIn = this;
    }
    m_relatingPort = value;
}

void IfcRelConnectsPortToElement::unsetRelatingPort() {
    m_relatingPort = Step::getUnset(getRelatingPort());
}

bool IfcRelConnectsPortToElement::testRelatingPort() const {
    return !Step::isUnset(getRelatingPort());
}

IfcElement *IfcRelConnectsPortToElement::getRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedElement.get();
    }
    else {
        return NULL;
    }
}

const IfcElement *IfcRelConnectsPortToElement::getRelatedElement() const {
    IfcRelConnectsPortToElement * deConstObject = const_cast< IfcRelConnectsPortToElement * > (this);
    return deConstObject->getRelatedElement();
}

void IfcRelConnectsPortToElement::setRelatedElement(const Step::RefPtr< IfcElement > &value) {
    if (m_relatedElement.valid()) {
        m_relatedElement->m_hasPorts.erase(this);
    }
    if (value.valid()) {
        value->m_hasPorts.insert(this);
    }
    m_relatedElement = value;
}

void IfcRelConnectsPortToElement::unsetRelatedElement() {
    m_relatedElement = Step::getUnset(getRelatedElement());
}

bool IfcRelConnectsPortToElement::testRelatedElement() const {
    return !Step::isUnset(getRelatedElement());
}

bool IfcRelConnectsPortToElement::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingPort = NULL;
    }
    else {
        m_relatingPort = static_cast< IfcPort * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedElement = NULL;
    }
    else {
        m_relatedElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelConnectsPortToElement::copy(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingPort((IfcPort*)copyop(obj.m_relatingPort.get()));
    setRelatedElement((IfcElement*)copyop(obj.m_relatedElement.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelConnectsPortToElement::s_type("IfcRelConnectsPortToElement");
