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



#include <ifc2x3/IfcCurrencyRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcLibraryInformation.h>
#include <ifc2x3/IfcMonetaryUnit.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCurrencyRelationship::IfcCurrencyRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatingMonetaryUnit = NULL;
    m_relatedMonetaryUnit = NULL;
    m_exchangeRate = Step::getUnset(m_exchangeRate);
    m_rateDateTime = NULL;
    m_rateSource = NULL;
}

IfcCurrencyRelationship::~IfcCurrencyRelationship() {
}

bool IfcCurrencyRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurrencyRelationship(this);
}

const std::string &IfcCurrencyRelationship::type() const {
    return IfcCurrencyRelationship::s_type.getName();
}

const Step::ClassType &IfcCurrencyRelationship::getClassType() {
    return IfcCurrencyRelationship::s_type;
}

const Step::ClassType &IfcCurrencyRelationship::getType() const {
    return IfcCurrencyRelationship::s_type;
}

bool IfcCurrencyRelationship::isOfType(const Step::ClassType &t) const {
    return IfcCurrencyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMonetaryUnit *IfcCurrencyRelationship::getRelatingMonetaryUnit() {
    if (Step::BaseObject::inited()) {
        return m_relatingMonetaryUnit.get();
    }
    else {
        return NULL;
    }
}

const IfcMonetaryUnit *IfcCurrencyRelationship::getRelatingMonetaryUnit() const {
    IfcCurrencyRelationship * deConstObject = const_cast< IfcCurrencyRelationship * > (this);
    return deConstObject->getRelatingMonetaryUnit();
}

void IfcCurrencyRelationship::setRelatingMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value) {
    m_relatingMonetaryUnit = value;
}

void IfcCurrencyRelationship::unsetRelatingMonetaryUnit() {
    m_relatingMonetaryUnit = Step::getUnset(getRelatingMonetaryUnit());
}

bool IfcCurrencyRelationship::testRelatingMonetaryUnit() const {
    return !Step::isUnset(getRelatingMonetaryUnit());
}

IfcMonetaryUnit *IfcCurrencyRelationship::getRelatedMonetaryUnit() {
    if (Step::BaseObject::inited()) {
        return m_relatedMonetaryUnit.get();
    }
    else {
        return NULL;
    }
}

const IfcMonetaryUnit *IfcCurrencyRelationship::getRelatedMonetaryUnit() const {
    IfcCurrencyRelationship * deConstObject = const_cast< IfcCurrencyRelationship * > (this);
    return deConstObject->getRelatedMonetaryUnit();
}

void IfcCurrencyRelationship::setRelatedMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value) {
    m_relatedMonetaryUnit = value;
}

void IfcCurrencyRelationship::unsetRelatedMonetaryUnit() {
    m_relatedMonetaryUnit = Step::getUnset(getRelatedMonetaryUnit());
}

bool IfcCurrencyRelationship::testRelatedMonetaryUnit() const {
    return !Step::isUnset(getRelatedMonetaryUnit());
}

IfcPositiveRatioMeasure IfcCurrencyRelationship::getExchangeRate() {
    if (Step::BaseObject::inited()) {
        return m_exchangeRate;
    }
    else {
        return Step::getUnset(m_exchangeRate);
    }
}

const IfcPositiveRatioMeasure IfcCurrencyRelationship::getExchangeRate() const {
    IfcCurrencyRelationship * deConstObject = const_cast< IfcCurrencyRelationship * > (this);
    return deConstObject->getExchangeRate();
}

void IfcCurrencyRelationship::setExchangeRate(IfcPositiveRatioMeasure value) {
    m_exchangeRate = value;
}

void IfcCurrencyRelationship::unsetExchangeRate() {
    m_exchangeRate = Step::getUnset(getExchangeRate());
}

bool IfcCurrencyRelationship::testExchangeRate() const {
    return !Step::isUnset(getExchangeRate());
}

IfcDateAndTime *IfcCurrencyRelationship::getRateDateTime() {
    if (Step::BaseObject::inited()) {
        return m_rateDateTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateAndTime *IfcCurrencyRelationship::getRateDateTime() const {
    IfcCurrencyRelationship * deConstObject = const_cast< IfcCurrencyRelationship * > (this);
    return deConstObject->getRateDateTime();
}

void IfcCurrencyRelationship::setRateDateTime(const Step::RefPtr< IfcDateAndTime > &value) {
    m_rateDateTime = value;
}

void IfcCurrencyRelationship::unsetRateDateTime() {
    m_rateDateTime = Step::getUnset(getRateDateTime());
}

bool IfcCurrencyRelationship::testRateDateTime() const {
    return !Step::isUnset(getRateDateTime());
}

IfcLibraryInformation *IfcCurrencyRelationship::getRateSource() {
    if (Step::BaseObject::inited()) {
        return m_rateSource.get();
    }
    else {
        return NULL;
    }
}

const IfcLibraryInformation *IfcCurrencyRelationship::getRateSource() const {
    IfcCurrencyRelationship * deConstObject = const_cast< IfcCurrencyRelationship * > (this);
    return deConstObject->getRateSource();
}

void IfcCurrencyRelationship::setRateSource(const Step::RefPtr< IfcLibraryInformation > &value) {
    m_rateSource = value;
}

void IfcCurrencyRelationship::unsetRateSource() {
    m_rateSource = Step::getUnset(getRateSource());
}

bool IfcCurrencyRelationship::testRateSource() const {
    return !Step::isUnset(getRateSource());
}

bool IfcCurrencyRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingMonetaryUnit = NULL;
    }
    else {
        m_relatingMonetaryUnit = static_cast< IfcMonetaryUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedMonetaryUnit = NULL;
    }
    else {
        m_relatedMonetaryUnit = static_cast< IfcMonetaryUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_exchangeRate = Step::getUnset(m_exchangeRate);
    }
    else {
        m_exchangeRate = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rateDateTime = NULL;
    }
    else {
        m_rateDateTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rateSource = NULL;
    }
    else {
        m_rateSource = static_cast< IfcLibraryInformation * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcCurrencyRelationship::copy(const IfcCurrencyRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRelatingMonetaryUnit((IfcMonetaryUnit*)copyop(obj.m_relatingMonetaryUnit.get()));
    setRelatedMonetaryUnit((IfcMonetaryUnit*)copyop(obj.m_relatedMonetaryUnit.get()));
    setExchangeRate(obj.m_exchangeRate);
    setRateDateTime((IfcDateAndTime*)copyop(obj.m_rateDateTime.get()));
    setRateSource((IfcLibraryInformation*)copyop(obj.m_rateSource.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCurrencyRelationship::s_type("IfcCurrencyRelationship");
