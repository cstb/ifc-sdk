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



#include <ifc2x3/IfcServiceLife.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcServiceLife::IfcServiceLife(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_serviceLifeType = IfcServiceLifeTypeEnum_UNSET;
    m_serviceLifeDuration = Step::getUnset(m_serviceLifeDuration);
}

IfcServiceLife::~IfcServiceLife() {
}

bool IfcServiceLife::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcServiceLife(this);
}

const std::string &IfcServiceLife::type() const {
    return IfcServiceLife::s_type.getName();
}

const Step::ClassType &IfcServiceLife::getClassType() {
    return IfcServiceLife::s_type;
}

const Step::ClassType &IfcServiceLife::getType() const {
    return IfcServiceLife::s_type;
}

bool IfcServiceLife::isOfType(const Step::ClassType &t) const {
    return IfcServiceLife::s_type == t ? true : IfcControl::isOfType(t);
}

IfcServiceLifeTypeEnum IfcServiceLife::getServiceLifeType() {
    if (Step::BaseObject::inited()) {
        return m_serviceLifeType;
    }
    else {
        return IfcServiceLifeTypeEnum_UNSET;
    }
}

const IfcServiceLifeTypeEnum IfcServiceLife::getServiceLifeType() const {
    IfcServiceLife * deConstObject = const_cast< IfcServiceLife * > (this);
    return deConstObject->getServiceLifeType();
}

void IfcServiceLife::setServiceLifeType(IfcServiceLifeTypeEnum value) {
    m_serviceLifeType = value;
}

void IfcServiceLife::unsetServiceLifeType() {
    m_serviceLifeType = IfcServiceLifeTypeEnum_UNSET;
}

bool IfcServiceLife::testServiceLifeType() const {
    return getServiceLifeType() != IfcServiceLifeTypeEnum_UNSET;
}

IfcTimeMeasure IfcServiceLife::getServiceLifeDuration() {
    if (Step::BaseObject::inited()) {
        return m_serviceLifeDuration;
    }
    else {
        return Step::getUnset(m_serviceLifeDuration);
    }
}

const IfcTimeMeasure IfcServiceLife::getServiceLifeDuration() const {
    IfcServiceLife * deConstObject = const_cast< IfcServiceLife * > (this);
    return deConstObject->getServiceLifeDuration();
}

void IfcServiceLife::setServiceLifeDuration(IfcTimeMeasure value) {
    m_serviceLifeDuration = value;
}

void IfcServiceLife::unsetServiceLifeDuration() {
    m_serviceLifeDuration = Step::getUnset(getServiceLifeDuration());
}

bool IfcServiceLife::testServiceLifeDuration() const {
    return !Step::isUnset(getServiceLifeDuration());
}

bool IfcServiceLife::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_serviceLifeType = IfcServiceLifeTypeEnum_UNSET;
    }
    else {
        if (arg == ".ACTUALSERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_ACTUALSERVICELIFE;
        }
        else if (arg == ".EXPECTEDSERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_EXPECTEDSERVICELIFE;
        }
        else if (arg == ".OPTIMISTICREFERENCESERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_OPTIMISTICREFERENCESERVICELIFE;
        }
        else if (arg == ".PESSIMISTICREFERENCESERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_PESSIMISTICREFERENCESERVICELIFE;
        }
        else if (arg == ".REFERENCESERVICELIFE.") {
            m_serviceLifeType = IfcServiceLifeTypeEnum_REFERENCESERVICELIFE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_serviceLifeDuration = Step::getUnset(m_serviceLifeDuration);
    }
    else {
        m_serviceLifeDuration = Step::spfToReal(arg);
    }
    return true;
}

void IfcServiceLife::copy(const IfcServiceLife &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setServiceLifeType(obj.m_serviceLifeType);
    setServiceLifeDuration(obj.m_serviceLifeDuration);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcServiceLife::s_type("IfcServiceLife");
