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


#include <ifc2x3/IfcSpaceThermalLoadProperties.h>

#include <ifc2x3/IfcTimeSeries.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSpaceThermalLoadProperties::IfcSpaceThermalLoadProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_ApplicableValueRatio = Step::getUnset(m_ApplicableValueRatio);
    m_ThermalLoadSource = IfcThermalLoadSourceEnum_UNSET;
    m_PropertySource = IfcPropertySourceEnum_UNSET;
    m_SourceDescription = Step::getUnset(m_SourceDescription);
    m_MaximumValue = Step::getUnset(m_MaximumValue);
    m_MinimumValue = Step::getUnset(m_MinimumValue);
    m_ThermalLoadTimeSeriesValues = NULL;
    m_UserDefinedThermalLoadSource = Step::getUnset(m_UserDefinedThermalLoadSource);
    m_UserDefinedPropertySource = Step::getUnset(m_UserDefinedPropertySource);
    m_ThermalLoadType = IfcThermalLoadTypeEnum_UNSET;
}

IfcSpaceThermalLoadProperties::~IfcSpaceThermalLoadProperties()
{}

bool IfcSpaceThermalLoadProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSpaceThermalLoadProperties(this);
}


IfcPositiveRatioMeasure IfcSpaceThermalLoadProperties::getApplicableValueRatio()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApplicableValueRatio;
    }
    else 
    {
        return Step::getUnset(m_ApplicableValueRatio);
    }    
}

IfcPositiveRatioMeasure IfcSpaceThermalLoadProperties::getApplicableValueRatio() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getApplicableValueRatio();
}

void IfcSpaceThermalLoadProperties::setApplicableValueRatio(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicableValueRatio = value;
}

void IfcSpaceThermalLoadProperties::unsetApplicableValueRatio()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicableValueRatio = Step::getUnset(getApplicableValueRatio());
}

bool IfcSpaceThermalLoadProperties::testApplicableValueRatio() const
{
    return Step::isUnset(getApplicableValueRatio()) == false;
}


IfcThermalLoadSourceEnum IfcSpaceThermalLoadProperties::getThermalLoadSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermalLoadSource;
    }
    else 
    {
        return IfcThermalLoadSourceEnum_UNSET;
    }    
}

IfcThermalLoadSourceEnum IfcSpaceThermalLoadProperties::getThermalLoadSource() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getThermalLoadSource();
}

void IfcSpaceThermalLoadProperties::setThermalLoadSource(IfcThermalLoadSourceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalLoadSource = value;
}

void IfcSpaceThermalLoadProperties::unsetThermalLoadSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalLoadSource = IfcThermalLoadSourceEnum_UNSET;
}

bool IfcSpaceThermalLoadProperties::testThermalLoadSource() const
{
    return Step::isUnset(getThermalLoadSource()) == false;
}


IfcPropertySourceEnum IfcSpaceThermalLoadProperties::getPropertySource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PropertySource;
    }
    else 
    {
        return IfcPropertySourceEnum_UNSET;
    }    
}

IfcPropertySourceEnum IfcSpaceThermalLoadProperties::getPropertySource() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getPropertySource();
}

void IfcSpaceThermalLoadProperties::setPropertySource(IfcPropertySourceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PropertySource = value;
}

void IfcSpaceThermalLoadProperties::unsetPropertySource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PropertySource = IfcPropertySourceEnum_UNSET;
}

bool IfcSpaceThermalLoadProperties::testPropertySource() const
{
    return Step::isUnset(getPropertySource()) == false;
}


IfcText IfcSpaceThermalLoadProperties::getSourceDescription()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SourceDescription;
    }
    else 
    {
        return Step::getUnset(m_SourceDescription);
    }    
}

const IfcText IfcSpaceThermalLoadProperties::getSourceDescription() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getSourceDescription();
}

void IfcSpaceThermalLoadProperties::setSourceDescription(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SourceDescription = value;
}

void IfcSpaceThermalLoadProperties::unsetSourceDescription()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SourceDescription = Step::getUnset(getSourceDescription());
}

bool IfcSpaceThermalLoadProperties::testSourceDescription() const
{
    return Step::isUnset(getSourceDescription()) == false;
}


IfcPowerMeasure IfcSpaceThermalLoadProperties::getMaximumValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MaximumValue;
    }
    else 
    {
        return Step::getUnset(m_MaximumValue);
    }    
}

IfcPowerMeasure IfcSpaceThermalLoadProperties::getMaximumValue() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getMaximumValue();
}

void IfcSpaceThermalLoadProperties::setMaximumValue(IfcPowerMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumValue = value;
}

