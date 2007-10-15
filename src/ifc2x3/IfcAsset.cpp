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

#include "ifc2x3/IfcAsset.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorSelect.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcCostValue.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/IfcPerson.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcAsset::IfcAsset(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
    m_assetID = Step::getUnset(m_assetID);
    m_originalValue = NULL;
    m_currentValue = NULL;
    m_totalReplacementCost = NULL;
    m_owner = NULL;
    m_user = NULL;
    m_responsiblePerson = NULL;
    m_incorporationDate = NULL;
    m_depreciatedValue = NULL;
}

IfcAsset::~IfcAsset() {
}

bool IfcAsset::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAsset(this);
}

const std::string &IfcAsset::type() {
    return IfcAsset::s_type.getName();
}

Step::ClassType IfcAsset::getClassType() {
    return IfcAsset::s_type;
}

Step::ClassType IfcAsset::getType() const {
    return IfcAsset::s_type;
}

bool IfcAsset::isOfType(Step::ClassType t) {
    return IfcAsset::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcIdentifier IfcAsset::getAssetID() {
    if (Step::BaseObject::inited()) {
        return m_assetID;
    }
    else {
        return Step::getUnset(m_assetID);
    }
}

void IfcAsset::setAssetID(const IfcIdentifier &value) {
    m_assetID = value;
}

IfcCostValue *IfcAsset::getOriginalValue() {
    if (Step::BaseObject::inited()) {
        return m_originalValue.get();
    }
    else {
        return NULL;
    }
}

void IfcAsset::setOriginalValue(const Step::RefPtr< IfcCostValue > &value) {
    m_originalValue = value;
}

IfcCostValue *IfcAsset::getCurrentValue() {
    if (Step::BaseObject::inited()) {
        return m_currentValue.get();
    }
    else {
        return NULL;
    }
}

void IfcAsset::setCurrentValue(const Step::RefPtr< IfcCostValue > &value) {
    m_currentValue = value;
}

IfcCostValue *IfcAsset::getTotalReplacementCost() {
    if (Step::BaseObject::inited()) {
        return m_totalReplacementCost.get();
    }
    else {
        return NULL;
    }
}

void IfcAsset::setTotalReplacementCost(const Step::RefPtr< IfcCostValue > &value) {
    m_totalReplacementCost = value;
}

IfcActorSelect *IfcAsset::getOwner() {
    if (Step::BaseObject::inited()) {
        return m_owner.get();
    }
    else {
        return NULL;
    }
}

void IfcAsset::setOwner(const Step::RefPtr< IfcActorSelect > &value) {
    m_owner = value;
}

IfcActorSelect *IfcAsset::getUser() {
    if (Step::BaseObject::inited()) {
        return m_user.get();
    }
    else {
        return NULL;
    }
}

void IfcAsset::setUser(const Step::RefPtr< IfcActorSelect > &value) {
    m_user = value;
}

IfcPerson *IfcAsset::getResponsiblePerson() {
    if (Step::BaseObject::inited()) {
        return m_responsiblePerson.get();
    }
    else {
        return NULL;
    }
}

void IfcAsset::setResponsiblePerson(const Step::RefPtr< IfcPerson > &value) {
    m_responsiblePerson = value;
}

IfcCalendarDate *IfcAsset::getIncorporationDate() {
    if (Step::BaseObject::inited()) {
        return m_incorporationDate.get();
    }
    else {
        return NULL;
    }
}

void IfcAsset::setIncorporationDate(const Step::RefPtr< IfcCalendarDate > &value) {
    m_incorporationDate = value;
}

IfcCostValue *IfcAsset::getDepreciatedValue() {
    if (Step::BaseObject::inited()) {
        return m_depreciatedValue.get();
    }
    else {
        return NULL;
    }
}

void IfcAsset::setDepreciatedValue(const Step::RefPtr< IfcCostValue > &value) {
    m_depreciatedValue = value;
}

void IfcAsset::release() {
    IfcGroup::release();
    m_originalValue.release();
    m_currentValue.release();
    m_totalReplacementCost.release();
    m_responsiblePerson.release();
    m_incorporationDate.release();
    m_depreciatedValue.release();
}

bool IfcAsset::init() {
    bool status = IfcGroup::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_assetID = Step::getUnset(m_assetID);
    }
    else {
        m_assetID = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_originalValue = NULL;
    }
    else {
        m_originalValue = static_cast< IfcCostValue * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_currentValue = NULL;
    }
    else {
        m_currentValue = static_cast< IfcCostValue * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_totalReplacementCost = NULL;
    }
    else {
        m_totalReplacementCost = static_cast< IfcCostValue * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_owner = NULL;
    }
    else {
        m_owner = new IfcActorSelect;
        if (arg[0] == '#') {
            m_owner->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_user = NULL;
    }
    else {
        m_user = new IfcActorSelect;
        if (arg[0] == '#') {
            m_user->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
        m_responsiblePerson = NULL;
    }
    else {
        m_responsiblePerson = static_cast< IfcPerson * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_incorporationDate = NULL;
    }
    else {
        m_incorporationDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depreciatedValue = NULL;
    }
    else {
        m_depreciatedValue = static_cast< IfcCostValue * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcAsset::copy(const IfcAsset &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    setAssetID(obj.m_assetID);
    setOriginalValue(copyop(obj.m_originalValue.get()));
    setCurrentValue(copyop(obj.m_currentValue.get()));
    setTotalReplacementCost(copyop(obj.m_totalReplacementCost.get()));
    m_owner = new IfcActorSelect;
    m_owner->copy(*(obj.m_owner.get()), copyop);
    m_user = new IfcActorSelect;
    m_user->copy(*(obj.m_user.get()), copyop);
    setResponsiblePerson(copyop(obj.m_responsiblePerson.get()));
    setIncorporationDate(copyop(obj.m_incorporationDate.get()));
    setDepreciatedValue(copyop(obj.m_depreciatedValue.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAsset::s_type("IfcAsset");
