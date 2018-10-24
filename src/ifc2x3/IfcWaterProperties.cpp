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


#include <ifc2x3/IfcWaterProperties.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcWaterProperties::IfcWaterProperties(Step::Id id, Step::SPFData *args) : 
    IfcMaterialProperties(id, args)
{
    m_IsPotable = Step::getUnset(m_IsPotable);
    m_Hardness = Step::getUnset(m_Hardness);
    m_AlkalinityConcentration = Step::getUnset(m_AlkalinityConcentration);
    m_AcidityConcentration = Step::getUnset(m_AcidityConcentration);
    m_ImpuritiesContent = Step::getUnset(m_ImpuritiesContent);
    m_PHLevel = Step::getUnset(m_PHLevel);
    m_DissolvedSolidsContent = Step::getUnset(m_DissolvedSolidsContent);
}

IfcWaterProperties::~IfcWaterProperties()
{}

bool IfcWaterProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcWaterProperties(this);
}


Step::Boolean IfcWaterProperties::getIsPotable()
{
    if (Step::BaseObject::inited()) 
    {
        return m_IsPotable;
    }
    else 
    {
        return Step::getUnset(m_IsPotable);
    }    
}

Step::Boolean IfcWaterProperties::getIsPotable() const
{
    return const_cast<IfcWaterProperties *>(this)->getIsPotable();
}

void IfcWaterProperties::setIsPotable(Step::Boolean value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsPotable = value;
}

void IfcWaterProperties::unsetIsPotable()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_IsPotable = Step::getUnset(getIsPotable());
}

bool IfcWaterProperties::testIsPotable() const
{
    return Step::isUnset(getIsPotable()) == false;
}


IfcIonConcentrationMeasure IfcWaterProperties::getHardness()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Hardness;
    }
    else 
    {
        return Step::getUnset(m_Hardness);
    }    
}

IfcIonConcentrationMeasure IfcWaterProperties::getHardness() const
{
    return const_cast<IfcWaterProperties *>(this)->getHardness();
}

void IfcWaterProperties::setHardness(IfcIonConcentrationMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Hardness = value;
}

void IfcWaterProperties::unsetHardness()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Hardness = Step::getUnset(getHardness());
}

bool IfcWaterProperties::testHardness() const
{
    return Step::isUnset(getHardness()) == false;
}


IfcIonConcentrationMeasure IfcWaterProperties::getAlkalinityConcentration()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AlkalinityConcentration;
    }
    else 
    {
        return Step::getUnset(m_AlkalinityConcentration);
    }    
}

IfcIonConcentrationMeasure IfcWaterProperties::getAlkalinityConcentration() const
{
    return const_cast<IfcWaterProperties *>(this)->getAlkalinityConcentration();
}

void IfcWaterProperties::setAlkalinityConcentration(IfcIonConcentrationMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AlkalinityConcentration = value;
}

void IfcWaterProperties::unsetAlkalinityConcentration()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AlkalinityConcentration = Step::getUnset(getAlkalinityConcentration());
}

bool IfcWaterProperties::testAlkalinityConcentration() const
{
    return Step::isUnset(getAlkalinityConcentration()) == false;
}


IfcIonConcentrationMeasure IfcWaterProperties::getAcidityConcentration()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AcidityConcentration;
    }
    else 
    {
        return Step::getUnset(m_AcidityConcentration);
    }    
}

IfcIonConcentrationMeasure IfcWaterProperties::getAcidityConcentration() const
{
    return const_cast<IfcWaterProperties *>(this)->getAcidityConcentration();
}

void IfcWaterProperties::setAcidityConcentration(IfcIonConcentrationMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AcidityConcentration = value;
}

void IfcWaterProperties::unsetAcidityConcentration()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AcidityConcentration = Step::getUnset(getAcidityConcentration());
}

bool IfcWaterProperties::testAcidityConcentration() const
{
    return Step::isUnset(getAcidityConcentration()) == false;
}


