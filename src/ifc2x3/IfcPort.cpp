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



#include <ifc2x3/IfcPort.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelConnectsPortToElement.h>
#include <ifc2x3/IfcRelConnectsPorts.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcPort::IfcPort(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
}

IfcPort::~IfcPort() {
}

bool IfcPort::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPort(this);
}

const std::string &IfcPort::type() const {
    return IfcPort::s_type.getName();
}

const Step::ClassType &IfcPort::getClassType() {
    return IfcPort::s_type;
}

const Step::ClassType &IfcPort::getType() const {
    return IfcPort::s_type;
}

bool IfcPort::isOfType(const Step::ClassType &t) const {
    return IfcPort::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcRelConnectsPortToElement *IfcPort::getContainedIn() {
    if (Step::BaseObject::inited()) {
        return m_containedIn.get();
    }
    else {
        return NULL;
    }
}

const IfcRelConnectsPortToElement *IfcPort::getContainedIn() const {
    IfcPort * deConstObject = const_cast< IfcPort * > (this);
    return deConstObject->getContainedIn();
}

bool IfcPort::testContainedIn() const {
    return !Step::isUnset(getContainedIn());
}

Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedFrom() {
    if (Step::BaseObject::inited()) {
        return m_connectedFrom;
    }
    else {
        m_connectedFrom.setUnset(true);
        return m_connectedFrom;
    }
}

const Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedFrom() const {
    IfcPort * deConstObject = const_cast< IfcPort * > (this);
    return deConstObject->getConnectedFrom();
}

bool IfcPort::testConnectedFrom() const {
    return !m_connectedFrom.isUnset();
}

Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedTo() {
    if (Step::BaseObject::inited()) {
        return m_connectedTo;
    }
    else {
        m_connectedTo.setUnset(true);
        return m_connectedTo;
    }
}

const Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedTo() const {
    IfcPort * deConstObject = const_cast< IfcPort * > (this);
    return deConstObject->getConnectedTo();
}

bool IfcPort::testConnectedTo() const {
    return !m_connectedTo.isUnset();
}

bool IfcPort::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 4);
    if (inverses) {
        m_containedIn = static_cast< IfcRelConnectsPortToElement * > (m_expressDataSet->get((*inverses)[0]));
    }
    inverses = m_args->getInverses(IfcRelConnectsPorts::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_connectedFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedFrom.insert(static_cast< IfcRelConnectsPorts * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsPorts::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_connectedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedTo.insert(static_cast< IfcRelConnectsPorts * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPort::copy(const IfcPort &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPort::s_type("IfcPort");
