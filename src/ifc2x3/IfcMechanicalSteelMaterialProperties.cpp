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


#include <ifc2x3/IfcMechanicalSteelMaterialProperties.h>

#include <ifc2x3/IfcRelaxation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMechanicalSteelMaterialProperties::IfcMechanicalSteelMaterialProperties(Step::Id id, Step::SPFData *args) : 
    IfcMechanicalMaterialProperties(id, args)
{
    m_YieldStress = Step::getUnset(m_YieldStress);
    m_UltimateStress = Step::getUnset(m_UltimateStress);
    m_UltimateStrain = Step::getUnset(m_UltimateStrain);
    m_HardeningModule = Step::getUnset(m_HardeningModule);
    m_ProportionalStress = Step::getUnset(m_ProportionalStress);
    m_PlasticStrain = Step::getUnset(m_PlasticStrain);
    m_Relaxations.setUnset(true);
}

IfcMechanicalSteelMaterialProperties::~IfcMechanicalSteelMaterialProperties()
{}

bool IfcMechanicalSteelMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMechanicalSteelMaterialProperties(this);
}


IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getYieldStress()
{
    if (Step::BaseObject::inited()) 
    {
        return m_YieldStress;
    }
    else 
    {
        return Step::getUnset(m_YieldStress);
    }    
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getYieldStress() const
{
    return const_cast<IfcMechanicalSteelMaterialProperties *>(this)->getYieldStress();
}

void IfcMechanicalSteelMaterialProperties::setYieldStress(IfcPressureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YieldStress = value;
}

void IfcMechanicalSteelMaterialProperties::unsetYieldStress()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YieldStress = Step::getUnset(getYieldStress());
}

bool IfcMechanicalSteelMaterialProperties::testYieldStress() const
{
    return Step::isUnset(getYieldStress()) == false;
}


IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getUltimateStress()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UltimateStress;
    }
    else 
    {
        return Step::getUnset(m_UltimateStress);
    }    
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getUltimateStress() const
{
    return const_cast<IfcMechanicalSteelMaterialProperties *>(this)->getUltimateStress();
}

void IfcMechanicalSteelMaterialProperties::setUltimateStress(IfcPressureMeasure value)
{
    m_UltimateStress = value;
}

void IfcMechanicalSteelMaterialProperties::unsetUltimateStress()
{
    m_UltimateStress = Step::getUnset(getUltimateStress());
}

bool IfcMechanicalSteelMaterialProperties::testUltimateStress() const
{
    return Step::isUnset(getUltimateStress()) == false;
}


IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getUltimateStrain()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UltimateStrain;
    }
    else 
    {
        return Step::getUnset(m_UltimateStrain);
    }    
}

IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getUltimateStrain() const
{
    return const_cast<IfcMechanicalSteelMaterialProperties *>(this)->getUltimateStrain();
}

void IfcMechanicalSteelMaterialProperties::setUltimateStrain(IfcPositiveRatioMeasure value)
{
    m_UltimateStrain = value;
}

void IfcMechanicalSteelMaterialProperties::unsetUltimateStrain()
{
    m_UltimateStrain = Step::getUnset(getUltimateStrain());
}

bool IfcMechanicalSteelMaterialProperties::testUltimateStrain() const
{
    return Step::isUnset(getUltimateStrain()) == false;
}


IfcModulusOfElasticityMeasure IfcMechanicalSteelMaterialProperties::getHardeningModule()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HardeningModule;
    }
    else 
    {
        return Step::getUnset(m_HardeningModule);
    }    
}

IfcModulusOfElasticityMeasure IfcMechanicalSteelMaterialProperties::getHardeningModule() const
{
    return const_cast<IfcMechanicalSteelMaterialProperties *>(this)->getHardeningModule();
}

void IfcMechanicalSteelMaterialProperties::setHardeningModule(IfcModulusOfElasticityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HardeningModule = value;
}

void IfcMechanicalSteelMaterialProperties::unsetHardeningModule()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HardeningModule = Step::getUnset(getHardeningModule());
}

bool IfcMechanicalSteelMaterialProperties::testHardeningModule() const
{
    return Step::isUnset(getHardeningModule()) == false;
}


IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getProportionalStress()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProportionalStress;
    }
    else 
    {
        return Step::getUnset(m_ProportionalStress);
    }    
}

