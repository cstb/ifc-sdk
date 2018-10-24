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


#include <ifc2x3/IfcRelCoversSpaces.h>

#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcSpace.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelCoversSpaces_RelatedCoverings_type::Inverted_IfcRelCoversSpaces_RelatedCoverings_type()
{

}

void Inverted_IfcRelCoversSpaces_RelatedCoverings_type::setOwner(IfcRelCoversSpaces *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelCoversSpaces_RelatedCoverings_type::insert(const Step::RefPtr< IfcCovering > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    Set_IfcCovering_1_n::insert(value);
    inverse->m_CoversSpaces.insert(mOwner);
}


Inverted_IfcRelCoversSpaces_RelatedCoverings_type::size_type Inverted_IfcRelCoversSpaces_RelatedCoverings_type::erase(const Step::RefPtr< IfcCovering > &value)
{
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    inverse->m_CoversSpaces.erase(mOwner);
    return Set_IfcCovering_1_n::erase(value);
}

void Inverted_IfcRelCoversSpaces_RelatedCoverings_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelCoversSpaces::IfcRelCoversSpaces(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatedCoverings.setUnset(true);
    m_RelatedCoverings.setOwner(this);
    m_RelatedSpace = NULL;
}

IfcRelCoversSpaces::~IfcRelCoversSpaces()
{}

bool IfcRelCoversSpaces::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelCoversSpaces(this);
}

Set_IfcCovering_1_n &IfcRelCoversSpaces::getRelatedCoverings()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedCoverings;
    }
    else
    {
        m_RelatedCoverings.setUnset(true);
        return m_RelatedCoverings;
    }
}

const Set_IfcCovering_1_n &IfcRelCoversSpaces::getRelatedCoverings() const
{
    return const_cast< IfcRelCoversSpaces * > (this)->getRelatedCoverings();
}

void IfcRelCoversSpaces::unsetRelatedCoverings()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedCoverings.clear();
    m_RelatedCoverings.setUnset(true);
}

bool IfcRelCoversSpaces::testRelatedCoverings() const
{
    return m_RelatedCoverings.isUnset() == false;
}

IfcSpace *IfcRelCoversSpaces::getRelatedSpace()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedSpace.get();
    }
    else
    {
        return NULL;
    }
}

const IfcSpace *IfcRelCoversSpaces::getRelatedSpace() const
{
    return const_cast< IfcRelCoversSpaces * > (this)->getRelatedSpace();
}

void IfcRelCoversSpaces::setRelatedSpace(const Step::RefPtr< IfcSpace > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedSpace.valid())
    {
        m_RelatedSpace->m_HasCoverings.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasCoverings.insert(this);
    }
    m_RelatedSpace = value;
}

void IfcRelCoversSpaces::unsetRelatedSpace()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedSpace = Step::getUnset(getRelatedSpace());
}

bool IfcRelCoversSpaces::testRelatedSpace() const
{
    return Step::isUnset(getRelatedSpace()) == false;
}

bool IfcRelCoversSpaces::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedCoverings.setUnset(true);
    }
    else
    {
        m_RelatedCoverings.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedCoverings.insert(static_cast< IfcCovering * > (m_expressDataSet->get(Step::getIdParam(str1)))
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
        m_RelatedSpace = NULL;
    }
    else
    {
        m_RelatedSpace = static_cast< IfcSpace * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelCoversSpaces::copy(const IfcRelCoversSpaces &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    Set_IfcCovering_1_n::const_iterator it_m_RelatedCoverings;
    for (it_m_RelatedCoverings = obj.m_RelatedCoverings.begin(); it_m_RelatedCoverings != obj.m_RelatedCoverings.end(); ++it_m_RelatedCoverings)
    {
        Step::RefPtr< IfcCovering > copyTarget = (IfcCovering *) (copyop((*it_m_RelatedCoverings).get()));
        m_RelatedCoverings.insert(copyTarget);
    }
    
    setRelatedSpace((IfcSpace*)copyop(obj.m_RelatedSpace.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelCoversSpaces, IfcRelConnects)
