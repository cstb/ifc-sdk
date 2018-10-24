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


#include <ifc2x3/IfcReinforcementBarProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcReinforcementBarProperties::IfcReinforcementBarProperties(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_TotalCrossSectionArea = Step::getUnset(m_TotalCrossSectionArea);
    m_SteelGrade = Step::getUnset(m_SteelGrade);
    m_BarSurface = IfcReinforcingBarSurfaceEnum_UNSET;
    m_EffectiveDepth = Step::getUnset(m_EffectiveDepth);
    m_NominalBarDiameter = Step::getUnset(m_NominalBarDiameter);
    m_BarCount = Step::getUnset(m_BarCount);
}

IfcReinforcementBarProperties::~IfcReinforcementBarProperties()
{}

bool IfcReinforcementBarProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcReinforcementBarProperties(this);
}


IfcAreaMeasure IfcReinforcementBarProperties::getTotalCrossSectionArea()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TotalCrossSectionArea;
    }
    else 
    {
        return Step::getUnset(m_TotalCrossSectionArea);
    }    
}

IfcAreaMeasure IfcReinforcementBarProperties::getTotalCrossSectionArea() const
{
    return const_cast<IfcReinforcementBarProperties *>(this)->getTotalCrossSectionArea();
}

void IfcReinforcementBarProperties::setTotalCrossSectionArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TotalCrossSectionArea = value;
}

void IfcReinforcementBarProperties::unsetTotalCrossSectionArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TotalCrossSectionArea = Step::getUnset(getTotalCrossSectionArea());
}

bool IfcReinforcementBarProperties::testTotalCrossSectionArea() const
{
    return Step::isUnset(getTotalCrossSectionArea()) == false;
}


IfcLabel IfcReinforcementBarProperties::getSteelGrade()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SteelGrade;
    }
    else 
    {
        return Step::getUnset(m_SteelGrade);
    }    
}

const IfcLabel IfcReinforcementBarProperties::getSteelGrade() const
{
    return const_cast<IfcReinforcementBarProperties *>(this)->getSteelGrade();
}

void IfcReinforcementBarProperties::setSteelGrade(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SteelGrade = value;
}

void IfcReinforcementBarProperties::unsetSteelGrade()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SteelGrade = Step::getUnset(getSteelGrade());
}

bool IfcReinforcementBarProperties::testSteelGrade() const
{
    return Step::isUnset(getSteelGrade()) == false;
}


IfcReinforcingBarSurfaceEnum IfcReinforcementBarProperties::getBarSurface()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BarSurface;
    }
    else 
    {
        return IfcReinforcingBarSurfaceEnum_UNSET;
    }    
}

IfcReinforcingBarSurfaceEnum IfcReinforcementBarProperties::getBarSurface() const
{
    return const_cast<IfcReinforcementBarProperties *>(this)->getBarSurface();
}

void IfcReinforcementBarProperties::setBarSurface(IfcReinforcingBarSurfaceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarSurface = value;
}

void IfcReinforcementBarProperties::unsetBarSurface()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarSurface = IfcReinforcingBarSurfaceEnum_UNSET;
}

bool IfcReinforcementBarProperties::testBarSurface() const
{
    return Step::isUnset(getBarSurface()) == false;
}


IfcLengthMeasure IfcReinforcementBarProperties::getEffectiveDepth()
{
    if (Step::BaseObject::inited()) 
    {
        return m_EffectiveDepth;
    }
    else 
    {
        return Step::getUnset(m_EffectiveDepth);
    }    
}

IfcLengthMeasure IfcReinforcementBarProperties::getEffectiveDepth() const
{
    return const_cast<IfcReinforcementBarProperties *>(this)->getEffectiveDepth();
}

void IfcReinforcementBarProperties::setEffectiveDepth(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EffectiveDepth = value;
}

void IfcReinforcementBarProperties::unsetEffectiveDepth()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_EffectiveDepth = Step::getUnset(getEffectiveDepth());
}

bool IfcReinforcementBarProperties::testEffectiveDepth() const
{
    return Step::isUnset(getEffectiveDepth()) == false;
}


IfcPositiveLengthMeasure IfcReinforcementBarProperties::getNominalBarDiameter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NominalBarDiameter;
    }
    else 
    {
        return Step::getUnset(m_NominalBarDiameter);
    }    
}

IfcPositiveLengthMeasure IfcReinforcementBarProperties::getNominalBarDiameter() const
{
    return const_cast<IfcReinforcementBarProperties *>(this)->getNominalBarDiameter();
}

void IfcReinforcementBarProperties::setNominalBarDiameter(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalBarDiameter = value;
}

void IfcReinforcementBarProperties::unsetNominalBarDiameter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalBarDiameter = Step::getUnset(getNominalBarDiameter());
}

bool IfcReinforcementBarProperties::testNominalBarDiameter() const
{
    return Step::isUnset(getNominalBarDiameter()) == false;
}


IfcCountMeasure IfcReinforcementBarProperties::getBarCount()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BarCount;
    }
    else 
    {
        return Step::getUnset(m_BarCount);
    }    
}

IfcCountMeasure IfcReinforcementBarProperties::getBarCount() const
{
    return const_cast<IfcReinforcementBarProperties *>(this)->getBarCount();
}

void IfcReinforcementBarProperties::setBarCount(IfcCountMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarCount = value;
}

void IfcReinforcementBarProperties::unsetBarCount()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarCount = Step::getUnset(getBarCount());
}

bool IfcReinforcementBarProperties::testBarCount() const
{
    return Step::isUnset(getBarCount()) == false;
}

bool IfcReinforcementBarProperties::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TotalCrossSectionArea = Step::getUnset(m_TotalCrossSectionArea);
    }
    else
    {
        m_TotalCrossSectionArea = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SteelGrade = Step::getUnset(m_SteelGrade);
    }
    else
    {
        m_SteelGrade = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BarSurface = IfcReinforcingBarSurfaceEnum_UNSET;
    }
    else
    {
        if (arg == ".PLAIN.")
        {
            m_BarSurface = IfcReinforcingBarSurfaceEnum_PLAIN;
        }
        else if (arg == ".TEXTURED.")
        {
            m_BarSurface = IfcReinforcingBarSurfaceEnum_TEXTURED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_EffectiveDepth = Step::getUnset(m_EffectiveDepth);
    }
    else
    {
        m_EffectiveDepth = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NominalBarDiameter = Step::getUnset(m_NominalBarDiameter);
    }
    else
    {
        m_NominalBarDiameter = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BarCount = Step::getUnset(m_BarCount);
    }
    else
    {
        m_BarCount = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcReinforcementBarProperties::copy(const IfcReinforcementBarProperties &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setTotalCrossSectionArea(obj.m_TotalCrossSectionArea);
    setSteelGrade(obj.m_SteelGrade);
    setBarSurface(obj.m_BarSurface);
    setEffectiveDepth(obj.m_EffectiveDepth);
    setNominalBarDiameter(obj.m_NominalBarDiameter);
    setBarCount(obj.m_BarCount);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcReinforcementBarProperties, Step::BaseEntity)