void IfcSpaceThermalLoadProperties::unsetMaximumValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MaximumValue = Step::getUnset(getMaximumValue());
}

bool IfcSpaceThermalLoadProperties::testMaximumValue() const
{
    return Step::isUnset(getMaximumValue()) == false;
}


IfcPowerMeasure IfcSpaceThermalLoadProperties::getMinimumValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinimumValue;
    }
    else 
    {
        return Step::getUnset(m_MinimumValue);
    }    
}

IfcPowerMeasure IfcSpaceThermalLoadProperties::getMinimumValue() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getMinimumValue();
}

void IfcSpaceThermalLoadProperties::setMinimumValue(IfcPowerMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumValue = value;
}

void IfcSpaceThermalLoadProperties::unsetMinimumValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinimumValue = Step::getUnset(getMinimumValue());
}

bool IfcSpaceThermalLoadProperties::testMinimumValue() const
{
    return Step::isUnset(getMinimumValue()) == false;
}


IfcTimeSeries *IfcSpaceThermalLoadProperties::getThermalLoadTimeSeriesValues()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermalLoadTimeSeriesValues.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcSpaceThermalLoadProperties::getThermalLoadTimeSeriesValues() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getThermalLoadTimeSeriesValues();
}

void IfcSpaceThermalLoadProperties::setThermalLoadTimeSeriesValues(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalLoadTimeSeriesValues = value;
}

void IfcSpaceThermalLoadProperties::unsetThermalLoadTimeSeriesValues()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalLoadTimeSeriesValues = Step::getUnset(getThermalLoadTimeSeriesValues());
}

bool IfcSpaceThermalLoadProperties::testThermalLoadTimeSeriesValues() const
{
    return Step::isUnset(getThermalLoadTimeSeriesValues()) == false;
}


IfcLabel IfcSpaceThermalLoadProperties::getUserDefinedThermalLoadSource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedThermalLoadSource;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedThermalLoadSource);
    }    
}

const IfcLabel IfcSpaceThermalLoadProperties::getUserDefinedThermalLoadSource() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getUserDefinedThermalLoadSource();
}

void IfcSpaceThermalLoadProperties::setUserDefinedThermalLoadSource(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedThermalLoadSource = value;
}

void IfcSpaceThermalLoadProperties::unsetUserDefinedThermalLoadSource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedThermalLoadSource = Step::getUnset(getUserDefinedThermalLoadSource());
}

bool IfcSpaceThermalLoadProperties::testUserDefinedThermalLoadSource() const
{
    return Step::isUnset(getUserDefinedThermalLoadSource()) == false;
}


IfcLabel IfcSpaceThermalLoadProperties::getUserDefinedPropertySource()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UserDefinedPropertySource;
    }
    else 
    {
        return Step::getUnset(m_UserDefinedPropertySource);
    }    
}

const IfcLabel IfcSpaceThermalLoadProperties::getUserDefinedPropertySource() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getUserDefinedPropertySource();
}

void IfcSpaceThermalLoadProperties::setUserDefinedPropertySource(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedPropertySource = value;
}

void IfcSpaceThermalLoadProperties::unsetUserDefinedPropertySource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedPropertySource = Step::getUnset(getUserDefinedPropertySource());
}

bool IfcSpaceThermalLoadProperties::testUserDefinedPropertySource() const
{
    return Step::isUnset(getUserDefinedPropertySource()) == false;
}


IfcThermalLoadTypeEnum IfcSpaceThermalLoadProperties::getThermalLoadType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ThermalLoadType;
    }
    else 
    {
        return IfcThermalLoadTypeEnum_UNSET;
    }    
}

IfcThermalLoadTypeEnum IfcSpaceThermalLoadProperties::getThermalLoadType() const
{
    return const_cast<IfcSpaceThermalLoadProperties *>(this)->getThermalLoadType();
}

void IfcSpaceThermalLoadProperties::setThermalLoadType(IfcThermalLoadTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalLoadType = value;
}

void IfcSpaceThermalLoadProperties::unsetThermalLoadType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ThermalLoadType = IfcThermalLoadTypeEnum_UNSET;
}

bool IfcSpaceThermalLoadProperties::testThermalLoadType() const
{
    return Step::isUnset(getThermalLoadType()) == false;
}

bool IfcSpaceThermalLoadProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApplicableValueRatio = Step::getUnset(m_ApplicableValueRatio);
    }
    else
    {
        m_ApplicableValueRatio = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermalLoadSource = IfcThermalLoadSourceEnum_UNSET;
    }
    else
    {
        if (arg == ".PEOPLE.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_PEOPLE;
        }
        else if (arg == ".LIGHTING.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_LIGHTING;
        }
        else if (arg == ".EQUIPMENT.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_EQUIPMENT;
        }
        else if (arg == ".VENTILATIONINDOORAIR.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_VENTILATIONINDOORAIR;
        }
        else if (arg == ".VENTILATIONOUTSIDEAIR.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_VENTILATIONOUTSIDEAIR;
        }
        else if (arg == ".RECIRCULATEDAIR.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_RECIRCULATEDAIR;
        }
        else if (arg == ".EXHAUSTAIR.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_EXHAUSTAIR;
        }
        else if (arg == ".AIREXCHANGERATE.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_AIREXCHANGERATE;
        }
        else if (arg == ".DRYBULBTEMPERATURE.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_DRYBULBTEMPERATURE;
        }
        else if (arg == ".RELATIVEHUMIDITY.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_RELATIVEHUMIDITY;
        }
        else if (arg == ".INFILTRATION.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_INFILTRATION;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ThermalLoadSource = IfcThermalLoadSourceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PropertySource = IfcPropertySourceEnum_UNSET;
    }
    else
    {
        if (arg == ".DESIGN.")
        {
            m_PropertySource = IfcPropertySourceEnum_DESIGN;
        }
        else if (arg == ".DESIGNMAXIMUM.")
        {
            m_PropertySource = IfcPropertySourceEnum_DESIGNMAXIMUM;
        }
        else if (arg == ".DESIGNMINIMUM.")
        {
            m_PropertySource = IfcPropertySourceEnum_DESIGNMINIMUM;
        }
        else if (arg == ".SIMULATED.")
        {
            m_PropertySource = IfcPropertySourceEnum_SIMULATED;
        }
        else if (arg == ".ASBUILT.")
        {
            m_PropertySource = IfcPropertySourceEnum_ASBUILT;
        }
        else if (arg == ".COMMISSIONING.")
        {
            m_PropertySource = IfcPropertySourceEnum_COMMISSIONING;
        }
        else if (arg == ".MEASURED.")
        {
            m_PropertySource = IfcPropertySourceEnum_MEASURED;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PropertySource = IfcPropertySourceEnum_USERDEFINED;
        }
        else if (arg == ".NOTKNOWN.")
        {
            m_PropertySource = IfcPropertySourceEnum_NOTKNOWN;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SourceDescription = Step::getUnset(m_SourceDescription);
    }
    else
    {
        m_SourceDescription = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MaximumValue = Step::getUnset(m_MaximumValue);
    }
    else
    {
        m_MaximumValue = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinimumValue = Step::getUnset(m_MinimumValue);
    }
    else
    {
        m_MinimumValue = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermalLoadTimeSeriesValues = NULL;
    }
    else
    {
        m_ThermalLoadTimeSeriesValues = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedThermalLoadSource = Step::getUnset(m_UserDefinedThermalLoadSource);
    }
    else
    {
        m_UserDefinedThermalLoadSource = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UserDefinedPropertySource = Step::getUnset(m_UserDefinedPropertySource);
    }
    else
    {
        m_UserDefinedPropertySource = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ThermalLoadType = IfcThermalLoadTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".SENSIBLE.")
        {
            m_ThermalLoadType = IfcThermalLoadTypeEnum_SENSIBLE;
        }
        else if (arg == ".LATENT.")
        {
            m_ThermalLoadType = IfcThermalLoadTypeEnum_LATENT;
        }
        else if (arg == ".RADIANT.")
        {
            m_ThermalLoadType = IfcThermalLoadTypeEnum_RADIANT;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_ThermalLoadType = IfcThermalLoadTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSpaceThermalLoadProperties::copy(const IfcSpaceThermalLoadProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setApplicableValueRatio(obj.m_ApplicableValueRatio);
    setThermalLoadSource(obj.m_ThermalLoadSource);
    setPropertySource(obj.m_PropertySource);
    setSourceDescription(obj.m_SourceDescription);
    setMaximumValue(obj.m_MaximumValue);
    setMinimumValue(obj.m_MinimumValue);
    setThermalLoadTimeSeriesValues((IfcTimeSeries*)copyop(obj.m_ThermalLoadTimeSeriesValues.get()));
    setUserDefinedThermalLoadSource(obj.m_UserDefinedThermalLoadSource);
    setUserDefinedPropertySource(obj.m_UserDefinedPropertySource);
    setThermalLoadType(obj.m_ThermalLoadType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSpaceThermalLoadProperties, IfcPropertySetDefinition)
