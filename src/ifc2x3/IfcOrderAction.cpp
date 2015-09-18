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



#include <ifc2x3/IfcOrderAction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTask.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcOrderAction::IfcOrderAction(Step::Id id, Step::SPFData *args) : IfcTask(id, args) {
    m_actionID = Step::getUnset(m_actionID);
}

IfcOrderAction::~IfcOrderAction() {
}

bool IfcOrderAction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOrderAction(this);
}

const std::string &IfcOrderAction::type() const {
    return IfcOrderAction::s_type.getName();
}

const Step::ClassType &IfcOrderAction::getClassType() {
    return IfcOrderAction::s_type;
}

const Step::ClassType &IfcOrderAction::getType() const {
    return IfcOrderAction::s_type;
}

bool IfcOrderAction::isOfType(const Step::ClassType &t) const {
    return IfcOrderAction::s_type == t ? true : IfcTask::isOfType(t);
}

IfcIdentifier IfcOrderAction::getActionID() {
    if (Step::BaseObject::inited()) {
        return m_actionID;
    }
    else {
        return Step::getUnset(m_actionID);
    }
}

const IfcIdentifier IfcOrderAction::getActionID() const {
    IfcOrderAction * deConstObject = const_cast< IfcOrderAction * > (this);
    return deConstObject->getActionID();
}

void IfcOrderAction::setActionID(const IfcIdentifier &value) {
    m_actionID = value;
}

void IfcOrderAction::unsetActionID() {
    m_actionID = Step::getUnset(getActionID());
}

bool IfcOrderAction::testActionID() const {
    return !Step::isUnset(getActionID());
}

bool IfcOrderAction::init() {
    bool status = IfcTask::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actionID = Step::getUnset(m_actionID);
    }
    else {
        m_actionID = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcOrderAction::copy(const IfcOrderAction &obj, const CopyOp &copyop) {
    IfcTask::copy(obj, copyop);
    setActionID(obj.m_actionID);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOrderAction::s_type("IfcOrderAction");
