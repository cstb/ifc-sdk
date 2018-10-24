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


#include <ifc2x3/IfcProductRepresentation.h>

#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcRepresentation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcProductRepresentation_Representations_type::Inverted_IfcProductRepresentation_Representations_type()
{

}

void Inverted_IfcProductRepresentation_Representations_type::setOwner(IfcProductRepresentation *owner)
{
    mOwner = owner;
}

void Inverted_IfcProductRepresentation_Representations_type::push_back(const Step::RefPtr< IfcRepresentation > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcRepresentation *inverse = const_cast< IfcRepresentation * > (value.get());
    List_IfcRepresentation_1_n::push_back(value);
    inverse->m_OfProductRepresentation.insert(mOwner);
}


Inverted_IfcProductRepresentation_Representations_type::iterator Inverted_IfcProductRepresentation_Representations_type::erase(const Step::RefPtr< IfcRepresentation > &value)
{
    IfcRepresentation *inverse = const_cast< IfcRepresentation * > (value.get());
    inverse->m_OfProductRepresentation.erase(mOwner);
    return List_IfcRepresentation_1_n::erase(value);
}

void Inverted_IfcProductRepresentation_Representations_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcProductRepresentation::IfcProductRepresentation(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Name = Step::getUnset(m_Name);
    m_Description = Step::getUnset(m_Description);
    m_Representations.setUnset(true);
    m_Representations.setOwner(this);
}

IfcProductRepresentation::~IfcProductRepresentation()
{}

bool IfcProductRepresentation::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProductRepresentation(this);
}


IfcLabel IfcProductRepresentation::getName()
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

const IfcLabel IfcProductRepresentation::getName() const
{
    return const_cast<IfcProductRepresentation *>(this)->getName();
}

void IfcProductRepresentation::setName(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = value;
}

void IfcProductRepresentation::unsetName()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Name = Step::getUnset(getName());
}

bool IfcProductRepresentation::testName() const
{
    return Step::isUnset(getName()) == false;
}


IfcText IfcProductRepresentation::getDescription()
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

const IfcText IfcProductRepresentation::getDescription() const
{
    return const_cast<IfcProductRepresentation *>(this)->getDescription();
}

void IfcProductRepresentation::setDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = value;
}

void IfcProductRepresentation::unsetDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Description = Step::getUnset(getDescription());
}

bool IfcProductRepresentation::testDescription() const
{
    return Step::isUnset(getDescription()) == false;
}

List_IfcRepresentation_1_n &IfcProductRepresentation::getRepresentations()
{
    if (Step::BaseObject::inited())
    {
        return m_Representations;
    }
    else
    {
        m_Representations.setUnset(true);
        return m_Representations;
    }
}

const List_IfcRepresentation_1_n &IfcProductRepresentation::getRepresentations() const
{
    return const_cast< IfcProductRepresentation * > (this)->getRepresentations();
}

void IfcProductRepresentation::unsetRepresentations()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Representations.clear();
    m_Representations.setUnset(true);
}

bool IfcProductRepresentation::testRepresentations() const
{
    return m_Representations.isUnset() == false;
}

bool IfcProductRepresentation::init()
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
        m_Representations.setUnset(true);
    }
    else
    {
        m_Representations.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Representations.push_back(static_cast< IfcRepresentation * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcProductRepresentation::copy(const IfcProductRepresentation &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_Name);
    setDescription(obj.m_Description);
    List_IfcRepresentation_1_n::const_iterator it_m_Representations;
    for (it_m_Representations = obj.m_Representations.begin(); it_m_Representations != obj.m_Representations.end(); ++it_m_Representations)
    {
        Step::RefPtr< IfcRepresentation > copyTarget = (IfcRepresentation *) (copyop((*it_m_Representations).get()));
        m_Representations.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProductRepresentation, Step::BaseEntity)
