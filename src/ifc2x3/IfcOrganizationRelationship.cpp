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



#include <ifc2x3/IfcOrganizationRelationship.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOrganization.h>
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

Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::Inverted_IfcOrganizationRelationship_RelatedOrganizations_type():
    mOwner(0)
{
}

void Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::setOwner(IfcOrganizationRelationship *owner) {
    mOwner = owner;
}

void Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::insert(const Step::RefPtr< IfcOrganization > &value) throw(std::out_of_range) {
    IfcOrganization *inverse = const_cast< IfcOrganization * > (value.get());
    Set_IfcOrganization_1_n::insert(value);
    inverse->m_isRelatedBy.insert(mOwner);
}

Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::size_type Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::erase(const Step::RefPtr< IfcOrganization > &value) {
    IfcOrganization *inverse = const_cast< IfcOrganization * > (value.get());
    inverse->m_isRelatedBy.erase(mOwner);
    return Set_IfcOrganization_1_n::erase(value);
}

void Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcOrganizationRelationship::IfcOrganizationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingOrganization = NULL;
    m_relatedOrganizations.setOwner(this);
}

IfcOrganizationRelationship::~IfcOrganizationRelationship() {
}

bool IfcOrganizationRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOrganizationRelationship(this);
}

const std::string &IfcOrganizationRelationship::type() const {
    return IfcOrganizationRelationship::s_type.getName();
}

const Step::ClassType &IfcOrganizationRelationship::getClassType() {
    return IfcOrganizationRelationship::s_type;
}

const Step::ClassType &IfcOrganizationRelationship::getType() const {
    return IfcOrganizationRelationship::s_type;
}

bool IfcOrganizationRelationship::isOfType(const Step::ClassType &t) const {
    return IfcOrganizationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcOrganizationRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcOrganizationRelationship::getName() const {
    IfcOrganizationRelationship * deConstObject = const_cast< IfcOrganizationRelationship * > (this);
    return deConstObject->getName();
}

void IfcOrganizationRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcOrganizationRelationship::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcOrganizationRelationship::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcOrganizationRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcOrganizationRelationship::getDescription() const {
    IfcOrganizationRelationship * deConstObject = const_cast< IfcOrganizationRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcOrganizationRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcOrganizationRelationship::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcOrganizationRelationship::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcOrganization *IfcOrganizationRelationship::getRelatingOrganization() {
    if (Step::BaseObject::inited()) {
        return m_relatingOrganization.get();
    }
    else {
        return NULL;
    }
}

const IfcOrganization *IfcOrganizationRelationship::getRelatingOrganization() const {
    IfcOrganizationRelationship * deConstObject = const_cast< IfcOrganizationRelationship * > (this);
    return deConstObject->getRelatingOrganization();
}

void IfcOrganizationRelationship::setRelatingOrganization(const Step::RefPtr< IfcOrganization > &value) {
    if (m_relatingOrganization.valid()) {
        m_relatingOrganization->m_relates.erase(this);
    }
    if (value.valid()) {
        value->m_relates.insert(this);
    }
    m_relatingOrganization = value;
}

void IfcOrganizationRelationship::unsetRelatingOrganization() {
    m_relatingOrganization = Step::getUnset(getRelatingOrganization());
}

bool IfcOrganizationRelationship::testRelatingOrganization() const {
    return !Step::isUnset(getRelatingOrganization());
}

Set_IfcOrganization_1_n &IfcOrganizationRelationship::getRelatedOrganizations() {
    if (Step::BaseObject::inited()) {
        return m_relatedOrganizations;
    }
    else {
        m_relatedOrganizations.setUnset(true);
        return m_relatedOrganizations;
    }
}

const Set_IfcOrganization_1_n &IfcOrganizationRelationship::getRelatedOrganizations() const {
    IfcOrganizationRelationship * deConstObject = const_cast< IfcOrganizationRelationship * > (this);
    return deConstObject->getRelatedOrganizations();
}

void IfcOrganizationRelationship::unsetRelatedOrganizations() {
    m_relatedOrganizations.clear();
    m_relatedOrganizations.setUnset(true);
}

bool IfcOrganizationRelationship::testRelatedOrganizations() const {
    return !m_relatedOrganizations.isUnset();
}

bool IfcOrganizationRelationship::init() {
    std::string arg;
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingOrganization = NULL;
    }
    else {
        m_relatingOrganization = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedOrganizations.setUnset(true);
    }
    else {
        m_relatedOrganizations.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcOrganization > attr2;
                attr2 = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedOrganizations.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcOrganizationRelationship::copy(const IfcOrganizationRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcOrganization >, 1 >::const_iterator it_m_relatedOrganizations;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingOrganization((IfcOrganization*)copyop(obj.m_relatingOrganization.get()));
    for (it_m_relatedOrganizations = obj.m_relatedOrganizations.begin(); it_m_relatedOrganizations != obj.m_relatedOrganizations.end(); ++it_m_relatedOrganizations) {
        Step::RefPtr< IfcOrganization > copyTarget = (IfcOrganization *) (copyop((*it_m_relatedOrganizations).get()));
        m_relatedOrganizations.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOrganizationRelationship::s_type("IfcOrganizationRelationship");
