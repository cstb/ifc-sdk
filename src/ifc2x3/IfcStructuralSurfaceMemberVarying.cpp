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


#include <ifc2x3/IfcStructuralSurfaceMemberVarying.h>

#include <ifc2x3/IfcShapeAspect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralSurfaceMemberVarying::IfcStructuralSurfaceMemberVarying(Step::Id id, Step::SPFData *args) : 
    IfcStructuralSurfaceMember(id, args)
{
    m_SubsequentThickness.setUnset(true);
    m_VaryingThicknessLocation = NULL;
}

IfcStructuralSurfaceMemberVarying::~IfcStructuralSurfaceMemberVarying()
{}

bool IfcStructuralSurfaceMemberVarying::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralSurfaceMemberVarying(this);
}


List_IfcPositiveLengthMeasure_2_n &IfcStructuralSurfaceMemberVarying::getSubsequentThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SubsequentThickness;
    }
    else 
    {
        m_SubsequentThickness.setUnset(true);
        return m_SubsequentThickness;
    }    
}

const List_IfcPositiveLengthMeasure_2_n &IfcStructuralSurfaceMemberVarying::getSubsequentThickness() const
{
    return const_cast<IfcStructuralSurfaceMemberVarying *>(this)->getSubsequentThickness();
}

void IfcStructuralSurfaceMemberVarying::setSubsequentThickness(const List_IfcPositiveLengthMeasure_2_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubsequentThickness = value;
}

void IfcStructuralSurfaceMemberVarying::unsetSubsequentThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubsequentThickness.clear();
    m_SubsequentThickness.setUnset(true);
}

bool IfcStructuralSurfaceMemberVarying::testSubsequentThickness() const
{
    return m_SubsequentThickness.isUnset() == false;
}


IfcShapeAspect *IfcStructuralSurfaceMemberVarying::getVaryingThicknessLocation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VaryingThicknessLocation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcShapeAspect *IfcStructuralSurfaceMemberVarying::getVaryingThicknessLocation() const
{
    return const_cast<IfcStructuralSurfaceMemberVarying *>(this)->getVaryingThicknessLocation();
}

void IfcStructuralSurfaceMemberVarying::setVaryingThicknessLocation(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VaryingThicknessLocation = value;
}

void IfcStructuralSurfaceMemberVarying::unsetVaryingThicknessLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VaryingThicknessLocation = Step::getUnset(getVaryingThicknessLocation());
}

bool IfcStructuralSurfaceMemberVarying::testVaryingThicknessLocation() const
{
    return Step::isUnset(getVaryingThicknessLocation()) == false;
}

bool IfcStructuralSurfaceMemberVarying::init()
{
    if (IfcStructuralSurfaceMember::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SubsequentThickness.setUnset(true);
    }
    else
    {
        m_SubsequentThickness.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_SubsequentThickness.push_back(Step::spfToReal(str1)

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
        m_VaryingThicknessLocation = NULL;
    }
    else
    {
        m_VaryingThicknessLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcStructuralSurfaceMemberVarying::copy(const IfcStructuralSurfaceMemberVarying &obj, const CopyOp &copyop)
{
    IfcStructuralSurfaceMember::copy(obj, copyop);
    List_IfcPositiveLengthMeasure_2_n::const_iterator it_m_SubsequentThickness;
    for (it_m_SubsequentThickness = obj.m_SubsequentThickness.begin(); it_m_SubsequentThickness != obj.m_SubsequentThickness.end(); ++it_m_SubsequentThickness)
    {
        IfcPositiveLengthMeasure copyTarget = (*it_m_SubsequentThickness);
        m_SubsequentThickness.push_back(copyTarget);
    }
    
    setVaryingThicknessLocation((IfcShapeAspect*)copyop(obj.m_VaryingThicknessLocation.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralSurfaceMemberVarying, IfcStructuralSurfaceMember)
