// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcScheduleTimeControl.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcRelAssignsTasks.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcScheduleTimeControl::IfcScheduleTimeControl(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_actualStart = NULL;
    m_earlyStart = NULL;
    m_lateStart = NULL;
    m_scheduleStart = NULL;
    m_actualFinish = NULL;
    m_earlyFinish = NULL;
    m_lateFinish = NULL;
    m_scheduleFinish = NULL;
    m_scheduleDuration = Step::getUnset(m_scheduleDuration);
    m_actualDuration = Step::getUnset(m_actualDuration);
    m_remainingTime = Step::getUnset(m_remainingTime);
    m_freeFloat = Step::getUnset(m_freeFloat);
    m_totalFloat = Step::getUnset(m_totalFloat);
    m_isCritical = Step::getUnset(m_isCritical);
    m_statusTime = NULL;
    m_startFloat = Step::getUnset(m_startFloat);
    m_finishFloat = Step::getUnset(m_finishFloat);
    m_completion = Step::getUnset(m_completion);
}

IfcScheduleTimeControl::~IfcScheduleTimeControl() {
}

bool IfcScheduleTimeControl::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcScheduleTimeControl(this);
}

const std::string &IfcScheduleTimeControl::type() const {
    return IfcScheduleTimeControl::s_type.getName();
}

const Step::ClassType &IfcScheduleTimeControl::getClassType() {
    return IfcScheduleTimeControl::s_type;
}

const Step::ClassType &IfcScheduleTimeControl::getType() const {
    return IfcScheduleTimeControl::s_type;
}

bool IfcScheduleTimeControl::isOfType(const Step::ClassType &t) const {
    return IfcScheduleTimeControl::s_type == t ? true : IfcControl::isOfType(t);
}

