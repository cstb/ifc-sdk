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


#include <ifc2x3/IfcCurveBoundedPlane.h>

#include <ifc2x3/IfcPlane.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCurveBoundedPlane::IfcCurveBoundedPlane(Step::Id id, Step::SPFData *args) : 
    IfcBoundedSurface(id, args)
{
    m_BasisSurface = NULL;
    m_OuterBoundary = NULL;
    m_InnerBoundaries.setUnset(true);
}

IfcCurveBoundedPlane::~IfcCurveBoundedPlane()
{}

bool IfcCurveBoundedPlane::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCurveBoundedPlane(this);
}


IfcPlane *IfcCurveBoundedPlane::getBasisSurface()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BasisSurface.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcPlane *IfcCurveBoundedPlane::getBasisSurface() const
{
    return const_cast<IfcCurveBoundedPlane *>(this)->getBasisSurface();
}

void IfcCurveBoundedPlane::setBasisSurface(const Step::RefPtr< IfcPlane > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisSurface = value;
}

void IfcCurveBoundedPlane::unsetBasisSurface()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BasisSurface = Step::getUnset(getBasisSurface());
}

bool IfcCurveBoundedPlane::testBasisSurface() const
{
    return Step::isUnset(getBasisSurface()) == false;
}


IfcCurve *IfcCurveBoundedPlane::getOuterBoundary()
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

const IfcCurve *IfcCurveBoundedPlane::getOuterBoundary() const
{
    return const_cast<IfcCurveBoundedPlane *>(this)->getOuterBoundary();
}

void IfcCurveBoundedPlane::setOuterBoundary(const Step::RefPtr< IfcCurve > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OuterBoundary = value;
}

void IfcCurveBoundedPlane::unsetOuterBoundary()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_OuterBoundary = Step::getUnset(getOuterBoundary());
}

bool IfcCurveBoundedPlane::testOuterBoundary() const
{
    return Step::isUnset(getOuterBoundary()) == false;
}


Set_IfcCurve_0_n &IfcCurveBoundedPlane::getInnerBoundaries()
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

const Set_IfcCurve_0_n &IfcCurveBoundedPlane::getInnerBoundaries() const
{
    return const_cast<IfcCurveBoundedPlane *>(this)->getInnerBoundaries();
}

void IfcCurveBoundedPlane::setInnerBoundaries(const Set_IfcCurve_0_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerBoundaries = value;
}

void IfcCurveBoundedPlane::unsetInnerBoundaries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerBoundaries.clear();
    m_InnerBoundaries.setUnset(true);
}

bool IfcCurveBoundedPlane::testInnerBoundaries() const
{
    return m_InnerBoundaries.isUnset() == false;
}

bool IfcCurveBoundedPlane::init()
{
    if (IfcBoundedSurface::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BasisSurface = NULL;
    }
    else
    {
        m_BasisSurface = static_cast< IfcPlane * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
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

void IfcCurveBoundedPlane::copy(const IfcCurveBoundedPlane &obj, const CopyOp &copyop)
{
    IfcBoundedSurface::copy(obj, copyop);
    setBasisSurface((IfcPlane*)copyop(obj.m_BasisSurface.get()));
    setOuterBoundary((IfcCurve*)copyop(obj.m_OuterBoundary.get()));
    Set_IfcCurve_0_n::const_iterator it_m_InnerBoundaries;
    for (it_m_InnerBoundaries = obj.m_InnerBoundaries.begin(); it_m_InnerBoundaries != obj.m_InnerBoundaries.end(); ++it_m_InnerBoundaries)
    {
        Step::RefPtr< IfcCurve > copyTarget = (IfcCurve *) (copyop((*it_m_InnerBoundaries).get()));
        m_InnerBoundaries.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCurveBoundedPlane, IfcBoundedSurface)
