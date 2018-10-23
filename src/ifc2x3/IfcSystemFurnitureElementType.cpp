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


#include <ifc2x3/IfcSystemFurnitureElementType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSystemFurnitureElementType::IfcSystemFurnitureElementType(Step::Id id, Step::SPFData *args) : 
    IfcFurnishingElementType(id, args)
{
}

IfcSystemFurnitureElementType::~IfcSystemFurnitureElementType()
{}

bool IfcSystemFurnitureElementType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSystemFurnitureElementType(this);
}

bool IfcSystemFurnitureElementType::init()
{
    if (IfcFurnishingElementType::init() == false)
    {
        return false;
    }
    return true;
}

void IfcSystemFurnitureElementType::copy(const IfcSystemFurnitureElementType &obj, const CopyOp &copyop)
{
    IfcFurnishingElementType::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSystemFurnitureElementType, IfcFurnishingElementType)
