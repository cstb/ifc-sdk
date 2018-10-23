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


#include <ifc2x3/IfcExtrudedAreaSolid.h>

#include <ifc2x3/IfcDirection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcExtrudedAreaSolid::IfcExtrudedAreaSolid(Step::Id id, Step::SPFData *args) : 
    IfcSweptAreaSolid(id, args)
{
    m_ExtrudedDirection = NULL;
    m_Depth = Step::getUnset(m_Depth);
}

IfcExtrudedAreaSolid::~IfcExtrudedAreaSolid()
{}

bool IfcExtrudedAreaSolid::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcExtrudedAreaSolid(this);
}


IfcDirection *IfcExtrudedAreaSolid::getExtrudedDirection()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ExtrudedDirection.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDirection *IfcExtrudedAreaSolid::getExtrudedDirection() const
{
    return const_cast<IfcExtrudedAreaSolid *>(this)->getExtrudedDirection();
}

void IfcExtrudedAreaSolid::setExtrudedDirection(const Step::RefPtr< IfcDirection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ExtrudedDirection = value;
}

void IfcExtrudedAreaSolid::unsetExtrudedDirection()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ExtrudedDirection = Step::getUnset(getExtrudedDirection());
}

bool IfcExtrudedAreaSolid::testExtrudedDirection() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getExtrudedDirection()) == false;
}


IfcPositiveLengthMeasure IfcExtrudedAreaSolid::getDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Depth;
    }
    else 
    {
        return Step::getUnset(m_Depth);
    }    
}

IfcPositiveLengthMeasure IfcExtrudedAreaSolid::getDepth() const
{
    return const_cast<IfcExtrudedAreaSolid *>(this)->getDepth();
}

void IfcExtrudedAreaSolid::setDepth(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = value;
}

void IfcExtrudedAreaSolid::unsetDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Depth = Step::getUnset(getDepth());
}

bool IfcExtrudedAreaSolid::testDepth() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getDepth()) == false;
}

bool IfcExtrudedAreaSolid::init()
{
    if (IfcSweptAreaSolid::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ExtrudedDirection = NULL;
    }
    else
    {
        m_ExtrudedDirection = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Depth = Step::getUnset(m_Depth);
    }
    else
    {
        m_Depth = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcExtrudedAreaSolid::copy(const IfcExtrudedAreaSolid &obj, const CopyOp &copyop)
{
    IfcSweptAreaSolid::copy(obj, copyop);
    setExtrudedDirection((IfcDirection*)copyop(obj.m_ExtrudedDirection.get()));
    setDepth(obj.m_Depth);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcExtrudedAreaSolid, IfcSweptAreaSolid)
