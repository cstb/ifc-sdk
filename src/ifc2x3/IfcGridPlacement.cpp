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


#include <ifc2x3/IfcGridPlacement.h>

#include <ifc2x3/IfcVirtualGridIntersection.h>
#include <ifc2x3/IfcVirtualGridIntersection.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGridPlacement::IfcGridPlacement(Step::Id id, Step::SPFData *args) : 
    IfcObjectPlacement(id, args)
{
    m_PlacementLocation = NULL;
    m_PlacementRefDirection = NULL;
}

IfcGridPlacement::~IfcGridPlacement()
{}

bool IfcGridPlacement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGridPlacement(this);
}


IfcVirtualGridIntersection *IfcGridPlacement::getPlacementLocation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PlacementLocation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcVirtualGridIntersection *IfcGridPlacement::getPlacementLocation() const
{
    return const_cast<IfcGridPlacement *>(this)->getPlacementLocation();
}

void IfcGridPlacement::setPlacementLocation(const Step::RefPtr< IfcVirtualGridIntersection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlacementLocation = value;
}

void IfcGridPlacement::unsetPlacementLocation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlacementLocation = Step::getUnset(getPlacementLocation());
}

bool IfcGridPlacement::testPlacementLocation() const
{
    return Step::isUnset(getPlacementLocation()) == false;
}


IfcVirtualGridIntersection *IfcGridPlacement::getPlacementRefDirection()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PlacementRefDirection.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcVirtualGridIntersection *IfcGridPlacement::getPlacementRefDirection() const
{
    return const_cast<IfcGridPlacement *>(this)->getPlacementRefDirection();
}

void IfcGridPlacement::setPlacementRefDirection(const Step::RefPtr< IfcVirtualGridIntersection > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlacementRefDirection = value;
}

void IfcGridPlacement::unsetPlacementRefDirection()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlacementRefDirection = Step::getUnset(getPlacementRefDirection());
}

bool IfcGridPlacement::testPlacementRefDirection() const
{
    return Step::isUnset(getPlacementRefDirection()) == false;
}

bool IfcGridPlacement::init()
{
    if (IfcObjectPlacement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PlacementLocation = NULL;
    }
    else
    {
        m_PlacementLocation = static_cast< IfcVirtualGridIntersection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PlacementRefDirection = NULL;
    }
    else
    {
        m_PlacementRefDirection = static_cast< IfcVirtualGridIntersection * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcGridPlacement::copy(const IfcGridPlacement &obj, const CopyOp &copyop)
{
    IfcObjectPlacement::copy(obj, copyop);
    setPlacementLocation((IfcVirtualGridIntersection*)copyop(obj.m_PlacementLocation.get()));
    setPlacementRefDirection((IfcVirtualGridIntersection*)copyop(obj.m_PlacementRefDirection.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGridPlacement, IfcObjectPlacement)
