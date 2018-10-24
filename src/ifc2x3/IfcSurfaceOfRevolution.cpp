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


#include <ifc2x3/IfcSurfaceOfRevolution.h>

#include <ifc2x3/IfcAxis1Placement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSurfaceOfRevolution::IfcSurfaceOfRevolution(Step::Id id, Step::SPFData *args) : 
    IfcSweptSurface(id, args)
{
    m_AxisPosition = NULL;
}

IfcSurfaceOfRevolution::~IfcSurfaceOfRevolution()
{}

bool IfcSurfaceOfRevolution::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSurfaceOfRevolution(this);
}


IfcAxis1Placement *IfcSurfaceOfRevolution::getAxisPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AxisPosition.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis1Placement *IfcSurfaceOfRevolution::getAxisPosition() const
{
    return const_cast<IfcSurfaceOfRevolution *>(this)->getAxisPosition();
}

void IfcSurfaceOfRevolution::setAxisPosition(const Step::RefPtr< IfcAxis1Placement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AxisPosition = value;
}

void IfcSurfaceOfRevolution::unsetAxisPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AxisPosition = Step::getUnset(getAxisPosition());
}

bool IfcSurfaceOfRevolution::testAxisPosition() const
{
    return Step::isUnset(getAxisPosition()) == false;
}

bool IfcSurfaceOfRevolution::init()
{
    if (IfcSweptSurface::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AxisPosition = NULL;
    }
    else
    {
        m_AxisPosition = static_cast< IfcAxis1Placement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSurfaceOfRevolution::copy(const IfcSurfaceOfRevolution &obj, const CopyOp &copyop)
{
    IfcSweptSurface::copy(obj, copyop);
    setAxisPosition((IfcAxis1Placement*)copyop(obj.m_AxisPosition.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSurfaceOfRevolution, IfcSweptSurface)
