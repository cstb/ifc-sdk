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



#include <ifc2x3/IfcLaborResource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConstructionResource.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLaborResource::IfcLaborResource(Step::Id id, Step::SPFData *args) : IfcConstructionResource(id, args) {
    m_skillSet = Step::getUnset(m_skillSet);
}

IfcLaborResource::~IfcLaborResource() {
}

bool IfcLaborResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLaborResource(this);
}

const std::string &IfcLaborResource::type() const {
    return IfcLaborResource::s_type.getName();
}

const Step::ClassType &IfcLaborResource::getClassType() {
    return IfcLaborResource::s_type;
}

const Step::ClassType &IfcLaborResource::getType() const {
    return IfcLaborResource::s_type;
}

bool IfcLaborResource::isOfType(const Step::ClassType &t) const {
    return IfcLaborResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

IfcText IfcLaborResource::getSkillSet() {
    if (Step::BaseObject::inited()) {
        return m_skillSet;
    }
    else {
        return Step::getUnset(m_skillSet);
    }
}

const IfcText IfcLaborResource::getSkillSet() const {
    IfcLaborResource * deConstObject = const_cast< IfcLaborResource * > (this);
    return deConstObject->getSkillSet();
}

void IfcLaborResource::setSkillSet(const IfcText &value) {
    m_skillSet = value;
}

void IfcLaborResource::unsetSkillSet() {
    m_skillSet = Step::getUnset(getSkillSet());
}

bool IfcLaborResource::testSkillSet() const {
    return !Step::isUnset(getSkillSet());
}

bool IfcLaborResource::init() {
    bool status = IfcConstructionResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_skillSet = Step::getUnset(m_skillSet);
    }
    else {
        m_skillSet = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcLaborResource::copy(const IfcLaborResource &obj, const CopyOp &copyop) {
    IfcConstructionResource::copy(obj, copyop);
    setSkillSet(obj.m_skillSet);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLaborResource::s_type("IfcLaborResource");
