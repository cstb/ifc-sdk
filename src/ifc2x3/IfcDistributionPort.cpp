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



#include <ifc2x3/IfcDistributionPort.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPort.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDistributionPort::IfcDistributionPort(Step::Id id, Step::SPFData *args) : IfcPort(id, args) {
    m_flowDirection = IfcFlowDirectionEnum_UNSET;
}

IfcDistributionPort::~IfcDistributionPort() {
}

bool IfcDistributionPort::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDistributionPort(this);
}

const std::string &IfcDistributionPort::type() const {
    return IfcDistributionPort::s_type.getName();
}

const Step::ClassType &IfcDistributionPort::getClassType() {
    return IfcDistributionPort::s_type;
}

const Step::ClassType &IfcDistributionPort::getType() const {
    return IfcDistributionPort::s_type;
}

bool IfcDistributionPort::isOfType(const Step::ClassType &t) const {
    return IfcDistributionPort::s_type == t ? true : IfcPort::isOfType(t);
}

IfcFlowDirectionEnum IfcDistributionPort::getFlowDirection() {
    if (Step::BaseObject::inited()) {
        return m_flowDirection;
    }
    else {
        return IfcFlowDirectionEnum_UNSET;
    }
}

const IfcFlowDirectionEnum IfcDistributionPort::getFlowDirection() const {
    IfcDistributionPort * deConstObject = const_cast< IfcDistributionPort * > (this);
    return deConstObject->getFlowDirection();
}

void IfcDistributionPort::setFlowDirection(IfcFlowDirectionEnum value) {
    m_flowDirection = value;
}

void IfcDistributionPort::unsetFlowDirection() {
    m_flowDirection = IfcFlowDirectionEnum_UNSET;
}

bool IfcDistributionPort::testFlowDirection() const {
    return getFlowDirection() != IfcFlowDirectionEnum_UNSET;
}

bool IfcDistributionPort::init() {
    bool status = IfcPort::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowDirection = IfcFlowDirectionEnum_UNSET;
    }
    else {
        if (arg == ".SOURCE.") {
            m_flowDirection = IfcFlowDirectionEnum_SOURCE;
        }
        else if (arg == ".SINK.") {
            m_flowDirection = IfcFlowDirectionEnum_SINK;
        }
        else if (arg == ".SOURCEANDSINK.") {
            m_flowDirection = IfcFlowDirectionEnum_SOURCEANDSINK;
        }
        else if (arg == ".NOTDEFINED.") {
            m_flowDirection = IfcFlowDirectionEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDistributionPort::copy(const IfcDistributionPort &obj, const CopyOp &copyop) {
    IfcPort::copy(obj, copyop);
    setFlowDirection(obj.m_flowDirection);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDistributionPort::s_type("IfcDistributionPort");
