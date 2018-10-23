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


#include <ifc2x3/IfcSweptAreaSolid.h>

#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcAxis2Placement3D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSweptAreaSolid::IfcSweptAreaSolid(Step::Id id, Step::SPFData *args) : 
    IfcSolidModel(id, args)
{
    m_SweptArea = NULL;
    m_Position = NULL;
}

IfcSweptAreaSolid::~IfcSweptAreaSolid()
{}

bool IfcSweptAreaSolid::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSweptAreaSolid(this);
}


IfcProfileDef *IfcSweptAreaSolid::getSweptArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SweptArea.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcProfileDef *IfcSweptAreaSolid::getSweptArea() const
{
    return const_cast<IfcSweptAreaSolid *>(this)->getSweptArea();
}

void IfcSweptAreaSolid::setSweptArea(const Step::RefPtr< IfcProfileDef > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SweptArea = value;
}

void IfcSweptAreaSolid::unsetSweptArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SweptArea = Step::getUnset(getSweptArea());
}

bool IfcSweptAreaSolid::testSweptArea() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSweptArea()) == false;
}


IfcAxis2Placement3D *IfcSweptAreaSolid::getPosition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Position.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcAxis2Placement3D *IfcSweptAreaSolid::getPosition() const
{
    return const_cast<IfcSweptAreaSolid *>(this)->getPosition();
}

void IfcSweptAreaSolid::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = value;
}

void IfcSweptAreaSolid::unsetPosition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Position = Step::getUnset(getPosition());
}

bool IfcSweptAreaSolid::testPosition() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPosition()) == false;
}

bool IfcSweptAreaSolid::init()
{
    if (IfcSolidModel::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SweptArea = NULL;
    }
    else
    {
        m_SweptArea = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Position = NULL;
    }
    else
    {
        m_Position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcSweptAreaSolid::copy(const IfcSweptAreaSolid &obj, const CopyOp &copyop)
{
    IfcSolidModel::copy(obj, copyop);
    setSweptArea((IfcProfileDef*)copyop(obj.m_SweptArea.get()));
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_Position.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSweptAreaSolid, IfcSolidModel)
