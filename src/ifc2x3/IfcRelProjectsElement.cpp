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



#include <ifc2x3/IfcRelProjectsElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcFeatureElementAddition.h>
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

IfcRelProjectsElement::IfcRelProjectsElement(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingElement = NULL;
    m_relatedFeatureElement = NULL;
}

IfcRelProjectsElement::~IfcRelProjectsElement() {
}

bool IfcRelProjectsElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelProjectsElement(this);
}

const std::string &IfcRelProjectsElement::type() const {
    return IfcRelProjectsElement::s_type.getName();
}

const Step::ClassType &IfcRelProjectsElement::getClassType() {
    return IfcRelProjectsElement::s_type;
}

const Step::ClassType &IfcRelProjectsElement::getType() const {
    return IfcRelProjectsElement::s_type;
}

bool IfcRelProjectsElement::isOfType(const Step::ClassType &t) const {
    return IfcRelProjectsElement::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcElement *IfcRelProjectsElement::getRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcElement *IfcRelProjectsElement::getRelatingElement() const {
    IfcRelProjectsElement * deConstObject = const_cast< IfcRelProjectsElement * > (this);
    return deConstObject->getRelatingElement();
}

void IfcRelProjectsElement::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
    if (m_relatingElement.valid()) {
        m_relatingElement->m_hasProjections.erase(this);
    }
    if (value.valid()) {
        value->m_hasProjections.insert(this);
    }
    m_relatingElement = value;
}

void IfcRelProjectsElement::unsetRelatingElement() {
    m_relatingElement = Step::getUnset(getRelatingElement());
}

bool IfcRelProjectsElement::testRelatingElement() const {
    return !Step::isUnset(getRelatingElement());
}

IfcFeatureElementAddition *IfcRelProjectsElement::getRelatedFeatureElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedFeatureElement.get();
    }
    else {
        return NULL;
    }
}

const IfcFeatureElementAddition *IfcRelProjectsElement::getRelatedFeatureElement() const {
    IfcRelProjectsElement * deConstObject = const_cast< IfcRelProjectsElement * > (this);
    return deConstObject->getRelatedFeatureElement();
}

void IfcRelProjectsElement::setRelatedFeatureElement(const Step::RefPtr< IfcFeatureElementAddition > &value) {
    if (m_relatedFeatureElement.valid()) {
        m_relatedFeatureElement->m_projectsElements = NULL;
    }
    if (value.valid()) {
        value->m_projectsElements = this;
    }
    m_relatedFeatureElement = value;
}

void IfcRelProjectsElement::unsetRelatedFeatureElement() {
    m_relatedFeatureElement = Step::getUnset(getRelatedFeatureElement());
}

bool IfcRelProjectsElement::testRelatedFeatureElement() const {
    return !Step::isUnset(getRelatedFeatureElement());
}

bool IfcRelProjectsElement::init() {
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
        m_relatedFeatureElement = NULL;
    }
    else {
        m_relatedFeatureElement = static_cast< IfcFeatureElementAddition * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelProjectsElement::copy(const IfcRelProjectsElement &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingElement((IfcElement*)copyop(obj.m_relatingElement.get()));
    setRelatedFeatureElement((IfcFeatureElementAddition*)copyop(obj.m_relatedFeatureElement.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelProjectsElement::s_type("IfcRelProjectsElement");
