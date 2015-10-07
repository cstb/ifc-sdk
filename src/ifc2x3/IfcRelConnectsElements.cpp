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



#include <ifc2x3/IfcRelConnectsElements.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcElement.h>
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

IfcRelConnectsElements::IfcRelConnectsElements(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_connectionGeometry = NULL;
    m_relatingElement = NULL;
    m_relatedElement = NULL;
}

IfcRelConnectsElements::~IfcRelConnectsElements() {
}

bool IfcRelConnectsElements::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsElements(this);
}

const std::string &IfcRelConnectsElements::type() const {
    return IfcRelConnectsElements::s_type.getName();
}

const Step::ClassType &IfcRelConnectsElements::getClassType() {
    return IfcRelConnectsElements::s_type;
}

const Step::ClassType &IfcRelConnectsElements::getType() const {
    return IfcRelConnectsElements::s_type;
}

bool IfcRelConnectsElements::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsElements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcConnectionGeometry *IfcRelConnectsElements::getConnectionGeometry() {
    if (Step::BaseObject::inited()) {
        return m_connectionGeometry.get();
    }
    else {
        return NULL;
    }
}

const IfcConnectionGeometry *IfcRelConnectsElements::getConnectionGeometry() const {
    IfcRelConnectsElements * deConstObject = const_cast< IfcRelConnectsElements * > (this);
    return deConstObject->getConnectionGeometry();
}

void IfcRelConnectsElements::setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value) {
    m_connectionGeometry = value;
}

void IfcRelConnectsElements::unsetConnectionGeometry() {
    m_connectionGeometry = Step::getUnset(getConnectionGeometry());
}

bool IfcRelConnectsElements::testConnectionGeometry() const {
    return !Step::isUnset(getConnectionGeometry());
}

IfcElement *IfcRelConnectsElements::getRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcElement *IfcRelConnectsElements::getRelatingElement() const {
    IfcRelConnectsElements * deConstObject = const_cast< IfcRelConnectsElements * > (this);
    return deConstObject->getRelatingElement();
}

void IfcRelConnectsElements::setRelatingElement(const Step::RefPtr< IfcElement > &value) {
    if (m_relatingElement.valid()) {
        m_relatingElement->m_connectedTo.erase(this);
    }
    if (value.valid()) {
        value->m_connectedTo.insert(this);
    }
    m_relatingElement = value;
}

void IfcRelConnectsElements::unsetRelatingElement() {
    m_relatingElement = Step::getUnset(getRelatingElement());
}

bool IfcRelConnectsElements::testRelatingElement() const {
    return !Step::isUnset(getRelatingElement());
}

IfcElement *IfcRelConnectsElements::getRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_relatedElement.get();
    }
    else {
        return NULL;
    }
}

const IfcElement *IfcRelConnectsElements::getRelatedElement() const {
    IfcRelConnectsElements * deConstObject = const_cast< IfcRelConnectsElements * > (this);
    return deConstObject->getRelatedElement();
}

void IfcRelConnectsElements::setRelatedElement(const Step::RefPtr< IfcElement > &value) {
    if (m_relatedElement.valid()) {
        m_relatedElement->m_connectedFrom.erase(this);
    }
    if (value.valid()) {
        value->m_connectedFrom.insert(this);
    }
    m_relatedElement = value;
}

void IfcRelConnectsElements::unsetRelatedElement() {
    m_relatedElement = Step::getUnset(getRelatedElement());
}

bool IfcRelConnectsElements::testRelatedElement() const {
    return !Step::isUnset(getRelatedElement());
}

bool IfcRelConnectsElements::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_connectionGeometry = NULL;
    }
    else {
        m_connectionGeometry = static_cast< IfcConnectionGeometry * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
        m_relatedElement = NULL;
    }
    else {
        m_relatedElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelConnectsElements::copy(const IfcRelConnectsElements &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setConnectionGeometry((IfcConnectionGeometry*)copyop(obj.m_connectionGeometry.get()));
    setRelatingElement((IfcElement*)copyop(obj.m_relatingElement.get()));
    setRelatedElement((IfcElement*)copyop(obj.m_relatedElement.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelConnectsElements::s_type("IfcRelConnectsElements");
