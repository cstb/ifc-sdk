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



#include <ifc2x3/IfcActorRole.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcActorRole::IfcActorRole(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_role = IfcRoleEnum_UNSET;
    m_userDefinedRole = Step::getUnset(m_userDefinedRole);
    m_description = Step::getUnset(m_description);
}

IfcActorRole::~IfcActorRole() {
}

bool IfcActorRole::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcActorRole(this);
}

const std::string &IfcActorRole::type() const {
    return IfcActorRole::s_type.getName();
}

const Step::ClassType &IfcActorRole::getClassType() {
    return IfcActorRole::s_type;
}

const Step::ClassType &IfcActorRole::getType() const {
    return IfcActorRole::s_type;
}

bool IfcActorRole::isOfType(const Step::ClassType &t) const {
    return IfcActorRole::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcRoleEnum IfcActorRole::getRole() {
    if (Step::BaseObject::inited()) {
        return m_role;
    }
    else {
        return IfcRoleEnum_UNSET;
    }
}

const IfcRoleEnum IfcActorRole::getRole() const {
    IfcActorRole * deConstObject = const_cast< IfcActorRole * > (this);
    return deConstObject->getRole();
}

void IfcActorRole::setRole(IfcRoleEnum value) {
    m_role = value;
}

void IfcActorRole::unsetRole() {
    m_role = IfcRoleEnum_UNSET;
}

bool IfcActorRole::testRole() const {
    return getRole() != IfcRoleEnum_UNSET;
}

IfcLabel IfcActorRole::getUserDefinedRole() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedRole;
    }
    else {
        return Step::getUnset(m_userDefinedRole);
    }
}

const IfcLabel IfcActorRole::getUserDefinedRole() const {
    IfcActorRole * deConstObject = const_cast< IfcActorRole * > (this);
    return deConstObject->getUserDefinedRole();
}

void IfcActorRole::setUserDefinedRole(const IfcLabel &value) {
    m_userDefinedRole = value;
}

void IfcActorRole::unsetUserDefinedRole() {
    m_userDefinedRole = Step::getUnset(getUserDefinedRole());
}

bool IfcActorRole::testUserDefinedRole() const {
    return !Step::isUnset(getUserDefinedRole());
}

IfcText IfcActorRole::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcActorRole::getDescription() const {
    IfcActorRole * deConstObject = const_cast< IfcActorRole * > (this);
    return deConstObject->getDescription();
}

void IfcActorRole::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcActorRole::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcActorRole::testDescription() const {
    return !Step::isUnset(getDescription());
}

bool IfcActorRole::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_role = IfcRoleEnum_UNSET;
    }
    else {
        if (arg == ".SUPPLIER.") {
            m_role = IfcRoleEnum_SUPPLIER;
        }
        else if (arg == ".MANUFACTURER.") {
            m_role = IfcRoleEnum_MANUFACTURER;
        }
        else if (arg == ".CONTRACTOR.") {
            m_role = IfcRoleEnum_CONTRACTOR;
        }
        else if (arg == ".SUBCONTRACTOR.") {
            m_role = IfcRoleEnum_SUBCONTRACTOR;
        }
        else if (arg == ".ARCHITECT.") {
            m_role = IfcRoleEnum_ARCHITECT;
        }
        else if (arg == ".STRUCTURALENGINEER.") {
            m_role = IfcRoleEnum_STRUCTURALENGINEER;
        }
        else if (arg == ".COSTENGINEER.") {
            m_role = IfcRoleEnum_COSTENGINEER;
        }
        else if (arg == ".CLIENT.") {
            m_role = IfcRoleEnum_CLIENT;
        }
        else if (arg == ".BUILDINGOWNER.") {
            m_role = IfcRoleEnum_BUILDINGOWNER;
        }
        else if (arg == ".BUILDINGOPERATOR.") {
            m_role = IfcRoleEnum_BUILDINGOPERATOR;
        }
        else if (arg == ".MECHANICALENGINEER.") {
            m_role = IfcRoleEnum_MECHANICALENGINEER;
        }
        else if (arg == ".ELECTRICALENGINEER.") {
            m_role = IfcRoleEnum_ELECTRICALENGINEER;
        }
        else if (arg == ".PROJECTMANAGER.") {
            m_role = IfcRoleEnum_PROJECTMANAGER;
        }
        else if (arg == ".FACILITIESMANAGER.") {
            m_role = IfcRoleEnum_FACILITIESMANAGER;
        }
        else if (arg == ".CIVILENGINEER.") {
            m_role = IfcRoleEnum_CIVILENGINEER;
        }
        else if (arg == ".COMISSIONINGENGINEER.") {
            m_role = IfcRoleEnum_COMISSIONINGENGINEER;
        }
        else if (arg == ".ENGINEER.") {
            m_role = IfcRoleEnum_ENGINEER;
        }
        else if (arg == ".OWNER.") {
            m_role = IfcRoleEnum_OWNER;
        }
        else if (arg == ".CONSULTANT.") {
            m_role = IfcRoleEnum_CONSULTANT;
        }
        else if (arg == ".CONSTRUCTIONMANAGER.") {
            m_role = IfcRoleEnum_CONSTRUCTIONMANAGER;
        }
        else if (arg == ".FIELDCONSTRUCTIONMANAGER.") {
            m_role = IfcRoleEnum_FIELDCONSTRUCTIONMANAGER;
        }
        else if (arg == ".RESELLER.") {
            m_role = IfcRoleEnum_RESELLER;
        }
        else if (arg == ".USERDEFINED.") {
            m_role = IfcRoleEnum_USERDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedRole = Step::getUnset(m_userDefinedRole);
    }
    else {
        m_userDefinedRole = Step::String::fromSPF(arg);
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

void IfcActorRole::copy(const IfcActorRole &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRole(obj.m_role);
    setUserDefinedRole(obj.m_userDefinedRole);
    setDescription(obj.m_description);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcActorRole::s_type("IfcActorRole");
