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


#include <ifc2x3/IfcPerson.h>

#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcPersonAndOrganization.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcPerson_Addresses_type::Inverted_IfcPerson_Addresses_type()
{

}

void Inverted_IfcPerson_Addresses_type::setOwner(IfcPerson *owner)
{
    mOwner = owner;
}

void Inverted_IfcPerson_Addresses_type::push_back(const Step::RefPtr< IfcAddress > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    List_IfcAddress_1_n::push_back(value);
    inverse->m_OfPerson.insert(mOwner);
}


Inverted_IfcPerson_Addresses_type::iterator Inverted_IfcPerson_Addresses_type::erase(const Step::RefPtr< IfcAddress > &value)
{
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    inverse->m_OfPerson.erase(mOwner);
    return List_IfcAddress_1_n::erase(value);
}

void Inverted_IfcPerson_Addresses_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcPerson::IfcPerson(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Id = Step::getUnset(m_Id);
    m_FamilyName = Step::getUnset(m_FamilyName);
    m_GivenName = Step::getUnset(m_GivenName);
    m_MiddleNames.setUnset(true);
    m_PrefixTitles.setUnset(true);
    m_SuffixTitles.setUnset(true);
    m_Roles.setUnset(true);
    m_Addresses.setUnset(true);
    m_Addresses.setOwner(this);
}

IfcPerson::~IfcPerson()
{}

bool IfcPerson::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPerson(this);
}


IfcIdentifier IfcPerson::getId()
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

const IfcIdentifier IfcPerson::getId() const
{
    return const_cast<IfcPerson *>(this)->getId();
}

void IfcPerson::setId(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Id = value;
}

void IfcPerson::unsetId()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Id = Step::getUnset(getId());
}

bool IfcPerson::testId() const
{
    return Step::isUnset(getId()) == false;
}


IfcLabel IfcPerson::getFamilyName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FamilyName;
    }
    else 
    {
        return Step::getUnset(m_FamilyName);
    }    
}

const IfcLabel IfcPerson::getFamilyName() const
{
    return const_cast<IfcPerson *>(this)->getFamilyName();
}

void IfcPerson::setFamilyName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FamilyName = value;
}

void IfcPerson::unsetFamilyName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FamilyName = Step::getUnset(getFamilyName());
}

bool IfcPerson::testFamilyName() const
{
    return Step::isUnset(getFamilyName()) == false;
}


IfcLabel IfcPerson::getGivenName()
{
    if (Step::BaseObject::inited()) 
    {
        return m_GivenName;
    }
    else 
    {
        return Step::getUnset(m_GivenName);
    }    
}

const IfcLabel IfcPerson::getGivenName() const
{
    return const_cast<IfcPerson *>(this)->getGivenName();
}

void IfcPerson::setGivenName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_GivenName = value;
}

void IfcPerson::unsetGivenName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_GivenName = Step::getUnset(getGivenName());
}

bool IfcPerson::testGivenName() const
{
    return Step::isUnset(getGivenName()) == false;
}


List_IfcLabel_1_n &IfcPerson::getMiddleNames()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MiddleNames;
    }
    else 
    {
        m_MiddleNames.setUnset(true);
        return m_MiddleNames;
    }    
}

const List_IfcLabel_1_n &IfcPerson::getMiddleNames() const
{
    return const_cast<IfcPerson *>(this)->getMiddleNames();
}

void IfcPerson::setMiddleNames(const List_IfcLabel_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MiddleNames = value;
}

void IfcPerson::unsetMiddleNames()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MiddleNames.clear();
    m_MiddleNames.setUnset(true);
}

bool IfcPerson::testMiddleNames() const
{
    return m_MiddleNames.isUnset() == false;
}


List_IfcLabel_1_n &IfcPerson::getPrefixTitles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PrefixTitles;
    }
    else 
    {
        m_PrefixTitles.setUnset(true);
        return m_PrefixTitles;
    }    
}

const List_IfcLabel_1_n &IfcPerson::getPrefixTitles() const
{
    return const_cast<IfcPerson *>(this)->getPrefixTitles();
}

void IfcPerson::setPrefixTitles(const List_IfcLabel_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PrefixTitles = value;
}

void IfcPerson::unsetPrefixTitles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PrefixTitles.clear();
    m_PrefixTitles.setUnset(true);
}

bool IfcPerson::testPrefixTitles() const
{
    return m_PrefixTitles.isUnset() == false;
}


