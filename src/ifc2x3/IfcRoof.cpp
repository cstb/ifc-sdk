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


#include <ifc2x3/IfcRoof.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRoof::IfcRoof(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_ShapeType = IfcRoofTypeEnum_UNSET;
}

IfcRoof::~IfcRoof()
{}

bool IfcRoof::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRoof(this);
}


IfcRoofTypeEnum IfcRoof::getShapeType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShapeType;
    }
    else 
    {
        return IfcRoofTypeEnum_UNSET;
    }    
}

IfcRoofTypeEnum IfcRoof::getShapeType() const
{
    return const_cast<IfcRoof *>(this)->getShapeType();
}

void IfcRoof::setShapeType(IfcRoofTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeType = value;
}

void IfcRoof::unsetShapeType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShapeType = IfcRoofTypeEnum_UNSET;
}

bool IfcRoof::testShapeType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getShapeType()) == false;
}

bool IfcRoof::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShapeType = IfcRoofTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FLAT_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_FLAT_ROOF;
        }
        else if (arg == ".SHED_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_SHED_ROOF;
        }
        else if (arg == ".GABLE_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_GABLE_ROOF;
        }
        else if (arg == ".HIP_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_HIP_ROOF;
        }
        else if (arg == ".HIPPED_GABLE_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_HIPPED_GABLE_ROOF;
        }
        else if (arg == ".GAMBREL_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_GAMBREL_ROOF;
        }
        else if (arg == ".MANSARD_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_MANSARD_ROOF;
        }
        else if (arg == ".BARREL_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_BARREL_ROOF;
        }
        else if (arg == ".RAINBOW_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_RAINBOW_ROOF;
        }
        else if (arg == ".BUTTERFLY_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_BUTTERFLY_ROOF;
        }
        else if (arg == ".PAVILION_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_PAVILION_ROOF;
        }
        else if (arg == ".DOME_ROOF.")
        {
            m_ShapeType = IfcRoofTypeEnum_DOME_ROOF;
        }
        else if (arg == ".FREEFORM.")
        {
            m_ShapeType = IfcRoofTypeEnum_FREEFORM;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ShapeType = IfcRoofTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRoof::copy(const IfcRoof &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setShapeType(obj.m_ShapeType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRoof, IfcBuildingElement)
