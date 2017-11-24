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



#include <ifc2x3/IfcComplexProperty.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProperty.h>
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

Inverted_IfcComplexProperty_HasProperties_type::Inverted_IfcComplexProperty_HasProperties_type():
    mOwner(0)
{
}

void Inverted_IfcComplexProperty_HasProperties_type::setOwner(IfcComplexProperty *owner) {
    mOwner = owner;
}

void Inverted_IfcComplexProperty_HasProperties_type::insert(const Step::RefPtr< IfcProperty > &value) throw(std::out_of_range) {
    IfcProperty *inverse = const_cast< IfcProperty * > (value.get());
    Set_IfcProperty_1_n::insert(value);
    inverse->getPartOfComplex().insert(mOwner);
}

Inverted_IfcComplexProperty_HasProperties_type::size_type Inverted_IfcComplexProperty_HasProperties_type::erase(const Step::RefPtr< IfcProperty > &value) {
    IfcProperty *inverse = const_cast< IfcProperty * > (value.get());
    inverse->getPartOfComplex().erase(mOwner);
    return Set_IfcProperty_1_n::erase(value);
}

void Inverted_IfcComplexProperty_HasProperties_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcComplexProperty::IfcComplexProperty(Step::Id id, Step::SPFData *args) : IfcProperty(id, args) {
    m_usageName = Step::getUnset(m_usageName);
    m_hasProperties.setOwner(this);
}

IfcComplexProperty::~IfcComplexProperty() {
}

bool IfcComplexProperty::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcComplexProperty(this);
}

const std::string &IfcComplexProperty::type() const {
    return IfcComplexProperty::s_type.getName();
}

const Step::ClassType &IfcComplexProperty::getClassType() {
    return IfcComplexProperty::s_type;
}

const Step::ClassType &IfcComplexProperty::getType() const {
    return IfcComplexProperty::s_type;
}

bool IfcComplexProperty::isOfType(const Step::ClassType &t) const {
    return IfcComplexProperty::s_type == t ? true : IfcProperty::isOfType(t);
}

IfcIdentifier IfcComplexProperty::getUsageName() {
    if (Step::BaseObject::inited()) {
        return m_usageName;
    }
    else {
        return Step::getUnset(m_usageName);
    }
}

const IfcIdentifier IfcComplexProperty::getUsageName() const {
    IfcComplexProperty * deConstObject = const_cast< IfcComplexProperty * > (this);
    return deConstObject->getUsageName();
}

void IfcComplexProperty::setUsageName(const IfcIdentifier &value) {
    m_usageName = value;
}

void IfcComplexProperty::unsetUsageName() {
    m_usageName = Step::getUnset(getUsageName());
}

bool IfcComplexProperty::testUsageName() const {
    return !Step::isUnset(getUsageName());
}

Set_IfcProperty_1_n &IfcComplexProperty::getHasProperties() {
    if (Step::BaseObject::inited()) {
        return m_hasProperties;
    }
    else {
        m_hasProperties.setUnset(true);
        return m_hasProperties;
    }
}

const Set_IfcProperty_1_n &IfcComplexProperty::getHasProperties() const {
    IfcComplexProperty * deConstObject = const_cast< IfcComplexProperty * > (this);
    return deConstObject->getHasProperties();
}

void IfcComplexProperty::unsetHasProperties() {
    m_hasProperties.clear();
    m_hasProperties.setUnset(true);
}

bool IfcComplexProperty::testHasProperties() const {
    return !m_hasProperties.isUnset();
}

bool IfcComplexProperty::init() {
    bool status = IfcProperty::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usageName = Step::getUnset(m_usageName);
    }
    else {
        m_usageName = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hasProperties.setUnset(true);
    }
    else {
        m_hasProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_hasProperties.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcComplexProperty::copy(const IfcComplexProperty &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty >, 1 >::const_iterator it_m_hasProperties;
    IfcProperty::copy(obj, copyop);
    setUsageName(obj.m_usageName);
    for (it_m_hasProperties = obj.m_hasProperties.begin(); it_m_hasProperties != obj.m_hasProperties.end(); ++it_m_hasProperties) {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_hasProperties).get()));
        m_hasProperties.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcComplexProperty::s_type("IfcComplexProperty");