IfcDateTimeSelect *IfcScheduleTimeControl::getActualStart() {
    if (Step::BaseObject::inited()) {
        return m_actualStart.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getActualStart() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getActualStart();
}

void IfcScheduleTimeControl::setActualStart(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_actualStart = value;
}

void IfcScheduleTimeControl::unsetActualStart() {
    m_actualStart = Step::getUnset(getActualStart());
}

bool IfcScheduleTimeControl::testActualStart() const {
    return !Step::isUnset(getActualStart());
}

IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyStart() {
    if (Step::BaseObject::inited()) {
        return m_earlyStart.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyStart() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getEarlyStart();
}

void IfcScheduleTimeControl::setEarlyStart(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_earlyStart = value;
}

void IfcScheduleTimeControl::unsetEarlyStart() {
    m_earlyStart = Step::getUnset(getEarlyStart());
}

bool IfcScheduleTimeControl::testEarlyStart() const {
    return !Step::isUnset(getEarlyStart());
}

IfcDateTimeSelect *IfcScheduleTimeControl::getLateStart() {
    if (Step::BaseObject::inited()) {
        return m_lateStart.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getLateStart() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getLateStart();
}

void IfcScheduleTimeControl::setLateStart(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_lateStart = value;
}

void IfcScheduleTimeControl::unsetLateStart() {
    m_lateStart = Step::getUnset(getLateStart());
}

bool IfcScheduleTimeControl::testLateStart() const {
    return !Step::isUnset(getLateStart());
}

IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleStart() {
    if (Step::BaseObject::inited()) {
        return m_scheduleStart.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleStart() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getScheduleStart();
}

void IfcScheduleTimeControl::setScheduleStart(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_scheduleStart = value;
}

void IfcScheduleTimeControl::unsetScheduleStart() {
    m_scheduleStart = Step::getUnset(getScheduleStart());
}

bool IfcScheduleTimeControl::testScheduleStart() const {
    return !Step::isUnset(getScheduleStart());
}

IfcDateTimeSelect *IfcScheduleTimeControl::getActualFinish() {
    if (Step::BaseObject::inited()) {
        return m_actualFinish.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getActualFinish() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getActualFinish();
}

void IfcScheduleTimeControl::setActualFinish(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_actualFinish = value;
}

void IfcScheduleTimeControl::unsetActualFinish() {
    m_actualFinish = Step::getUnset(getActualFinish());
}

bool IfcScheduleTimeControl::testActualFinish() const {
    return !Step::isUnset(getActualFinish());
}

IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyFinish() {
    if (Step::BaseObject::inited()) {
        return m_earlyFinish.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getEarlyFinish() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getEarlyFinish();
}

void IfcScheduleTimeControl::setEarlyFinish(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_earlyFinish = value;
}

void IfcScheduleTimeControl::unsetEarlyFinish() {
    m_earlyFinish = Step::getUnset(getEarlyFinish());
}

bool IfcScheduleTimeControl::testEarlyFinish() const {
    return !Step::isUnset(getEarlyFinish());
}

IfcDateTimeSelect *IfcScheduleTimeControl::getLateFinish() {
    if (Step::BaseObject::inited()) {
        return m_lateFinish.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getLateFinish() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getLateFinish();
}

void IfcScheduleTimeControl::setLateFinish(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_lateFinish = value;
}

void IfcScheduleTimeControl::unsetLateFinish() {
    m_lateFinish = Step::getUnset(getLateFinish());
}

bool IfcScheduleTimeControl::testLateFinish() const {
    return !Step::isUnset(getLateFinish());
}

IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleFinish() {
    if (Step::BaseObject::inited()) {
        return m_scheduleFinish.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getScheduleFinish() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getScheduleFinish();
}

void IfcScheduleTimeControl::setScheduleFinish(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_scheduleFinish = value;
}

void IfcScheduleTimeControl::unsetScheduleFinish() {
    m_scheduleFinish = Step::getUnset(getScheduleFinish());
}

bool IfcScheduleTimeControl::testScheduleFinish() const {
    return !Step::isUnset(getScheduleFinish());
}

IfcTimeMeasure IfcScheduleTimeControl::getScheduleDuration() {
    if (Step::BaseObject::inited()) {
        return m_scheduleDuration;
    }
    else {
        return Step::getUnset(m_scheduleDuration);
    }
}

const IfcTimeMeasure IfcScheduleTimeControl::getScheduleDuration() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getScheduleDuration();
}

void IfcScheduleTimeControl::setScheduleDuration(IfcTimeMeasure value) {
    m_scheduleDuration = value;
}

void IfcScheduleTimeControl::unsetScheduleDuration() {
    m_scheduleDuration = Step::getUnset(getScheduleDuration());
}

bool IfcScheduleTimeControl::testScheduleDuration() const {
    return !Step::isUnset(getScheduleDuration());
}

IfcTimeMeasure IfcScheduleTimeControl::getActualDuration() {
    if (Step::BaseObject::inited()) {
        return m_actualDuration;
    }
    else {
        return Step::getUnset(m_actualDuration);
    }
}

const IfcTimeMeasure IfcScheduleTimeControl::getActualDuration() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getActualDuration();
}

void IfcScheduleTimeControl::setActualDuration(IfcTimeMeasure value) {
    m_actualDuration = value;
}

void IfcScheduleTimeControl::unsetActualDuration() {
    m_actualDuration = Step::getUnset(getActualDuration());
}

bool IfcScheduleTimeControl::testActualDuration() const {
    return !Step::isUnset(getActualDuration());
}

IfcTimeMeasure IfcScheduleTimeControl::getRemainingTime() {
    if (Step::BaseObject::inited()) {
        return m_remainingTime;
    }
    else {
        return Step::getUnset(m_remainingTime);
    }
}

const IfcTimeMeasure IfcScheduleTimeControl::getRemainingTime() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getRemainingTime();
}

void IfcScheduleTimeControl::setRemainingTime(IfcTimeMeasure value) {
    m_remainingTime = value;
}

void IfcScheduleTimeControl::unsetRemainingTime() {
    m_remainingTime = Step::getUnset(getRemainingTime());
}

bool IfcScheduleTimeControl::testRemainingTime() const {
    return !Step::isUnset(getRemainingTime());
}

IfcTimeMeasure IfcScheduleTimeControl::getFreeFloat() {
    if (Step::BaseObject::inited()) {
        return m_freeFloat;
    }
    else {
        return Step::getUnset(m_freeFloat);
    }
}

const IfcTimeMeasure IfcScheduleTimeControl::getFreeFloat() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getFreeFloat();
}

void IfcScheduleTimeControl::setFreeFloat(IfcTimeMeasure value) {
    m_freeFloat = value;
}

void IfcScheduleTimeControl::unsetFreeFloat() {
    m_freeFloat = Step::getUnset(getFreeFloat());
}

bool IfcScheduleTimeControl::testFreeFloat() const {
    return !Step::isUnset(getFreeFloat());
}

IfcTimeMeasure IfcScheduleTimeControl::getTotalFloat() {
    if (Step::BaseObject::inited()) {
        return m_totalFloat;
    }
    else {
        return Step::getUnset(m_totalFloat);
    }
}

const IfcTimeMeasure IfcScheduleTimeControl::getTotalFloat() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getTotalFloat();
}

void IfcScheduleTimeControl::setTotalFloat(IfcTimeMeasure value) {
    m_totalFloat = value;
}

void IfcScheduleTimeControl::unsetTotalFloat() {
    m_totalFloat = Step::getUnset(getTotalFloat());
}

bool IfcScheduleTimeControl::testTotalFloat() const {
    return !Step::isUnset(getTotalFloat());
}

Step::Boolean IfcScheduleTimeControl::getIsCritical() {
    if (Step::BaseObject::inited()) {
        return m_isCritical;
    }
    else {
        return Step::getUnset(m_isCritical);
    }
}

const Step::Boolean IfcScheduleTimeControl::getIsCritical() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getIsCritical();
}

void IfcScheduleTimeControl::setIsCritical(Step::Boolean value) {
    m_isCritical = value;
}

void IfcScheduleTimeControl::unsetIsCritical() {
    m_isCritical = Step::getUnset(getIsCritical());
}

bool IfcScheduleTimeControl::testIsCritical() const {
    return !Step::isUnset(getIsCritical());
}

IfcDateTimeSelect *IfcScheduleTimeControl::getStatusTime() {
    if (Step::BaseObject::inited()) {
        return m_statusTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcScheduleTimeControl::getStatusTime() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getStatusTime();
}

void IfcScheduleTimeControl::setStatusTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_statusTime = value;
}

void IfcScheduleTimeControl::unsetStatusTime() {
    m_statusTime = Step::getUnset(getStatusTime());
}

bool IfcScheduleTimeControl::testStatusTime() const {
    return !Step::isUnset(getStatusTime());
}

IfcTimeMeasure IfcScheduleTimeControl::getStartFloat() {
    if (Step::BaseObject::inited()) {
        return m_startFloat;
    }
    else {
        return Step::getUnset(m_startFloat);
    }
}

const IfcTimeMeasure IfcScheduleTimeControl::getStartFloat() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getStartFloat();
}

void IfcScheduleTimeControl::setStartFloat(IfcTimeMeasure value) {
    m_startFloat = value;
}

void IfcScheduleTimeControl::unsetStartFloat() {
    m_startFloat = Step::getUnset(getStartFloat());
}

bool IfcScheduleTimeControl::testStartFloat() const {
    return !Step::isUnset(getStartFloat());
}

IfcTimeMeasure IfcScheduleTimeControl::getFinishFloat() {
    if (Step::BaseObject::inited()) {
        return m_finishFloat;
    }
    else {
        return Step::getUnset(m_finishFloat);
    }
}

const IfcTimeMeasure IfcScheduleTimeControl::getFinishFloat() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getFinishFloat();
}

