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


#include <ifc2x3/IfcMechanicalConcreteMaterialProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMechanicalConcreteMaterialProperties::IfcMechanicalConcreteMaterialProperties(Step::Id id, Step::SPFData *args) : 
    IfcMechanicalMaterialProperties(id, args)
{
    m_CompressiveStrength = Step::getUnset(m_CompressiveStrength);
    m_MaxAggregateSize = Step::getUnset(m_MaxAggregateSize);
    m_AdmixturesDescription = Step::getUnset(m_AdmixturesDescription);
    m_Workability = Step::getUnset(m_Workability);
    m_ProtectivePoreRatio = Step::getUnset(m_ProtectivePoreRatio);
    m_WaterImpermeability = Step::getUnset(m_WaterImpermeability);
}

IfcMechanicalConcreteMaterialProperties::~IfcMechanicalConcreteMaterialProperties()
{}

bool IfcMechanicalConcreteMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMechanicalConcreteMaterialProperties(this);
}


IfcPressureMeasure IfcMechanicalConcreteMaterialProperties::getCompressiveStrength()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CompressiveStrength;
    }
    else 
    {
        return Step::getUnset(m_CompressiveStrength);
    }    
}

IfcPressureMeasure IfcMechanicalConcreteMaterialProperties::getCompressiveStrength() const
{
    return const_cast<IfcMechanicalConcreteMaterialProperties *>(this)->getCompressiveStrength();
}

void IfcMechanicalConcreteMaterialProperties::setCompressiveStrength(IfcPressureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompressiveStrength = value;
}

void IfcMechanicalConcreteMaterialProperties::unsetCompressiveStrength()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CompressiveStrength = Step::getUnset(getCompressiveStrength());
}

bool IfcMechanicalConcreteMaterialProperties::testCompressiveStrength() const
{
    return Step::isUnset(getCompressiveStrength()) == false;
}


IfcPositiveLengthMeasure IfcMechanicalConcreteMaterialProperties::getMaxAggregateSize()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MaxAggregateSize;
    }
    else 
    {
        return Step::getUnset(m_MaxAggregateSize);
    }    
}

IfcPositiveLengthMeasure IfcMechanicalConcreteMaterialProperties::getMaxAggregateSize() const
{
    return const_cast<IfcMechanicalConcreteMaterialProperties *>(this)->getMaxAggregateSize();
}

void IfcMechanicalConcreteMaterialProperties::setMaxAggregateSize(IfcPositiveLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaxAggregateSize = value;
}

void IfcMechanicalConcreteMaterialProperties::unsetMaxAggregateSize()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaxAggregateSize = Step::getUnset(getMaxAggregateSize());
}

bool IfcMechanicalConcreteMaterialProperties::testMaxAggregateSize() const
{
    return Step::isUnset(getMaxAggregateSize()) == false;
}


IfcText IfcMechanicalConcreteMaterialProperties::getAdmixturesDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AdmixturesDescription;
    }
    else 
    {
        return Step::getUnset(m_AdmixturesDescription);
    }    
}

const IfcText IfcMechanicalConcreteMaterialProperties::getAdmixturesDescription() const
{
    return const_cast<IfcMechanicalConcreteMaterialProperties *>(this)->getAdmixturesDescription();
}

void IfcMechanicalConcreteMaterialProperties::setAdmixturesDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AdmixturesDescription = value;
}

void IfcMechanicalConcreteMaterialProperties::unsetAdmixturesDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AdmixturesDescription = Step::getUnset(getAdmixturesDescription());
}

bool IfcMechanicalConcreteMaterialProperties::testAdmixturesDescription() const
{
    return Step::isUnset(getAdmixturesDescription()) == false;
}


IfcText IfcMechanicalConcreteMaterialProperties::getWorkability()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Workability;
    }
    else 
    {
        return Step::getUnset(m_Workability);
    }    
}

