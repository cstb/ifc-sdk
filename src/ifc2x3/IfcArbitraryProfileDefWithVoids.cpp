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


#include <ifc2x3/IfcArbitraryProfileDefWithVoids.h>

#include <ifc2x3/IfcCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcArbitraryProfileDefWithVoids::IfcArbitraryProfileDefWithVoids(Step::Id id, Step::SPFData *args) : 
    IfcArbitraryClosedProfileDef(id, args)
{
    m_InnerCurves.setUnset(true);
}

IfcArbitraryProfileDefWithVoids::~IfcArbitraryProfileDefWithVoids()
{}

bool IfcArbitraryProfileDefWithVoids::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcArbitraryProfileDefWithVoids(this);
}


Set_IfcCurve_1_n &IfcArbitraryProfileDefWithVoids::getInnerCurves()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InnerCurves;
    }
    else 
    {
        m_InnerCurves.setUnset(true);
        return m_InnerCurves;
    }    
}

const Set_IfcCurve_1_n &IfcArbitraryProfileDefWithVoids::getInnerCurves() const
{
    return const_cast<IfcArbitraryProfileDefWithVoids *>(this)->getInnerCurves();
}

void IfcArbitraryProfileDefWithVoids::setInnerCurves(const Set_IfcCurve_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerCurves = value;
}

void IfcArbitraryProfileDefWithVoids::unsetInnerCurves()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InnerCurves.clear();
    m_InnerCurves.setUnset(true);
}

bool IfcArbitraryProfileDefWithVoids::testInnerCurves() const
{
    return m_InnerCurves.isUnset() == false;
}

bool IfcArbitraryProfileDefWithVoids::init()
{
    if (IfcArbitraryClosedProfileDef::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InnerCurves.setUnset(true);
    }
    else
    {
        m_InnerCurves.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_InnerCurves.insert(static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcArbitraryProfileDefWithVoids::copy(const IfcArbitraryProfileDefWithVoids &obj, const CopyOp &copyop)
{
    IfcArbitraryClosedProfileDef::copy(obj, copyop);
    Set_IfcCurve_1_n::const_iterator it_m_InnerCurves;
    for (it_m_InnerCurves = obj.m_InnerCurves.begin(); it_m_InnerCurves != obj.m_InnerCurves.end(); ++it_m_InnerCurves)
    {
        Step::RefPtr< IfcCurve > copyTarget = (IfcCurve *) (copyop((*it_m_InnerCurves).get()));
        m_InnerCurves.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcArbitraryProfileDefWithVoids, IfcArbitraryClosedProfileDef)
