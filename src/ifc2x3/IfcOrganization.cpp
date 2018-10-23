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


#include <ifc2x3/IfcOrganization.h>

#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcOrganizationRelationship.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/IfcOrganizationRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcOrganization_Addresses_type::Inverted_IfcOrganization_Addresses_type()
{

}

void Inverted_IfcOrganization_Addresses_type::setOwner(IfcOrganization *owner)
{
    mOwner = owner;
}

void Inverted_IfcOrganization_Addresses_type::push_back(const Step::RefPtr< IfcAddress > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    List_IfcAddress_1_n::push_back(value);
    inverse->m_OfOrganization.insert(mOwner);
}


Inverted_IfcOrganization_Addresses_type::iterator Inverted_IfcOrganization_Addresses_type::erase(const Step::RefPtr< IfcAddress > &value)
{
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    inverse->m_OfOrganization.erase(mOwner);
    return List_IfcAddress_1_n::erase(value);
}

void Inverted_IfcOrganization_Addresses_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcOrganization::IfcOrganization(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Id = Step::getUnset(m_Id);
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_Roles.setUnset(true);
    m_Addresses.setUnset(true);
    m_Addresses.setOwner(this);
}

IfcOrganization::~IfcOrganization()
{}

bool IfcOrganization::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOrganization(this);
}


IfcIdentifier IfcOrganization::getId()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Id;
    }
    else 
    {
        return Step::getUnset(m_Id);
    }    
}

const IfcIdentifier IfcOrganization::getId() const
{
    return const_cast<IfcOrganization *>(this)->getId();
}

void IfcOrganization::setId(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Id = value;
}

void IfcOrganization::unsetId()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Id = Step::getUnset(getId());
}

bool IfcOrganization::testId() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getId()) == false;
}


IfcLabel IfcOrganization::getName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Name;
    }
    else 
    {
        return Step::getUnset(m_Name);
    }    
}

const IfcLabel IfcOrganization::getName() const
{
    return const_cast<IfcOrganization *>(this)->getName();
}

void IfcOrganization::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcOrganization::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcOrganization::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcText IfcOrganization::getDescription()
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

const IfcText IfcOrganization::getDescription() const
{
    return const_cast<IfcOrganization *>(this)->getDescription();
}

void IfcOrganization::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcOrganization::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcOrganization::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}


List_IfcActorRole_1_n &IfcOrganization::getRoles()
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

const List_IfcActorRole_1_n &IfcOrganization::getRoles() const
{
    return const_cast<IfcOrganization *>(this)->getRoles();
}

void IfcOrganization::setRoles(const List_IfcActorRole_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Roles = value;
}

void IfcOrganization::unsetRoles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Roles.clear();
    m_Roles.setUnset(true);
}

bool IfcOrganization::testRoles() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Roles.isUnset() == false;
}

List_IfcAddress_1_n &IfcOrganization::getAddresses()
{
    if (Step::BaseObject::inited())
    {
        return m_Addresses;
    }
    else
    {
        m_Addresses.setUnset(true);
        return m_Addresses;
    }
}

const List_IfcAddress_1_n &IfcOrganization::getAddresses() const
{
    return const_cast< IfcOrganization * > (this)->getAddresses();
}

void IfcOrganization::unsetAddresses()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Addresses.clear();
    m_Addresses.setUnset(true);
}

bool IfcOrganization::testAddresses() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Addresses.isUnset() == false;
}

Inverse_Set_IfcOrganizationRelationship_0_n &IfcOrganization::getIsRelatedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_IsRelatedBy;
    }
 
    m_IsRelatedBy.setUnset(true);
    return m_IsRelatedBy;
}

const Inverse_Set_IfcOrganizationRelationship_0_n &IfcOrganization::getIsRelatedBy() const
{
    return  const_cast< IfcOrganization * > (this)->getIsRelatedBy();
}

bool IfcOrganization::testIsRelatedBy() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsRelatedBy.isUnset() == false;
}

Inverse_Set_IfcPersonAndOrganization_0_n &IfcOrganization::getEngages()
{
    if (Step::BaseObject::inited())
    {
        return m_Engages;
    }
 
    m_Engages.setUnset(true);
    return m_Engages;
}

const Inverse_Set_IfcPersonAndOrganization_0_n &IfcOrganization::getEngages() const
{
    return  const_cast< IfcOrganization * > (this)->getEngages();
}

bool IfcOrganization::testEngages() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Engages.isUnset() == false;
}

Inverse_Set_IfcOrganizationRelationship_0_n &IfcOrganization::getRelates()
{
    if (Step::BaseObject::inited())
    {
        return m_Relates;
    }
 
    m_Relates.setUnset(true);
    return m_Relates;
}

const Inverse_Set_IfcOrganizationRelationship_0_n &IfcOrganization::getRelates() const
{
    return  const_cast< IfcOrganization * > (this)->getRelates();
}

bool IfcOrganization::testRelates() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Relates.isUnset() == false;
}

bool IfcOrganization::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Id = Step::getUnset(m_Id);
    }
    else
    {
        m_Id = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Name = Step::getUnset(m_Name);
    }
    else
    {
        m_Name = Step::String::fromSPF(arg)
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
        m_Addresses.setUnset(true);
    }
    else
    {
        m_Addresses.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Addresses.push_back(static_cast< IfcAddress * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcOrganizationRelationship::getClassType(), 3);
    if (inverses)
    {
        unsigned int i;
        m_IsRelatedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsRelatedBy.insert(static_cast< IfcOrganizationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPersonAndOrganization::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_Engages.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Engages.insert(static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcOrganizationRelationship::getClassType(), 2);
    if (inverses)
    {
        unsigned int i;
        m_Relates.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Relates.insert(static_cast< IfcOrganizationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcOrganization::copy(const IfcOrganization &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setId(obj.m_Id);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    List_IfcActorRole_1_n::const_iterator it_m_Roles;
    for (it_m_Roles = obj.m_Roles.begin(); it_m_Roles != obj.m_Roles.end(); ++it_m_Roles)
    {
        Step::RefPtr< IfcActorRole > copyTarget = (IfcActorRole *) (copyop((*it_m_Roles).get()));
        m_Roles.push_back(copyTarget);
    }
    
    List_IfcAddress_1_n::const_iterator it_m_Addresses;
    for (it_m_Addresses = obj.m_Addresses.begin(); it_m_Addresses != obj.m_Addresses.end(); ++it_m_Addresses)
    {
        Step::RefPtr< IfcAddress > copyTarget = (IfcAddress *) (copyop((*it_m_Addresses).get()));
        m_Addresses.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOrganization, Step::BaseEntity)
