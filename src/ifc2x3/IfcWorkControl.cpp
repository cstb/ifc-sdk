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



#include <ifc2x3/IfcWorkControl.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcWorkControl::IfcWorkControl(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_identifier = Step::getUnset(m_identifier);
    m_creationDate = NULL;
    m_creators.setUnset(true);
    m_purpose = Step::getUnset(m_purpose);
    m_duration = Step::getUnset(m_duration);
    m_totalFloat = Step::getUnset(m_totalFloat);
    m_startTime = NULL;
    m_finishTime = NULL;
    m_workControlType = IfcWorkControlTypeEnum_UNSET;
    m_userDefinedControlType = Step::getUnset(m_userDefinedControlType);
}

IfcWorkControl::~IfcWorkControl() {
}

bool IfcWorkControl::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcWorkControl(this);
}

const std::string &IfcWorkControl::type() const {
    return IfcWorkControl::s_type.getName();
}

const Step::ClassType &IfcWorkControl::getClassType() {
    return IfcWorkControl::s_type;
}

const Step::ClassType &IfcWorkControl::getType() const {
    return IfcWorkControl::s_type;
}

bool IfcWorkControl::isOfType(const Step::ClassType &t) const {
    return IfcWorkControl::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcWorkControl::getIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_identifier;
    }
    else {
        return Step::getUnset(m_identifier);
    }
}

const IfcIdentifier IfcWorkControl::getIdentifier() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getIdentifier();
}

void IfcWorkControl::setIdentifier(const IfcIdentifier &value) {
    m_identifier = value;
}

void IfcWorkControl::unsetIdentifier() {
    m_identifier = Step::getUnset(getIdentifier());
}

bool IfcWorkControl::testIdentifier() const {
    return !Step::isUnset(getIdentifier());
}

IfcDateTimeSelect *IfcWorkControl::getCreationDate() {
    if (Step::BaseObject::inited()) {
        return m_creationDate.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcWorkControl::getCreationDate() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getCreationDate();
}

void IfcWorkControl::setCreationDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_creationDate = value;
}

void IfcWorkControl::unsetCreationDate() {
    m_creationDate = Step::getUnset(getCreationDate());
}

bool IfcWorkControl::testCreationDate() const {
    return !Step::isUnset(getCreationDate());
}

Set_IfcPerson_1_n &IfcWorkControl::getCreators() {
    if (Step::BaseObject::inited()) {
        return m_creators;
    }
    else {
        m_creators.setUnset(true);
        return m_creators;
    }
}

const Set_IfcPerson_1_n &IfcWorkControl::getCreators() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getCreators();
}

void IfcWorkControl::setCreators(const Set_IfcPerson_1_n &value) {
    m_creators = value;
}

void IfcWorkControl::unsetCreators() {
    m_creators.clear();
    m_creators.setUnset(true);
}

bool IfcWorkControl::testCreators() const {
    return !m_creators.isUnset();
}

IfcLabel IfcWorkControl::getPurpose() {
    if (Step::BaseObject::inited()) {
        return m_purpose;
    }
    else {
        return Step::getUnset(m_purpose);
    }
}

const IfcLabel IfcWorkControl::getPurpose() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getPurpose();
}

void IfcWorkControl::setPurpose(const IfcLabel &value) {
    m_purpose = value;
}

void IfcWorkControl::unsetPurpose() {
    m_purpose = Step::getUnset(getPurpose());
}

bool IfcWorkControl::testPurpose() const {
    return !Step::isUnset(getPurpose());
}

IfcTimeMeasure IfcWorkControl::getDuration() {
    if (Step::BaseObject::inited()) {
        return m_duration;
    }
    else {
        return Step::getUnset(m_duration);
    }
}

const IfcTimeMeasure IfcWorkControl::getDuration() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getDuration();
}

void IfcWorkControl::setDuration(IfcTimeMeasure value) {
    m_duration = value;
}

void IfcWorkControl::unsetDuration() {
    m_duration = Step::getUnset(getDuration());
}

bool IfcWorkControl::testDuration() const {
    return !Step::isUnset(getDuration());
}

IfcTimeMeasure IfcWorkControl::getTotalFloat() {
    if (Step::BaseObject::inited()) {
        return m_totalFloat;
    }
    else {
        return Step::getUnset(m_totalFloat);
    }
}

const IfcTimeMeasure IfcWorkControl::getTotalFloat() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getTotalFloat();
}

void IfcWorkControl::setTotalFloat(IfcTimeMeasure value) {
    m_totalFloat = value;
}

void IfcWorkControl::unsetTotalFloat() {
    m_totalFloat = Step::getUnset(getTotalFloat());
}

bool IfcWorkControl::testTotalFloat() const {
    return !Step::isUnset(getTotalFloat());
}

IfcDateTimeSelect *IfcWorkControl::getStartTime() {
    if (Step::BaseObject::inited()) {
        return m_startTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcWorkControl::getStartTime() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getStartTime();
}

void IfcWorkControl::setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_startTime = value;
}

