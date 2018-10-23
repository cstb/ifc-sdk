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


#include <ifc2x3/IfcStructuralLinearActionVarying.h>

#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/IfcStructuralLoad.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLinearActionVarying::IfcStructuralLinearActionVarying(Step::Id id, Step::SPFData *args) : 
    IfcStructuralLinearAction(id, args)
{
    m_VaryingAppliedLoadLocation = NULL;
    m_SubsequentAppliedLoads.setUnset(true);
}

IfcStructuralLinearActionVarying::~IfcStructuralLinearActionVarying()
{}

bool IfcStructuralLinearActionVarying::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLinearActionVarying(this);
}


IfcShapeAspect *IfcStructuralLinearActionVarying::getVaryingAppliedLoadLocation()
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

const IfcShapeAspect *IfcStructuralLinearActionVarying::getVaryingAppliedLoadLocation() const
{
    return const_cast<IfcStructuralLinearActionVarying *>(this)->getVaryingAppliedLoadLocation();
}

void IfcStructuralLinearActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VaryingAppliedLoadLocation = value;
}

void IfcStructuralLinearActionVarying::unsetVaryingAppliedLoadLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VaryingAppliedLoadLocation = Step::getUnset(getVaryingAppliedLoadLocation());
}

bool IfcStructuralLinearActionVarying::testVaryingAppliedLoadLocation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getVaryingAppliedLoadLocation()) == false;
}


List_IfcStructuralLoad_1_n &IfcStructuralLinearActionVarying::getSubsequentAppliedLoads()
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

const List_IfcStructuralLoad_1_n &IfcStructuralLinearActionVarying::getSubsequentAppliedLoads() const
{
    return const_cast<IfcStructuralLinearActionVarying *>(this)->getSubsequentAppliedLoads();
}

void IfcStructuralLinearActionVarying::setSubsequentAppliedLoads(const List_IfcStructuralLoad_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubsequentAppliedLoads = value;
}

void IfcStructuralLinearActionVarying::unsetSubsequentAppliedLoads()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SubsequentAppliedLoads.clear();
    m_SubsequentAppliedLoads.setUnset(true);
}

bool IfcStructuralLinearActionVarying::testSubsequentAppliedLoads() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_SubsequentAppliedLoads.isUnset() == false;
}

bool IfcStructuralLinearActionVarying::init()
{
    if (IfcStructuralLinearAction::init() == false)
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

void IfcStructuralLinearActionVarying::copy(const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop)
{
    IfcStructuralLinearAction::copy(obj, copyop);
    setVaryingAppliedLoadLocation((IfcShapeAspect*)copyop(obj.m_VaryingAppliedLoadLocation.get()));
    List_IfcStructuralLoad_1_n::const_iterator it_m_SubsequentAppliedLoads;
    for (it_m_SubsequentAppliedLoads = obj.m_SubsequentAppliedLoads.begin(); it_m_SubsequentAppliedLoads != obj.m_SubsequentAppliedLoads.end(); ++it_m_SubsequentAppliedLoads)
    {
        Step::RefPtr< IfcStructuralLoad > copyTarget = (IfcStructuralLoad *) (copyop((*it_m_SubsequentAppliedLoads).get()));
        m_SubsequentAppliedLoads.push_back(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLinearActionVarying, IfcStructuralLinearAction)
