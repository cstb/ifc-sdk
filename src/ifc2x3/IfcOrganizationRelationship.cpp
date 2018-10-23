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


#include <ifc2x3/IfcOrganizationRelationship.h>

#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcOrganization.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::Inverted_IfcOrganizationRelationship_RelatedOrganizations_type()
{

}

void Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::setOwner(IfcOrganizationRelationship *owner)
{
    mOwner = owner;
}

void Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::insert(const Step::RefPtr< IfcOrganization > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcOrganization *inverse = const_cast< IfcOrganization * > (value.get());
    Set_IfcOrganization_1_n::insert(value);
    inverse->m_IsRelatedBy.insert(mOwner);
}


Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::size_type Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::erase(const Step::RefPtr< IfcOrganization > &value)
{
    IfcOrganization *inverse = const_cast< IfcOrganization * > (value.get());
    inverse->m_IsRelatedBy.erase(mOwner);
    return Set_IfcOrganization_1_n::erase(value);
}

void Inverted_IfcOrganizationRelationship_RelatedOrganizations_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcOrganizationRelationship::IfcOrganizationRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_RelatedOrganizations.setUnset(true);
    m_RelatedOrganizations.setOwner(this);
    m_RelatingOrganization = NULL;
}

IfcOrganizationRelationship::~IfcOrganizationRelationship()
{}

bool IfcOrganizationRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOrganizationRelationship(this);
}


IfcLabel IfcOrganizationRelationship::getName()
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

const IfcLabel IfcOrganizationRelationship::getName() const
{
    return const_cast<IfcOrganizationRelationship *>(this)->getName();
}

void IfcOrganizationRelationship::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcOrganizationRelationship::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcOrganizationRelationship::testName() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getName()) == false;
}


IfcText IfcOrganizationRelationship::getDescription()
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

const IfcText IfcOrganizationRelationship::getDescription() const
{
    return const_cast<IfcOrganizationRelationship *>(this)->getDescription();
}

void IfcOrganizationRelationship::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcOrganizationRelationship::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcOrganizationRelationship::testDescription() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDescription()) == false;
}

Set_IfcOrganization_1_n &IfcOrganizationRelationship::getRelatedOrganizations()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedOrganizations;
    }
    else
    {
        m_RelatedOrganizations.setUnset(true);
        return m_RelatedOrganizations;
    }
}

const Set_IfcOrganization_1_n &IfcOrganizationRelationship::getRelatedOrganizations() const
{
    return const_cast< IfcOrganizationRelationship * > (this)->getRelatedOrganizations();
}

void IfcOrganizationRelationship::unsetRelatedOrganizations()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedOrganizations.clear();
    m_RelatedOrganizations.setUnset(true);
}

bool IfcOrganizationRelationship::testRelatedOrganizations() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RelatedOrganizations.isUnset() == false;
}

IfcOrganization *IfcOrganizationRelationship::getRelatingOrganization()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingOrganization.get();
    }
    else
    {
        return NULL;
    }
}

const IfcOrganization *IfcOrganizationRelationship::getRelatingOrganization() const
{
    return const_cast< IfcOrganizationRelationship * > (this)->getRelatingOrganization();
}

void IfcOrganizationRelationship::setRelatingOrganization(const Step::RefPtr< IfcOrganization > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingOrganization.valid())
    {
        m_RelatingOrganization->m_Relates.erase(this);
    }
    if (value.valid() )
    {
       value->m_Relates.insert(this);
    }
    m_RelatingOrganization = value;
}

void IfcOrganizationRelationship::unsetRelatingOrganization()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingOrganization = Step::getUnset(getRelatingOrganization());
}

bool IfcOrganizationRelationship::testRelatingOrganization() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingOrganization()) == false;
}

bool IfcOrganizationRelationship::init()
{
    std::string arg;
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
        m_RelatedOrganizations.setUnset(true);
    }
    else
    {
        m_RelatedOrganizations.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedOrganizations.insert(static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_RelatingOrganization = NULL;
    }
    else
    {
        m_RelatingOrganization = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcOrganizationRelationship::copy(const IfcOrganizationRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    Set_IfcOrganization_1_n::const_iterator it_m_RelatedOrganizations;
    for (it_m_RelatedOrganizations = obj.m_RelatedOrganizations.begin(); it_m_RelatedOrganizations != obj.m_RelatedOrganizations.end(); ++it_m_RelatedOrganizations)
    {
        Step::RefPtr< IfcOrganization > copyTarget = (IfcOrganization *) (copyop((*it_m_RelatedOrganizations).get()));
        m_RelatedOrganizations.insert(copyTarget);
    }
    
    setRelatingOrganization((IfcOrganization*)copyop(obj.m_RelatingOrganization.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOrganizationRelationship, Step::BaseEntity)