void IfcWorkControl::unsetStartTime() {
    m_startTime = Step::getUnset(getStartTime());
}

bool IfcWorkControl::testStartTime() const {
    return !Step::isUnset(getStartTime());
}

IfcDateTimeSelect *IfcWorkControl::getFinishTime() {
    if (Step::BaseObject::inited()) {
        return m_finishTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcWorkControl::getFinishTime() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getFinishTime();
}

void IfcWorkControl::setFinishTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_finishTime = value;
}

void IfcWorkControl::unsetFinishTime() {
    m_finishTime = Step::getUnset(getFinishTime());
}

bool IfcWorkControl::testFinishTime() const {
    return !Step::isUnset(getFinishTime());
}

IfcWorkControlTypeEnum IfcWorkControl::getWorkControlType() {
    if (Step::BaseObject::inited()) {
        return m_workControlType;
    }
    else {
        return IfcWorkControlTypeEnum_UNSET;
    }
}

const IfcWorkControlTypeEnum IfcWorkControl::getWorkControlType() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getWorkControlType();
}

void IfcWorkControl::setWorkControlType(IfcWorkControlTypeEnum value) {
    m_workControlType = value;
}

void IfcWorkControl::unsetWorkControlType() {
    m_workControlType = IfcWorkControlTypeEnum_UNSET;
}

bool IfcWorkControl::testWorkControlType() const {
    return getWorkControlType() != IfcWorkControlTypeEnum_UNSET;
}

IfcLabel IfcWorkControl::getUserDefinedControlType() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedControlType;
    }
    else {
        return Step::getUnset(m_userDefinedControlType);
    }
}

const IfcLabel IfcWorkControl::getUserDefinedControlType() const {
    IfcWorkControl * deConstObject = const_cast< IfcWorkControl * > (this);
    return deConstObject->getUserDefinedControlType();
}

void IfcWorkControl::setUserDefinedControlType(const IfcLabel &value) {
    m_userDefinedControlType = value;
}

void IfcWorkControl::unsetUserDefinedControlType() {
    m_userDefinedControlType = Step::getUnset(getUserDefinedControlType());
}

bool IfcWorkControl::testUserDefinedControlType() const {
    return !Step::isUnset(getUserDefinedControlType());
}

bool IfcWorkControl::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_identifier = Step::getUnset(m_identifier);
    }
    else {
        m_identifier = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_creationDate = NULL;
    }
    else {
        m_creationDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_creationDate->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_creators.setUnset(true);
    }
    else {
        m_creators.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPerson > attr2;
                attr2 = static_cast< IfcPerson * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_creators.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_purpose = Step::getUnset(m_purpose);
    }
    else {
        m_purpose = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_duration = Step::getUnset(m_duration);
    }
    else {
        m_duration = Step::spfToReal(arg);
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
        m_startTime = NULL;
    }
    else {
        m_startTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_startTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_finishTime = NULL;
    }
    else {
        m_finishTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_finishTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_workControlType = IfcWorkControlTypeEnum_UNSET;
    }
    else {
        if (arg == ".ACTUAL.") {
            m_workControlType = IfcWorkControlTypeEnum_ACTUAL;
        }
        else if (arg == ".BASELINE.") {
            m_workControlType = IfcWorkControlTypeEnum_BASELINE;
        }
        else if (arg == ".PLANNED.") {
            m_workControlType = IfcWorkControlTypeEnum_PLANNED;
        }
        else if (arg == ".USERDEFINED.") {
            m_workControlType = IfcWorkControlTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_workControlType = IfcWorkControlTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedControlType = Step::getUnset(m_userDefinedControlType);
    }
    else {
        m_userDefinedControlType = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcWorkControl::copy(const IfcWorkControl &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPerson >, 1 >::const_iterator it_m_creators;
    IfcControl::copy(obj, copyop);
    setIdentifier(obj.m_identifier);
    m_creationDate = new IfcDateTimeSelect;
    m_creationDate->copy(*(obj.m_creationDate.get()), copyop);
    for (it_m_creators = obj.m_creators.begin(); it_m_creators != obj.m_creators.end(); ++it_m_creators) {
        Step::RefPtr< IfcPerson > copyTarget = (IfcPerson *) (copyop((*it_m_creators).get()));
        m_creators.insert(copyTarget.get());
    }
    setPurpose(obj.m_purpose);
    setDuration(obj.m_duration);
    setTotalFloat(obj.m_totalFloat);
    m_startTime = new IfcDateTimeSelect;
    m_startTime->copy(*(obj.m_startTime.get()), copyop);
    m_finishTime = new IfcDateTimeSelect;
    m_finishTime->copy(*(obj.m_finishTime.get()), copyop);
    setWorkControlType(obj.m_workControlType);
    setUserDefinedControlType(obj.m_userDefinedControlType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcWorkControl::s_type("IfcWorkControl");