void IfcScheduleTimeControl::setFinishFloat(IfcTimeMeasure value) {
    m_finishFloat = value;
}

void IfcScheduleTimeControl::unsetFinishFloat() {
    m_finishFloat = Step::getUnset(getFinishFloat());
}

bool IfcScheduleTimeControl::testFinishFloat() const {
    return !Step::isUnset(getFinishFloat());
}

IfcPositiveRatioMeasure IfcScheduleTimeControl::getCompletion() {
    if (Step::BaseObject::inited()) {
        return m_completion;
    }
    else {
        return Step::getUnset(m_completion);
    }
}

const IfcPositiveRatioMeasure IfcScheduleTimeControl::getCompletion() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getCompletion();
}

void IfcScheduleTimeControl::setCompletion(IfcPositiveRatioMeasure value) {
    m_completion = value;
}

void IfcScheduleTimeControl::unsetCompletion() {
    m_completion = Step::getUnset(getCompletion());
}

bool IfcScheduleTimeControl::testCompletion() const {
    return !Step::isUnset(getCompletion());
}

IfcRelAssignsTasks *IfcScheduleTimeControl::getScheduleTimeControlAssigned() {
    if (Step::BaseObject::inited()) {
        return m_scheduleTimeControlAssigned.get();
    }
    else {
        return NULL;
    }
}

