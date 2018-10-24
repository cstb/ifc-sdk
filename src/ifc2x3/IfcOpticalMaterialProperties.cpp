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


#include <ifc2x3/IfcOpticalMaterialProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcOpticalMaterialProperties::IfcOpticalMaterialProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_VisibleTransmittance = Step::getUnset(m_VisibleTransmittance);
    m_SolarTransmittance = Step::getUnset(m_SolarTransmittance);
    m_ThermalIrTransmittance = Step::getUnset(m_ThermalIrTransmittance);
    m_ThermalIrEmissivityBack = Step::getUnset(m_ThermalIrEmissivityBack);
    m_ThermalIrEmissivityFront = Step::getUnset(m_ThermalIrEmissivityFront);
    m_VisibleReflectanceBack = Step::getUnset(m_VisibleReflectanceBack);
    m_VisibleReflectanceFront = Step::getUnset(m_VisibleReflectanceFront);
    m_SolarReflectanceFront = Step::getUnset(m_SolarReflectanceFront);
    m_SolarReflectanceBack = Step::getUnset(m_SolarReflectanceBack);
}

IfcOpticalMaterialProperties::~IfcOpticalMaterialProperties()
{}

bool IfcOpticalMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOpticalMaterialProperties(this);
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleTransmittance()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VisibleTransmittance;
    }
    else 
    {
        return Step::getUnset(m_VisibleTransmittance);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleTransmittance() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getVisibleTransmittance();
}

void IfcOpticalMaterialProperties::setVisibleTransmittance(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VisibleTransmittance = value;
}

void IfcOpticalMaterialProperties::unsetVisibleTransmittance()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VisibleTransmittance = Step::getUnset(getVisibleTransmittance());
}

bool IfcOpticalMaterialProperties::testVisibleTransmittance() const
{
    return Step::isUnset(getVisibleTransmittance()) == false;
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarTransmittance()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SolarTransmittance;
    }
    else 
    {
        return Step::getUnset(m_SolarTransmittance);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarTransmittance() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getSolarTransmittance();
}

void IfcOpticalMaterialProperties::setSolarTransmittance(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SolarTransmittance = value;
}

void IfcOpticalMaterialProperties::unsetSolarTransmittance()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SolarTransmittance = Step::getUnset(getSolarTransmittance());
}

bool IfcOpticalMaterialProperties::testSolarTransmittance() const
{
    return Step::isUnset(getSolarTransmittance()) == false;
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrTransmittance()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermalIrTransmittance;
    }
    else 
    {
        return Step::getUnset(m_ThermalIrTransmittance);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrTransmittance() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getThermalIrTransmittance();
}

void IfcOpticalMaterialProperties::setThermalIrTransmittance(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalIrTransmittance = value;
}

void IfcOpticalMaterialProperties::unsetThermalIrTransmittance()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalIrTransmittance = Step::getUnset(getThermalIrTransmittance());
}

bool IfcOpticalMaterialProperties::testThermalIrTransmittance() const
{
    return Step::isUnset(getThermalIrTransmittance()) == false;
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityBack()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermalIrEmissivityBack;
    }
    else 
    {
        return Step::getUnset(m_ThermalIrEmissivityBack);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityBack() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getThermalIrEmissivityBack();
}

void IfcOpticalMaterialProperties::setThermalIrEmissivityBack(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalIrEmissivityBack = value;
}

void IfcOpticalMaterialProperties::unsetThermalIrEmissivityBack()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalIrEmissivityBack = Step::getUnset(getThermalIrEmissivityBack());
}

bool IfcOpticalMaterialProperties::testThermalIrEmissivityBack() const
{
    return Step::isUnset(getThermalIrEmissivityBack()) == false;
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityFront()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermalIrEmissivityFront;
    }
    else 
    {
        return Step::getUnset(m_ThermalIrEmissivityFront);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getThermalIrEmissivityFront() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getThermalIrEmissivityFront();
}

void IfcOpticalMaterialProperties::setThermalIrEmissivityFront(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalIrEmissivityFront = value;
}

void IfcOpticalMaterialProperties::unsetThermalIrEmissivityFront()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalIrEmissivityFront = Step::getUnset(getThermalIrEmissivityFront());
}

bool IfcOpticalMaterialProperties::testThermalIrEmissivityFront() const
{
    return Step::isUnset(getThermalIrEmissivityFront()) == false;
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceBack()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VisibleReflectanceBack;
    }
    else 
    {
        return Step::getUnset(m_VisibleReflectanceBack);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceBack() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getVisibleReflectanceBack();
}

void IfcOpticalMaterialProperties::setVisibleReflectanceBack(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VisibleReflectanceBack = value;
}

