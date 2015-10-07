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



#include <ifc2x3/IfcConversionBasedUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcNamedUnit.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConversionBasedUnit::IfcConversionBasedUnit(Step::Id id, Step::SPFData *args) : IfcNamedUnit(id, args) {
    m_name = Step::getUnset(m_name);
    m_conversionFactor = NULL;
}

IfcConversionBasedUnit::~IfcConversionBasedUnit() {
}

bool IfcConversionBasedUnit::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConversionBasedUnit(this);
}

const std::string &IfcConversionBasedUnit::type() const {
    return IfcConversionBasedUnit::s_type.getName();
}

const Step::ClassType &IfcConversionBasedUnit::getClassType() {
    return IfcConversionBasedUnit::s_type;
}

const Step::ClassType &IfcConversionBasedUnit::getType() const {
    return IfcConversionBasedUnit::s_type;
}

bool IfcConversionBasedUnit::isOfType(const Step::ClassType &t) const {
    return IfcConversionBasedUnit::s_type == t ? true : IfcNamedUnit::isOfType(t);
}

IfcLabel IfcConversionBasedUnit::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcConversionBasedUnit::getName() const {
    IfcConversionBasedUnit * deConstObject = const_cast< IfcConversionBasedUnit * > (this);
    return deConstObject->getName();
}

void IfcConversionBasedUnit::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcConversionBasedUnit::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcConversionBasedUnit::testName() const {
    return !Step::isUnset(getName());
}

IfcMeasureWithUnit *IfcConversionBasedUnit::getConversionFactor() {
    if (Step::BaseObject::inited()) {
        return m_conversionFactor.get();
    }
    else {
        return NULL;
    }
}

const IfcMeasureWithUnit *IfcConversionBasedUnit::getConversionFactor() const {
    IfcConversionBasedUnit * deConstObject = const_cast< IfcConversionBasedUnit * > (this);
    return deConstObject->getConversionFactor();
}

void IfcConversionBasedUnit::setConversionFactor(const Step::RefPtr< IfcMeasureWithUnit > &value) {
    m_conversionFactor = value;
}

void IfcConversionBasedUnit::unsetConversionFactor() {
    m_conversionFactor = Step::getUnset(getConversionFactor());
}

bool IfcConversionBasedUnit::testConversionFactor() const {
    return !Step::isUnset(getConversionFactor());
}

bool IfcConversionBasedUnit::init() {
    bool status = IfcNamedUnit::init();
    std::string arg;
    if (!status) {
        return false;
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
        m_conversionFactor = NULL;
    }
    else {
        m_conversionFactor = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcConversionBasedUnit::copy(const IfcConversionBasedUnit &obj, const CopyOp &copyop) {
    IfcNamedUnit::copy(obj, copyop);
    setName(obj.m_name);
    setConversionFactor((IfcMeasureWithUnit*)copyop(obj.m_conversionFactor.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConversionBasedUnit::s_type("IfcConversionBasedUnit");
