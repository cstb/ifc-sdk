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



#include <ifc2x3/IfcAsset.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcCostValue.h>
#include <ifc2x3/IfcGroup.h>
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

bool IfcAsset::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAsset(this);
}

const std::string &IfcAsset::type() const {
    return IfcAsset::s_type.getName();
}

const Step::ClassType &IfcAsset::getClassType() {
    return IfcAsset::s_type;
}

const Step::ClassType &IfcAsset::getType() const {
    return IfcAsset::s_type;
}

bool IfcAsset::isOfType(const Step::ClassType &t) const {
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

const IfcIdentifier IfcAsset::getAssetID() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getAssetID();
}

void IfcAsset::setAssetID(const IfcIdentifier &value) {
    m_assetID = value;
}

void IfcAsset::unsetAssetID() {
    m_assetID = Step::getUnset(getAssetID());
}

bool IfcAsset::testAssetID() const {
    return !Step::isUnset(getAssetID());
}

IfcCostValue *IfcAsset::getOriginalValue() {
    if (Step::BaseObject::inited()) {
        return m_originalValue.get();
    }
    else {
        return NULL;
    }
}

const IfcCostValue *IfcAsset::getOriginalValue() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getOriginalValue();
}

void IfcAsset::setOriginalValue(const Step::RefPtr< IfcCostValue > &value) {
    m_originalValue = value;
}

void IfcAsset::unsetOriginalValue() {
    m_originalValue = Step::getUnset(getOriginalValue());
}

bool IfcAsset::testOriginalValue() const {
    return !Step::isUnset(getOriginalValue());
}

IfcCostValue *IfcAsset::getCurrentValue() {
    if (Step::BaseObject::inited()) {
        return m_currentValue.get();
    }
    else {
        return NULL;
    }
}

const IfcCostValue *IfcAsset::getCurrentValue() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getCurrentValue();
}

void IfcAsset::setCurrentValue(const Step::RefPtr< IfcCostValue > &value) {
    m_currentValue = value;
}

void IfcAsset::unsetCurrentValue() {
    m_currentValue = Step::getUnset(getCurrentValue());
}

bool IfcAsset::testCurrentValue() const {
    return !Step::isUnset(getCurrentValue());
}

IfcCostValue *IfcAsset::getTotalReplacementCost() {
    if (Step::BaseObject::inited()) {
        return m_totalReplacementCost.get();
    }
    else {
        return NULL;
    }
}

const IfcCostValue *IfcAsset::getTotalReplacementCost() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getTotalReplacementCost();
}

void IfcAsset::setTotalReplacementCost(const Step::RefPtr< IfcCostValue > &value) {
    m_totalReplacementCost = value;
}

void IfcAsset::unsetTotalReplacementCost() {
    m_totalReplacementCost = Step::getUnset(getTotalReplacementCost());
}

bool IfcAsset::testTotalReplacementCost() const {
    return !Step::isUnset(getTotalReplacementCost());
}