IfcPressureMeasure IfcMechanicalSteelMaterialProperties::getProportionalStress() const
{
    return const_cast<IfcMechanicalSteelMaterialProperties *>(this)->getProportionalStress();
}

void IfcMechanicalSteelMaterialProperties::setProportionalStress(IfcPressureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProportionalStress = value;
}

void IfcMechanicalSteelMaterialProperties::unsetProportionalStress()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProportionalStress = Step::getUnset(getProportionalStress());
}

bool IfcMechanicalSteelMaterialProperties::testProportionalStress() const
{
    return Step::isUnset(getProportionalStress()) == false;
}


IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getPlasticStrain()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PlasticStrain;
    }
    else 
    {
        return Step::getUnset(m_PlasticStrain);
    }    
}

IfcPositiveRatioMeasure IfcMechanicalSteelMaterialProperties::getPlasticStrain() const
{
    return const_cast<IfcMechanicalSteelMaterialProperties *>(this)->getPlasticStrain();
}

void IfcMechanicalSteelMaterialProperties::setPlasticStrain(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlasticStrain = value;
}

void IfcMechanicalSteelMaterialProperties::unsetPlasticStrain()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PlasticStrain = Step::getUnset(getPlasticStrain());
}

bool IfcMechanicalSteelMaterialProperties::testPlasticStrain() const
{
    return Step::isUnset(getPlasticStrain()) == false;
}


Set_IfcRelaxation_1_n &IfcMechanicalSteelMaterialProperties::getRelaxations()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Relaxations;
    }
    else 
    {
        m_Relaxations.setUnset(true);
        return m_Relaxations;
    }    
}

const Set_IfcRelaxation_1_n &IfcMechanicalSteelMaterialProperties::getRelaxations() const
{
    return const_cast<IfcMechanicalSteelMaterialProperties *>(this)->getRelaxations();
}

void IfcMechanicalSteelMaterialProperties::setRelaxations(const Set_IfcRelaxation_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Relaxations = value;
}

void IfcMechanicalSteelMaterialProperties::unsetRelaxations()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Relaxations.clear();
    m_Relaxations.setUnset(true);
}

bool IfcMechanicalSteelMaterialProperties::testRelaxations() const
{
    return m_Relaxations.isUnset() == false;
}

bool IfcMechanicalSteelMaterialProperties::init()
{
    if (IfcMechanicalMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_YieldStress = Step::getUnset(m_YieldStress);
    }
    else
    {
        m_YieldStress = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UltimateStress = Step::getUnset(m_UltimateStress);
    }
    else
    {
        m_UltimateStress = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UltimateStrain = Step::getUnset(m_UltimateStrain);
    }
    else
    {
        m_UltimateStrain = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HardeningModule = Step::getUnset(m_HardeningModule);
    }
    else
    {
        m_HardeningModule = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProportionalStress = Step::getUnset(m_ProportionalStress);
    }
    else
    {
        m_ProportionalStress = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PlasticStrain = Step::getUnset(m_PlasticStrain);
    }
    else
    {
        m_PlasticStrain = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Relaxations.setUnset(true);
    }
    else
    {
        m_Relaxations.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_Relaxations.insert(static_cast< IfcRelaxation * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcMechanicalSteelMaterialProperties::copy(const IfcMechanicalSteelMaterialProperties &obj, const CopyOp &copyop)
{
    IfcMechanicalMaterialProperties::copy(obj, copyop);
    setYieldStress(obj.m_YieldStress);
    setUltimateStress(obj.m_UltimateStress);
    setUltimateStrain(obj.m_UltimateStrain);
    setHardeningModule(obj.m_HardeningModule);
    setProportionalStress(obj.m_ProportionalStress);
    setPlasticStrain(obj.m_PlasticStrain);
    Set_IfcRelaxation_1_n::const_iterator it_m_Relaxations;
    for (it_m_Relaxations = obj.m_Relaxations.begin(); it_m_Relaxations != obj.m_Relaxations.end(); ++it_m_Relaxations)
    {
        Step::RefPtr< IfcRelaxation > copyTarget = (IfcRelaxation *) (copyop((*it_m_Relaxations).get()));
        m_Relaxations.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMechanicalSteelMaterialProperties, IfcMechanicalMaterialProperties)