IfcNormalisedRatioMeasure IfcWaterProperties::getImpuritiesContent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ImpuritiesContent;
    }
    else 
    {
        return Step::getUnset(m_ImpuritiesContent);
    }    
}

IfcNormalisedRatioMeasure IfcWaterProperties::getImpuritiesContent() const
{
    return const_cast<IfcWaterProperties *>(this)->getImpuritiesContent();
}

void IfcWaterProperties::setImpuritiesContent(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ImpuritiesContent = value;
}

void IfcWaterProperties::unsetImpuritiesContent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ImpuritiesContent = Step::getUnset(getImpuritiesContent());
}

bool IfcWaterProperties::testImpuritiesContent() const
{
    return Step::isUnset(getImpuritiesContent()) == false;
}


IfcPHMeasure IfcWaterProperties::getPHLevel()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PHLevel;
    }
    else 
    {
        return Step::getUnset(m_PHLevel);
    }    
}

IfcPHMeasure IfcWaterProperties::getPHLevel() const
{
    return const_cast<IfcWaterProperties *>(this)->getPHLevel();
}

void IfcWaterProperties::setPHLevel(IfcPHMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PHLevel = value;
}

void IfcWaterProperties::unsetPHLevel()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PHLevel = Step::getUnset(getPHLevel());
}

bool IfcWaterProperties::testPHLevel() const
{
    return Step::isUnset(getPHLevel()) == false;
}


IfcNormalisedRatioMeasure IfcWaterProperties::getDissolvedSolidsContent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DissolvedSolidsContent;
    }
    else 
    {
        return Step::getUnset(m_DissolvedSolidsContent);
    }    
}

IfcNormalisedRatioMeasure IfcWaterProperties::getDissolvedSolidsContent() const
{
    return const_cast<IfcWaterProperties *>(this)->getDissolvedSolidsContent();
}

void IfcWaterProperties::setDissolvedSolidsContent(IfcNormalisedRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DissolvedSolidsContent = value;
}

void IfcWaterProperties::unsetDissolvedSolidsContent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DissolvedSolidsContent = Step::getUnset(getDissolvedSolidsContent());
}

bool IfcWaterProperties::testDissolvedSolidsContent() const
{
    return Step::isUnset(getDissolvedSolidsContent()) == false;
}

bool IfcWaterProperties::init()
{
    if (IfcMaterialProperties::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_IsPotable = Step::getUnset(m_IsPotable);
    }
    else
    {
        m_IsPotable = Step::spfToBoolean(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Hardness = Step::getUnset(m_Hardness);
    }
    else
    {
        m_Hardness = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AlkalinityConcentration = Step::getUnset(m_AlkalinityConcentration);
    }
    else
    {
        m_AlkalinityConcentration = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AcidityConcentration = Step::getUnset(m_AcidityConcentration);
    }
    else
    {
        m_AcidityConcentration = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ImpuritiesContent = Step::getUnset(m_ImpuritiesContent);
    }
    else
    {
        m_ImpuritiesContent = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PHLevel = Step::getUnset(m_PHLevel);
    }
    else
    {
        m_PHLevel = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DissolvedSolidsContent = Step::getUnset(m_DissolvedSolidsContent);
    }
    else
    {
        m_DissolvedSolidsContent = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcWaterProperties::copy(const IfcWaterProperties &obj, const CopyOp &copyop)
{
    IfcMaterialProperties::copy(obj, copyop);
    setIsPotable(obj.m_IsPotable);
    setHardness(obj.m_Hardness);
    setAlkalinityConcentration(obj.m_AlkalinityConcentration);
    setAcidityConcentration(obj.m_AcidityConcentration);
    setImpuritiesContent(obj.m_ImpuritiesContent);
    setPHLevel(obj.m_PHLevel);
    setDissolvedSolidsContent(obj.m_DissolvedSolidsContent);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcWaterProperties, IfcMaterialProperties)
