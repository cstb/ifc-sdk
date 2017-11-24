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



#include <ifc2x3/IfcRelConnectsWithRealizingElements.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcRelConnectsElements.h>
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

Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type():
    mOwner(0)
{
}

void Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::setOwner(IfcRelConnectsWithRealizingElements *owner) {
    mOwner = owner;
}

void Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::insert(const Step::RefPtr< IfcElement > &value) throw(std::out_of_range) {
    IfcElement *inverse = const_cast< IfcElement * > (value.get());
    Set_IfcElement_1_n::insert(value);
    inverse->m_isConnectionRealization.insert(mOwner);
}

Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::size_type Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::erase(const Step::RefPtr< IfcElement > &value) {
    IfcElement *inverse = const_cast< IfcElement * > (value.get());
    inverse->m_isConnectionRealization.erase(mOwner);
    return Set_IfcElement_1_n::erase(value);
}

void Inverted_IfcRelConnectsWithRealizingElements_RealizingElements_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelConnectsWithRealizingElements::IfcRelConnectsWithRealizingElements(Step::Id id, Step::SPFData *args) : IfcRelConnectsElements(id, args) {
    m_realizingElements.setOwner(this);
    m_connectionType = Step::getUnset(m_connectionType);
}

IfcRelConnectsWithRealizingElements::~IfcRelConnectsWithRealizingElements() {
}

bool IfcRelConnectsWithRealizingElements::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsWithRealizingElements(this);
}

const std::string &IfcRelConnectsWithRealizingElements::type() const {
    return IfcRelConnectsWithRealizingElements::s_type.getName();
}

const Step::ClassType &IfcRelConnectsWithRealizingElements::getClassType() {
    return IfcRelConnectsWithRealizingElements::s_type;
}

const Step::ClassType &IfcRelConnectsWithRealizingElements::getType() const {
    return IfcRelConnectsWithRealizingElements::s_type;
}

bool IfcRelConnectsWithRealizingElements::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsWithRealizingElements::s_type == t ? true : IfcRelConnectsElements::isOfType(t);
}

Set_IfcElement_1_n &IfcRelConnectsWithRealizingElements::getRealizingElements() {
    if (Step::BaseObject::inited()) {
        return m_realizingElements;
    }
    else {
        m_realizingElements.setUnset(true);
        return m_realizingElements;
    }
}

const Set_IfcElement_1_n &IfcRelConnectsWithRealizingElements::getRealizingElements() const {
    IfcRelConnectsWithRealizingElements * deConstObject = const_cast< IfcRelConnectsWithRealizingElements * > (this);
    return deConstObject->getRealizingElements();
}

void IfcRelConnectsWithRealizingElements::unsetRealizingElements() {
    m_realizingElements.clear();
    m_realizingElements.setUnset(true);
}

bool IfcRelConnectsWithRealizingElements::testRealizingElements() const {
    return !m_realizingElements.isUnset();
}

IfcLabel IfcRelConnectsWithRealizingElements::getConnectionType() {
    if (Step::BaseObject::inited()) {
        return m_connectionType;
    }
    else {
        return Step::getUnset(m_connectionType);
    }
}

const IfcLabel IfcRelConnectsWithRealizingElements::getConnectionType() const {
    IfcRelConnectsWithRealizingElements * deConstObject = const_cast< IfcRelConnectsWithRealizingElements * > (this);
    return deConstObject->getConnectionType();
}

void IfcRelConnectsWithRealizingElements::setConnectionType(const IfcLabel &value) {
    m_connectionType = value;
}

void IfcRelConnectsWithRealizingElements::unsetConnectionType() {
    m_connectionType = Step::getUnset(getConnectionType());
}

bool IfcRelConnectsWithRealizingElements::testConnectionType() const {
    return !Step::isUnset(getConnectionType());
}

bool IfcRelConnectsWithRealizingElements::init() {
    bool status = IfcRelConnectsElements::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_realizingElements.setUnset(true);
    }
    else {
        m_realizingElements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcElement > attr2;
                attr2 = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_realizingElements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_connectionType = Step::getUnset(m_connectionType);
    }
    else {
        m_connectionType = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcRelConnectsWithRealizingElements::copy(const IfcRelConnectsWithRealizingElements &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcElement >, 1 >::const_iterator it_m_realizingElements;
    IfcRelConnectsElements::copy(obj, copyop);
    for (it_m_realizingElements = obj.m_realizingElements.begin(); it_m_realizingElements != obj.m_realizingElements.end(); ++it_m_realizingElements) {
        Step::RefPtr< IfcElement > copyTarget = (IfcElement *) (copyop((*it_m_realizingElements).get()));
        m_realizingElements.insert(copyTarget.get());
    }
    setConnectionType(obj.m_connectionType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelConnectsWithRealizingElements::s_type("IfcRelConnectsWithRealizingElements");
