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


#include <ifc2x3/IfcAxis2Placement3D.h>

#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcDirection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAxis2Placement3D::IfcAxis2Placement3D(Step::Id id, Step::SPFData *args) : 
    IfcPlacement(id, args)
{
    m_Axis = NULL;
    m_RefDirection = NULL;
}

IfcAxis2Placement3D::~IfcAxis2Placement3D()
{}

bool IfcAxis2Placement3D::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAxis2Placement3D(this);
}


IfcDirection *IfcAxis2Placement3D::getAxis()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Axis.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcAxis2Placement3D::getAxis() const
{
    return const_cast<IfcAxis2Placement3D *>(this)->getAxis();
}

void IfcAxis2Placement3D::setAxis(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis = value;
}

void IfcAxis2Placement3D::unsetAxis()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Axis = Step::getUnset(getAxis());
}

bool IfcAxis2Placement3D::testAxis() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getAxis()) == false;
}


IfcDirection *IfcAxis2Placement3D::getRefDirection()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RefDirection.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcAxis2Placement3D::getRefDirection() const
{
    return const_cast<IfcAxis2Placement3D *>(this)->getRefDirection();
}

void IfcAxis2Placement3D::setRefDirection(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefDirection = value;
}

void IfcAxis2Placement3D::unsetRefDirection()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RefDirection = Step::getUnset(getRefDirection());
}

bool IfcAxis2Placement3D::testRefDirection() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRefDirection()) == false;
}

bool IfcAxis2Placement3D::init()
{
    if (IfcPlacement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Axis = NULL;
    }
    else
    {
        m_Axis = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RefDirection = NULL;
    }
    else
    {
        m_RefDirection = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcAxis2Placement3D::copy(const IfcAxis2Placement3D &obj, const CopyOp &copyop)
{
    IfcPlacement::copy(obj, copyop);
    setAxis((IfcDirection*)copyop(obj.m_Axis.get()));
    setRefDirection((IfcDirection*)copyop(obj.m_RefDirection.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAxis2Placement3D, IfcPlacement)
