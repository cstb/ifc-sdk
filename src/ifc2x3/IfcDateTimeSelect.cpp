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

#include "ifc2x3/IfcDateTimeSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcDateAndTime.h"
#include "ifc2x3/IfcLocalTime.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDateTimeSelect::IfcDateTimeSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcDateTimeSelect::IfcDateTimeSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcDateTimeSelect::~IfcDateTimeSelect() {
    deleteUnion();
}

bool IfcDateTimeSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDateTimeSelect(this);
}

bool IfcDateTimeSelect::init() {
    return false;
}

const std::string &IfcDateTimeSelect::type() {
    return IfcDateTimeSelect::s_type.getName();
}

Step::ClassType IfcDateTimeSelect::getClassType() {
    return IfcDateTimeSelect::s_type;
}

Step::ClassType IfcDateTimeSelect::getType() const {
    return IfcDateTimeSelect::s_type;
}

bool IfcDateTimeSelect::isOfType(Step::ClassType t) {
    return IfcDateTimeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDateTimeSelect::copy(const IfcDateTimeSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCALENDARDATE:
        setIfcCalendarDate(copyop(obj.m_IfcDateTimeSelect_union.m_IfcCalendarDate));
        break;
    case IFCLOCALTIME:
        setIfcLocalTime(copyop(obj.m_IfcDateTimeSelect_union.m_IfcLocalTime));
        break;
    case IFCDATEANDTIME:
        setIfcDateAndTime(copyop(obj.m_IfcDateTimeSelect_union.m_IfcDateAndTime));
        break;
        }
}

char *IfcDateTimeSelect::currentTypeName() {
    switch(m_type) {
    case IFCCALENDARDATE:
        return "IfcCalendarDate";
        break;
    case IFCLOCALTIME:
        return "IfcLocalTime";
        break;
    case IFCDATEANDTIME:
        return "IfcDateAndTime";
        break;
    default:
        return "UNSET";
    }
}

IfcDateTimeSelect::IfcDateTimeSelect_select IfcDateTimeSelect::currentType() {
    return m_type;
}

void IfcDateTimeSelect::deleteUnion() {
    switch(m_type) {
    case IFCCALENDARDATE:
        m_IfcDateTimeSelect_union.m_IfcCalendarDate->unref();
        break;
    case IFCLOCALTIME:
        m_IfcDateTimeSelect_union.m_IfcLocalTime->unref();
        break;
    case IFCDATEANDTIME:
        m_IfcDateTimeSelect_union.m_IfcDateAndTime->unref();
        break;
        }
    m_type = UNSET;
}

IfcCalendarDate *IfcDateTimeSelect::getIfcCalendarDate() {
    return m_IfcDateTimeSelect_union.m_IfcCalendarDate;
}

void IfcDateTimeSelect::setIfcCalendarDate(IfcCalendarDate *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDateTimeSelect_union.m_IfcCalendarDate = value;
    if (value) {
        value->ref();
        m_type = IFCCALENDARDATE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCALENDARDATE;
}

IfcLocalTime *IfcDateTimeSelect::getIfcLocalTime() {
    return m_IfcDateTimeSelect_union.m_IfcLocalTime;
}

void IfcDateTimeSelect::setIfcLocalTime(IfcLocalTime *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDateTimeSelect_union.m_IfcLocalTime = value;
    if (value) {
        value->ref();
        m_type = IFCLOCALTIME;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCLOCALTIME;
}

IfcDateAndTime *IfcDateTimeSelect::getIfcDateAndTime() {
    return m_IfcDateTimeSelect_union.m_IfcDateAndTime;
}

void IfcDateTimeSelect::setIfcDateAndTime(IfcDateAndTime *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDateTimeSelect_union.m_IfcDateAndTime = value;
    if (value) {
        value->ref();
        m_type = IFCDATEANDTIME;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDATEANDTIME;
}

void IfcDateTimeSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcCalendarDate::getClassType())) {
        setIfcCalendarDate(static_cast< IfcCalendarDate* > (v));
    }
    else if (v->isOfType(IfcLocalTime::getClassType())) {
        setIfcLocalTime(static_cast< IfcLocalTime* > (v));
    }
    else if (v->isOfType(IfcDateAndTime::getClassType())) {
        setIfcDateAndTime(static_cast< IfcDateAndTime* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcDateTimeSelect::s_type("IfcDateTimeSelect");
