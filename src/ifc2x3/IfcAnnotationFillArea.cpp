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


#include <ifc2x3/IfcAnnotationFillArea.h>

#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAnnotationFillArea::IfcAnnotationFillArea(Step::Id id, Step::SPFData *args) : 
    IfcGeometricRepresentationItem(id, args)
{
    m_OuterBoundary = NULL;
    m_InnerBoundaries.setUnset(true);
}

IfcAnnotationFillArea::~IfcAnnotationFillArea()
{}

bool IfcAnnotationFillArea::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAnnotationFillArea(this);
}


IfcCurve *IfcAnnotationFillArea::getOuterBoundary()
{
    if (Step::BaseObject::inited()) 
    {
        return m_OuterBoundary.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCurve *IfcAnnotationFillArea::getOuterBoundary() const
{
    return const_cast<IfcAnnotationFillArea *>(this)->getOuterBoundary();
}

void IfcAnnotationFillArea::setOuterBoundary(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OuterBoundary = value;
}

void IfcAnnotationFillArea::unsetOuterBoundary()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OuterBoundary = Step::getUnset(getOuterBoundary());
}

bool IfcAnnotationFillArea::testOuterBoundary() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getOuterBoundary()) == false;
}


Set_IfcCurve_1_n &IfcAnnotationFillArea::getInnerBoundaries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InnerBoundaries;
    }
    else 
    {
        m_InnerBoundaries.setUnset(true);
        return m_InnerBoundaries;
    }    
}

const Set_IfcCurve_1_n &IfcAnnotationFillArea::getInnerBoundaries() const
{
    return const_cast<IfcAnnotationFillArea *>(this)->getInnerBoundaries();
}

void IfcAnnotationFillArea::setInnerBoundaries(const Set_IfcCurve_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerBoundaries = value;
}

void IfcAnnotationFillArea::unsetInnerBoundaries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerBoundaries.clear();
    m_InnerBoundaries.setUnset(true);
}

bool IfcAnnotationFillArea::testInnerBoundaries() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_InnerBoundaries.isUnset() == false;
}

bool IfcAnnotationFillArea::init()
{
    if (IfcGeometricRepresentationItem::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_OuterBoundary = NULL;
    }
    else
    {
        m_OuterBoundary = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InnerBoundaries.setUnset(true);
    }
    else
    {
        m_InnerBoundaries.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_InnerBoundaries.insert(static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcAnnotationFillArea::copy(const IfcAnnotationFillArea &obj, const CopyOp &copyop)
{
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOuterBoundary((IfcCurve*)copyop(obj.m_OuterBoundary.get()));
    Set_IfcCurve_1_n::const_iterator it_m_InnerBoundaries;
    for (it_m_InnerBoundaries = obj.m_InnerBoundaries.begin(); it_m_InnerBoundaries != obj.m_InnerBoundaries.end(); ++it_m_InnerBoundaries)
    {
        Step::RefPtr< IfcCurve > copyTarget = (IfcCurve *) (copyop((*it_m_InnerBoundaries).get()));
        m_InnerBoundaries.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAnnotationFillArea, IfcGeometricRepresentationItem)
