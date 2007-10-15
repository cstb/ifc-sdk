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

#include "ifc2x3/IfcLocalTime.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCoordinatedUniversalTimeOffset.h"
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

IfcLocalTime::IfcLocalTime(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_hourComponent = Step::getUnset(m_hourComponent);
    m_minuteComponent = Step::getUnset(m_minuteComponent);
    m_secondComponent = Step::getUnset(m_secondComponent);
    m_zone = NULL;
    m_daylightSavingOffset = Step::getUnset(m_daylightSavingOffset);
}

IfcLocalTime::~IfcLocalTime() {
}

bool IfcLocalTime::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcLocalTime(this);
}

const std::string &IfcLocalTime::type() {
    return IfcLocalTime::s_type.getName();
}

Step::ClassType IfcLocalTime::getClassType() {
    return IfcLocalTime::s_type;
}

Step::ClassType IfcLocalTime::getType() const {
    return IfcLocalTime::s_type;
}

bool IfcLocalTime::isOfType(Step::ClassType t) {
    return IfcLocalTime::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcHourInDay IfcLocalTime::getHourComponent() {
    if (Step::BaseObject::inited()) {
        return m_hourComponent;
    }
    else {
        return Step::getUnset(m_hourComponent);
    }
}

void IfcLocalTime::setHourComponent(IfcHourInDay value) {
    m_hourComponent = value;
}

IfcMinuteInHour IfcLocalTime::getMinuteComponent() {
    if (Step::BaseObject::inited()) {
        return m_minuteComponent;
    }
    else {
        return Step::getUnset(m_minuteComponent);
    }
}

void IfcLocalTime::setMinuteComponent(IfcMinuteInHour value) {
    m_minuteComponent = value;
}

IfcSecondInMinute IfcLocalTime::getSecondComponent() {
    if (Step::BaseObject::inited()) {
        return m_secondComponent;
    }
    else {
        return Step::getUnset(m_secondComponent);
    }
}

void IfcLocalTime::setSecondComponent(IfcSecondInMinute value) {
    m_secondComponent = value;
}

IfcCoordinatedUniversalTimeOffset *IfcLocalTime::getZone() {
    if (Step::BaseObject::inited()) {
        return m_zone.get();
    }
    else {
        return NULL;
    }
}

void IfcLocalTime::setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value) {
    m_zone = value;
}

IfcDaylightSavingHour IfcLocalTime::getDaylightSavingOffset() {
    if (Step::BaseObject::inited()) {
        return m_daylightSavingOffset;
    }
    else {
        return Step::getUnset(m_daylightSavingOffset);
    }
}

void IfcLocalTime::setDaylightSavingOffset(IfcDaylightSavingHour value) {
    m_daylightSavingOffset = value;
}

void IfcLocalTime::release() {
    m_zone.release();
}

bool IfcLocalTime::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hourComponent = Step::getUnset(m_hourComponent);
    }
    else {
        m_hourComponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minuteComponent = Step::getUnset(m_minuteComponent);
    }
    else {
        m_minuteComponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondComponent = Step::getUnset(m_secondComponent);
    }
    else {
        m_secondComponent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_zone = NULL;
    }
    else {
        m_zone = static_cast< IfcCoordinatedUniversalTimeOffset * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_daylightSavingOffset = Step::getUnset(m_daylightSavingOffset);
    }
    else {
        m_daylightSavingOffset = Step::spfToInteger(arg);
    }
    return true;
}

void IfcLocalTime::copy(const IfcLocalTime &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setHourComponent(obj.m_hourComponent);
    setMinuteComponent(obj.m_minuteComponent);
    setSecondComponent(obj.m_secondComponent);
    setZone(copyop(obj.m_zone.get()));
    setDaylightSavingOffset(obj.m_daylightSavingOffset);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLocalTime::s_type("IfcLocalTime");
