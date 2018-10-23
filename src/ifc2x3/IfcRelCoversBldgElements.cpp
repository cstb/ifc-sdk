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


#include <ifc2x3/IfcRelCoversBldgElements.h>

#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcCovering.h>
#include <ifc2x3/IfcElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::Inverted_IfcRelCoversBldgElements_RelatedCoverings_type()
{

}

void Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::setOwner(IfcRelCoversBldgElements *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::insert(const Step::RefPtr< IfcCovering > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    Set_IfcCovering_1_n::insert(value);
    inverse->m_Covers.insert(mOwner);
}


Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::size_type Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::erase(const Step::RefPtr< IfcCovering > &value)
{
    IfcCovering *inverse = const_cast< IfcCovering * > (value.get());
    inverse->m_Covers.erase(mOwner);
    return Set_IfcCovering_1_n::erase(value);
}

void Inverted_IfcRelCoversBldgElements_RelatedCoverings_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelCoversBldgElements::IfcRelCoversBldgElements(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatedCoverings.setUnset(true);
    m_RelatedCoverings.setOwner(this);
    m_RelatingBuildingElement = NULL;
}

IfcRelCoversBldgElements::~IfcRelCoversBldgElements()
{}

bool IfcRelCoversBldgElements::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelCoversBldgElements(this);
}

Set_IfcCovering_1_n &IfcRelCoversBldgElements::getRelatedCoverings()
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

const Set_IfcCovering_1_n &IfcRelCoversBldgElements::getRelatedCoverings() const
{
    return const_cast< IfcRelCoversBldgElements * > (this)->getRelatedCoverings();
}

void IfcRelCoversBldgElements::unsetRelatedCoverings()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedCoverings.clear();
    m_RelatedCoverings.setUnset(true);
}

bool IfcRelCoversBldgElements::testRelatedCoverings() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_RelatedCoverings.isUnset() == false;
}

IfcElement *IfcRelCoversBldgElements::getRelatingBuildingElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingBuildingElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcElement *IfcRelCoversBldgElements::getRelatingBuildingElement() const
{
    return const_cast< IfcRelCoversBldgElements * > (this)->getRelatingBuildingElement();
}

void IfcRelCoversBldgElements::setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingBuildingElement.valid())
    {
        m_RelatingBuildingElement->m_HasCoverings.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasCoverings.insert(this);
    }
    m_RelatingBuildingElement = value;
}

void IfcRelCoversBldgElements::unsetRelatingBuildingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingBuildingElement = Step::getUnset(getRelatingBuildingElement());
}

bool IfcRelCoversBldgElements::testRelatingBuildingElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingBuildingElement()) == false;
}

bool IfcRelCoversBldgElements::init()
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
        m_RelatingBuildingElement = NULL;
    }
    else
    {
        m_RelatingBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelCoversBldgElements::copy(const IfcRelCoversBldgElements &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    Set_IfcCovering_1_n::const_iterator it_m_RelatedCoverings;
    for (it_m_RelatedCoverings = obj.m_RelatedCoverings.begin(); it_m_RelatedCoverings != obj.m_RelatedCoverings.end(); ++it_m_RelatedCoverings)
    {
        Step::RefPtr< IfcCovering > copyTarget = (IfcCovering *) (copyop((*it_m_RelatedCoverings).get()));
        m_RelatedCoverings.insert(copyTarget);
    }
    
    setRelatingBuildingElement((IfcElement*)copyop(obj.m_RelatingBuildingElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelCoversBldgElements, IfcRelConnects)
