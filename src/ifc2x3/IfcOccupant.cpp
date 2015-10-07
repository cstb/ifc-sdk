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



#include <ifc2x3/IfcOccupant.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActor.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcOccupant::IfcOccupant(Step::Id id, Step::SPFData *args) : IfcActor(id, args) {
    m_predefinedType = IfcOccupantTypeEnum_UNSET;
}

IfcOccupant::~IfcOccupant() {
}

bool IfcOccupant::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOccupant(this);
}

const std::string &IfcOccupant::type() const {
    return IfcOccupant::s_type.getName();
}

const Step::ClassType &IfcOccupant::getClassType() {
    return IfcOccupant::s_type;
}

const Step::ClassType &IfcOccupant::getType() const {
    return IfcOccupant::s_type;
}

bool IfcOccupant::isOfType(const Step::ClassType &t) const {
    return IfcOccupant::s_type == t ? true : IfcActor::isOfType(t);
}

IfcOccupantTypeEnum IfcOccupant::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcOccupantTypeEnum_UNSET;
    }
}

const IfcOccupantTypeEnum IfcOccupant::getPredefinedType() const {
    IfcOccupant * deConstObject = const_cast< IfcOccupant * > (this);
    return deConstObject->getPredefinedType();
}

void IfcOccupant::setPredefinedType(IfcOccupantTypeEnum value) {
    m_predefinedType = value;
}

void IfcOccupant::unsetPredefinedType() {
    m_predefinedType = IfcOccupantTypeEnum_UNSET;
}

bool IfcOccupant::testPredefinedType() const {
    return getPredefinedType() != IfcOccupantTypeEnum_UNSET;
}

bool IfcOccupant::init() {
    bool status = IfcActor::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcOccupantTypeEnum_UNSET;
    }
    else {
        if (arg == ".ASSIGNEE.") {
            m_predefinedType = IfcOccupantTypeEnum_ASSIGNEE;
        }
        else if (arg == ".ASSIGNOR.") {
            m_predefinedType = IfcOccupantTypeEnum_ASSIGNOR;
        }
        else if (arg == ".LESSEE.") {
            m_predefinedType = IfcOccupantTypeEnum_LESSEE;
        }
        else if (arg == ".LESSOR.") {
            m_predefinedType = IfcOccupantTypeEnum_LESSOR;
        }
        else if (arg == ".LETTINGAGENT.") {
            m_predefinedType = IfcOccupantTypeEnum_LETTINGAGENT;
        }
        else if (arg == ".OWNER.") {
            m_predefinedType = IfcOccupantTypeEnum_OWNER;
        }
        else if (arg == ".TENANT.") {
            m_predefinedType = IfcOccupantTypeEnum_TENANT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcOccupantTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcOccupantTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcOccupant::copy(const IfcOccupant &obj, const CopyOp &copyop) {
    IfcActor::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOccupant::s_type("IfcOccupant");
