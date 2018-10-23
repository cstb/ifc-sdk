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


#include <ifc2x3/IfcVirtualGridIntersection.h>

#include <ifc2x3/IfcGridAxis.h>
#include <ifc2x3/IfcGridAxis.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::Inverted_IfcVirtualGridIntersection_IntersectingAxes_type()
{

}

void Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::setOwner(IfcVirtualGridIntersection *owner)
{
    mOwner = owner;
}

void Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::push_back(const Step::RefPtr< IfcGridAxis > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    List_IfcGridAxis_2_2::push_back(value);
    inverse->m_HasIntersections.insert(mOwner);
}


Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::iterator Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::erase(const Step::RefPtr< IfcGridAxis > &value)
{
    IfcGridAxis *inverse = const_cast< IfcGridAxis * > (value.get());
    inverse->m_HasIntersections.erase(mOwner);
    return List_IfcGridAxis_2_2::erase(value);
}

void Inverted_IfcVirtualGridIntersection_IntersectingAxes_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcVirtualGridIntersection::IfcVirtualGridIntersection(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_OffsetDistances.setUnset(true);
    m_IntersectingAxes.setUnset(true);
    m_IntersectingAxes.setOwner(this);
}

IfcVirtualGridIntersection::~IfcVirtualGridIntersection()
{}

bool IfcVirtualGridIntersection::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcVirtualGridIntersection(this);
}


List_IfcLengthMeasure_2_3 &IfcVirtualGridIntersection::getOffsetDistances()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OffsetDistances;
    }
    else 
    {
        m_OffsetDistances.setUnset(true);
        return m_OffsetDistances;
    }    
}

const List_IfcLengthMeasure_2_3 &IfcVirtualGridIntersection::getOffsetDistances() const
{
    return const_cast<IfcVirtualGridIntersection *>(this)->getOffsetDistances();
}

void IfcVirtualGridIntersection::setOffsetDistances(const List_IfcLengthMeasure_2_3 &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OffsetDistances = value;
}

void IfcVirtualGridIntersection::unsetOffsetDistances()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OffsetDistances.clear();
    m_OffsetDistances.setUnset(true);
}

bool IfcVirtualGridIntersection::testOffsetDistances() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_OffsetDistances.isUnset() == false;
}

List_IfcGridAxis_2_2 &IfcVirtualGridIntersection::getIntersectingAxes()
{
    if (Step::BaseObject::inited())
    {
        return m_IntersectingAxes;
    }
    else
    {
        m_IntersectingAxes.setUnset(true);
        return m_IntersectingAxes;
    }
}

const List_IfcGridAxis_2_2 &IfcVirtualGridIntersection::getIntersectingAxes() const
{
    return const_cast< IfcVirtualGridIntersection * > (this)->getIntersectingAxes();
}

void IfcVirtualGridIntersection::unsetIntersectingAxes()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IntersectingAxes.clear();
    m_IntersectingAxes.setUnset(true);
}

bool IfcVirtualGridIntersection::testIntersectingAxes() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IntersectingAxes.isUnset() == false;
}

bool IfcVirtualGridIntersection::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OffsetDistances.setUnset(true);
    }
    else
    {
        m_OffsetDistances.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_OffsetDistances.push_back(Step::spfToReal(str1)

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
        m_IntersectingAxes.setUnset(true);
    }
    else
    {
        m_IntersectingAxes.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_IntersectingAxes.push_back(static_cast< IfcGridAxis * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcVirtualGridIntersection::copy(const IfcVirtualGridIntersection &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    List_IfcLengthMeasure_2_3::const_iterator it_m_OffsetDistances;
    for (it_m_OffsetDistances = obj.m_OffsetDistances.begin(); it_m_OffsetDistances != obj.m_OffsetDistances.end(); ++it_m_OffsetDistances)
    {
        IfcLengthMeasure copyTarget = (*it_m_OffsetDistances);
        m_OffsetDistances.push_back(copyTarget);
    }
    
    List_IfcGridAxis_2_2::const_iterator it_m_IntersectingAxes;
    for (it_m_IntersectingAxes = obj.m_IntersectingAxes.begin(); it_m_IntersectingAxes != obj.m_IntersectingAxes.end(); ++it_m_IntersectingAxes)
    {
        Step::RefPtr< IfcGridAxis > copyTarget = (IfcGridAxis *) (copyop((*it_m_IntersectingAxes).get()));
        m_IntersectingAxes.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcVirtualGridIntersection, Step::BaseEntity)
