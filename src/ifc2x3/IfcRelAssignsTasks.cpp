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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcRelAssignsTasks.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/IfcScheduleTimeControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelAssignsTasks::IfcRelAssignsTasks(Step::Id id, Step::SPFData *args) : IfcRelAssignsToControl(id, args) {
    m_timeForTask = NULL;
}

IfcRelAssignsTasks::~IfcRelAssignsTasks() {
}

bool IfcRelAssignsTasks::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssignsTasks(this);
}

const std::string &IfcRelAssignsTasks::type() const {
    return IfcRelAssignsTasks::s_type.getName();
}

const Step::ClassType &IfcRelAssignsTasks::getClassType() {
    return IfcRelAssignsTasks::s_type;
}

const Step::ClassType &IfcRelAssignsTasks::getType() const {
    return IfcRelAssignsTasks::s_type;
}

bool IfcRelAssignsTasks::isOfType(const Step::ClassType &t) const {
    return IfcRelAssignsTasks::s_type == t ? true : IfcRelAssignsToControl::isOfType(t);
}

IfcScheduleTimeControl *IfcRelAssignsTasks::getTimeForTask() {
    if (Step::BaseObject::inited()) {
        return m_timeForTask.get();
    }
    else {
        return NULL;
    }
}

const IfcScheduleTimeControl *IfcRelAssignsTasks::getTimeForTask() const {
    IfcRelAssignsTasks * deConstObject = const_cast< IfcRelAssignsTasks * > (this);
    return deConstObject->getTimeForTask();
}

void IfcRelAssignsTasks::setTimeForTask(const Step::RefPtr< IfcScheduleTimeControl > &value) {
    if (m_timeForTask.valid()) {
        m_timeForTask->m_scheduleTimeControlAssigned = NULL;
    }
    if (value.valid()) {
        value->m_scheduleTimeControlAssigned = this;
    }
    m_timeForTask = value;
}

void IfcRelAssignsTasks::unsetTimeForTask() {
    m_timeForTask = Step::getUnset(getTimeForTask());
}

bool IfcRelAssignsTasks::testTimeForTask() const {
    return !Step::isUnset(getTimeForTask());
}

bool IfcRelAssignsTasks::init() {
    bool status = IfcRelAssignsToControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeForTask = NULL;
    }
    else {
        m_timeForTask = static_cast< IfcScheduleTimeControl * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssignsTasks::copy(const IfcRelAssignsTasks &obj, const CopyOp &copyop) {
    IfcRelAssignsToControl::copy(obj, copyop);
    setTimeForTask((IfcScheduleTimeControl*)copyop(obj.m_timeForTask.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsTasks::s_type("IfcRelAssignsTasks");
