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


#include <ifc2x3/IfcStructuralPlanarActionVarying.h>

#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcStructuralLoad.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralPlanarActionVarying::IfcStructuralPlanarActionVarying(Step::Id id, Step::SPFData *args) : 
    IfcStructuralPlanarAction(id, args)
{
    m_VaryingAppliedLoadLocation = NULL;
    m_SubsequentAppliedLoads.setUnset(true);
}

IfcStructuralPlanarActionVarying::~IfcStructuralPlanarActionVarying()
{}

bool IfcStructuralPlanarActionVarying::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralPlanarActionVarying(this);
}


IfcShapeAspect *IfcStructuralPlanarActionVarying::getVaryingAppliedLoadLocation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VaryingAppliedLoadLocation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcShapeAspect *IfcStructuralPlanarActionVarying::getVaryingAppliedLoadLocation() const
{
    return const_cast<IfcStructuralPlanarActionVarying *>(this)->getVaryingAppliedLoadLocation();
}

void IfcStructuralPlanarActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VaryingAppliedLoadLocation = value;
}

void IfcStructuralPlanarActionVarying::unsetVaryingAppliedLoadLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VaryingAppliedLoadLocation = Step::getUnset(getVaryingAppliedLoadLocation());
}

bool IfcStructuralPlanarActionVarying::testVaryingAppliedLoadLocation() const
{
    return Step::isUnset(getVaryingAppliedLoadLocation()) == false;
}


List_IfcStructuralLoad_2_n &IfcStructuralPlanarActionVarying::getSubsequentAppliedLoads()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SubsequentAppliedLoads;
    }
    else 
    {
        m_SubsequentAppliedLoads.setUnset(true);
        return m_SubsequentAppliedLoads;
    }    
}

const List_IfcStructuralLoad_2_n &IfcStructuralPlanarActionVarying::getSubsequentAppliedLoads() const
{
    return const_cast<IfcStructuralPlanarActionVarying *>(this)->getSubsequentAppliedLoads();
}

void IfcStructuralPlanarActionVarying::setSubsequentAppliedLoads(const List_IfcStructuralLoad_2_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubsequentAppliedLoads = value;
}

void IfcStructuralPlanarActionVarying::unsetSubsequentAppliedLoads()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubsequentAppliedLoads.clear();
    m_SubsequentAppliedLoads.setUnset(true);
}

bool IfcStructuralPlanarActionVarying::testSubsequentAppliedLoads() const
{
    return m_SubsequentAppliedLoads.isUnset() == false;
}

bool IfcStructuralPlanarActionVarying::init()
{
    if (IfcStructuralPlanarAction::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VaryingAppliedLoadLocation = NULL;
    }
    else
    {
        m_VaryingAppliedLoadLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SubsequentAppliedLoads.setUnset(true);
    }
    else
    {
        m_SubsequentAppliedLoads.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_SubsequentAppliedLoads.push_back(static_cast< IfcStructuralLoad * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcStructuralPlanarActionVarying::copy(const IfcStructuralPlanarActionVarying &obj, const CopyOp &copyop)
{
    IfcStructuralPlanarAction::copy(obj, copyop);
    setVaryingAppliedLoadLocation((IfcShapeAspect*)copyop(obj.m_VaryingAppliedLoadLocation.get()));
    List_IfcStructuralLoad_2_n::const_iterator it_m_SubsequentAppliedLoads;
    for (it_m_SubsequentAppliedLoads = obj.m_SubsequentAppliedLoads.begin(); it_m_SubsequentAppliedLoads != obj.m_SubsequentAppliedLoads.end(); ++it_m_SubsequentAppliedLoads)
    {
        Step::RefPtr< IfcStructuralLoad > copyTarget = (IfcStructuralLoad *) (copyop((*it_m_SubsequentAppliedLoads).get()));
        m_SubsequentAppliedLoads.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralPlanarActionVarying, IfcStructuralPlanarAction)