void IfcOpticalMaterialProperties::unsetVisibleReflectanceBack()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VisibleReflectanceBack = Step::getUnset(getVisibleReflectanceBack());
}

bool IfcOpticalMaterialProperties::testVisibleReflectanceBack() const
{
    return Step::isUnset(getVisibleReflectanceBack()) == false;
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceFront()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VisibleReflectanceFront;
    }
    else 
    {
        return Step::getUnset(m_VisibleReflectanceFront);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getVisibleReflectanceFront() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getVisibleReflectanceFront();
}

void IfcOpticalMaterialProperties::setVisibleReflectanceFront(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VisibleReflectanceFront = value;
}

void IfcOpticalMaterialProperties::unsetVisibleReflectanceFront()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VisibleReflectanceFront = Step::getUnset(getVisibleReflectanceFront());
}

bool IfcOpticalMaterialProperties::testVisibleReflectanceFront() const
{
    return Step::isUnset(getVisibleReflectanceFront()) == false;
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceFront()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SolarReflectanceFront;
    }
    else 
    {
        return Step::getUnset(m_SolarReflectanceFront);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceFront() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getSolarReflectanceFront();
}

void IfcOpticalMaterialProperties::setSolarReflectanceFront(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SolarReflectanceFront = value;
}

void IfcOpticalMaterialProperties::unsetSolarReflectanceFront()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SolarReflectanceFront = Step::getUnset(getSolarReflectanceFront());
}

bool IfcOpticalMaterialProperties::testSolarReflectanceFront() const
{
    return Step::isUnset(getSolarReflectanceFront()) == false;
}


IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceBack()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SolarReflectanceBack;
    }
    else 
    {
        return Step::getUnset(m_SolarReflectanceBack);
    }    
}

IfcPositiveRatioMeasure IfcOpticalMaterialProperties::getSolarReflectanceBack() const
{
    return const_cast<IfcOpticalMaterialProperties *>(this)->getSolarReflectanceBack();
}

void IfcOpticalMaterialProperties::setSolarReflectanceBack(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SolarReflectanceBack = value;
}

void IfcOpticalMaterialProperties::unsetSolarReflectanceBack()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SolarReflectanceBack = Step::getUnset(getSolarReflectanceBack());
}

bool IfcOpticalMaterialProperties::testSolarReflectanceBack() const
{
    return Step::isUnset(getSolarReflectanceBack()) == false;
}

bool IfcOpticalMaterialProperties::init()
{
    if (IfcMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VisibleTransmittance = Step::getUnset(m_VisibleTransmittance);
    }
    else
    {
        m_VisibleTransmittance = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SolarTransmittance = Step::getUnset(m_SolarTransmittance);
    }
    else
    {
        m_SolarTransmittance = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermalIrTransmittance = Step::getUnset(m_ThermalIrTransmittance);
    }
    else
    {
        m_ThermalIrTransmittance = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermalIrEmissivityBack = Step::getUnset(m_ThermalIrEmissivityBack);
    }
    else
    {
        m_ThermalIrEmissivityBack = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermalIrEmissivityFront = Step::getUnset(m_ThermalIrEmissivityFront);
    }
    else
    {
        m_ThermalIrEmissivityFront = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VisibleReflectanceBack = Step::getUnset(m_VisibleReflectanceBack);
    }
    else
    {
        m_VisibleReflectanceBack = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VisibleReflectanceFront = Step::getUnset(m_VisibleReflectanceFront);
    }
    else
    {
        m_VisibleReflectanceFront = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SolarReflectanceFront = Step::getUnset(m_SolarReflectanceFront);
    }
    else
    {
        m_SolarReflectanceFront = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SolarReflectanceBack = Step::getUnset(m_SolarReflectanceBack);
    }
    else
    {
        m_SolarReflectanceBack = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcOpticalMaterialProperties::copy(const IfcOpticalMaterialProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    setVisibleTransmittance(obj.m_VisibleTransmittance);
    setSolarTransmittance(obj.m_SolarTransmittance);
    setThermalIrTransmittance(obj.m_ThermalIrTransmittance);
    setThermalIrEmissivityBack(obj.m_ThermalIrEmissivityBack);
    setThermalIrEmissivityFront(obj.m_ThermalIrEmissivityFront);
    setVisibleReflectanceBack(obj.m_VisibleReflectanceBack);
    setVisibleReflectanceFront(obj.m_VisibleReflectanceFront);
    setSolarReflectanceFront(obj.m_SolarReflectanceFront);
    setSolarReflectanceBack(obj.m_SolarReflectanceBack);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOpticalMaterialProperties, IfcMaterialProperties)
