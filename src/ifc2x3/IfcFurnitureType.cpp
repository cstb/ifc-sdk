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


#include <ifc2x3/IfcFurnitureType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFurnitureType::IfcFurnitureType(Step::Id id, Step::SPFData *args) : 
    IfcFurnishingElementType(id, args)
{
    m_AssemblyPlace = IfcAssemblyPlaceEnum_UNSET;
}

IfcFurnitureType::~IfcFurnitureType()
{}

bool IfcFurnitureType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFurnitureType(this);
}


IfcAssemblyPlaceEnum IfcFurnitureType::getAssemblyPlace()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AssemblyPlace;
    }
    else 
    {
        return IfcAssemblyPlaceEnum_UNSET;
    }    
}

IfcAssemblyPlaceEnum IfcFurnitureType::getAssemblyPlace() const
{
    return const_cast<IfcFurnitureType *>(this)->getAssemblyPlace();
}

void IfcFurnitureType::setAssemblyPlace(IfcAssemblyPlaceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AssemblyPlace = value;
}

void IfcFurnitureType::unsetAssemblyPlace()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AssemblyPlace = IfcAssemblyPlaceEnum_UNSET;
}

bool IfcFurnitureType::testAssemblyPlace() const
{
    return Step::isUnset(getAssemblyPlace()) == false;
}

bool IfcFurnitureType::init()
{
    if (IfcFurnishingElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AssemblyPlace = IfcAssemblyPlaceEnum_UNSET;
    }
    else
    {
        if (arg == ".SITE.")
        {
            m_AssemblyPlace = IfcAssemblyPlaceEnum_SITE;
        }
        else if (arg == ".FACTORY.")
        {
            m_AssemblyPlace = IfcAssemblyPlaceEnum_FACTORY;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_AssemblyPlace = IfcAssemblyPlaceEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFurnitureType::copy(const IfcFurnitureType &obj, const CopyOp &copyop)
{
    IfcFurnishingElementType::copy(obj, copyop);
    setAssemblyPlace(obj.m_AssemblyPlace);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFurnitureType, IfcFurnishingElementType)
