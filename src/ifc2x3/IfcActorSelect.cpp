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



#include <ifc2x3/IfcActorSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcActorSelect::IfcActorSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcActorSelect::IfcActorSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcActorSelect::~IfcActorSelect() {
    deleteUnion();
}

bool IfcActorSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcActorSelect(this);
}

bool IfcActorSelect::init() {
    return false;
}

const std::string &IfcActorSelect::type() const {
    return IfcActorSelect::s_type.getName();
}

const Step::ClassType &IfcActorSelect::getClassType() {
    return IfcActorSelect::s_type;
}

const Step::ClassType &IfcActorSelect::getType() const {
    return IfcActorSelect::s_type;
}

bool IfcActorSelect::isOfType(const Step::ClassType &t) const {
    return IfcActorSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcActorSelect::copy(const IfcActorSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCORGANIZATION:
        setIfcOrganization((IfcOrganization *) (copyop(obj.m_IfcActorSelect_union.m_IfcOrganization)));
        break;
    case IFCPERSON:
        setIfcPerson((IfcPerson *) (copyop(obj.m_IfcActorSelect_union.m_IfcPerson)));
        break;
    case IFCPERSONANDORGANIZATION:
        setIfcPersonAndOrganization((IfcPersonAndOrganization *) (copyop(obj.m_IfcActorSelect_union.m_IfcPersonAndOrganization)));
        break;
    case UNSET:
        break;
    }
}

std::string IfcActorSelect::currentTypeName() const {
    switch(m_type) {
    case IFCORGANIZATION:
        return "IfcOrganization";
    case IFCPERSON:
        return "IfcPerson";
    case IFCPERSONANDORGANIZATION:
        return "IfcPersonAndOrganization";
    case UNSET:
    default:
        return "UNSET";
    }
}

IfcActorSelect::IfcActorSelect_select IfcActorSelect::currentType() const {
    return m_type;
}

void IfcActorSelect::deleteUnion() {
    switch(m_type) {
    case IFCORGANIZATION:
        m_IfcActorSelect_union.m_IfcOrganization->unref();
        break;
    case IFCPERSON:
        m_IfcActorSelect_union.m_IfcPerson->unref();
        break;
    case IFCPERSONANDORGANIZATION:
        m_IfcActorSelect_union.m_IfcPersonAndOrganization->unref();
        break;
    case UNSET:
        break;
    }
    m_type = UNSET;
}

IfcOrganization *IfcActorSelect::getIfcOrganization() const {
    if (m_type == IFCORGANIZATION) {
        return m_IfcActorSelect_union.m_IfcOrganization;
    }
    else {
        return NULL;
    }
}

void IfcActorSelect::setIfcOrganization(IfcOrganization *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcActorSelect_union.m_IfcOrganization = value;
    if (value) {
        value->ref();
        m_type = IFCORGANIZATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCORGANIZATION;
}

IfcPerson *IfcActorSelect::getIfcPerson() const {
    if (m_type == IFCPERSON) {
        return m_IfcActorSelect_union.m_IfcPerson;
    }
    else {
        return NULL;
    }
}

void IfcActorSelect::setIfcPerson(IfcPerson *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcActorSelect_union.m_IfcPerson = value;
    if (value) {
        value->ref();
        m_type = IFCPERSON;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPERSON;
}

IfcPersonAndOrganization *IfcActorSelect::getIfcPersonAndOrganization() const {
    if (m_type == IFCPERSONANDORGANIZATION) {
        return m_IfcActorSelect_union.m_IfcPersonAndOrganization;
    }
    else {
        return NULL;
    }
}

void IfcActorSelect::setIfcPersonAndOrganization(IfcPersonAndOrganization *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcActorSelect_union.m_IfcPersonAndOrganization = value;
    if (value) {
        value->ref();
        m_type = IFCPERSONANDORGANIZATION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCPERSONANDORGANIZATION;
}

void IfcActorSelect::set(Step::BaseObject *v) {
    if (v) {
        if (v->isOfType(IfcOrganization::getClassType())) {
            setIfcOrganization(static_cast< IfcOrganization* > (v));
        }
        else if (v->isOfType(IfcPerson::getClassType())) {
            setIfcPerson(static_cast< IfcPerson* > (v));
        }
        else if (v->isOfType(IfcPersonAndOrganization::getClassType())) {
            setIfcPersonAndOrganization(static_cast< IfcPersonAndOrganization* > (v));
        }
    }
}

IFC2X3_EXPORT Step::ClassType IfcActorSelect::s_type("IfcActorSelect");
