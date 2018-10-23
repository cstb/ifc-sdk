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


#include <ifc2x3/IfcBuildingStorey.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBuildingStorey::IfcBuildingStorey(Step::Id id, Step::SPFData *args) : 
    IfcSpatialStructureElement(id, args)
{
    m_Elevation = Step::getUnset(m_Elevation);
}

IfcBuildingStorey::~IfcBuildingStorey()
{}

bool IfcBuildingStorey::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBuildingStorey(this);
}


IfcLengthMeasure IfcBuildingStorey::getElevation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Elevation;
    }
    else 
    {
        return Step::getUnset(m_Elevation);
    }    
}

IfcLengthMeasure IfcBuildingStorey::getElevation() const
{
    return const_cast<IfcBuildingStorey *>(this)->getElevation();
}

void IfcBuildingStorey::setElevation(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Elevation = value;
}

void IfcBuildingStorey::unsetElevation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Elevation = Step::getUnset(getElevation());
}

bool IfcBuildingStorey::testElevation() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getElevation()) == false;
}

bool IfcBuildingStorey::init()
{
    if (IfcSpatialStructureElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Elevation = Step::getUnset(m_Elevation);
    }
    else
    {
        m_Elevation = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcBuildingStorey::copy(const IfcBuildingStorey &obj, const CopyOp &copyop)
{
    IfcSpatialStructureElement::copy(obj, copyop);
    setElevation(obj.m_Elevation);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBuildingStorey, IfcSpatialStructureElement)