IfcActorSelect *IfcAsset::getOwner() {
    if (Step::BaseObject::inited()) {
        return m_owner.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcAsset::getOwner() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getOwner();
}

void IfcAsset::setOwner(const Step::RefPtr< IfcActorSelect > &value) {
    m_owner = value;
}

void IfcAsset::unsetOwner() {
    m_owner = Step::getUnset(getOwner());
}

bool IfcAsset::testOwner() const {
    return !Step::isUnset(getOwner());
}

IfcActorSelect *IfcAsset::getUser() {
    if (Step::BaseObject::inited()) {
        return m_user.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcAsset::getUser() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getUser();
}

void IfcAsset::setUser(const Step::RefPtr< IfcActorSelect > &value) {
    m_user = value;
}

void IfcAsset::unsetUser() {
    m_user = Step::getUnset(getUser());
}

bool IfcAsset::testUser() const {
    return !Step::isUnset(getUser());
}

IfcPerson *IfcAsset::getResponsiblePerson() {
    if (Step::BaseObject::inited()) {
        return m_responsiblePerson.get();
    }
    else {
        return NULL;
    }
}

const IfcPerson *IfcAsset::getResponsiblePerson() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getResponsiblePerson();
}

void IfcAsset::setResponsiblePerson(const Step::RefPtr< IfcPerson > &value) {
    m_responsiblePerson = value;
}

void IfcAsset::unsetResponsiblePerson() {
    m_responsiblePerson = Step::getUnset(getResponsiblePerson());
}

bool IfcAsset::testResponsiblePerson() const {
    return !Step::isUnset(getResponsiblePerson());
}

IfcCalendarDate *IfcAsset::getIncorporationDate() {
    if (Step::BaseObject::inited()) {
        return m_incorporationDate.get();
    }
    else {
        return NULL;
    }
}

const IfcCalendarDate *IfcAsset::getIncorporationDate() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getIncorporationDate();
}

void IfcAsset::setIncorporationDate(const Step::RefPtr< IfcCalendarDate > &value) {
    m_incorporationDate = value;
}

void IfcAsset::unsetIncorporationDate() {
    m_incorporationDate = Step::getUnset(getIncorporationDate());
}

bool IfcAsset::testIncorporationDate() const {
    return !Step::isUnset(getIncorporationDate());
}

IfcCostValue *IfcAsset::getDepreciatedValue() {
    if (Step::BaseObject::inited()) {
        return m_depreciatedValue.get();
    }
    else {
        return NULL;
    }
}

const IfcCostValue *IfcAsset::getDepreciatedValue() const {
    IfcAsset * deConstObject = const_cast< IfcAsset * > (this);
    return deConstObject->getDepreciatedValue();
}

void IfcAsset::setDepreciatedValue(const Step::RefPtr< IfcCostValue > &value) {
    m_depreciatedValue = value;
}

void IfcAsset::unsetDepreciatedValue() {
    m_depreciatedValue = Step::getUnset(getDepreciatedValue());
}

bool IfcAsset::testDepreciatedValue() const {
    return !Step::isUnset(getDepreciatedValue());
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
        m_assetID = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_originalValue = NULL;
    }
    else {
        m_originalValue = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_currentValue = NULL;
    }
    else {
        m_currentValue = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_totalReplacementCost = NULL;
    }
    else {
        m_totalReplacementCost = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_owner = NULL;
    }
    else {
        m_owner = new IfcActorSelect;
        if (arg[0] == '#') {
            m_owner->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_user = NULL;
    }
    else {
        m_user = new IfcActorSelect;
        if (arg[0] == '#') {
            m_user->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_responsiblePerson = NULL;
    }
    else {
        m_responsiblePerson = static_cast< IfcPerson * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_incorporationDate = NULL;
    }
    else {
        m_incorporationDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depreciatedValue = NULL;
    }
    else {
        m_depreciatedValue = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcAsset::copy(const IfcAsset &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    setAssetID(obj.m_assetID);
    setOriginalValue((IfcCostValue*)copyop(obj.m_originalValue.get()));
    setCurrentValue((IfcCostValue*)copyop(obj.m_currentValue.get()));
    setTotalReplacementCost((IfcCostValue*)copyop(obj.m_totalReplacementCost.get()));
    m_owner = new IfcActorSelect;
    m_owner->copy(*(obj.m_owner.get()), copyop);
    m_user = new IfcActorSelect;
    m_user->copy(*(obj.m_user.get()), copyop);
    setResponsiblePerson((IfcPerson*)copyop(obj.m_responsiblePerson.get()));
    setIncorporationDate((IfcCalendarDate*)copyop(obj.m_incorporationDate.get()));
    setDepreciatedValue((IfcCostValue*)copyop(obj.m_depreciatedValue.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAsset::s_type("IfcAsset");
