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


#include <ifc2x3/IfcCurveStyleFontPattern.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCurveStyleFontPattern::IfcCurveStyleFontPattern(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_VisibleSegmentLength = Step::getUnset(m_VisibleSegmentLength);
    m_InvisibleSegmentLength = Step::getUnset(m_InvisibleSegmentLength);
}

IfcCurveStyleFontPattern::~IfcCurveStyleFontPattern()
{}

bool IfcCurveStyleFontPattern::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCurveStyleFontPattern(this);
}


IfcLengthMeasure IfcCurveStyleFontPattern::getVisibleSegmentLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VisibleSegmentLength;
    }
    else 
    {
        return Step::getUnset(m_VisibleSegmentLength);
    }    
}

IfcLengthMeasure IfcCurveStyleFontPattern::getVisibleSegmentLength() const
{
    return const_cast<IfcCurveStyleFontPattern *>(this)->getVisibleSegmentLength();
}

void IfcCurveStyleFontPattern::setVisibleSegmentLength(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VisibleSegmentLength = value;
}

void IfcCurveStyleFontPattern::unsetVisibleSegmentLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VisibleSegmentLength = Step::getUnset(getVisibleSegmentLength());
}

bool IfcCurveStyleFontPattern::testVisibleSegmentLength() const
{
    return Step::isUnset(getVisibleSegmentLength()) == false;
}


IfcPositiveLengthMeasure IfcCurveStyleFontPattern::getInvisibleSegmentLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InvisibleSegmentLength;
    }
    else 
    {
        return Step::getUnset(m_InvisibleSegmentLength);
    }    
}

IfcPositiveLengthMeasure IfcCurveStyleFontPattern::getInvisibleSegmentLength() const
{
    return const_cast<IfcCurveStyleFontPattern *>(this)->getInvisibleSegmentLength();
}

void IfcCurveStyleFontPattern::setInvisibleSegmentLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InvisibleSegmentLength = value;
}

void IfcCurveStyleFontPattern::unsetInvisibleSegmentLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InvisibleSegmentLength = Step::getUnset(getInvisibleSegmentLength());
}

bool IfcCurveStyleFontPattern::testInvisibleSegmentLength() const
{
    return Step::isUnset(getInvisibleSegmentLength()) == false;
}

bool IfcCurveStyleFontPattern::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VisibleSegmentLength = Step::getUnset(m_VisibleSegmentLength);
    }
    else
    {
        m_VisibleSegmentLength = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InvisibleSegmentLength = Step::getUnset(m_InvisibleSegmentLength);
    }
    else
    {
        m_InvisibleSegmentLength = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcCurveStyleFontPattern::copy(const IfcCurveStyleFontPattern &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setVisibleSegmentLength(obj.m_VisibleSegmentLength);
    setInvisibleSegmentLength(obj.m_InvisibleSegmentLength);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCurveStyleFontPattern, Step::BaseEntity)
