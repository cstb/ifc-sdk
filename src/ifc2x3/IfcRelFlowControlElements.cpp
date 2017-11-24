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



#include <ifc2x3/IfcRelFlowControlElements.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDistributionControlElement.h>
#include <ifc2x3/IfcDistributionFlowElement.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcRelFlowControlElements_RelatedControlElements_type::Inverted_IfcRelFlowControlElements_RelatedControlElements_type():
    mOwner(0)
{
}

void Inverted_IfcRelFlowControlElements_RelatedControlElements_type::setOwner(IfcRelFlowControlElements *owner) {
    mOwner = owner;
}

void Inverted_IfcRelFlowControlElements_RelatedControlElements_type::insert(const Step::RefPtr< IfcDistributionControlElement > &value) throw(std::out_of_range) {
    IfcDistributionControlElement *inverse = const_cast< IfcDistributionControlElement * > (value.get());
    Set_IfcDistributionControlElement_1_n::insert(value);
    inverse->m_assignedToFlowElement.insert(mOwner);
}

Inverted_IfcRelFlowControlElements_RelatedControlElements_type::size_type Inverted_IfcRelFlowControlElements_RelatedControlElements_type::erase(const Step::RefPtr< IfcDistributionControlElement > &value) {
    IfcDistributionControlElement *inverse = const_cast< IfcDistributionControlElement * > (value.get());
    inverse->m_assignedToFlowElement.erase(mOwner);
    return Set_IfcDistributionControlElement_1_n::erase(value);
}

void Inverted_IfcRelFlowControlElements_RelatedControlElements_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelFlowControlElements::IfcRelFlowControlElements(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatedControlElements.setOwner(this);
    m_relatingFlowElement = NULL;
}

IfcRelFlowControlElements::~IfcRelFlowControlElements() {
}

bool IfcRelFlowControlElements::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelFlowControlElements(this);
}

const std::string &IfcRelFlowControlElements::type() const {
    return IfcRelFlowControlElements::s_type.getName();
}

const Step::ClassType &IfcRelFlowControlElements::getClassType() {
    return IfcRelFlowControlElements::s_type;
}

const Step::ClassType &IfcRelFlowControlElements::getType() const {
    return IfcRelFlowControlElements::s_type;
}

bool IfcRelFlowControlElements::isOfType(const Step::ClassType &t) const {
    return IfcRelFlowControlElements::s_type == t ? true : IfcRelConnects::isOfType(t);
}

Set_IfcDistributionControlElement_1_n &IfcRelFlowControlElements::getRelatedControlElements() {
    if (Step::BaseObject::inited()) {
        return m_relatedControlElements;
    }
    else {
        m_relatedControlElements.setUnset(true);
        return m_relatedControlElements;
    }
}

const Set_IfcDistributionControlElement_1_n &IfcRelFlowControlElements::getRelatedControlElements() const {
    IfcRelFlowControlElements * deConstObject = const_cast< IfcRelFlowControlElements * > (this);
    return deConstObject->getRelatedControlElements();
}

void IfcRelFlowControlElements::unsetRelatedControlElements() {
    m_relatedControlElements.clear();
    m_relatedControlElements.setUnset(true);
}

bool IfcRelFlowControlElements::testRelatedControlElements() const {
    return !m_relatedControlElements.isUnset();
}

IfcDistributionFlowElement *IfcRelFlowControlElements::getRelatingFlowElement() {
    if (Step::BaseObject::inited()) {
        return m_relatingFlowElement.get();
    }
    else {
        return NULL;
    }
}

const IfcDistributionFlowElement *IfcRelFlowControlElements::getRelatingFlowElement() const {
    IfcRelFlowControlElements * deConstObject = const_cast< IfcRelFlowControlElements * > (this);
    return deConstObject->getRelatingFlowElement();
}

void IfcRelFlowControlElements::setRelatingFlowElement(const Step::RefPtr< IfcDistributionFlowElement > &value) {
    if (m_relatingFlowElement.valid()) {
        m_relatingFlowElement->m_hasControlElements.erase(this);
    }
    if (value.valid()) {
        value->m_hasControlElements.insert(this);
    }
    m_relatingFlowElement = value;
}

void IfcRelFlowControlElements::unsetRelatingFlowElement() {
    m_relatingFlowElement = Step::getUnset(getRelatingFlowElement());
}

bool IfcRelFlowControlElements::testRelatingFlowElement() const {
    return !Step::isUnset(getRelatingFlowElement());
}

bool IfcRelFlowControlElements::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedControlElements.setUnset(true);
    }
    else {
        m_relatedControlElements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDistributionControlElement > attr2;
                attr2 = static_cast< IfcDistributionControlElement * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedControlElements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingFlowElement = NULL;
    }
    else {
        m_relatingFlowElement = static_cast< IfcDistributionFlowElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelFlowControlElements::copy(const IfcRelFlowControlElements &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDistributionControlElement >, 1 >::const_iterator it_m_relatedControlElements;
    IfcRelConnects::copy(obj, copyop);
    for (it_m_relatedControlElements = obj.m_relatedControlElements.begin(); it_m_relatedControlElements != obj.m_relatedControlElements.end(); ++it_m_relatedControlElements) {
        Step::RefPtr< IfcDistributionControlElement > copyTarget = (IfcDistributionControlElement *) (copyop((*it_m_relatedControlElements).get()));
        m_relatedControlElements.insert(copyTarget.get());
    }
    setRelatingFlowElement((IfcDistributionFlowElement*)copyop(obj.m_relatingFlowElement.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelFlowControlElements::s_type("IfcRelFlowControlElements");
