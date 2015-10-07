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



#include <ifc2x3/IfcPermit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPermit::IfcPermit(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_permitID = Step::getUnset(m_permitID);
}

IfcPermit::~IfcPermit() {
}

bool IfcPermit::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPermit(this);
}

const std::string &IfcPermit::type() const {
    return IfcPermit::s_type.getName();
}

const Step::ClassType &IfcPermit::getClassType() {
    return IfcPermit::s_type;
}

const Step::ClassType &IfcPermit::getType() const {
    return IfcPermit::s_type;
}

bool IfcPermit::isOfType(const Step::ClassType &t) const {
    return IfcPermit::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcPermit::getPermitID() {
    if (Step::BaseObject::inited()) {
        return m_permitID;
    }
    else {
        return Step::getUnset(m_permitID);
    }
}

const IfcIdentifier IfcPermit::getPermitID() const {
    IfcPermit * deConstObject = const_cast< IfcPermit * > (this);
    return deConstObject->getPermitID();
}

void IfcPermit::setPermitID(const IfcIdentifier &value) {
    m_permitID = value;
}

void IfcPermit::unsetPermitID() {
    m_permitID = Step::getUnset(getPermitID());
}

bool IfcPermit::testPermitID() const {
    return !Step::isUnset(getPermitID());
}

bool IfcPermit::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_permitID = Step::getUnset(m_permitID);
    }
    else {
        m_permitID = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcPermit::copy(const IfcPermit &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setPermitID(obj.m_permitID);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPermit::s_type("IfcPermit");
