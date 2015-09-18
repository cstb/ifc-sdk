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



#include <ifc2x3/IfcPerformanceHistory.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPerformanceHistory::IfcPerformanceHistory(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_lifeCyclePhase = Step::getUnset(m_lifeCyclePhase);
}

IfcPerformanceHistory::~IfcPerformanceHistory() {
}

bool IfcPerformanceHistory::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPerformanceHistory(this);
}

const std::string &IfcPerformanceHistory::type() const {
    return IfcPerformanceHistory::s_type.getName();
}

const Step::ClassType &IfcPerformanceHistory::getClassType() {
    return IfcPerformanceHistory::s_type;
}

const Step::ClassType &IfcPerformanceHistory::getType() const {
    return IfcPerformanceHistory::s_type;
}

bool IfcPerformanceHistory::isOfType(const Step::ClassType &t) const {
    return IfcPerformanceHistory::s_type == t ? true : IfcControl::isOfType(t);
}

IfcLabel IfcPerformanceHistory::getLifeCyclePhase() {
    if (Step::BaseObject::inited()) {
        return m_lifeCyclePhase;
    }
    else {
        return Step::getUnset(m_lifeCyclePhase);
    }
}

const IfcLabel IfcPerformanceHistory::getLifeCyclePhase() const {
    IfcPerformanceHistory * deConstObject = const_cast< IfcPerformanceHistory * > (this);
    return deConstObject->getLifeCyclePhase();
}

void IfcPerformanceHistory::setLifeCyclePhase(const IfcLabel &value) {
    m_lifeCyclePhase = value;
}

void IfcPerformanceHistory::unsetLifeCyclePhase() {
    m_lifeCyclePhase = Step::getUnset(getLifeCyclePhase());
}

bool IfcPerformanceHistory::testLifeCyclePhase() const {
    return !Step::isUnset(getLifeCyclePhase());
}

bool IfcPerformanceHistory::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lifeCyclePhase = Step::getUnset(m_lifeCyclePhase);
    }
    else {
        m_lifeCyclePhase = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcPerformanceHistory::copy(const IfcPerformanceHistory &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setLifeCyclePhase(obj.m_lifeCyclePhase);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPerformanceHistory::s_type("IfcPerformanceHistory");
