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


#include <ifc2x3/IfcBuilding.h>

#include <ifc2x3/IfcPostalAddress.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBuilding::IfcBuilding(Step::Id id, Step::SPFData *args) : 
    IfcSpatialStructureElement(id, args)
{
    m_ElevationOfRefHeight = Step::getUnset(m_ElevationOfRefHeight);
    m_ElevationOfTerrain = Step::getUnset(m_ElevationOfTerrain);
    m_BuildingAddress = NULL;
}

IfcBuilding::~IfcBuilding()
{}

bool IfcBuilding::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBuilding(this);
}


IfcLengthMeasure IfcBuilding::getElevationOfRefHeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ElevationOfRefHeight;
    }
    else 
    {
        return Step::getUnset(m_ElevationOfRefHeight);
    }    
}

IfcLengthMeasure IfcBuilding::getElevationOfRefHeight() const
{
    return const_cast<IfcBuilding *>(this)->getElevationOfRefHeight();
}

void IfcBuilding::setElevationOfRefHeight(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElevationOfRefHeight = value;
}

void IfcBuilding::unsetElevationOfRefHeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElevationOfRefHeight = Step::getUnset(getElevationOfRefHeight());
}

bool IfcBuilding::testElevationOfRefHeight() const
{
    return Step::isUnset(getElevationOfRefHeight()) == false;
}


IfcLengthMeasure IfcBuilding::getElevationOfTerrain()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ElevationOfTerrain;
    }
    else 
    {
        return Step::getUnset(m_ElevationOfTerrain);
    }    
}

IfcLengthMeasure IfcBuilding::getElevationOfTerrain() const
{
    return const_cast<IfcBuilding *>(this)->getElevationOfTerrain();
}

void IfcBuilding::setElevationOfTerrain(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElevationOfTerrain = value;
}

void IfcBuilding::unsetElevationOfTerrain()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElevationOfTerrain = Step::getUnset(getElevationOfTerrain());
}

bool IfcBuilding::testElevationOfTerrain() const
{
    return Step::isUnset(getElevationOfTerrain()) == false;
}


IfcPostalAddress *IfcBuilding::getBuildingAddress()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BuildingAddress.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcPostalAddress *IfcBuilding::getBuildingAddress() const
{
    return const_cast<IfcBuilding *>(this)->getBuildingAddress();
}

void IfcBuilding::setBuildingAddress(const Step::RefPtr< IfcPostalAddress > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BuildingAddress = value;
}

void IfcBuilding::unsetBuildingAddress()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BuildingAddress = Step::getUnset(getBuildingAddress());
}

bool IfcBuilding::testBuildingAddress() const
{
    return Step::isUnset(getBuildingAddress()) == false;
}

bool IfcBuilding::init()
{
    if (IfcSpatialStructureElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ElevationOfRefHeight = Step::getUnset(m_ElevationOfRefHeight);
    }
    else
    {
        m_ElevationOfRefHeight = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ElevationOfTerrain = Step::getUnset(m_ElevationOfTerrain);
    }
    else
    {
        m_ElevationOfTerrain = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BuildingAddress = NULL;
    }
    else
    {
        m_BuildingAddress = static_cast< IfcPostalAddress * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcBuilding::copy(const IfcBuilding &obj, const CopyOp &copyop)
{
    IfcSpatialStructureElement::copy(obj, copyop);
    setElevationOfRefHeight(obj.m_ElevationOfRefHeight);
    setElevationOfTerrain(obj.m_ElevationOfTerrain);
    setBuildingAddress((IfcPostalAddress*)copyop(obj.m_BuildingAddress.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBuilding, IfcSpatialStructureElement)
