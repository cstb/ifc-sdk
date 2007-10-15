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

#include "ifc2x3/IfcCalendarDate.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCalendarDate::IfcCalendarDate(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_dayComponent = Step::getUnset(m_dayComponent);
    m_monthComponent = Step::getUnset(m_monthComponent);
    m_yearComponent = Step::getUnset(m_yearComponent);
}

IfcCalendarDate::~IfcCalendarDate() {
}

bool IfcCalendarDate::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCalendarDate(this);
}

const std::string &IfcCalendarDate::type() {
    return IfcCalendarDate::s_type.getName();
}

Step::ClassType IfcCalendarDate::getClassType() {
    return IfcCalendarDate::s_type;
}

Step::ClassType IfcCalendarDate::getType() const {
    return IfcCalendarDate::s_type;
}

bool IfcCalendarDate::isOfType(Step::ClassType t) {
    return IfcCalendarDate::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcDayInMonthNumber IfcCalendarDate::getDayComponent() {
    if (Step::BaseObject::inited()) {
        return m_dayComponent;
    }
    else {
        return Step::getUnset(m_dayComponent);
    }
}

void IfcCalendarDate::setDayComponent(IfcDayInMonthNumber value) {
    m_dayComponent = value;
}

IfcMonthInYearNumber IfcCalendarDate::getMonthComponent() {
    if (Step::BaseObject::inited()) {
        return m_monthComponent;
    }
    else {
        return Step::getUnset(m_monthComponent);
    }
}

void IfcCalendarDate::setMonthComponent(IfcMonthInYearNumber value) {
    m_monthComponent = value;
}

IfcYearNumber IfcCalendarDate::getYearComponent() {
    if (Step::BaseObject::inited()) {
        return m_yearComponent;
    }
    else {
        return Step::getUnset(m_yearComponent);
    }
}

void IfcCalendarDate::setYearComponent(IfcYearNumber value) {
    m_yearComponent = value;
}

void IfcCalendarDate::release() {
}

bool IfcCalendarDate::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dayComponent = Step::getUnset(m_dayComponent);
    }
    else {
        m_dayComponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_monthComponent = Step::getUnset(m_monthComponent);
    }
    else {
        m_monthComponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yearComponent = Step::getUnset(m_yearComponent);
    }
    else {
        m_yearComponent = Step::spfToInteger(arg);
    }
    return true;
}

void IfcCalendarDate::copy(const IfcCalendarDate &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDayComponent(obj.m_dayComponent);
    setMonthComponent(obj.m_monthComponent);
    setYearComponent(obj.m_yearComponent);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCalendarDate::s_type("IfcCalendarDate");
