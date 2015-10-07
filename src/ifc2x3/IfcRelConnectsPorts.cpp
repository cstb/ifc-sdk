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



#include <ifc2x3/IfcRelConnectsPorts.h>

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

IfcRelConnectsPorts::IfcRelConnectsPorts(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatingPort = NULL;
    m_relatedPort = NULL;
    m_realizingElement = NULL;
}

IfcRelConnectsPorts::~IfcRelConnectsPorts() {
}

bool IfcRelConnectsPorts::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsPorts(this);
}

const std::string &IfcRelConnectsPorts::type() const {
    return IfcRelConnectsPorts::s_type.getName();
}

const Step::ClassType &IfcRelConnectsPorts::getClassType() {
    return IfcRelConnectsPorts::s_type;
}

const Step::ClassType &IfcRelConnectsPorts::getType() const {
    return IfcRelConnectsPorts::s_type;
}

bool IfcRelConnectsPorts::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsPorts::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcPort *IfcRelConnectsPorts::getRelatingPort() {
    if (Step::BaseObject::inited()) {
        return m_relatingPort.get();
    }
    else {
        return NULL;
    }
}

const IfcPort *IfcRelConnectsPorts::getRelatingPort() const {
    IfcRelConnectsPorts * deConstObject = const_cast< IfcRelConnectsPorts * > (this);
    return deConstObject->getRelatingPort();
}

void IfcRelConnectsPorts::setRelatingPort(const Step::RefPtr< IfcPort > &value) {
    if (m_relatingPort.valid()) {
        m_relatingPort->m_connectedTo.erase(this);
    }
    if (value.valid()) {
        value->m_connectedTo.insert(this);
    }
    m_relatingPort = value;
}

void IfcRelConnectsPorts::unsetRelatingPort() {
    m_relatingPort = Step::getUnset(getRelatingPort());
}

bool IfcRelConnectsPorts::testRelatingPort() const {
    return !Step::isUnset(getRelatingPort());
}

IfcPort *IfcRelConnectsPorts::getRelatedPort() {
    if (Step::BaseObject::inited()) {
        return m_relatedPort.get();
    }
    else {
        return NULL;
    }
}

const IfcPort *IfcRelConnectsPorts::getRelatedPort() const {
    IfcRelConnectsPorts * deConstObject = const_cast< IfcRelConnectsPorts * > (this);
    return deConstObject->getRelatedPort();
}

void IfcRelConnectsPorts::setRelatedPort(const Step::RefPtr< IfcPort > &value) {
    if (m_relatedPort.valid()) {
        m_relatedPort->m_connectedFrom.erase(this);
    }
    if (value.valid()) {
        value->m_connectedFrom.insert(this);
    }
    m_relatedPort = value;
}

void IfcRelConnectsPorts::unsetRelatedPort() {
    m_relatedPort = Step::getUnset(getRelatedPort());
}

bool IfcRelConnectsPorts::testRelatedPort() const {
    return !Step::isUnset(getRelatedPort());
}

IfcElement *IfcRelConnectsPorts::getRealizingElement() {
    if (Step::BaseObject::inited()) {
        return m_realizingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcElement *IfcRelConnectsPorts::getRealizingElement() const {
    IfcRelConnectsPorts * deConstObject = const_cast< IfcRelConnectsPorts * > (this);
    return deConstObject->getRealizingElement();
}

void IfcRelConnectsPorts::setRealizingElement(const Step::RefPtr< IfcElement > &value) {
    m_realizingElement = value;
}

void IfcRelConnectsPorts::unsetRealizingElement() {
    m_realizingElement = Step::getUnset(getRealizingElement());
}

bool IfcRelConnectsPorts::testRealizingElement() const {
    return !Step::isUnset(getRealizingElement());
}

bool IfcRelConnectsPorts::init() {
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
        m_relatedPort = NULL;
    }
    else {
        m_relatedPort = static_cast< IfcPort * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_realizingElement = NULL;
    }
    else {
        m_realizingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelConnectsPorts::copy(const IfcRelConnectsPorts &obj, const CopyOp &copyop) {
    IfcRelConnects::copy(obj, copyop);
    setRelatingPort((IfcPort*)copyop(obj.m_relatingPort.get()));
    setRelatedPort((IfcPort*)copyop(obj.m_relatedPort.get()));
    setRealizingElement((IfcElement*)copyop(obj.m_realizingElement.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelConnectsPorts::s_type("IfcRelConnectsPorts");
