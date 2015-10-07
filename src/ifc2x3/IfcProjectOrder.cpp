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



#include <ifc2x3/IfcProjectOrder.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcProjectOrder::IfcProjectOrder(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_iD = Step::getUnset(m_iD);
    m_predefinedType = IfcProjectOrderTypeEnum_UNSET;
    m_status = Step::getUnset(m_status);
}

IfcProjectOrder::~IfcProjectOrder() {
}

bool IfcProjectOrder::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProjectOrder(this);
}

const std::string &IfcProjectOrder::type() const {
    return IfcProjectOrder::s_type.getName();
}

const Step::ClassType &IfcProjectOrder::getClassType() {
    return IfcProjectOrder::s_type;
}

const Step::ClassType &IfcProjectOrder::getType() const {
    return IfcProjectOrder::s_type;
}

bool IfcProjectOrder::isOfType(const Step::ClassType &t) const {
    return IfcProjectOrder::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcProjectOrder::getID() {
    if (Step::BaseObject::inited()) {
        return m_iD;
    }
    else {
        return Step::getUnset(m_iD);
    }
}

const IfcIdentifier IfcProjectOrder::getID() const {
    IfcProjectOrder * deConstObject = const_cast< IfcProjectOrder * > (this);
    return deConstObject->getID();
}

void IfcProjectOrder::setID(const IfcIdentifier &value) {
    m_iD = value;
}

void IfcProjectOrder::unsetID() {
    m_iD = Step::getUnset(getID());
}

bool IfcProjectOrder::testID() const {
    return !Step::isUnset(getID());
}

IfcProjectOrderTypeEnum IfcProjectOrder::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcProjectOrderTypeEnum_UNSET;
    }
}

const IfcProjectOrderTypeEnum IfcProjectOrder::getPredefinedType() const {
    IfcProjectOrder * deConstObject = const_cast< IfcProjectOrder * > (this);
    return deConstObject->getPredefinedType();
}

void IfcProjectOrder::setPredefinedType(IfcProjectOrderTypeEnum value) {
    m_predefinedType = value;
}

void IfcProjectOrder::unsetPredefinedType() {
    m_predefinedType = IfcProjectOrderTypeEnum_UNSET;
}

bool IfcProjectOrder::testPredefinedType() const {
    return getPredefinedType() != IfcProjectOrderTypeEnum_UNSET;
}

IfcLabel IfcProjectOrder::getStatus() {
    if (Step::BaseObject::inited()) {
        return m_status;
    }
    else {
        return Step::getUnset(m_status);
    }
}

const IfcLabel IfcProjectOrder::getStatus() const {
    IfcProjectOrder * deConstObject = const_cast< IfcProjectOrder * > (this);
    return deConstObject->getStatus();
}

void IfcProjectOrder::setStatus(const IfcLabel &value) {
    m_status = value;
}

void IfcProjectOrder::unsetStatus() {
    m_status = Step::getUnset(getStatus());
}

bool IfcProjectOrder::testStatus() const {
    return !Step::isUnset(getStatus());
}

bool IfcProjectOrder::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_iD = Step::getUnset(m_iD);
    }
    else {
        m_iD = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcProjectOrderTypeEnum_UNSET;
    }
    else {
        if (arg == ".CHANGEORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_CHANGEORDER;
        }
        else if (arg == ".MAINTENANCEWORKORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_MAINTENANCEWORKORDER;
        }
        else if (arg == ".MOVEORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_MOVEORDER;
        }
        else if (arg == ".PURCHASEORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_PURCHASEORDER;
        }
        else if (arg == ".WORKORDER.") {
            m_predefinedType = IfcProjectOrderTypeEnum_WORKORDER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcProjectOrderTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcProjectOrderTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_status = Step::getUnset(m_status);
    }
    else {
        m_status = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcProjectOrder::copy(const IfcProjectOrder &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setID(obj.m_iD);
    setPredefinedType(obj.m_predefinedType);
    setStatus(obj.m_status);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcProjectOrder::s_type("IfcProjectOrder");
