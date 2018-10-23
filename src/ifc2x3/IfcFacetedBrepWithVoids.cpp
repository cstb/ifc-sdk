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


#include <ifc2x3/IfcFacetedBrepWithVoids.h>

#include <ifc2x3/IfcClosedShell.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFacetedBrepWithVoids::IfcFacetedBrepWithVoids(Step::Id id, Step::SPFData *args) : 
    IfcManifoldSolidBrep(id, args)
{
    m_Voids.setUnset(true);
}

IfcFacetedBrepWithVoids::~IfcFacetedBrepWithVoids()
{}

bool IfcFacetedBrepWithVoids::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFacetedBrepWithVoids(this);
}


Set_IfcClosedShell_1_n &IfcFacetedBrepWithVoids::getVoids()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Voids;
    }
    else 
    {
        m_Voids.setUnset(true);
        return m_Voids;
    }    
}

const Set_IfcClosedShell_1_n &IfcFacetedBrepWithVoids::getVoids() const
{
    return const_cast<IfcFacetedBrepWithVoids *>(this)->getVoids();
}

void IfcFacetedBrepWithVoids::setVoids(const Set_IfcClosedShell_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Voids = value;
}

void IfcFacetedBrepWithVoids::unsetVoids()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Voids.clear();
    m_Voids.setUnset(true);
}

bool IfcFacetedBrepWithVoids::testVoids() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_Voids.isUnset() == false;
}

bool IfcFacetedBrepWithVoids::init()
{
    if (IfcManifoldSolidBrep::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Voids.setUnset(true);
    }
    else
    {
        m_Voids.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Voids.insert(static_cast< IfcClosedShell * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcFacetedBrepWithVoids::copy(const IfcFacetedBrepWithVoids &obj, const CopyOp &copyop)
{
    IfcManifoldSolidBrep::copy(obj, copyop);
    Set_IfcClosedShell_1_n::const_iterator it_m_Voids;
    for (it_m_Voids = obj.m_Voids.begin(); it_m_Voids != obj.m_Voids.end(); ++it_m_Voids)
    {
        Step::RefPtr< IfcClosedShell > copyTarget = (IfcClosedShell *) (copyop((*it_m_Voids).get()));
        m_Voids.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFacetedBrepWithVoids, IfcManifoldSolidBrep)
