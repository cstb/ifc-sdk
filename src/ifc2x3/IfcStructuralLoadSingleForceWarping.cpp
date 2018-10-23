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


#include <ifc2x3/IfcStructuralLoadSingleForceWarping.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcStructuralLoadSingleForceWarping::IfcStructuralLoadSingleForceWarping(Step::Id id, Step::SPFData *args) : 
    IfcStructuralLoadSingleForce(id, args)
{
    m_WarpingMoment = Step::getUnset(m_WarpingMoment);
}

IfcStructuralLoadSingleForceWarping::~IfcStructuralLoadSingleForceWarping()
{}

bool IfcStructuralLoadSingleForceWarping::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcStructuralLoadSingleForceWarping(this);
}


IfcWarpingMomentMeasure IfcStructuralLoadSingleForceWarping::getWarpingMoment()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WarpingMoment;
    }
    else 
    {
        return Step::getUnset(m_WarpingMoment);
    }    
}

IfcWarpingMomentMeasure IfcStructuralLoadSingleForceWarping::getWarpingMoment() const
{
    return const_cast<IfcStructuralLoadSingleForceWarping *>(this)->getWarpingMoment();
}

void IfcStructuralLoadSingleForceWarping::setWarpingMoment(IfcWarpingMomentMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WarpingMoment = value;
}

void IfcStructuralLoadSingleForceWarping::unsetWarpingMoment()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WarpingMoment = Step::getUnset(getWarpingMoment());
}

bool IfcStructuralLoadSingleForceWarping::testWarpingMoment() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWarpingMoment()) == false;
}

bool IfcStructuralLoadSingleForceWarping::init()
{
    if (IfcStructuralLoadSingleForce::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WarpingMoment = Step::getUnset(m_WarpingMoment);
    }
    else
    {
        m_WarpingMoment = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcStructuralLoadSingleForceWarping::copy(const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop)
{
    IfcStructuralLoadSingleForce::copy(obj, copyop);
    setWarpingMoment(obj.m_WarpingMoment);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcStructuralLoadSingleForceWarping, IfcStructuralLoadSingleForce)
