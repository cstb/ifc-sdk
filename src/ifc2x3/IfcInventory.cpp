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



#include <ifc2x3/IfcInventory.h>

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


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcInventory::IfcInventory(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
    m_inventoryType = IfcInventoryTypeEnum_UNSET;
    m_jurisdiction = NULL;
    m_lastUpdateDate = NULL;
    m_currentValue = NULL;
    m_originalValue = NULL;
}

IfcInventory::~IfcInventory() {
}

bool IfcInventory::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcInventory(this);
}

const std::string &IfcInventory::type() const {
    return IfcInventory::s_type.getName();
}

const Step::ClassType &IfcInventory::getClassType() {
    return IfcInventory::s_type;
}

const Step::ClassType &IfcInventory::getType() const {
    return IfcInventory::s_type;
}

bool IfcInventory::isOfType(const Step::ClassType &t) const {
    return IfcInventory::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcInventoryTypeEnum IfcInventory::getInventoryType() {
    if (Step::BaseObject::inited()) {
        return m_inventoryType;
    }
    else {
        return IfcInventoryTypeEnum_UNSET;
    }
}

const IfcInventoryTypeEnum IfcInventory::getInventoryType() const {
    IfcInventory * deConstObject = const_cast< IfcInventory * > (this);
    return deConstObject->getInventoryType();
}

void IfcInventory::setInventoryType(IfcInventoryTypeEnum value) {
    m_inventoryType = value;
}

void IfcInventory::unsetInventoryType() {
    m_inventoryType = IfcInventoryTypeEnum_UNSET;
}

bool IfcInventory::testInventoryType() const {
    return getInventoryType() != IfcInventoryTypeEnum_UNSET;
}

IfcActorSelect *IfcInventory::getJurisdiction() {
    if (Step::BaseObject::inited()) {
        return m_jurisdiction.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcInventory::getJurisdiction() const {
    IfcInventory * deConstObject = const_cast< IfcInventory * > (this);
    return deConstObject->getJurisdiction();
}

void IfcInventory::setJurisdiction(const Step::RefPtr< IfcActorSelect > &value) {
    m_jurisdiction = value;
}

void IfcInventory::unsetJurisdiction() {
    m_jurisdiction = Step::getUnset(getJurisdiction());
}

bool IfcInventory::testJurisdiction() const {
    return !Step::isUnset(getJurisdiction());
}

Set_IfcPerson_1_n &IfcInventory::getResponsiblePersons() {
    if (Step::BaseObject::inited()) {
        return m_responsiblePersons;
    }
    else {
        m_responsiblePersons.setUnset(true);
        return m_responsiblePersons;
    }
}

const Set_IfcPerson_1_n &IfcInventory::getResponsiblePersons() const {
    IfcInventory * deConstObject = const_cast< IfcInventory * > (this);
    return deConstObject->getResponsiblePersons();
}

void IfcInventory::setResponsiblePersons(const Set_IfcPerson_1_n &value) {
    m_responsiblePersons = value;
}

void IfcInventory::unsetResponsiblePersons() {
    m_responsiblePersons.clear();
    m_responsiblePersons.setUnset(true);
}

bool IfcInventory::testResponsiblePersons() const {
    return !m_responsiblePersons.isUnset();
}

IfcCalendarDate *IfcInventory::getLastUpdateDate() {
    if (Step::BaseObject::inited()) {
        return m_lastUpdateDate.get();
    }
    else {
        return NULL;
    }
}

const IfcCalendarDate *IfcInventory::getLastUpdateDate() const {
    IfcInventory * deConstObject = const_cast< IfcInventory * > (this);
    return deConstObject->getLastUpdateDate();
}

void IfcInventory::setLastUpdateDate(const Step::RefPtr< IfcCalendarDate > &value) {
    m_lastUpdateDate = value;
}

void IfcInventory::unsetLastUpdateDate() {
    m_lastUpdateDate = Step::getUnset(getLastUpdateDate());
}

bool IfcInventory::testLastUpdateDate() const {
    return !Step::isUnset(getLastUpdateDate());
}

IfcCostValue *IfcInventory::getCurrentValue() {
    if (Step::BaseObject::inited()) {
        return m_currentValue.get();
    }
    else {
        return NULL;
    }
}

const IfcCostValue *IfcInventory::getCurrentValue() const {
    IfcInventory * deConstObject = const_cast< IfcInventory * > (this);
    return deConstObject->getCurrentValue();
}

void IfcInventory::setCurrentValue(const Step::RefPtr< IfcCostValue > &value) {
    m_currentValue = value;
}

void IfcInventory::unsetCurrentValue() {
    m_currentValue = Step::getUnset(getCurrentValue());
}

bool IfcInventory::testCurrentValue() const {
    return !Step::isUnset(getCurrentValue());
}

IfcCostValue *IfcInventory::getOriginalValue() {
    if (Step::BaseObject::inited()) {
        return m_originalValue.get();
    }
    else {
        return NULL;
    }
}

const IfcCostValue *IfcInventory::getOriginalValue() const {
    IfcInventory * deConstObject = const_cast< IfcInventory * > (this);
    return deConstObject->getOriginalValue();
}

void IfcInventory::setOriginalValue(const Step::RefPtr< IfcCostValue > &value) {
    m_originalValue = value;
}

void IfcInventory::unsetOriginalValue() {
    m_originalValue = Step::getUnset(getOriginalValue());
}

bool IfcInventory::testOriginalValue() const {
    return !Step::isUnset(getOriginalValue());
}

bool IfcInventory::init() {
    bool status = IfcGroup::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_inventoryType = IfcInventoryTypeEnum_UNSET;
    }
    else {
        if (arg == ".ASSETINVENTORY.") {
            m_inventoryType = IfcInventoryTypeEnum_ASSETINVENTORY;
        }
        else if (arg == ".SPACEINVENTORY.") {
            m_inventoryType = IfcInventoryTypeEnum_SPACEINVENTORY;
        }
        else if (arg == ".FURNITUREINVENTORY.") {
            m_inventoryType = IfcInventoryTypeEnum_FURNITUREINVENTORY;
        }
        else if (arg == ".USERDEFINED.") {
            m_inventoryType = IfcInventoryTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_inventoryType = IfcInventoryTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_jurisdiction = NULL;
    }
    else {
        m_jurisdiction = new IfcActorSelect;
        if (arg[0] == '#') {
            m_jurisdiction->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_responsiblePersons.setUnset(true);
    }
    else {
        m_responsiblePersons.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPerson > attr2;
                attr2 = static_cast< IfcPerson * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_responsiblePersons.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lastUpdateDate = NULL;
    }
    else {
        m_lastUpdateDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
        m_originalValue = NULL;
    }
    else {
        m_originalValue = static_cast< IfcCostValue * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcInventory::copy(const IfcInventory &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPerson >, 1 >::const_iterator it_m_responsiblePersons;
    IfcGroup::copy(obj, copyop);
    setInventoryType(obj.m_inventoryType);
    m_jurisdiction = new IfcActorSelect;
    m_jurisdiction->copy(*(obj.m_jurisdiction.get()), copyop);
    for (it_m_responsiblePersons = obj.m_responsiblePersons.begin(); it_m_responsiblePersons != obj.m_responsiblePersons.end(); ++it_m_responsiblePersons) {
        Step::RefPtr< IfcPerson > copyTarget = (IfcPerson *) (copyop((*it_m_responsiblePersons).get()));
        m_responsiblePersons.insert(copyTarget.get());
    }
    setLastUpdateDate((IfcCalendarDate*)copyop(obj.m_lastUpdateDate.get()));
    setCurrentValue((IfcCostValue*)copyop(obj.m_currentValue.get()));
    setOriginalValue((IfcCostValue*)copyop(obj.m_originalValue.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcInventory::s_type("IfcInventory");
