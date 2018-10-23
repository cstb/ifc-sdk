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


#include <ifc2x3/IfcHygroscopicMaterialProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcHygroscopicMaterialProperties::IfcHygroscopicMaterialProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_UpperVaporResistanceFactor = Step::getUnset(m_UpperVaporResistanceFactor);
    m_LowerVaporResistanceFactor = Step::getUnset(m_LowerVaporResistanceFactor);
    m_IsothermalMoistureCapacity = Step::getUnset(m_IsothermalMoistureCapacity);
    m_VaporPermeability = Step::getUnset(m_VaporPermeability);
    m_MoistureDiffusivity = Step::getUnset(m_MoistureDiffusivity);
}

IfcHygroscopicMaterialProperties::~IfcHygroscopicMaterialProperties()
{}

bool IfcHygroscopicMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcHygroscopicMaterialProperties(this);
}


IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getUpperVaporResistanceFactor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UpperVaporResistanceFactor;
    }
    else 
    {
        return Step::getUnset(m_UpperVaporResistanceFactor);
    }    
}

IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getUpperVaporResistanceFactor() const
{
    return const_cast<IfcHygroscopicMaterialProperties *>(this)->getUpperVaporResistanceFactor();
}

void IfcHygroscopicMaterialProperties::setUpperVaporResistanceFactor(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UpperVaporResistanceFactor = value;
}

void IfcHygroscopicMaterialProperties::unsetUpperVaporResistanceFactor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UpperVaporResistanceFactor = Step::getUnset(getUpperVaporResistanceFactor());
}

bool IfcHygroscopicMaterialProperties::testUpperVaporResistanceFactor() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUpperVaporResistanceFactor()) == false;
}


IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getLowerVaporResistanceFactor()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LowerVaporResistanceFactor;
    }
    else 
    {
        return Step::getUnset(m_LowerVaporResistanceFactor);
    }    
}

IfcPositiveRatioMeasure IfcHygroscopicMaterialProperties::getLowerVaporResistanceFactor() const
{
    return const_cast<IfcHygroscopicMaterialProperties *>(this)->getLowerVaporResistanceFactor();
}

void IfcHygroscopicMaterialProperties::setLowerVaporResistanceFactor(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LowerVaporResistanceFactor = value;
}

void IfcHygroscopicMaterialProperties::unsetLowerVaporResistanceFactor()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LowerVaporResistanceFactor = Step::getUnset(getLowerVaporResistanceFactor());
}

bool IfcHygroscopicMaterialProperties::testLowerVaporResistanceFactor() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getLowerVaporResistanceFactor()) == false;
}


IfcIsothermalMoistureCapacityMeasure IfcHygroscopicMaterialProperties::getIsothermalMoistureCapacity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IsothermalMoistureCapacity;
    }
    else 
    {
        return Step::getUnset(m_IsothermalMoistureCapacity);
    }    
}

IfcIsothermalMoistureCapacityMeasure IfcHygroscopicMaterialProperties::getIsothermalMoistureCapacity() const
{
    return const_cast<IfcHygroscopicMaterialProperties *>(this)->getIsothermalMoistureCapacity();
}

void IfcHygroscopicMaterialProperties::setIsothermalMoistureCapacity(IfcIsothermalMoistureCapacityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsothermalMoistureCapacity = value;
}

void IfcHygroscopicMaterialProperties::unsetIsothermalMoistureCapacity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsothermalMoistureCapacity = Step::getUnset(getIsothermalMoistureCapacity());
}

bool IfcHygroscopicMaterialProperties::testIsothermalMoistureCapacity() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getIsothermalMoistureCapacity()) == false;
}


IfcVaporPermeabilityMeasure IfcHygroscopicMaterialProperties::getVaporPermeability()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VaporPermeability;
    }
    else 
    {
        return Step::getUnset(m_VaporPermeability);
    }    
}

IfcVaporPermeabilityMeasure IfcHygroscopicMaterialProperties::getVaporPermeability() const
{
    return const_cast<IfcHygroscopicMaterialProperties *>(this)->getVaporPermeability();
}

void IfcHygroscopicMaterialProperties::setVaporPermeability(IfcVaporPermeabilityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VaporPermeability = value;
}

void IfcHygroscopicMaterialProperties::unsetVaporPermeability()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VaporPermeability = Step::getUnset(getVaporPermeability());
}

bool IfcHygroscopicMaterialProperties::testVaporPermeability() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getVaporPermeability()) == false;
}


IfcMoistureDiffusivityMeasure IfcHygroscopicMaterialProperties::getMoistureDiffusivity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MoistureDiffusivity;
    }
    else 
    {
        return Step::getUnset(m_MoistureDiffusivity);
    }    
}

IfcMoistureDiffusivityMeasure IfcHygroscopicMaterialProperties::getMoistureDiffusivity() const
{
    return const_cast<IfcHygroscopicMaterialProperties *>(this)->getMoistureDiffusivity();
}

void IfcHygroscopicMaterialProperties::setMoistureDiffusivity(IfcMoistureDiffusivityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MoistureDiffusivity = value;
}

void IfcHygroscopicMaterialProperties::unsetMoistureDiffusivity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MoistureDiffusivity = Step::getUnset(getMoistureDiffusivity());
}

bool IfcHygroscopicMaterialProperties::testMoistureDiffusivity() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMoistureDiffusivity()) == false;
}

bool IfcHygroscopicMaterialProperties::init()
{
    if (IfcMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UpperVaporResistanceFactor = Step::getUnset(m_UpperVaporResistanceFactor);
    }
    else
    {
        m_UpperVaporResistanceFactor = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LowerVaporResistanceFactor = Step::getUnset(m_LowerVaporResistanceFactor);
    }
    else
    {
        m_LowerVaporResistanceFactor = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IsothermalMoistureCapacity = Step::getUnset(m_IsothermalMoistureCapacity);
    }
    else
    {
        m_IsothermalMoistureCapacity = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VaporPermeability = Step::getUnset(m_VaporPermeability);
    }
    else
    {
        m_VaporPermeability = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MoistureDiffusivity = Step::getUnset(m_MoistureDiffusivity);
    }
    else
    {
        m_MoistureDiffusivity = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcHygroscopicMaterialProperties::copy(const IfcHygroscopicMaterialProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    setUpperVaporResistanceFactor(obj.m_UpperVaporResistanceFactor);
    setLowerVaporResistanceFactor(obj.m_LowerVaporResistanceFactor);
    setIsothermalMoistureCapacity(obj.m_IsothermalMoistureCapacity);
    setVaporPermeability(obj.m_VaporPermeability);
    setMoistureDiffusivity(obj.m_MoistureDiffusivity);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcHygroscopicMaterialProperties, IfcMaterialProperties)
