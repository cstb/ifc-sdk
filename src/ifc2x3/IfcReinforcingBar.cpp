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


#include <ifc2x3/IfcReinforcingBar.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcReinforcingBar::IfcReinforcingBar(Step::Id id, Step::SPFData *args) : 
    IfcReinforcingElement(id, args)
{
    m_NominalDiameter = Step::getUnset(m_NominalDiameter);
    m_CrossSectionArea = Step::getUnset(m_CrossSectionArea);
    m_BarLength = Step::getUnset(m_BarLength);
    m_BarRole = IfcReinforcingBarRoleEnum_UNSET;
    m_BarSurface = IfcReinforcingBarSurfaceEnum_UNSET;
}

IfcReinforcingBar::~IfcReinforcingBar()
{}

bool IfcReinforcingBar::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcReinforcingBar(this);
}


IfcPositiveLengthMeasure IfcReinforcingBar::getNominalDiameter()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NominalDiameter;
    }
    else 
    {
        return Step::getUnset(m_NominalDiameter);
    }    
}

IfcPositiveLengthMeasure IfcReinforcingBar::getNominalDiameter() const
{
    return const_cast<IfcReinforcingBar *>(this)->getNominalDiameter();
}

void IfcReinforcingBar::setNominalDiameter(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalDiameter = value;
}

void IfcReinforcingBar::unsetNominalDiameter()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalDiameter = Step::getUnset(getNominalDiameter());
}

bool IfcReinforcingBar::testNominalDiameter() const
{
    return Step::isUnset(getNominalDiameter()) == false;
}


IfcAreaMeasure IfcReinforcingBar::getCrossSectionArea()
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

IfcAreaMeasure IfcReinforcingBar::getCrossSectionArea() const
{
    return const_cast<IfcReinforcingBar *>(this)->getCrossSectionArea();
}

void IfcReinforcingBar::setCrossSectionArea(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionArea = value;
}

void IfcReinforcingBar::unsetCrossSectionArea()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CrossSectionArea = Step::getUnset(getCrossSectionArea());
}

bool IfcReinforcingBar::testCrossSectionArea() const
{
    return Step::isUnset(getCrossSectionArea()) == false;
}


IfcPositiveLengthMeasure IfcReinforcingBar::getBarLength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BarLength;
    }
    else 
    {
        return Step::getUnset(m_BarLength);
    }    
}

IfcPositiveLengthMeasure IfcReinforcingBar::getBarLength() const
{
    return const_cast<IfcReinforcingBar *>(this)->getBarLength();
}

void IfcReinforcingBar::setBarLength(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarLength = value;
}

void IfcReinforcingBar::unsetBarLength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarLength = Step::getUnset(getBarLength());
}

bool IfcReinforcingBar::testBarLength() const
{
    return Step::isUnset(getBarLength()) == false;
}


IfcReinforcingBarRoleEnum IfcReinforcingBar::getBarRole()
{
    if (Step::BaseObject::inited()) 
    {
        return m_BarRole;
    }
    else 
    {
        return IfcReinforcingBarRoleEnum_UNSET;
    }    
}

IfcReinforcingBarRoleEnum IfcReinforcingBar::getBarRole() const
{
    return const_cast<IfcReinforcingBar *>(this)->getBarRole();
}

void IfcReinforcingBar::setBarRole(IfcReinforcingBarRoleEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarRole = value;
}

void IfcReinforcingBar::unsetBarRole()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarRole = IfcReinforcingBarRoleEnum_UNSET;
}

bool IfcReinforcingBar::testBarRole() const
{
    return Step::isUnset(getBarRole()) == false;
}


IfcReinforcingBarSurfaceEnum IfcReinforcingBar::getBarSurface()
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

IfcReinforcingBarSurfaceEnum IfcReinforcingBar::getBarSurface() const
{
    return const_cast<IfcReinforcingBar *>(this)->getBarSurface();
}

void IfcReinforcingBar::setBarSurface(IfcReinforcingBarSurfaceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarSurface = value;
}

void IfcReinforcingBar::unsetBarSurface()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_BarSurface = IfcReinforcingBarSurfaceEnum_UNSET;
}

bool IfcReinforcingBar::testBarSurface() const
{
    return Step::isUnset(getBarSurface()) == false;
}

bool IfcReinforcingBar::init()
{
    if (IfcReinforcingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NominalDiameter = Step::getUnset(m_NominalDiameter);
    }
    else
    {
        m_NominalDiameter = Step::spfToReal(arg)

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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BarLength = Step::getUnset(m_BarLength);
    }
    else
    {
        m_BarLength = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_BarRole = IfcReinforcingBarRoleEnum_UNSET;
    }
    else
    {
        if (arg == ".MAIN.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_MAIN;
        }
        else if (arg == ".SHEAR.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_SHEAR;
        }
        else if (arg == ".LIGATURE.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_LIGATURE;
        }
        else if (arg == ".STUD.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_STUD;
        }
        else if (arg == ".PUNCHING.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_PUNCHING;
        }
        else if (arg == ".EDGE.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_EDGE;
        }
        else if (arg == ".RING.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_RING;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_BarRole = IfcReinforcingBarRoleEnum_NOTDEFINED;
        }
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
    return true;
}

void IfcReinforcingBar::copy(const IfcReinforcingBar &obj, const CopyOp &copyop)
{
    IfcReinforcingElement::copy(obj, copyop);
    setNominalDiameter(obj.m_NominalDiameter);
    setCrossSectionArea(obj.m_CrossSectionArea);
    setBarLength(obj.m_BarLength);
    setBarRole(obj.m_BarRole);
    setBarSurface(obj.m_BarSurface);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcReinforcingBar, IfcReinforcingElement)
