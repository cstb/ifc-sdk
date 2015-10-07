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



#include <ifc2x3/IfcBoundaryCondition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBoundaryCondition::IfcBoundaryCondition(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcBoundaryCondition::~IfcBoundaryCondition() {
}

bool IfcBoundaryCondition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundaryCondition(this);
}

const std::string &IfcBoundaryCondition::type() const {
    return IfcBoundaryCondition::s_type.getName();
}

const Step::ClassType &IfcBoundaryCondition::getClassType() {
    return IfcBoundaryCondition::s_type;
}

const Step::ClassType &IfcBoundaryCondition::getType() const {
    return IfcBoundaryCondition::s_type;
}

bool IfcBoundaryCondition::isOfType(const Step::ClassType &t) const {
    return IfcBoundaryCondition::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcBoundaryCondition::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcBoundaryCondition::getName() const {
    IfcBoundaryCondition * deConstObject = const_cast< IfcBoundaryCondition * > (this);
    return deConstObject->getName();
}

void IfcBoundaryCondition::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcBoundaryCondition::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcBoundaryCondition::testName() const {
    return !Step::isUnset(getName());
}

bool IfcBoundaryCondition::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcBoundaryCondition::copy(const IfcBoundaryCondition &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBoundaryCondition::s_type("IfcBoundaryCondition");
