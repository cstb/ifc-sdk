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


#include <ifc2x3/IfcCompositeCurve.h>

#include <ifc2x3/IfcCompositeCurveSegment.h>
#include <ifc2x3/IfcCompositeCurveSegment.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcCompositeCurve_Segments_type::Inverted_IfcCompositeCurve_Segments_type()
{

}

void Inverted_IfcCompositeCurve_Segments_type::setOwner(IfcCompositeCurve *owner)
{
    mOwner = owner;
}

void Inverted_IfcCompositeCurve_Segments_type::push_back(const Step::RefPtr< IfcCompositeCurveSegment > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcCompositeCurveSegment *inverse = const_cast< IfcCompositeCurveSegment * > (value.get());
    List_IfcCompositeCurveSegment_1_n::push_back(value);
    inverse->m_UsingCurves.insert(mOwner);
}


Inverted_IfcCompositeCurve_Segments_type::iterator Inverted_IfcCompositeCurve_Segments_type::erase(const Step::RefPtr< IfcCompositeCurveSegment > &value)
{
    IfcCompositeCurveSegment *inverse = const_cast< IfcCompositeCurveSegment * > (value.get());
    inverse->m_UsingCurves.erase(mOwner);
    return List_IfcCompositeCurveSegment_1_n::erase(value);
}

void Inverted_IfcCompositeCurve_Segments_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcCompositeCurve::IfcCompositeCurve(Step::Id id, Step::SPFData *args) : 
    IfcBoundedCurve(id, args)
{
    m_SelfIntersect = Step::getUnset(m_SelfIntersect);
    m_Segments.setUnset(true);
    m_Segments.setOwner(this);
}

IfcCompositeCurve::~IfcCompositeCurve()
{}

bool IfcCompositeCurve::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCompositeCurve(this);
}


Step::Logical IfcCompositeCurve::getSelfIntersect()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SelfIntersect;
    }
    else 
    {
        return Step::getUnset(m_SelfIntersect);
    }    
}

Step::Logical IfcCompositeCurve::getSelfIntersect() const
{
    return const_cast<IfcCompositeCurve *>(this)->getSelfIntersect();
}

void IfcCompositeCurve::setSelfIntersect(Step::Logical value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SelfIntersect = value;
}

void IfcCompositeCurve::unsetSelfIntersect()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SelfIntersect = Step::getUnset(getSelfIntersect());
}

bool IfcCompositeCurve::testSelfIntersect() const
{
    return Step::isUnset(getSelfIntersect()) == false;
}

List_IfcCompositeCurveSegment_1_n &IfcCompositeCurve::getSegments()
{
    if (Step::BaseObject::inited())
    {
        return m_Segments;
    }
    else
    {
        m_Segments.setUnset(true);
        return m_Segments;
    }
}

const List_IfcCompositeCurveSegment_1_n &IfcCompositeCurve::getSegments() const
{
    return const_cast< IfcCompositeCurve * > (this)->getSegments();
}

void IfcCompositeCurve::unsetSegments()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Segments.clear();
    m_Segments.setUnset(true);
}

bool IfcCompositeCurve::testSegments() const
{
    return m_Segments.isUnset() == false;
}

bool IfcCompositeCurve::init()
{
    if (IfcBoundedCurve::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SelfIntersect = Step::getUnset(m_SelfIntersect);
    }
    else
    {
        m_SelfIntersect = Step::spfToLogical(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Segments.setUnset(true);
    }
    else
    {
        m_Segments.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Segments.push_back(static_cast< IfcCompositeCurveSegment * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcCompositeCurve::copy(const IfcCompositeCurve &obj, const CopyOp &copyop)
{
    IfcBoundedCurve::copy(obj, copyop);
    setSelfIntersect(obj.m_SelfIntersect);
    List_IfcCompositeCurveSegment_1_n::const_iterator it_m_Segments;
    for (it_m_Segments = obj.m_Segments.begin(); it_m_Segments != obj.m_Segments.end(); ++it_m_Segments)
    {
        Step::RefPtr< IfcCompositeCurveSegment > copyTarget = (IfcCompositeCurveSegment *) (copyop((*it_m_Segments).get()));
        m_Segments.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCompositeCurve, IfcBoundedCurve)
