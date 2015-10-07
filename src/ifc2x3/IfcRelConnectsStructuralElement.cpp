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



#include <ifc2x3/IfcRelConnectsStructuralElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/IfcStructuralMember.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelConnectsStructuralElement::IfcRelConnectsStructuralElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingElement = NULL;
    m_relatedStructuralMember = NULL;
}

IfcRelConnectsStructuralElement::~IfcRelConnectsStructuralElement() {
}

bool IfcRelConnectsStructuralElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsStructuralElement(this);
}

const std::string &IfcRelConnectsStructuralElement::type() const {
    return IfcRelConnectsStructuralElement::s_type.getName();
}

const Step::ClassType &IfcRelConnectsStructuralElement::getClassType() {
    return IfcRelConnectsStructuralElement::s_type;
}

const Step::ClassType &IfcRelConnectsStructuralElement::getType() const {
    return IfcRelConnectsStructuralElement::s_type;
}

bool IfcRelConnectsStructuralElement::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsStructuralElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelConnectsStructuralElement::getRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcElement *IfcRelConnectsStructuralElement::getRelatingElement() const {
    IfcRelConnectsStructuralElement * deConstObject = const_cast< IfcRelConnectsStructuralElement * > (this);
    return deConstObject->getRelatingElement();
}

void IfcRelConnectsStructuralElement::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
    if (m_relatingElement.valid()) {
        m_relatingElement->m_hasStructuralMember.erase(this);
    }
    if (value.valid()) {
        value->m_hasStructuralMember.insert(this);
    }
    m_relatingElement = value;
}

void IfcRelConnectsStructuralElement::unsetRelatingElement() {
    m_relatingElement = Step::getUnset(getRelatingElement());
}

bool IfcRelConnectsStructuralElement::testRelatingElement() const {
    return !Step::isUnset(getRelatingElement());
}

IfcStructuralMember *IfcRelConnectsStructuralElement::getRelatedStructuralMember() {
    if (Step::BaseObject::inited()) {
        return m_relatedStructuralMember.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralMember *IfcRelConnectsStructuralElement::getRelatedStructuralMember() const {
    IfcRelConnectsStructuralElement * deConstObject = const_cast< IfcRelConnectsStructuralElement * > (this);
    return deConstObject->getRelatedStructuralMember();
}

void IfcRelConnectsStructuralElement::setRelatedStructuralMember(const Step::RefPtr< IfcStructuralMember > &value) {
    if (m_relatedStructuralMember.valid()) {
        m_relatedStructuralMember->m_referencesElement.erase(this);
    }
    if (value.valid()) {
        value->m_referencesElement.insert(this);
    }
    m_relatedStructuralMember = value;
}

void IfcRelConnectsStructuralElement::unsetRelatedStructuralMember() {
    m_relatedStructuralMember = Step::getUnset(getRelatedStructuralMember());
}

bool IfcRelConnectsStructuralElement::testRelatedStructuralMember() const {
    return !Step::isUnset(getRelatedStructuralMember());
}

bool IfcRelConnectsStructuralElement::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingElement = NULL;
    }
    else {
        m_relatingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedStructuralMember = NULL;
    }
    else {
        m_relatedStructuralMember = static_cast< IfcStructuralMember * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelConnectsStructuralElement::copy(const IfcRelConnectsStructuralElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingElement((IfcElement*)copyop(obj.m_relatingElement.get()));
    setRelatedStructuralMember((IfcStructuralMember*)copyop(obj.m_relatedStructuralMember.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelConnectsStructuralElement::s_type("IfcRelConnectsStructuralElement");
