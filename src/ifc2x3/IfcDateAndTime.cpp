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

#include "ifc2x3/IfcDateAndTime.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcLocalTime.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDateAndTime::IfcDateAndTime(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_dateComponent = NULL;
    m_timeComponent = NULL;
}

IfcDateAndTime::~IfcDateAndTime() {
}

bool IfcDateAndTime::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDateAndTime(this);
}

const std::string &IfcDateAndTime::type() {
    return IfcDateAndTime::s_type.getName();
}

Step::ClassType IfcDateAndTime::getClassType() {
    return IfcDateAndTime::s_type;
}

Step::ClassType IfcDateAndTime::getType() const {
    return IfcDateAndTime::s_type;
}

bool IfcDateAndTime::isOfType(Step::ClassType t) {
    return IfcDateAndTime::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcCalendarDate *IfcDateAndTime::getDateComponent() {
    if (Step::BaseObject::inited()) {
        return m_dateComponent.get();
    }
    else {
        return NULL;
    }
}

void IfcDateAndTime::setDateComponent(const Step::RefPtr< IfcCalendarDate > &value) {
    m_dateComponent = value;
}

IfcLocalTime *IfcDateAndTime::getTimeComponent() {
    if (Step::BaseObject::inited()) {
        return m_timeComponent.get();
    }
    else {
        return NULL;
    }
}

void IfcDateAndTime::setTimeComponent(const Step::RefPtr< IfcLocalTime > &value) {
    m_timeComponent = value;
}

void IfcDateAndTime::release() {
    m_dateComponent.release();
    m_timeComponent.release();
}

bool IfcDateAndTime::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dateComponent = NULL;
    }
    else {
        m_dateComponent = static_cast< IfcCalendarDate * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeComponent = NULL;
    }
    else {
        m_timeComponent = static_cast< IfcLocalTime * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcDateAndTime::copy(const IfcDateAndTime &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDateComponent(copyop(obj.m_dateComponent.get()));
    setTimeComponent(copyop(obj.m_timeComponent.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDateAndTime::s_type("IfcDateAndTime");
