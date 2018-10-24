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


#include <ifc2x3/IfcPersonAndOrganization.h>

#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcPerson.h>
#include <ifc2x3/IfcOrganization.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPersonAndOrganization::IfcPersonAndOrganization(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Roles.setUnset(true);
    m_ThePerson = NULL;
    m_TheOrganization = NULL;
}

IfcPersonAndOrganization::~IfcPersonAndOrganization()
{}

bool IfcPersonAndOrganization::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPersonAndOrganization(this);
}


List_IfcActorRole_1_n &IfcPersonAndOrganization::getRoles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Roles;
    }
    else 
    {
        m_Roles.setUnset(true);
        return m_Roles;
    }    
}

const List_IfcActorRole_1_n &IfcPersonAndOrganization::getRoles() const
{
    return const_cast<IfcPersonAndOrganization *>(this)->getRoles();
}

void IfcPersonAndOrganization::setRoles(const List_IfcActorRole_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Roles = value;
}

void IfcPersonAndOrganization::unsetRoles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Roles.clear();
    m_Roles.setUnset(true);
}

bool IfcPersonAndOrganization::testRoles() const
{
    return m_Roles.isUnset() == false;
}

IfcPerson *IfcPersonAndOrganization::getThePerson()
{
    if (Step::BaseObject::inited())
    {
        return m_ThePerson.get();
    }
    else
    {
        return NULL;
    }
}

const IfcPerson *IfcPersonAndOrganization::getThePerson() const
{
    return const_cast< IfcPersonAndOrganization * > (this)->getThePerson();
}

void IfcPersonAndOrganization::setThePerson(const Step::RefPtr< IfcPerson > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ThePerson.valid())
    {
        m_ThePerson->m_EngagedIn.erase(this);
    }
    if (value.valid() )
    {
       value->m_EngagedIn.insert(this);
    }
    m_ThePerson = value;
}

void IfcPersonAndOrganization::unsetThePerson()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThePerson = Step::getUnset(getThePerson());
}

bool IfcPersonAndOrganization::testThePerson() const
{
    return Step::isUnset(getThePerson()) == false;
}

IfcOrganization *IfcPersonAndOrganization::getTheOrganization()
{
    if (Step::BaseObject::inited())
    {
        return m_TheOrganization.get();
    }
    else
    {
        return NULL;
    }
}

const IfcOrganization *IfcPersonAndOrganization::getTheOrganization() const
{
    return const_cast< IfcPersonAndOrganization * > (this)->getTheOrganization();
}

void IfcPersonAndOrganization::setTheOrganization(const Step::RefPtr< IfcOrganization > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_TheOrganization.valid())
    {
        m_TheOrganization->m_Engages.erase(this);
    }
    if (value.valid() )
    {
       value->m_Engages.insert(this);
    }
    m_TheOrganization = value;
}

void IfcPersonAndOrganization::unsetTheOrganization()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TheOrganization = Step::getUnset(getTheOrganization());
}

bool IfcPersonAndOrganization::testTheOrganization() const
{
    return Step::isUnset(getTheOrganization()) == false;
}

bool IfcPersonAndOrganization::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Roles.setUnset(true);
    }
    else
    {
        m_Roles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Roles.push_back(static_cast< IfcActorRole * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThePerson = NULL;
    }
    else
    {
        m_ThePerson = static_cast< IfcPerson * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TheOrganization = NULL;
    }
    else
    {
        m_TheOrganization = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcPersonAndOrganization::copy(const IfcPersonAndOrganization &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    List_IfcActorRole_1_n::const_iterator it_m_Roles;
    for (it_m_Roles = obj.m_Roles.begin(); it_m_Roles != obj.m_Roles.end(); ++it_m_Roles)
    {
        Step::RefPtr< IfcActorRole > copyTarget = (IfcActorRole *) (copyop((*it_m_Roles).get()));
        m_Roles.push_back(copyTarget);
    }
    
    setThePerson((IfcPerson*)copyop(obj.m_ThePerson.get()));
    setTheOrganization((IfcOrganization*)copyop(obj.m_TheOrganization.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPersonAndOrganization, Step::BaseEntity)
