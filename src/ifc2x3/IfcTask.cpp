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



#include <ifc2x3/IfcTask.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProcess.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTask::IfcTask(Step::Id id, Step::SPFData *args) : IfcProcess(id, args) {
    m_taskId = Step::getUnset(m_taskId);
    m_status = Step::getUnset(m_status);
    m_workMethod = Step::getUnset(m_workMethod);
    m_isMilestone = Step::getUnset(m_isMilestone);
    m_priority = Step::getUnset(m_priority);
}

IfcTask::~IfcTask() {
}

bool IfcTask::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTask(this);
}

const std::string &IfcTask::type() const {
    return IfcTask::s_type.getName();
}

const Step::ClassType &IfcTask::getClassType() {
    return IfcTask::s_type;
}

const Step::ClassType &IfcTask::getType() const {
    return IfcTask::s_type;
}

bool IfcTask::isOfType(const Step::ClassType &t) const {
    return IfcTask::s_type == t ? true : IfcProcess::isOfType(t);
}

IfcIdentifier IfcTask::getTaskId() {
    if (Step::BaseObject::inited()) {
        return m_taskId;
    }
    else {
        return Step::getUnset(m_taskId);
    }
}

const IfcIdentifier IfcTask::getTaskId() const {
    IfcTask * deConstObject = const_cast< IfcTask * > (this);
    return deConstObject->getTaskId();
}

void IfcTask::setTaskId(const IfcIdentifier &value) {
    m_taskId = value;
}

void IfcTask::unsetTaskId() {
    m_taskId = Step::getUnset(getTaskId());
}

bool IfcTask::testTaskId() const {
    return !Step::isUnset(getTaskId());
}

IfcLabel IfcTask::getStatus() {
    if (Step::BaseObject::inited()) {
        return m_status;
    }
    else {
        return Step::getUnset(m_status);
    }
}

const IfcLabel IfcTask::getStatus() const {
    IfcTask * deConstObject = const_cast< IfcTask * > (this);
    return deConstObject->getStatus();
}

void IfcTask::setStatus(const IfcLabel &value) {
    m_status = value;
}

void IfcTask::unsetStatus() {
    m_status = Step::getUnset(getStatus());
}

bool IfcTask::testStatus() const {
    return !Step::isUnset(getStatus());
}

IfcLabel IfcTask::getWorkMethod() {
    if (Step::BaseObject::inited()) {
        return m_workMethod;
    }
    else {
        return Step::getUnset(m_workMethod);
    }
}

const IfcLabel IfcTask::getWorkMethod() const {
    IfcTask * deConstObject = const_cast< IfcTask * > (this);
    return deConstObject->getWorkMethod();
}

void IfcTask::setWorkMethod(const IfcLabel &value) {
    m_workMethod = value;
}

void IfcTask::unsetWorkMethod() {
    m_workMethod = Step::getUnset(getWorkMethod());
}

bool IfcTask::testWorkMethod() const {
    return !Step::isUnset(getWorkMethod());
}

Step::Boolean IfcTask::getIsMilestone() {
    if (Step::BaseObject::inited()) {
        return m_isMilestone;
    }
    else {
        return Step::getUnset(m_isMilestone);
    }
}

const Step::Boolean IfcTask::getIsMilestone() const {
    IfcTask * deConstObject = const_cast< IfcTask * > (this);
    return deConstObject->getIsMilestone();
}

void IfcTask::setIsMilestone(Step::Boolean value) {
    m_isMilestone = value;
}

void IfcTask::unsetIsMilestone() {
    m_isMilestone = Step::getUnset(getIsMilestone());
}

bool IfcTask::testIsMilestone() const {
    return !Step::isUnset(getIsMilestone());
}

Step::Integer IfcTask::getPriority() {
    if (Step::BaseObject::inited()) {
        return m_priority;
    }
    else {
        return Step::getUnset(m_priority);
    }
}

const Step::Integer IfcTask::getPriority() const {
    IfcTask * deConstObject = const_cast< IfcTask * > (this);
    return deConstObject->getPriority();
}

void IfcTask::setPriority(Step::Integer value) {
    m_priority = value;
}

void IfcTask::unsetPriority() {
    m_priority = Step::getUnset(getPriority());
}

bool IfcTask::testPriority() const {
    return !Step::isUnset(getPriority());
}

bool IfcTask::init() {
    bool status = IfcProcess::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_taskId = Step::getUnset(m_taskId);
    }
    else {
        m_taskId = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_status = Step::getUnset(m_status);
    }
    else {
        m_status = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_workMethod = Step::getUnset(m_workMethod);
    }
    else {
        m_workMethod = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isMilestone = Step::getUnset(m_isMilestone);
    }
    else {
        m_isMilestone = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_priority = Step::getUnset(m_priority);
    }
    else {
        m_priority = Step::spfToInteger(arg);
    }
    return true;
}

void IfcTask::copy(const IfcTask &obj, const CopyOp &copyop) {
    IfcProcess::copy(obj, copyop);
    setTaskId(obj.m_taskId);
    setStatus(obj.m_status);
    setWorkMethod(obj.m_workMethod);
    setIsMilestone(obj.m_isMilestone);
    setPriority(obj.m_priority);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTask::s_type("IfcTask");
