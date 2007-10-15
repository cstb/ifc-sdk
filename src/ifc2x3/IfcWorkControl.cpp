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

#include "ifc2x3/IfcWorkControl.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcDateTimeSelect.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
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

bool IfcWorkControl::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcWorkControl(this);
}

const std::string &IfcWorkControl::type() {
    return IfcWorkControl::s_type.getName();
}

Step::ClassType IfcWorkControl::getClassType() {
    return IfcWorkControl::s_type;
}

Step::ClassType IfcWorkControl::getType() const {
    return IfcWorkControl::s_type;
}

bool IfcWorkControl::isOfType(Step::ClassType t) {
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

void IfcWorkControl::setIdentifier(const IfcIdentifier &value) {
    m_identifier = value;
}

IfcDateTimeSelect *IfcWorkControl::getCreationDate() {
    if (Step::BaseObject::inited()) {
        return m_creationDate.get();
    }
    else {
        return NULL;
    }
}

void IfcWorkControl::setCreationDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_creationDate = value;
}

Step::Set< Step::RefPtr< IfcPerson > > &IfcWorkControl::getCreators() {
    if (Step::BaseObject::inited()) {
        return m_creators;
    }
    else {
        m_creators.setUnset(true);
        return m_creators;
    }
}

void IfcWorkControl::setCreators(const Step::Set< Step::RefPtr< IfcPerson > > &value) {
    m_creators = value;
}

IfcLabel IfcWorkControl::getPurpose() {
    if (Step::BaseObject::inited()) {
        return m_purpose;
    }
    else {
        return Step::getUnset(m_purpose);
    }
}

void IfcWorkControl::setPurpose(const IfcLabel &value) {
    m_purpose = value;
}

IfcTimeMeasure IfcWorkControl::getDuration() {
    if (Step::BaseObject::inited()) {
        return m_duration;
    }
    else {
        return Step::getUnset(m_duration);
    }
}

void IfcWorkControl::setDuration(IfcTimeMeasure value) {
    m_duration = value;
}

IfcTimeMeasure IfcWorkControl::getTotalFloat() {
    if (Step::BaseObject::inited()) {
        return m_totalFloat;
    }
    else {
        return Step::getUnset(m_totalFloat);
    }
}

void IfcWorkControl::setTotalFloat(IfcTimeMeasure value) {
    m_totalFloat = value;
}

IfcDateTimeSelect *IfcWorkControl::getStartTime() {
    if (Step::BaseObject::inited()) {
        return m_startTime.get();
    }
    else {
        return NULL;
    }
}

void IfcWorkControl::setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_startTime = value;
}

IfcDateTimeSelect *IfcWorkControl::getFinishTime() {
    if (Step::BaseObject::inited()) {
        return m_finishTime.get();
    }
    else {
        return NULL;
    }
}

void IfcWorkControl::setFinishTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_finishTime = value;
}

IfcWorkControlTypeEnum IfcWorkControl::getWorkControlType() {
    if (Step::BaseObject::inited()) {
        return m_workControlType;
    }
    else {
        return IfcWorkControlTypeEnum_UNSET;
    }
}

void IfcWorkControl::setWorkControlType(IfcWorkControlTypeEnum value) {
    m_workControlType = value;
}

IfcLabel IfcWorkControl::getUserDefinedControlType() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedControlType;
    }
    else {
        return Step::getUnset(m_userDefinedControlType);
    }
}

void IfcWorkControl::setUserDefinedControlType(const IfcLabel &value) {
    m_userDefinedControlType = value;
}

void IfcWorkControl::release() {
    IfcControl::release();
    m_creators.clear();
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
        m_identifier = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_creationDate = NULL;
    }
    else {
        m_creationDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_creationDate->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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
                attr2 = static_cast< IfcPerson * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_creators.insert(attr2);
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
        m_purpose = Step::spfToString(arg);
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
            m_startTime->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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
            m_finishTime->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
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
        m_userDefinedControlType = Step::spfToString(arg);
    }
    return true;
}

void IfcWorkControl::copy(const IfcWorkControl &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPerson > >::const_iterator it_m_creators;
    IfcControl::copy(obj, copyop);
    setIdentifier(obj.m_identifier);
    m_creationDate = new IfcDateTimeSelect;
    m_creationDate->copy(*(obj.m_creationDate.get()), copyop);
    for (it_m_creators = obj.m_creators.begin(); it_m_creators != obj.m_creators.end(); ++it_m_creators) {
        Step::RefPtr< IfcPerson > copyTarget = copyop((*it_m_creators).get());
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

IFC2X3_DLL_DEF Step::ClassType IfcWorkControl::s_type("IfcWorkControl");
