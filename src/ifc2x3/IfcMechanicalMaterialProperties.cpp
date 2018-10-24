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


#include <ifc2x3/IfcMechanicalMaterialProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMechanicalMaterialProperties::IfcMechanicalMaterialProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_DynamicViscosity = Step::getUnset(m_DynamicViscosity);
    m_YoungModulus = Step::getUnset(m_YoungModulus);
    m_ShearModulus = Step::getUnset(m_ShearModulus);
    m_PoissonRatio = Step::getUnset(m_PoissonRatio);
    m_ThermalExpansionCoefficient = Step::getUnset(m_ThermalExpansionCoefficient);
}

IfcMechanicalMaterialProperties::~IfcMechanicalMaterialProperties()
{}

bool IfcMechanicalMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMechanicalMaterialProperties(this);
}


IfcDynamicViscosityMeasure IfcMechanicalMaterialProperties::getDynamicViscosity()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DynamicViscosity;
    }
    else 
    {
        return Step::getUnset(m_DynamicViscosity);
    }    
}

IfcDynamicViscosityMeasure IfcMechanicalMaterialProperties::getDynamicViscosity() const
{
    return const_cast<IfcMechanicalMaterialProperties *>(this)->getDynamicViscosity();
}

void IfcMechanicalMaterialProperties::setDynamicViscosity(IfcDynamicViscosityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DynamicViscosity = value;
}

void IfcMechanicalMaterialProperties::unsetDynamicViscosity()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DynamicViscosity = Step::getUnset(getDynamicViscosity());
}

bool IfcMechanicalMaterialProperties::testDynamicViscosity() const
{
    return Step::isUnset(getDynamicViscosity()) == false;
}


IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getYoungModulus()
{
    if (Step::BaseObject::inited()) 
    {
        return m_YoungModulus;
    }
    else 
    {
        return Step::getUnset(m_YoungModulus);
    }    
}

IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getYoungModulus() const
{
    return const_cast<IfcMechanicalMaterialProperties *>(this)->getYoungModulus();
}

void IfcMechanicalMaterialProperties::setYoungModulus(IfcModulusOfElasticityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YoungModulus = value;
}

void IfcMechanicalMaterialProperties::unsetYoungModulus()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YoungModulus = Step::getUnset(getYoungModulus());
}

bool IfcMechanicalMaterialProperties::testYoungModulus() const
{
    return Step::isUnset(getYoungModulus()) == false;
}


IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getShearModulus()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ShearModulus;
    }
    else 
    {
        return Step::getUnset(m_ShearModulus);
    }    
}

IfcModulusOfElasticityMeasure IfcMechanicalMaterialProperties::getShearModulus() const
{
    return const_cast<IfcMechanicalMaterialProperties *>(this)->getShearModulus();
}

void IfcMechanicalMaterialProperties::setShearModulus(IfcModulusOfElasticityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearModulus = value;
}

void IfcMechanicalMaterialProperties::unsetShearModulus()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ShearModulus = Step::getUnset(getShearModulus());
}

bool IfcMechanicalMaterialProperties::testShearModulus() const
{
    return Step::isUnset(getShearModulus()) == false;
}


IfcPositiveRatioMeasure IfcMechanicalMaterialProperties::getPoissonRatio()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PoissonRatio;
    }
    else 
    {
        return Step::getUnset(m_PoissonRatio);
    }    
}

IfcPositiveRatioMeasure IfcMechanicalMaterialProperties::getPoissonRatio() const
{
    return const_cast<IfcMechanicalMaterialProperties *>(this)->getPoissonRatio();
}

void IfcMechanicalMaterialProperties::setPoissonRatio(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PoissonRatio = value;
}

void IfcMechanicalMaterialProperties::unsetPoissonRatio()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PoissonRatio = Step::getUnset(getPoissonRatio());
}

bool IfcMechanicalMaterialProperties::testPoissonRatio() const
{
    return Step::isUnset(getPoissonRatio()) == false;
}


IfcThermalExpansionCoefficientMeasure IfcMechanicalMaterialProperties::getThermalExpansionCoefficient()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermalExpansionCoefficient;
    }
    else 
    {
        return Step::getUnset(m_ThermalExpansionCoefficient);
    }    
}

IfcThermalExpansionCoefficientMeasure IfcMechanicalMaterialProperties::getThermalExpansionCoefficient() const
{
    return const_cast<IfcMechanicalMaterialProperties *>(this)->getThermalExpansionCoefficient();
}

void IfcMechanicalMaterialProperties::setThermalExpansionCoefficient(IfcThermalExpansionCoefficientMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalExpansionCoefficient = value;
}

void IfcMechanicalMaterialProperties::unsetThermalExpansionCoefficient()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalExpansionCoefficient = Step::getUnset(getThermalExpansionCoefficient());
}

bool IfcMechanicalMaterialProperties::testThermalExpansionCoefficient() const
{
    return Step::isUnset(getThermalExpansionCoefficient()) == false;
}

bool IfcMechanicalMaterialProperties::init()
{
    if (IfcMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DynamicViscosity = Step::getUnset(m_DynamicViscosity);
    }
    else
    {
        m_DynamicViscosity = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_YoungModulus = Step::getUnset(m_YoungModulus);
    }
    else
    {
        m_YoungModulus = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ShearModulus = Step::getUnset(m_ShearModulus);
    }
    else
    {
        m_ShearModulus = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PoissonRatio = Step::getUnset(m_PoissonRatio);
    }
    else
    {
        m_PoissonRatio = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermalExpansionCoefficient = Step::getUnset(m_ThermalExpansionCoefficient);
    }
    else
    {
        m_ThermalExpansionCoefficient = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcMechanicalMaterialProperties::copy(const IfcMechanicalMaterialProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    setDynamicViscosity(obj.m_DynamicViscosity);
    setYoungModulus(obj.m_YoungModulus);
    setShearModulus(obj.m_ShearModulus);
    setPoissonRatio(obj.m_PoissonRatio);
    setThermalExpansionCoefficient(obj.m_ThermalExpansionCoefficient);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMechanicalMaterialProperties, IfcMaterialProperties)
