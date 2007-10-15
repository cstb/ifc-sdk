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

#include "ifc2x3/IfcOrderAction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTask.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcOrderAction::IfcOrderAction(Step::Id id, Step::SPFData *args) : IfcTask(id, args) {
    m_actionID = Step::getUnset(m_actionID);
}

IfcOrderAction::~IfcOrderAction() {
}

bool IfcOrderAction::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOrderAction(this);
}

const std::string &IfcOrderAction::type() {
    return IfcOrderAction::s_type.getName();
}

Step::ClassType IfcOrderAction::getClassType() {
    return IfcOrderAction::s_type;
}

Step::ClassType IfcOrderAction::getType() const {
    return IfcOrderAction::s_type;
}

bool IfcOrderAction::isOfType(Step::ClassType t) {
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

void IfcOrderAction::setActionID(const IfcIdentifier &value) {
    m_actionID = value;
}

void IfcOrderAction::release() {
    IfcTask::release();
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
        m_actionID = Step::spfToString(arg);
    }
    return true;
}

void IfcOrderAction::copy(const IfcOrderAction &obj, const CopyOp &copyop) {
    IfcTask::copy(obj, copyop);
    setActionID(obj.m_actionID);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOrderAction::s_type("IfcOrderAction");
