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


#include <ifc2x3/IfcGeneralProfileProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGeneralProfileProperties::IfcGeneralProfileProperties(Step::Id id, Step::SPFData *args) : 
    IfcProfileProperties(id, args)
{
    m_PhysicalWeight = Step::getUnset(m_PhysicalWeight);
    m_Perimeter = Step::getUnset(m_Perimeter);
    m_MinimumPlateThickness = Step::getUnset(m_MinimumPlateThickness);
    m_MaximumPlateThickness = Step::getUnset(m_MaximumPlateThickness);
    m_CrossSectionArea = Step::getUnset(m_CrossSectionArea);
}

IfcGeneralProfileProperties::~IfcGeneralProfileProperties()
{}

bool IfcGeneralProfileProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGeneralProfileProperties(this);
}


IfcMassPerLengthMeasure IfcGeneralProfileProperties::getPhysicalWeight()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PhysicalWeight;
    }
    else 
    {
        return Step::getUnset(m_PhysicalWeight);
    }    
}

IfcMassPerLengthMeasure IfcGeneralProfileProperties::getPhysicalWeight() const
{
    return const_cast<IfcGeneralProfileProperties *>(this)->getPhysicalWeight();
}

void IfcGeneralProfileProperties::setPhysicalWeight(IfcMassPerLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PhysicalWeight = value;
}

void IfcGeneralProfileProperties::unsetPhysicalWeight()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PhysicalWeight = Step::getUnset(getPhysicalWeight());
}

bool IfcGeneralProfileProperties::testPhysicalWeight() const
{
    return Step::isUnset(getPhysicalWeight()) == false;
}


IfcPositiveLengthMeasure IfcGeneralProfileProperties::getPerimeter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Perimeter;
    }
    else 
    {
        return Step::getUnset(m_Perimeter);
    }    
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getPerimeter() const
{
    return const_cast<IfcGeneralProfileProperties *>(this)->getPerimeter();
}

void IfcGeneralProfileProperties::setPerimeter(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Perimeter = value;
}

void IfcGeneralProfileProperties::unsetPerimeter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Perimeter = Step::getUnset(getPerimeter());
}

bool IfcGeneralProfileProperties::testPerimeter() const
{
    return Step::isUnset(getPerimeter()) == false;
}


IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMinimumPlateThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinimumPlateThickness;
    }
    else 
    {
        return Step::getUnset(m_MinimumPlateThickness);
    }    
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMinimumPlateThickness() const
{
    return const_cast<IfcGeneralProfileProperties *>(this)->getMinimumPlateThickness();
}

void IfcGeneralProfileProperties::setMinimumPlateThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumPlateThickness = value;
}

void IfcGeneralProfileProperties::unsetMinimumPlateThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumPlateThickness = Step::getUnset(getMinimumPlateThickness());
}

bool IfcGeneralProfileProperties::testMinimumPlateThickness() const
{
    return Step::isUnset(getMinimumPlateThickness()) == false;
}


IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMaximumPlateThickness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MaximumPlateThickness;
    }
    else 
    {
        return Step::getUnset(m_MaximumPlateThickness);
    }    
}

IfcPositiveLengthMeasure IfcGeneralProfileProperties::getMaximumPlateThickness() const
{
    return const_cast<IfcGeneralProfileProperties *>(this)->getMaximumPlateThickness();
}

void IfcGeneralProfileProperties::setMaximumPlateThickness(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumPlateThickness = value;
}

void IfcGeneralProfileProperties::unsetMaximumPlateThickness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumPlateThickness = Step::getUnset(getMaximumPlateThickness());
}

bool IfcGeneralProfileProperties::testMaximumPlateThickness() const
{
    return Step::isUnset(getMaximumPlateThickness()) == false;
}


IfcAreaMeasure IfcGeneralProfileProperties::getCrossSectionArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CrossSectionArea;
    }
    else 
    {
        return Step::getUnset(m_CrossSectionArea);
    }    
}

IfcAreaMeasure IfcGeneralProfileProperties::getCrossSectionArea() const
{
    return const_cast<IfcGeneralProfileProperties *>(this)->getCrossSectionArea();
}

void IfcGeneralProfileProperties::setCrossSectionArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionArea = value;
}

void IfcGeneralProfileProperties::unsetCrossSectionArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionArea = Step::getUnset(getCrossSectionArea());
}

bool IfcGeneralProfileProperties::testCrossSectionArea() const
{
    return Step::isUnset(getCrossSectionArea()) == false;
}

bool IfcGeneralProfileProperties::init()
{
    if (IfcProfileProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PhysicalWeight = Step::getUnset(m_PhysicalWeight);
    }
    else
    {
        m_PhysicalWeight = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Perimeter = Step::getUnset(m_Perimeter);
    }
    else
    {
        m_Perimeter = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinimumPlateThickness = Step::getUnset(m_MinimumPlateThickness);
    }
    else
    {
        m_MinimumPlateThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaximumPlateThickness = Step::getUnset(m_MaximumPlateThickness);
    }
    else
    {
        m_MaximumPlateThickness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CrossSectionArea = Step::getUnset(m_CrossSectionArea);
    }
    else
    {
        m_CrossSectionArea = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcGeneralProfileProperties::copy(const IfcGeneralProfileProperties &obj, const CopyOp &copyop)
{
    IfcProfileProperties::copy(obj, copyop);
    setPhysicalWeight(obj.m_PhysicalWeight);
    setPerimeter(obj.m_Perimeter);
    setMinimumPlateThickness(obj.m_MinimumPlateThickness);
    setMaximumPlateThickness(obj.m_MaximumPlateThickness);
    setCrossSectionArea(obj.m_CrossSectionArea);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGeneralProfileProperties, IfcProfileProperties)
