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
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcCostSchedule.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorSelect.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcDateTimeSelect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCostSchedule::IfcCostSchedule(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_submittedBy = NULL;
    m_preparedBy = NULL;
    m_submittedOn = NULL;
    m_status = Step::getUnset(m_status);
    m_targetUsers.setUnset(true);
    m_updateDate = NULL;
    m_iD = Step::getUnset(m_iD);
    m_predefinedType = IfcCostScheduleTypeEnum_UNSET;
}

IfcCostSchedule::~IfcCostSchedule() {
}

bool IfcCostSchedule::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCostSchedule(this);
}

const std::string &IfcCostSchedule::type() const {
    return IfcCostSchedule::s_type.getName();
}

const Step::ClassType &IfcCostSchedule::getClassType() {
    return IfcCostSchedule::s_type;
}

const Step::ClassType &IfcCostSchedule::getType() const {
    return IfcCostSchedule::s_type;
}

bool IfcCostSchedule::isOfType(const Step::ClassType &t) const {
    return IfcCostSchedule::s_type == t ? true : IfcControl::isOfType(t);
}

IfcActorSelect *IfcCostSchedule::getSubmittedBy() {
    if (Step::BaseObject::inited()) {
        return m_submittedBy.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcCostSchedule::getSubmittedBy() const {
    IfcCostSchedule * deConstObject = const_cast< IfcCostSchedule * > (this);
    return deConstObject->getSubmittedBy();
}

void IfcCostSchedule::setSubmittedBy(const Step::RefPtr< IfcActorSelect > &value) {
    m_submittedBy = value;
}

IfcActorSelect *IfcCostSchedule::getPreparedBy() {
    if (Step::BaseObject::inited()) {
        return m_preparedBy.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcCostSchedule::getPreparedBy() const {
    IfcCostSchedule * deConstObject = const_cast< IfcCostSchedule * > (this);
    return deConstObject->getPreparedBy();
}

void IfcCostSchedule::setPreparedBy(const Step::RefPtr< IfcActorSelect > &value) {
    m_preparedBy = value;
}

IfcDateTimeSelect *IfcCostSchedule::getSubmittedOn() {
    if (Step::BaseObject::inited()) {
        return m_submittedOn.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcCostSchedule::getSubmittedOn() const {
    IfcCostSchedule * deConstObject = const_cast< IfcCostSchedule * > (this);
    return deConstObject->getSubmittedOn();
}

void IfcCostSchedule::setSubmittedOn(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_submittedOn = value;
}

IfcLabel IfcCostSchedule::getStatus() {
    if (Step::BaseObject::inited()) {
        return m_status;
    }
    else {
        return Step::getUnset(m_status);
    }
}

const IfcLabel IfcCostSchedule::getStatus() const {
    IfcCostSchedule * deConstObject = const_cast< IfcCostSchedule * > (this);
    return deConstObject->getStatus();
}

void IfcCostSchedule::setStatus(const IfcLabel &value) {
    m_status = value;
}

Set_IfcActorSelect_1_n &IfcCostSchedule::getTargetUsers() {
    if (Step::BaseObject::inited()) {
        return m_targetUsers;
    }
    else {
        m_targetUsers.setUnset(true);
        return m_targetUsers;
    }
}

const Set_IfcActorSelect_1_n &IfcCostSchedule::getTargetUsers() const {
    IfcCostSchedule * deConstObject = const_cast< IfcCostSchedule * > (this);
    return deConstObject->getTargetUsers();
}

void IfcCostSchedule::setTargetUsers(const Set_IfcActorSelect_1_n &value) {
    m_targetUsers = value;
}

IfcDateTimeSelect *IfcCostSchedule::getUpdateDate() {
    if (Step::BaseObject::inited()) {
        return m_updateDate.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcCostSchedule::getUpdateDate() const {
    IfcCostSchedule * deConstObject = const_cast< IfcCostSchedule * > (this);
    return deConstObject->getUpdateDate();
}

void IfcCostSchedule::setUpdateDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_updateDate = value;
}

IfcIdentifier IfcCostSchedule::getID() {
    if (Step::BaseObject::inited()) {
        return m_iD;
    }
    else {
        return Step::getUnset(m_iD);
    }
}

const IfcIdentifier IfcCostSchedule::getID() const {
    IfcCostSchedule * deConstObject = const_cast< IfcCostSchedule * > (this);
    return deConstObject->getID();
}

void IfcCostSchedule::setID(const IfcIdentifier &value) {
    m_iD = value;
}

IfcCostScheduleTypeEnum IfcCostSchedule::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCostScheduleTypeEnum_UNSET;
    }
}

const IfcCostScheduleTypeEnum IfcCostSchedule::getPredefinedType() const {
    IfcCostSchedule * deConstObject = const_cast< IfcCostSchedule * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCostSchedule::setPredefinedType(IfcCostScheduleTypeEnum value) {
    m_predefinedType = value;
}

bool IfcCostSchedule::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_submittedBy = NULL;
    }
    else {
        m_submittedBy = new IfcActorSelect;
        if (arg[0] == '#') {
            m_submittedBy->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_preparedBy = NULL;
    }
    else {
        m_preparedBy = new IfcActorSelect;
        if (arg[0] == '#') {
            m_preparedBy->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_submittedOn = NULL;
    }
    else {
        m_submittedOn = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_submittedOn->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_status = Step::getUnset(m_status);
    }
    else {
        m_status = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_targetUsers.setUnset(true);
    }
    else {
        m_targetUsers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcActorSelect > attr2;
                attr2 = new IfcActorSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                m_targetUsers.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_updateDate = NULL;
    }
    else {
        m_updateDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_updateDate->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_iD = Step::getUnset(m_iD);
    }
    else {
        m_iD = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCostScheduleTypeEnum_UNSET;
    }
    else {
        if (arg == ".BUDGET.") {
            m_predefinedType = IfcCostScheduleTypeEnum_BUDGET;
        }
        else if (arg == ".COSTPLAN.") {
            m_predefinedType = IfcCostScheduleTypeEnum_COSTPLAN;
        }
        else if (arg == ".ESTIMATE.") {
            m_predefinedType = IfcCostScheduleTypeEnum_ESTIMATE;
        }
        else if (arg == ".TENDER.") {
            m_predefinedType = IfcCostScheduleTypeEnum_TENDER;
        }
        else if (arg == ".PRICEDBILLOFQUANTITIES.") {
            m_predefinedType = IfcCostScheduleTypeEnum_PRICEDBILLOFQUANTITIES;
        }
        else if (arg == ".UNPRICEDBILLOFQUANTITIES.") {
            m_predefinedType = IfcCostScheduleTypeEnum_UNPRICEDBILLOFQUANTITIES;
        }
        else if (arg == ".SCHEDULEOFRATES.") {
            m_predefinedType = IfcCostScheduleTypeEnum_SCHEDULEOFRATES;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCostScheduleTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCostScheduleTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCostSchedule::copy(const IfcCostSchedule &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcActorSelect >, 1 >::const_iterator it_m_targetUsers;
    IfcControl::copy(obj, copyop);
    m_submittedBy = new IfcActorSelect;
    m_submittedBy->copy(*(obj.m_submittedBy.get()), copyop);
    m_preparedBy = new IfcActorSelect;
    m_preparedBy->copy(*(obj.m_preparedBy.get()), copyop);
    m_submittedOn = new IfcDateTimeSelect;
    m_submittedOn->copy(*(obj.m_submittedOn.get()), copyop);
    setStatus(obj.m_status);
    for (it_m_targetUsers = obj.m_targetUsers.begin(); it_m_targetUsers != obj.m_targetUsers.end(); ++it_m_targetUsers) {
        Step::RefPtr< IfcActorSelect > copyTarget = new IfcActorSelect;
        copyTarget->copy(*((*it_m_targetUsers).get()), copyop);
        m_targetUsers.insert(copyTarget.get());
    }
    m_updateDate = new IfcDateTimeSelect;
    m_updateDate->copy(*(obj.m_updateDate.get()), copyop);
    setID(obj.m_iD);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCostSchedule::s_type("IfcCostSchedule");
