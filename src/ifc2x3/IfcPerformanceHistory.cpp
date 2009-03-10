/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcPerformanceHistory.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

IFC2X3_DLL_DEF Step::ClassType IfcPerformanceHistory::s_type("IfcPerformanceHistory");
