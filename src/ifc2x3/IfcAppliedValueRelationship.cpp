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



#include <ifc2x3/IfcAppliedValueRelationship.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAppliedValue.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcAppliedValueRelationship_Components_type::Inverted_IfcAppliedValueRelationship_Components_type():
    mOwner(0)
{
}

void Inverted_IfcAppliedValueRelationship_Components_type::setOwner(IfcAppliedValueRelationship *owner) {
    mOwner = owner;
}

void Inverted_IfcAppliedValueRelationship_Components_type::insert(const Step::RefPtr< IfcAppliedValue > &value) throw(std::out_of_range) {
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    Set_IfcAppliedValue_1_n::insert(value);
    inverse->m_isComponentIn.insert(mOwner);
}

Inverted_IfcAppliedValueRelationship_Components_type::size_type Inverted_IfcAppliedValueRelationship_Components_type::erase(const Step::RefPtr< IfcAppliedValue > &value) {
    IfcAppliedValue *inverse = const_cast< IfcAppliedValue * > (value.get());
    inverse->m_isComponentIn.erase(mOwner);
    return Set_IfcAppliedValue_1_n::erase(value);
}

void Inverted_IfcAppliedValueRelationship_Components_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcAppliedValueRelationship::IfcAppliedValueRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_componentOfTotal = NULL;
    m_components.setOwner(this);
    m_arithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcAppliedValueRelationship::~IfcAppliedValueRelationship() {
}

bool IfcAppliedValueRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAppliedValueRelationship(this);
}

const std::string &IfcAppliedValueRelationship::type() const {
    return IfcAppliedValueRelationship::s_type.getName();
}

const Step::ClassType &IfcAppliedValueRelationship::getClassType() {
    return IfcAppliedValueRelationship::s_type;
}

const Step::ClassType &IfcAppliedValueRelationship::getType() const {
    return IfcAppliedValueRelationship::s_type;
}

bool IfcAppliedValueRelationship::isOfType(const Step::ClassType &t) const {
    return IfcAppliedValueRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAppliedValue *IfcAppliedValueRelationship::getComponentOfTotal() {
    if (Step::BaseObject::inited()) {
        return m_componentOfTotal.get();
    }
    else {
        return NULL;
    }
}

const IfcAppliedValue *IfcAppliedValueRelationship::getComponentOfTotal() const {
    IfcAppliedValueRelationship * deConstObject = const_cast< IfcAppliedValueRelationship * > (this);
    return deConstObject->getComponentOfTotal();
}

void IfcAppliedValueRelationship::setComponentOfTotal(const Step::RefPtr< IfcAppliedValue > &value) {
    if (m_componentOfTotal.valid()) {
        m_componentOfTotal->m_valueOfComponents.erase(this);
    }
    if (value.valid()) {
        value->m_valueOfComponents.insert(this);
    }
    m_componentOfTotal = value;
}

void IfcAppliedValueRelationship::unsetComponentOfTotal() {
    m_componentOfTotal = Step::getUnset(getComponentOfTotal());
}

bool IfcAppliedValueRelationship::testComponentOfTotal() const {
    return !Step::isUnset(getComponentOfTotal());
}

Set_IfcAppliedValue_1_n &IfcAppliedValueRelationship::getComponents() {
    if (Step::BaseObject::inited()) {
        return m_components;
    }
    else {
        m_components.setUnset(true);
        return m_components;
    }
}

const Set_IfcAppliedValue_1_n &IfcAppliedValueRelationship::getComponents() const {
    IfcAppliedValueRelationship * deConstObject = const_cast< IfcAppliedValueRelationship * > (this);
    return deConstObject->getComponents();
}

void IfcAppliedValueRelationship::unsetComponents() {
    m_components.clear();
    m_components.setUnset(true);
}

bool IfcAppliedValueRelationship::testComponents() const {
    return !m_components.isUnset();
}

IfcArithmeticOperatorEnum IfcAppliedValueRelationship::getArithmeticOperator() {
    if (Step::BaseObject::inited()) {
        return m_arithmeticOperator;
    }
    else {
        return IfcArithmeticOperatorEnum_UNSET;
    }
}

const IfcArithmeticOperatorEnum IfcAppliedValueRelationship::getArithmeticOperator() const {
    IfcAppliedValueRelationship * deConstObject = const_cast< IfcAppliedValueRelationship * > (this);
    return deConstObject->getArithmeticOperator();
}

void IfcAppliedValueRelationship::setArithmeticOperator(IfcArithmeticOperatorEnum value) {
    m_arithmeticOperator = value;
}

void IfcAppliedValueRelationship::unsetArithmeticOperator() {
    m_arithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
}

bool IfcAppliedValueRelationship::testArithmeticOperator() const {
    return getArithmeticOperator() != IfcArithmeticOperatorEnum_UNSET;
}

IfcLabel IfcAppliedValueRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcAppliedValueRelationship::getName() const {
    IfcAppliedValueRelationship * deConstObject = const_cast< IfcAppliedValueRelationship * > (this);
    return deConstObject->getName();
}

void IfcAppliedValueRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcAppliedValueRelationship::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcAppliedValueRelationship::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcAppliedValueRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcAppliedValueRelationship::getDescription() const {
    IfcAppliedValueRelationship * deConstObject = const_cast< IfcAppliedValueRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcAppliedValueRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcAppliedValueRelationship::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcAppliedValueRelationship::testDescription() const {
    return !Step::isUnset(getDescription());
}

bool IfcAppliedValueRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_componentOfTotal = NULL;
    }
    else {
        m_componentOfTotal = static_cast< IfcAppliedValue * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_components.setUnset(true);
    }
    else {
        m_components.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcAppliedValue > attr2;
                attr2 = static_cast< IfcAppliedValue * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_components.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_arithmeticOperator = IfcArithmeticOperatorEnum_UNSET;
    }
    else {
        if (arg == ".ADD.") {
            m_arithmeticOperator = IfcArithmeticOperatorEnum_ADD;
        }
        else if (arg == ".DIVIDE.") {
            m_arithmeticOperator = IfcArithmeticOperatorEnum_DIVIDE;
        }
        else if (arg == ".MULTIPLY.") {
            m_arithmeticOperator = IfcArithmeticOperatorEnum_MULTIPLY;
        }
        else if (arg == ".SUBTRACT.") {
            m_arithmeticOperator = IfcArithmeticOperatorEnum_SUBTRACT;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcAppliedValueRelationship::copy(const IfcAppliedValueRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcAppliedValue >, 1 >::const_iterator it_m_components;
    Step::BaseEntity::copy(obj, copyop);
    setComponentOfTotal((IfcAppliedValue*)copyop(obj.m_componentOfTotal.get()));
    for (it_m_components = obj.m_components.begin(); it_m_components != obj.m_components.end(); ++it_m_components) {
        Step::RefPtr< IfcAppliedValue > copyTarget = (IfcAppliedValue *) (copyop((*it_m_components).get()));
        m_components.insert(copyTarget.get());
    }
    setArithmeticOperator(obj.m_arithmeticOperator);
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAppliedValueRelationship::s_type("IfcAppliedValueRelationship");
