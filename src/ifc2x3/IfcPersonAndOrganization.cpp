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



#include <ifc2x3/IfcPersonAndOrganization.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>
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

IfcPersonAndOrganization::IfcPersonAndOrganization(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_thePerson = NULL;
    m_theOrganization = NULL;
    m_roles.setUnset(true);
}

IfcPersonAndOrganization::~IfcPersonAndOrganization() {
}

bool IfcPersonAndOrganization::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPersonAndOrganization(this);
}

const std::string &IfcPersonAndOrganization::type() const {
    return IfcPersonAndOrganization::s_type.getName();
}

const Step::ClassType &IfcPersonAndOrganization::getClassType() {
    return IfcPersonAndOrganization::s_type;
}

const Step::ClassType &IfcPersonAndOrganization::getType() const {
    return IfcPersonAndOrganization::s_type;
}

bool IfcPersonAndOrganization::isOfType(const Step::ClassType &t) const {
    return IfcPersonAndOrganization::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcPerson *IfcPersonAndOrganization::getThePerson() {
    if (Step::BaseObject::inited()) {
        return m_thePerson.get();
    }
    else {
        return NULL;
    }
}

const IfcPerson *IfcPersonAndOrganization::getThePerson() const {
    IfcPersonAndOrganization * deConstObject = const_cast< IfcPersonAndOrganization * > (this);
    return deConstObject->getThePerson();
}

void IfcPersonAndOrganization::setThePerson(const Step::RefPtr< IfcPerson > &value) {
    if (m_thePerson.valid()) {
        m_thePerson->m_engagedIn.erase(this);
    }
    if (value.valid()) {
        value->m_engagedIn.insert(this);
    }
    m_thePerson = value;
}

void IfcPersonAndOrganization::unsetThePerson() {
    m_thePerson = Step::getUnset(getThePerson());
}

bool IfcPersonAndOrganization::testThePerson() const {
    return !Step::isUnset(getThePerson());
}

IfcOrganization *IfcPersonAndOrganization::getTheOrganization() {
    if (Step::BaseObject::inited()) {
        return m_theOrganization.get();
    }
    else {
        return NULL;
    }
}

const IfcOrganization *IfcPersonAndOrganization::getTheOrganization() const {
    IfcPersonAndOrganization * deConstObject = const_cast< IfcPersonAndOrganization * > (this);
    return deConstObject->getTheOrganization();
}

void IfcPersonAndOrganization::setTheOrganization(const Step::RefPtr< IfcOrganization > &value) {
    if (m_theOrganization.valid()) {
        m_theOrganization->m_engages.erase(this);
    }
    if (value.valid()) {
        value->m_engages.insert(this);
    }
    m_theOrganization = value;
}

void IfcPersonAndOrganization::unsetTheOrganization() {
    m_theOrganization = Step::getUnset(getTheOrganization());
}

bool IfcPersonAndOrganization::testTheOrganization() const {
    return !Step::isUnset(getTheOrganization());
}

List_IfcActorRole_1_n &IfcPersonAndOrganization::getRoles() {
    if (Step::BaseObject::inited()) {
        return m_roles;
    }
    else {
        m_roles.setUnset(true);
        return m_roles;
    }
}

const List_IfcActorRole_1_n &IfcPersonAndOrganization::getRoles() const {
    IfcPersonAndOrganization * deConstObject = const_cast< IfcPersonAndOrganization * > (this);
    return deConstObject->getRoles();
}

void IfcPersonAndOrganization::setRoles(const List_IfcActorRole_1_n &value) {
    m_roles = value;
}

void IfcPersonAndOrganization::unsetRoles() {
    m_roles.clear();
    m_roles.setUnset(true);
}

bool IfcPersonAndOrganization::testRoles() const {
    return !m_roles.isUnset();
}

bool IfcPersonAndOrganization::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thePerson = NULL;
    }
    else {
        m_thePerson = static_cast< IfcPerson * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_theOrganization = NULL;
    }
    else {
        m_theOrganization = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_roles.setUnset(true);
    }
    else {
        m_roles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcActorRole > attr2;
                attr2 = static_cast< IfcActorRole * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_roles.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPersonAndOrganization::copy(const IfcPersonAndOrganization &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcActorRole >, 1 >::const_iterator it_m_roles;
    Step::BaseEntity::copy(obj, copyop);
    setThePerson((IfcPerson*)copyop(obj.m_thePerson.get()));
    setTheOrganization((IfcOrganization*)copyop(obj.m_theOrganization.get()));
    for (it_m_roles = obj.m_roles.begin(); it_m_roles != obj.m_roles.end(); ++it_m_roles) {
        Step::RefPtr< IfcActorRole > copyTarget = (IfcActorRole *) (copyop((*it_m_roles).get()));
        m_roles.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPersonAndOrganization::s_type("IfcPersonAndOrganization");
