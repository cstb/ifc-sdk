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



#include <ifc2x3/IfcRelCoversSpaces.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/IfcSpace.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcRelCoversSpaces_RelatedCoverings_type::Inverted_IfcRelCoversSpaces_RelatedCoverings_type():
    mOwner(0)
{
}

void Inverted_IfcRelCoversSpaces_RelatedCoverings_type::setOwner(IfcRelCoversSpaces *owner) {
    mOwner = owner;
}

void Inverted_IfcRelCoversSpaces_RelatedCoverings_type::insert(const Step::RefPtr< IfcCovering > &value) throw(std::out_of_range) {
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    Set_IfcCovering_1_n::insert(value);
    inverse->m_coversSpaces.insert(mOwner);
}

Inverted_IfcRelCoversSpaces_RelatedCoverings_type::size_type Inverted_IfcRelCoversSpaces_RelatedCoverings_type::erase(const Step::RefPtr< IfcCovering > &value) {
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    inverse->m_coversSpaces.erase(mOwner);
    return Set_IfcCovering_1_n::erase(value);
}

void Inverted_IfcRelCoversSpaces_RelatedCoverings_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelCoversSpaces::IfcRelCoversSpaces(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatedSpace = NULL;
    m_relatedCoverings.setOwner(this);
}

IfcRelCoversSpaces::~IfcRelCoversSpaces() {
}

bool IfcRelCoversSpaces::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelCoversSpaces(this);
}

const std::string &IfcRelCoversSpaces::type() const {
    return IfcRelCoversSpaces::s_type.getName();
}

const Step::ClassType &IfcRelCoversSpaces::getClassType() {
    return IfcRelCoversSpaces::s_type;
}

const Step::ClassType &IfcRelCoversSpaces::getType() const {
    return IfcRelCoversSpaces::s_type;
}

bool IfcRelCoversSpaces::isOfType(const Step::ClassType &t) const {
    return IfcRelCoversSpaces::s_type == t ? true : IfcRelConnects::isOfType(t);
}

IfcSpace *IfcRelCoversSpaces::getRelatedSpace() {
    if (Step::BaseObject::inited()) {
        return m_relatedSpace.get();
    }
    else {
        return NULL;
    }
}

const IfcSpace *IfcRelCoversSpaces::getRelatedSpace() const {
    IfcRelCoversSpaces * deConstObject = const_cast< IfcRelCoversSpaces * > (this);
    return deConstObject->getRelatedSpace();
}

void IfcRelCoversSpaces::setRelatedSpace(const Step::RefPtr< IfcSpace > &value) {
    if (m_relatedSpace.valid()) {
        m_relatedSpace->m_hasCoverings.erase(this);
    }
    if (value.valid()) {
        value->m_hasCoverings.insert(this);
    }
    m_relatedSpace = value;
}

void IfcRelCoversSpaces::unsetRelatedSpace() {
    m_relatedSpace = Step::getUnset(getRelatedSpace());
}

bool IfcRelCoversSpaces::testRelatedSpace() const {
    return !Step::isUnset(getRelatedSpace());
}

Set_IfcCovering_1_n &IfcRelCoversSpaces::getRelatedCoverings() {
    if (Step::BaseObject::inited()) {
        return m_relatedCoverings;
    }
    else {
        m_relatedCoverings.setUnset(true);
        return m_relatedCoverings;
    }
}

const Set_IfcCovering_1_n &IfcRelCoversSpaces::getRelatedCoverings() const {
    IfcRelCoversSpaces * deConstObject = const_cast< IfcRelCoversSpaces * > (this);
    return deConstObject->getRelatedCoverings();
}

void IfcRelCoversSpaces::unsetRelatedCoverings() {
    m_relatedCoverings.clear();
    m_relatedCoverings.setUnset(true);
}

bool IfcRelCoversSpaces::testRelatedCoverings() const {
    return !m_relatedCoverings.isUnset();
}

bool IfcRelCoversSpaces::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedSpace = NULL;
    }
    else {
        m_relatedSpace = static_cast< IfcSpace * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedCoverings.setUnset(true);
    }
    else {
        m_relatedCoverings.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCovering > attr2;
                attr2 = static_cast< IfcCovering * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedCoverings.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelCoversSpaces::copy(const IfcRelCoversSpaces &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcCovering >, 1 >::const_iterator it_m_relatedCoverings;
    IfcRelConnects::copy(obj, copyop);
    setRelatedSpace((IfcSpace*)copyop(obj.m_relatedSpace.get()));
    for (it_m_relatedCoverings = obj.m_relatedCoverings.begin(); it_m_relatedCoverings != obj.m_relatedCoverings.end(); ++it_m_relatedCoverings) {
        Step::RefPtr< IfcCovering > copyTarget = (IfcCovering *) (copyop((*it_m_relatedCoverings).get()));
        m_relatedCoverings.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelCoversSpaces::s_type("IfcRelCoversSpaces");
