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


#include <ifc2x3/IfcConstraintRelationship.h>

#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/IfcConstraint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcConstraintRelationship_RelatedConstraints_type::Inverted_IfcConstraintRelationship_RelatedConstraints_type()
{

}

void Inverted_IfcConstraintRelationship_RelatedConstraints_type::setOwner(IfcConstraintRelationship *owner)
{
    mOwner = owner;
}

void Inverted_IfcConstraintRelationship_RelatedConstraints_type::insert(const Step::RefPtr< IfcConstraint > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    Set_IfcConstraint_1_n::insert(value);
    inverse->m_IsRelatedWith.insert(mOwner);
}


Inverted_IfcConstraintRelationship_RelatedConstraints_type::size_type Inverted_IfcConstraintRelationship_RelatedConstraints_type::erase(const Step::RefPtr< IfcConstraint > &value)
{
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    inverse->m_IsRelatedWith.erase(mOwner);
    return Set_IfcConstraint_1_n::erase(value);
}

void Inverted_IfcConstraintRelationship_RelatedConstraints_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcConstraintRelationship::IfcConstraintRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_RelatedConstraints.setUnset(true);
    m_RelatedConstraints.setOwner(this);
    m_RelatingConstraint = NULL;
}

IfcConstraintRelationship::~IfcConstraintRelationship()
{}

bool IfcConstraintRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcConstraintRelationship(this);
}


IfcLabel IfcConstraintRelationship::getName()
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

const IfcLabel IfcConstraintRelationship::getName() const
{
    return const_cast<IfcConstraintRelationship *>(this)->getName();
}

void IfcConstraintRelationship::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcConstraintRelationship::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcConstraintRelationship::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcConstraintRelationship::getDescription()
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

const IfcText IfcConstraintRelationship::getDescription() const
{
    return const_cast<IfcConstraintRelationship *>(this)->getDescription();
}

void IfcConstraintRelationship::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcConstraintRelationship::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcConstraintRelationship::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}

Set_IfcConstraint_1_n &IfcConstraintRelationship::getRelatedConstraints()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedConstraints;
    }
    else
    {
        m_RelatedConstraints.setUnset(true);
        return m_RelatedConstraints;
    }
}

const Set_IfcConstraint_1_n &IfcConstraintRelationship::getRelatedConstraints() const
{
    return const_cast< IfcConstraintRelationship * > (this)->getRelatedConstraints();
}

void IfcConstraintRelationship::unsetRelatedConstraints()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedConstraints.clear();
    m_RelatedConstraints.setUnset(true);
}

bool IfcConstraintRelationship::testRelatedConstraints() const
{
    return m_RelatedConstraints.isUnset() == false;
}

IfcConstraint *IfcConstraintRelationship::getRelatingConstraint()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingConstraint.get();
    }
    else
    {
        return NULL;
    }
}

const IfcConstraint *IfcConstraintRelationship::getRelatingConstraint() const
{
    return const_cast< IfcConstraintRelationship * > (this)->getRelatingConstraint();
}

void IfcConstraintRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingConstraint.valid())
    {
        m_RelatingConstraint->m_RelatesConstraints.erase(this);
    }
    if (value.valid() )
    {
       value->m_RelatesConstraints.insert(this);
    }
    m_RelatingConstraint = value;
}

void IfcConstraintRelationship::unsetRelatingConstraint()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingConstraint = Step::getUnset(getRelatingConstraint());
}

bool IfcConstraintRelationship::testRelatingConstraint() const
{
    return Step::isUnset(getRelatingConstraint()) == false;
}

bool IfcConstraintRelationship::init()
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
        m_RelatedConstraints.setUnset(true);
    }
    else
    {
        m_RelatedConstraints.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedConstraints.insert(static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_RelatingConstraint = NULL;
    }
    else
    {
        m_RelatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcConstraintRelationship::copy(const IfcConstraintRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    Set_IfcConstraint_1_n::const_iterator it_m_RelatedConstraints;
    for (it_m_RelatedConstraints = obj.m_RelatedConstraints.begin(); it_m_RelatedConstraints != obj.m_RelatedConstraints.end(); ++it_m_RelatedConstraints)
    {
        Step::RefPtr< IfcConstraint > copyTarget = (IfcConstraint *) (copyop((*it_m_RelatedConstraints).get()));
        m_RelatedConstraints.insert(copyTarget);
    }
    
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_RelatingConstraint.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcConstraintRelationship, Step::BaseEntity)
