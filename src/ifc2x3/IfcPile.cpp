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


#include <ifc2x3/IfcPile.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPile::IfcPile(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_PredefinedType = IfcPileTypeEnum_UNSET;
    m_ConstructionType = IfcPileConstructionEnum_UNSET;
}

IfcPile::~IfcPile()
{}

bool IfcPile::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPile(this);
}


IfcPileTypeEnum IfcPile::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcPileTypeEnum_UNSET;
    }    
}

IfcPileTypeEnum IfcPile::getPredefinedType() const
{
    return const_cast<IfcPile *>(this)->getPredefinedType();
}

void IfcPile::setPredefinedType(IfcPileTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcPile::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcPileTypeEnum_UNSET;
}

bool IfcPile::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}


IfcPileConstructionEnum IfcPile::getConstructionType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConstructionType;
    }
    else 
    {
        return IfcPileConstructionEnum_UNSET;
    }    
}

IfcPileConstructionEnum IfcPile::getConstructionType() const
{
    return const_cast<IfcPile *>(this)->getConstructionType();
}

void IfcPile::setConstructionType(IfcPileConstructionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstructionType = value;
}

void IfcPile::unsetConstructionType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConstructionType = IfcPileConstructionEnum_UNSET;
}

bool IfcPile::testConstructionType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getConstructionType()) == false;
}

bool IfcPile::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcPileTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".COHESION.")
        {
            m_PredefinedType = IfcPileTypeEnum_COHESION;
        }
        else if (arg == ".FRICTION.")
        {
            m_PredefinedType = IfcPileTypeEnum_FRICTION;
        }
        else if (arg == ".SUPPORT.")
        {
            m_PredefinedType = IfcPileTypeEnum_SUPPORT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcPileTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcPileTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConstructionType = IfcPileConstructionEnum_UNSET;
    }
    else
    {
        if (arg == ".CAST_IN_PLACE.")
        {
            m_ConstructionType = IfcPileConstructionEnum_CAST_IN_PLACE;
        }
        else if (arg == ".COMPOSITE.")
        {
            m_ConstructionType = IfcPileConstructionEnum_COMPOSITE;
        }
        else if (arg == ".PRECAST_CONCRETE.")
        {
            m_ConstructionType = IfcPileConstructionEnum_PRECAST_CONCRETE;
        }
        else if (arg == ".PREFAB_STEEL.")
        {
            m_ConstructionType = IfcPileConstructionEnum_PREFAB_STEEL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ConstructionType = IfcPileConstructionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ConstructionType = IfcPileConstructionEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPile::copy(const IfcPile &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    setConstructionType(obj.m_ConstructionType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPile, IfcBuildingElement)
