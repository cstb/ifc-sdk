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

#include "ifc2x3/IfcRelAssignsTasks.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelAssignsToControl.h"
#include "ifc2x3/IfcScheduleTimeControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelAssignsTasks::IfcRelAssignsTasks(Step::Id id, Step::SPFData *args) : IfcRelAssignsToControl(id, args) {
    m_timeForTask = NULL;
}

IfcRelAssignsTasks::~IfcRelAssignsTasks() {
}

bool IfcRelAssignsTasks::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAssignsTasks(this);
}

const std::string &IfcRelAssignsTasks::type() {
    return IfcRelAssignsTasks::s_type.getName();
}

Step::ClassType IfcRelAssignsTasks::getClassType() {
    return IfcRelAssignsTasks::s_type;
}

Step::ClassType IfcRelAssignsTasks::getType() const {
    return IfcRelAssignsTasks::s_type;
}

bool IfcRelAssignsTasks::isOfType(Step::ClassType t) {
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

void IfcRelAssignsTasks::setTimeForTask(const Step::RefPtr< IfcScheduleTimeControl > &value) {
    m_timeForTask = value;
    m_timeForTask->m_scheduleTimeControlAssigned = this;
}

void IfcRelAssignsTasks::release() {
    IfcRelAssignsToControl::release();
    m_timeForTask.release();
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
        m_timeForTask = static_cast< IfcScheduleTimeControl * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelAssignsTasks::copy(const IfcRelAssignsTasks &obj, const CopyOp &copyop) {
    IfcRelAssignsToControl::copy(obj, copyop);
    setTimeForTask(copyop(obj.m_timeForTask.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsTasks::s_type("IfcRelAssignsTasks");