const IfcText IfcMechanicalConcreteMaterialProperties::getWorkability() const
{
    return const_cast<IfcMechanicalConcreteMaterialProperties *>(this)->getWorkability();
}

void IfcMechanicalConcreteMaterialProperties::setWorkability(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Workability = value;
}

void IfcMechanicalConcreteMaterialProperties::unsetWorkability()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Workability = Step::getUnset(getWorkability());
}

bool IfcMechanicalConcreteMaterialProperties::testWorkability() const
{
    return Step::isUnset(getWorkability()) == false;
}


IfcNormalisedRatioMeasure IfcMechanicalConcreteMaterialProperties::getProtectivePoreRatio()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ProtectivePoreRatio;
    }
    else 
    {
        return Step::getUnset(m_ProtectivePoreRatio);
    }    
}

IfcNormalisedRatioMeasure IfcMechanicalConcreteMaterialProperties::getProtectivePoreRatio() const
{
    return const_cast<IfcMechanicalConcreteMaterialProperties *>(this)->getProtectivePoreRatio();
}

void IfcMechanicalConcreteMaterialProperties::setProtectivePoreRatio(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProtectivePoreRatio = value;
}

void IfcMechanicalConcreteMaterialProperties::unsetProtectivePoreRatio()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ProtectivePoreRatio = Step::getUnset(getProtectivePoreRatio());
}

bool IfcMechanicalConcreteMaterialProperties::testProtectivePoreRatio() const
{
    return Step::isUnset(getProtectivePoreRatio()) == false;
}


IfcText IfcMechanicalConcreteMaterialProperties::getWaterImpermeability()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WaterImpermeability;
    }
    else 
    {
        return Step::getUnset(m_WaterImpermeability);
    }    
}

const IfcText IfcMechanicalConcreteMaterialProperties::getWaterImpermeability() const
{
    return const_cast<IfcMechanicalConcreteMaterialProperties *>(this)->getWaterImpermeability();
}

void IfcMechanicalConcreteMaterialProperties::setWaterImpermeability(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WaterImpermeability = value;
}

void IfcMechanicalConcreteMaterialProperties::unsetWaterImpermeability()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WaterImpermeability = Step::getUnset(getWaterImpermeability());
}

bool IfcMechanicalConcreteMaterialProperties::testWaterImpermeability() const
{
    return Step::isUnset(getWaterImpermeability()) == false;
}

bool IfcMechanicalConcreteMaterialProperties::init()
{
    if (IfcMechanicalMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CompressiveStrength = Step::getUnset(m_CompressiveStrength);
    }
    else
    {
        m_CompressiveStrength = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaxAggregateSize = Step::getUnset(m_MaxAggregateSize);
    }
    else
    {
        m_MaxAggregateSize = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AdmixturesDescription = Step::getUnset(m_AdmixturesDescription);
    }
    else
    {
        m_AdmixturesDescription = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Workability = Step::getUnset(m_Workability);
    }
    else
    {
        m_Workability = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ProtectivePoreRatio = Step::getUnset(m_ProtectivePoreRatio);
    }
    else
    {
        m_ProtectivePoreRatio = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WaterImpermeability = Step::getUnset(m_WaterImpermeability);
    }
    else
    {
        m_WaterImpermeability = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcMechanicalConcreteMaterialProperties::copy(const IfcMechanicalConcreteMaterialProperties &obj, const CopyOp &copyop)
{
    IfcMechanicalMaterialProperties::copy(obj, copyop);
    setCompressiveStrength(obj.m_CompressiveStrength);
    setMaxAggregateSize(obj.m_MaxAggregateSize);
    setAdmixturesDescription(obj.m_AdmixturesDescription);
    setWorkability(obj.m_Workability);
    setProtectivePoreRatio(obj.m_ProtectivePoreRatio);
    setWaterImpermeability(obj.m_WaterImpermeability);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMechanicalConcreteMaterialProperties, IfcMechanicalMaterialProperties)
