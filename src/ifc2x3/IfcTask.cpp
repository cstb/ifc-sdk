/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcTask.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProcess.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcTask::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTask(this);
}

const std::string &IfcTask::type() {
    return IfcTask::s_type.getName();
}

Step::ClassType IfcTask::getClassType() {
    return IfcTask::s_type;
}

Step::ClassType IfcTask::getType() const {
    return IfcTask::s_type;
}

bool IfcTask::isOfType(Step::ClassType t) {
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

void IfcTask::setTaskId(const IfcIdentifier &value) {
    m_taskId = value;
}

IfcLabel IfcTask::getStatus() {
    if (Step::BaseObject::inited()) {
        return m_status;
    }
    else {
        return Step::getUnset(m_status);
    }
}

void IfcTask::setStatus(const IfcLabel &value) {
    m_status = value;
}

IfcLabel IfcTask::getWorkMethod() {
    if (Step::BaseObject::inited()) {
        return m_workMethod;
    }
    else {
        return Step::getUnset(m_workMethod);
    }
}

void IfcTask::setWorkMethod(const IfcLabel &value) {
    m_workMethod = value;
}

Step::Bool IfcTask::getIsMilestone() {
    if (Step::BaseObject::inited()) {
        return m_isMilestone;
    }
    else {
        return Step::getUnset(m_isMilestone);
    }
}

void IfcTask::setIsMilestone(Step::Bool value) {
    m_isMilestone = value;
}

Step::Integer IfcTask::getPriority() {
    if (Step::BaseObject::inited()) {
        return m_priority;
    }
    else {
        return Step::getUnset(m_priority);
    }
}

void IfcTask::setPriority(Step::Integer value) {
    m_priority = value;
}

void IfcTask::release() {
    IfcProcess::release();
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
        m_taskId = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_status = Step::getUnset(m_status);
    }
    else {
        m_status = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_workMethod = Step::getUnset(m_workMethod);
    }
    else {
        m_workMethod = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isMilestone = Step::getUnset(m_isMilestone);
    }
    else {
        m_isMilestone = Step::spfToBool(arg);
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

IFC2X3_DLL_DEF Step::ClassType IfcTask::s_type("IfcTask");