List_IfcLabel_1_n &IfcPerson::getSuffixTitles()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SuffixTitles;
    }
    else 
    {
        m_SuffixTitles.setUnset(true);
        return m_SuffixTitles;
    }    
}

const List_IfcLabel_1_n &IfcPerson::getSuffixTitles() const
{
    return const_cast<IfcPerson *>(this)->getSuffixTitles();
}

void IfcPerson::setSuffixTitles(const List_IfcLabel_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SuffixTitles = value;
}

void IfcPerson::unsetSuffixTitles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SuffixTitles.clear();
    m_SuffixTitles.setUnset(true);
}

bool IfcPerson::testSuffixTitles() const
{
    return m_SuffixTitles.isUnset() == false;
}


List_IfcActorRole_1_n &IfcPerson::getRoles()
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

const List_IfcActorRole_1_n &IfcPerson::getRoles() const
{
    return const_cast<IfcPerson *>(this)->getRoles();
}

void IfcPerson::setRoles(const List_IfcActorRole_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Roles = value;
}

void IfcPerson::unsetRoles()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Roles.clear();
    m_Roles.setUnset(true);
}

bool IfcPerson::testRoles() const
{
    return m_Roles.isUnset() == false;
}

List_IfcAddress_1_n &IfcPerson::getAddresses()
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

const List_IfcAddress_1_n &IfcPerson::getAddresses() const
{
    return const_cast< IfcPerson * > (this)->getAddresses();
}

void IfcPerson::unsetAddresses()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Addresses.clear();
    m_Addresses.setUnset(true);
}

bool IfcPerson::testAddresses() const
{
    return m_Addresses.isUnset() == false;
}

Inverse_Set_IfcPersonAndOrganization_0_n &IfcPerson::getEngagedIn()
{
    if (Step::BaseObject::inited())
    {
        return m_EngagedIn;
    }
 
    m_EngagedIn.setUnset(true);
    return m_EngagedIn;
}

const Inverse_Set_IfcPersonAndOrganization_0_n &IfcPerson::getEngagedIn() const
{
    return  const_cast< IfcPerson * > (this)->getEngagedIn();
}

bool IfcPerson::testEngagedIn() const
{
    return m_EngagedIn.isUnset() == false;
}

bool IfcPerson::init()
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
        m_FamilyName = Step::getUnset(m_FamilyName);
    }
    else
    {
        m_FamilyName = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_GivenName = Step::getUnset(m_GivenName);
    }
    else
    {
        m_GivenName = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MiddleNames.setUnset(true);
    }
    else
    {
        m_MiddleNames.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_MiddleNames.push_back(Step::String::fromSPF(str1)
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
        m_PrefixTitles.setUnset(true);
    }
    else
    {
        m_PrefixTitles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_PrefixTitles.push_back(Step::String::fromSPF(str1)
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
        m_SuffixTitles.setUnset(true);
    }
    else
    {
        m_SuffixTitles.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_SuffixTitles.push_back(Step::String::fromSPF(str1)
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
    inverses = m_args->getInverses(IfcPersonAndOrganization::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_EngagedIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_EngagedIn.insert(static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPerson::copy(const IfcPerson &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setId(obj.m_Id);
    setFamilyName(obj.m_FamilyName);
    setGivenName(obj.m_GivenName);
    List_IfcLabel_1_n::const_iterator it_m_MiddleNames;
    for (it_m_MiddleNames = obj.m_MiddleNames.begin(); it_m_MiddleNames != obj.m_MiddleNames.end(); ++it_m_MiddleNames)
    {
        IfcLabel copyTarget = (*it_m_MiddleNames);
        m_MiddleNames.push_back(copyTarget);
    }
    
    List_IfcLabel_1_n::const_iterator it_m_PrefixTitles;
    for (it_m_PrefixTitles = obj.m_PrefixTitles.begin(); it_m_PrefixTitles != obj.m_PrefixTitles.end(); ++it_m_PrefixTitles)
    {
        IfcLabel copyTarget = (*it_m_PrefixTitles);
        m_PrefixTitles.push_back(copyTarget);
    }
    
    List_IfcLabel_1_n::const_iterator it_m_SuffixTitles;
    for (it_m_SuffixTitles = obj.m_SuffixTitles.begin(); it_m_SuffixTitles != obj.m_SuffixTitles.end(); ++it_m_SuffixTitles)
    {
        IfcLabel copyTarget = (*it_m_SuffixTitles);
        m_SuffixTitles.push_back(copyTarget);
    }
    
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

ClassType_child_implementations(IFC2X3_EXPORT, IfcPerson, Step::BaseEntity)
