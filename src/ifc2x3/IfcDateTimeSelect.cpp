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

#include "ifc2x3/IfcDateTimeSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcDateAndTime.h"
#include "ifc2x3/IfcLocalTime.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

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

bool IfcDateTimeSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDateTimeSelect(this);
}

bool IfcDateTimeSelect::init() {
    return false;
}

const std::string &IfcDateTimeSelect::type() const {
    return IfcDateTimeSelect::s_type.getName();
}

const Step::ClassType &IfcDateTimeSelect::getClassType() {
    return IfcDateTimeSelect::s_type;
}

const Step::ClassType &IfcDateTimeSelect::getType() const {
    return IfcDateTimeSelect::s_type;
}

bool IfcDateTimeSelect::isOfType(const Step::ClassType &t) const {
    return IfcDateTimeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDateTimeSelect::copy(const IfcDateTimeSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCALENDARDATE:
        setIfcCalendarDate((IfcCalendarDate *) (copyop(obj.m_IfcDateTimeSelect_union.m_IfcCalendarDate)));
        break;
    case IFCLOCALTIME:
        setIfcLocalTime((IfcLocalTime *) (copyop(obj.m_IfcDateTimeSelect_union.m_IfcLocalTime)));
        break;
    case IFCDATEANDTIME:
        setIfcDateAndTime((IfcDateAndTime *) (copyop(obj.m_IfcDateTimeSelect_union.m_IfcDateAndTime)));
        break;
        }
}

std::string IfcDateTimeSelect::currentTypeName() const {
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

IfcDateTimeSelect::IfcDateTimeSelect_select IfcDateTimeSelect::currentType() const {
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

IfcCalendarDate *IfcDateTimeSelect::getIfcCalendarDate() const {
    if (m_type == IFCCALENDARDATE) {
        return m_IfcDateTimeSelect_union.m_IfcCalendarDate;
    }
    else {
        return NULL;
    }
}

void IfcDateTimeSelect::setIfcCalendarDate(IfcCalendarDate *value) {
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

IfcLocalTime *IfcDateTimeSelect::getIfcLocalTime() const {
    if (m_type == IFCLOCALTIME) {
        return m_IfcDateTimeSelect_union.m_IfcLocalTime;
    }
    else {
        return NULL;
    }
}

void IfcDateTimeSelect::setIfcLocalTime(IfcLocalTime *value) {
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

IfcDateAndTime *IfcDateTimeSelect::getIfcDateAndTime() const {
    if (m_type == IFCDATEANDTIME) {
        return m_IfcDateTimeSelect_union.m_IfcDateAndTime;
    }
    else {
        return NULL;
    }
}

void IfcDateTimeSelect::setIfcDateAndTime(IfcDateAndTime *value) {
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
    if (v && v->isOfType(IfcCalendarDate::getClassType())) {
        setIfcCalendarDate(static_cast< IfcCalendarDate* > (v));
    }
    else if (v && v->isOfType(IfcLocalTime::getClassType())) {
        setIfcLocalTime(static_cast< IfcLocalTime* > (v));
    }
    else if (v && v->isOfType(IfcDateAndTime::getClassType())) {
        setIfcDateAndTime(static_cast< IfcDateAndTime* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcDateTimeSelect::s_type("IfcDateTimeSelect");