const IfcRelAssignsTasks *IfcScheduleTimeControl::getScheduleTimeControlAssigned() const {
    IfcScheduleTimeControl * deConstObject = const_cast< IfcScheduleTimeControl * > (this);
    return deConstObject->getScheduleTimeControlAssigned();
}

bool IfcScheduleTimeControl::testScheduleTimeControlAssigned() const {
    return !Step::isUnset(getScheduleTimeControlAssigned());
}

bool IfcScheduleTimeControl::init() {
    bool status = IfcControl::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actualStart = NULL;
    }
    else {
        m_actualStart = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_actualStart->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_earlyStart = NULL;
    }
    else {
        m_earlyStart = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_earlyStart->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lateStart = NULL;
    }
    else {
        m_lateStart = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_lateStart->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scheduleStart = NULL;
    }
    else {
        m_scheduleStart = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_scheduleStart->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actualFinish = NULL;
    }
    else {
        m_actualFinish = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_actualFinish->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_earlyFinish = NULL;
    }
    else {
        m_earlyFinish = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_earlyFinish->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lateFinish = NULL;
    }
    else {
        m_lateFinish = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_lateFinish->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scheduleFinish = NULL;
    }
    else {
        m_scheduleFinish = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_scheduleFinish->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scheduleDuration = Step::getUnset(m_scheduleDuration);
    }
    else {
        m_scheduleDuration = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actualDuration = Step::getUnset(m_actualDuration);
    }
    else {
        m_actualDuration = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_remainingTime = Step::getUnset(m_remainingTime);
    }
    else {
        m_remainingTime = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_freeFloat = Step::getUnset(m_freeFloat);
    }
    else {
        m_freeFloat = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_totalFloat = Step::getUnset(m_totalFloat);
    }
    else {
        m_totalFloat = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isCritical = Step::getUnset(m_isCritical);
    }
    else {
        m_isCritical = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_statusTime = NULL;
    }
    else {
        m_statusTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_statusTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startFloat = Step::getUnset(m_startFloat);
    }
    else {
        m_startFloat = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_finishFloat = Step::getUnset(m_finishFloat);
    }
    else {
        m_finishFloat = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_completion = Step::getUnset(m_completion);
    }
    else {
        m_completion = Step::spfToReal(arg);
    }
    inverses = m_args->getInverses(IfcRelAssignsTasks::getClassType(), 7);
    if (inverses) {
        m_scheduleTimeControlAssigned = static_cast< IfcRelAssignsTasks * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcScheduleTimeControl::copy(const IfcScheduleTimeControl &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    m_actualStart = new IfcDateTimeSelect;
    m_actualStart->copy(*(obj.m_actualStart.get()), copyop);
    m_earlyStart = new IfcDateTimeSelect;
    m_earlyStart->copy(*(obj.m_earlyStart.get()), copyop);
    m_lateStart = new IfcDateTimeSelect;
    m_lateStart->copy(*(obj.m_lateStart.get()), copyop);
    m_scheduleStart = new IfcDateTimeSelect;
    m_scheduleStart->copy(*(obj.m_scheduleStart.get()), copyop);
    m_actualFinish = new IfcDateTimeSelect;
    m_actualFinish->copy(*(obj.m_actualFinish.get()), copyop);
    m_earlyFinish = new IfcDateTimeSelect;
    m_earlyFinish->copy(*(obj.m_earlyFinish.get()), copyop);
    m_lateFinish = new IfcDateTimeSelect;
    m_lateFinish->copy(*(obj.m_lateFinish.get()), copyop);
    m_scheduleFinish = new IfcDateTimeSelect;
    m_scheduleFinish->copy(*(obj.m_scheduleFinish.get()), copyop);
    setScheduleDuration(obj.m_scheduleDuration);
    setActualDuration(obj.m_actualDuration);
    setRemainingTime(obj.m_remainingTime);
    setFreeFloat(obj.m_freeFloat);
    setTotalFloat(obj.m_totalFloat);
    setIsCritical(obj.m_isCritical);
    m_statusTime = new IfcDateTimeSelect;
    m_statusTime->copy(*(obj.m_statusTime.get()), copyop);
    setStartFloat(obj.m_startFloat);
    setFinishFloat(obj.m_finishFloat);
    setCompletion(obj.m_completion);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcScheduleTimeControl::s_type("IfcScheduleTimeControl");
