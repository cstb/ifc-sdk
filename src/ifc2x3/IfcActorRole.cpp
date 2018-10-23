// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcActorRole::IfcActorRole(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Role = IfcRoleEnum_UNSET;
    m_UserDefinedRole = Step::getUnset(m_UserDefinedRole);
    m_Description = Step::getUnset(m_Description);
}

IfcActorRole::~IfcActorRole()
{}

bool IfcActorRole::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcActorRole(this);
}


IfcRoleEnum IfcActorRole::getRole()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Role;
    }
    else 
    {
        return IfcRoleEnum_UNSET;
    }    
}

IfcRoleEnum IfcActorRole::getRole() const
{
    return const_cast<IfcActorRole *>(this)->getRole();
}

void IfcActorRole::setRole(IfcRoleEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Role = value;
}

void IfcActorRole::unsetRole()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Role = IfcRoleEnum_UNSET;
}

bool IfcActorRole::testRole() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRole()) == false;
}


IfcLabel IfcActorRole::getUserDefinedRole()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedRole;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedRole);
    }    
}

const IfcLabel IfcActorRole::getUserDefinedRole() const
{
    return const_cast<IfcActorRole *>(this)->getUserDefinedRole();
}

void IfcActorRole::setUserDefinedRole(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedRole = value;
}

void IfcActorRole::unsetUserDefinedRole()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedRole = Step::getUnset(getUserDefinedRole());
}

bool IfcActorRole::testUserDefinedRole() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUserDefinedRole()) == false;
}


IfcText IfcActorRole::getDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Description;
    }
    else 
    {
        return Step::getUnset(m_Description);
    }    
}

const IfcText IfcActorRole::getDescription() const
{
    return const_cast<IfcActorRole *>(this)->getDescription();
}

void IfcActorRole::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcActorRole::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcActorRole::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}

bool IfcActorRole::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Role = IfcRoleEnum_UNSET;
    }
    else
    {
        if (arg == ".SUPPLIER.")
        {
            m_Role = IfcRoleEnum_SUPPLIER;
        }
        else if (arg == ".MANUFACTURER.")
        {
            m_Role = IfcRoleEnum_MANUFACTURER;
        }
        else if (arg == ".CONTRACTOR.")
        {
            m_Role = IfcRoleEnum_CONTRACTOR;
        }
        else if (arg == ".SUBCONTRACTOR.")
        {
            m_Role = IfcRoleEnum_SUBCONTRACTOR;
        }
        else if (arg == ".ARCHITECT.")
        {
            m_Role = IfcRoleEnum_ARCHITECT;
        }
        else if (arg == ".STRUCTURALENGINEER.")
        {
            m_Role = IfcRoleEnum_STRUCTURALENGINEER;
        }
        else if (arg == ".COSTENGINEER.")
        {
            m_Role = IfcRoleEnum_COSTENGINEER;
        }
        else if (arg == ".CLIENT.")
        {
            m_Role = IfcRoleEnum_CLIENT;
        }
        else if (arg == ".BUILDINGOWNER.")
        {
            m_Role = IfcRoleEnum_BUILDINGOWNER;
        }
        else if (arg == ".BUILDINGOPERATOR.")
        {
            m_Role = IfcRoleEnum_BUILDINGOPERATOR;
        }
        else if (arg == ".MECHANICALENGINEER.")
        {
            m_Role = IfcRoleEnum_MECHANICALENGINEER;
        }
        else if (arg == ".ELECTRICALENGINEER.")
        {
            m_Role = IfcRoleEnum_ELECTRICALENGINEER;
        }
        else if (arg == ".PROJECTMANAGER.")
        {
            m_Role = IfcRoleEnum_PROJECTMANAGER;
        }
        else if (arg == ".FACILITIESMANAGER.")
        {
            m_Role = IfcRoleEnum_FACILITIESMANAGER;
        }
        else if (arg == ".CIVILENGINEER.")
        {
            m_Role = IfcRoleEnum_CIVILENGINEER;
        }
        else if (arg == ".COMISSIONINGENGINEER.")
        {
            m_Role = IfcRoleEnum_COMISSIONINGENGINEER;
        }
        else if (arg == ".ENGINEER.")
        {
            m_Role = IfcRoleEnum_ENGINEER;
        }
        else if (arg == ".OWNER.")
        {
            m_Role = IfcRoleEnum_OWNER;
        }
        else if (arg == ".CONSULTANT.")
        {
            m_Role = IfcRoleEnum_CONSULTANT;
        }
        else if (arg == ".CONSTRUCTIONMANAGER.")
        {
            m_Role = IfcRoleEnum_CONSTRUCTIONMANAGER;
        }
        else if (arg == ".FIELDCONSTRUCTIONMANAGER.")
        {
            m_Role = IfcRoleEnum_FIELDCONSTRUCTIONMANAGER;
        }
        else if (arg == ".RESELLER.")
        {
            m_Role = IfcRoleEnum_RESELLER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_Role = IfcRoleEnum_USERDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedRole = Step::getUnset(m_UserDefinedRole);
    }
    else
    {
        m_UserDefinedRole = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Description = Step::getUnset(m_Description);
    }
    else
    {
        m_Description = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcActorRole::copy(const IfcActorRole &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setRole(obj.m_Role);
    setUserDefinedRole(obj.m_UserDefinedRole);
    setDescription(obj.m_Description);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcActorRole, Step::BaseEntity)
