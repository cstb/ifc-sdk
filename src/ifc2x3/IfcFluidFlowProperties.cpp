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


#include <ifc2x3/IfcFluidFlowProperties.h>

#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcDerivedMeasureValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFluidFlowProperties::IfcFluidFlowProperties(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_PropertySource = IfcPropertySourceEnum_UNSET;
    m_FlowConditionTimeSeries = NULL;
    m_VelocityTimeSeries = NULL;
    m_FlowrateTimeSeries = NULL;
    m_Fluid = NULL;
    m_PressureTimeSeries = NULL;
    m_UserDefinedPropertySource = Step::getUnset(m_UserDefinedPropertySource);
    m_TemperatureSingleValue = Step::getUnset(m_TemperatureSingleValue);
    m_WetBulbTemperatureSingleValue = Step::getUnset(m_WetBulbTemperatureSingleValue);
    m_WetBulbTemperatureTimeSeries = NULL;
    m_TemperatureTimeSeries = NULL;
    m_FlowrateSingleValue = NULL;
    m_FlowConditionSingleValue = Step::getUnset(m_FlowConditionSingleValue);
    m_VelocitySingleValue = Step::getUnset(m_VelocitySingleValue);
    m_PressureSingleValue = Step::getUnset(m_PressureSingleValue);
}

IfcFluidFlowProperties::~IfcFluidFlowProperties()
{}

bool IfcFluidFlowProperties::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFluidFlowProperties(this);
}


IfcPropertySourceEnum IfcFluidFlowProperties::getPropertySource()
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

IfcPropertySourceEnum IfcFluidFlowProperties::getPropertySource() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getPropertySource();
}

void IfcFluidFlowProperties::setPropertySource(IfcPropertySourceEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PropertySource = value;
}

void IfcFluidFlowProperties::unsetPropertySource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PropertySource = IfcPropertySourceEnum_UNSET;
}

bool IfcFluidFlowProperties::testPropertySource() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPropertySource()) == false;
}


IfcTimeSeries *IfcFluidFlowProperties::getFlowConditionTimeSeries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlowConditionTimeSeries.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcFluidFlowProperties::getFlowConditionTimeSeries() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getFlowConditionTimeSeries();
}

void IfcFluidFlowProperties::setFlowConditionTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowConditionTimeSeries = value;
}

void IfcFluidFlowProperties::unsetFlowConditionTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowConditionTimeSeries = Step::getUnset(getFlowConditionTimeSeries());
}

bool IfcFluidFlowProperties::testFlowConditionTimeSeries() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlowConditionTimeSeries()) == false;
}


IfcTimeSeries *IfcFluidFlowProperties::getVelocityTimeSeries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VelocityTimeSeries.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcFluidFlowProperties::getVelocityTimeSeries() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getVelocityTimeSeries();
}

void IfcFluidFlowProperties::setVelocityTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VelocityTimeSeries = value;
}

void IfcFluidFlowProperties::unsetVelocityTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VelocityTimeSeries = Step::getUnset(getVelocityTimeSeries());
}

bool IfcFluidFlowProperties::testVelocityTimeSeries() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getVelocityTimeSeries()) == false;
}


IfcTimeSeries *IfcFluidFlowProperties::getFlowrateTimeSeries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlowrateTimeSeries.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcFluidFlowProperties::getFlowrateTimeSeries() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getFlowrateTimeSeries();
}

void IfcFluidFlowProperties::setFlowrateTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowrateTimeSeries = value;
}

void IfcFluidFlowProperties::unsetFlowrateTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowrateTimeSeries = Step::getUnset(getFlowrateTimeSeries());
}

bool IfcFluidFlowProperties::testFlowrateTimeSeries() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlowrateTimeSeries()) == false;
}


IfcMaterial *IfcFluidFlowProperties::getFluid()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Fluid.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcMaterial *IfcFluidFlowProperties::getFluid() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getFluid();
}

void IfcFluidFlowProperties::setFluid(const Step::RefPtr< IfcMaterial > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Fluid = value;
}

void IfcFluidFlowProperties::unsetFluid()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Fluid = Step::getUnset(getFluid());
}

bool IfcFluidFlowProperties::testFluid() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFluid()) == false;
}


IfcTimeSeries *IfcFluidFlowProperties::getPressureTimeSeries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PressureTimeSeries.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcFluidFlowProperties::getPressureTimeSeries() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getPressureTimeSeries();
}

void IfcFluidFlowProperties::setPressureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PressureTimeSeries = value;
}

void IfcFluidFlowProperties::unsetPressureTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PressureTimeSeries = Step::getUnset(getPressureTimeSeries());
}

bool IfcFluidFlowProperties::testPressureTimeSeries() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPressureTimeSeries()) == false;
}


IfcLabel IfcFluidFlowProperties::getUserDefinedPropertySource()
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

const IfcLabel IfcFluidFlowProperties::getUserDefinedPropertySource() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getUserDefinedPropertySource();
}

void IfcFluidFlowProperties::setUserDefinedPropertySource(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedPropertySource = value;
}

void IfcFluidFlowProperties::unsetUserDefinedPropertySource()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UserDefinedPropertySource = Step::getUnset(getUserDefinedPropertySource());
}

bool IfcFluidFlowProperties::testUserDefinedPropertySource() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUserDefinedPropertySource()) == false;
}


IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getTemperatureSingleValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TemperatureSingleValue;
    }
    else 
    {
        return Step::getUnset(m_TemperatureSingleValue);
    }    
}

IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getTemperatureSingleValue() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getTemperatureSingleValue();
}

void IfcFluidFlowProperties::setTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TemperatureSingleValue = value;
}

void IfcFluidFlowProperties::unsetTemperatureSingleValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TemperatureSingleValue = Step::getUnset(getTemperatureSingleValue());
}

bool IfcFluidFlowProperties::testTemperatureSingleValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTemperatureSingleValue()) == false;
}


IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getWetBulbTemperatureSingleValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WetBulbTemperatureSingleValue;
    }
    else 
    {
        return Step::getUnset(m_WetBulbTemperatureSingleValue);
    }    
}

IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getWetBulbTemperatureSingleValue() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getWetBulbTemperatureSingleValue();
}

void IfcFluidFlowProperties::setWetBulbTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WetBulbTemperatureSingleValue = value;
}

void IfcFluidFlowProperties::unsetWetBulbTemperatureSingleValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WetBulbTemperatureSingleValue = Step::getUnset(getWetBulbTemperatureSingleValue());
}

bool IfcFluidFlowProperties::testWetBulbTemperatureSingleValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWetBulbTemperatureSingleValue()) == false;
}


IfcTimeSeries *IfcFluidFlowProperties::getWetBulbTemperatureTimeSeries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WetBulbTemperatureTimeSeries.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcFluidFlowProperties::getWetBulbTemperatureTimeSeries() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getWetBulbTemperatureTimeSeries();
}

void IfcFluidFlowProperties::setWetBulbTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WetBulbTemperatureTimeSeries = value;
}

void IfcFluidFlowProperties::unsetWetBulbTemperatureTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WetBulbTemperatureTimeSeries = Step::getUnset(getWetBulbTemperatureTimeSeries());
}

bool IfcFluidFlowProperties::testWetBulbTemperatureTimeSeries() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getWetBulbTemperatureTimeSeries()) == false;
}


IfcTimeSeries *IfcFluidFlowProperties::getTemperatureTimeSeries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TemperatureTimeSeries.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcFluidFlowProperties::getTemperatureTimeSeries() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getTemperatureTimeSeries();
}

void IfcFluidFlowProperties::setTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TemperatureTimeSeries = value;
}

void IfcFluidFlowProperties::unsetTemperatureTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TemperatureTimeSeries = Step::getUnset(getTemperatureTimeSeries());
}

bool IfcFluidFlowProperties::testTemperatureTimeSeries() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTemperatureTimeSeries()) == false;
}


IfcDerivedMeasureValue *IfcFluidFlowProperties::getFlowrateSingleValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlowrateSingleValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDerivedMeasureValue *IfcFluidFlowProperties::getFlowrateSingleValue() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getFlowrateSingleValue();
}

void IfcFluidFlowProperties::setFlowrateSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowrateSingleValue = value;
}

void IfcFluidFlowProperties::unsetFlowrateSingleValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowrateSingleValue = Step::getUnset(getFlowrateSingleValue());
}

bool IfcFluidFlowProperties::testFlowrateSingleValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlowrateSingleValue()) == false;
}


IfcPositiveRatioMeasure IfcFluidFlowProperties::getFlowConditionSingleValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlowConditionSingleValue;
    }
    else 
    {
        return Step::getUnset(m_FlowConditionSingleValue);
    }    
}

IfcPositiveRatioMeasure IfcFluidFlowProperties::getFlowConditionSingleValue() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getFlowConditionSingleValue();
}

void IfcFluidFlowProperties::setFlowConditionSingleValue(IfcPositiveRatioMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowConditionSingleValue = value;
}

void IfcFluidFlowProperties::unsetFlowConditionSingleValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowConditionSingleValue = Step::getUnset(getFlowConditionSingleValue());
}

bool IfcFluidFlowProperties::testFlowConditionSingleValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlowConditionSingleValue()) == false;
}


IfcLinearVelocityMeasure IfcFluidFlowProperties::getVelocitySingleValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_VelocitySingleValue;
    }
    else 
    {
        return Step::getUnset(m_VelocitySingleValue);
    }    
}

IfcLinearVelocityMeasure IfcFluidFlowProperties::getVelocitySingleValue() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getVelocitySingleValue();
}

void IfcFluidFlowProperties::setVelocitySingleValue(IfcLinearVelocityMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VelocitySingleValue = value;
}

void IfcFluidFlowProperties::unsetVelocitySingleValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_VelocitySingleValue = Step::getUnset(getVelocitySingleValue());
}

bool IfcFluidFlowProperties::testVelocitySingleValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getVelocitySingleValue()) == false;
}


IfcPressureMeasure IfcFluidFlowProperties::getPressureSingleValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PressureSingleValue;
    }
    else 
    {
        return Step::getUnset(m_PressureSingleValue);
    }    
}

IfcPressureMeasure IfcFluidFlowProperties::getPressureSingleValue() const
{
    return const_cast<IfcFluidFlowProperties *>(this)->getPressureSingleValue();
}

void IfcFluidFlowProperties::setPressureSingleValue(IfcPressureMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PressureSingleValue = value;
}

void IfcFluidFlowProperties::unsetPressureSingleValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PressureSingleValue = Step::getUnset(getPressureSingleValue());
}

bool IfcFluidFlowProperties::testPressureSingleValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPressureSingleValue()) == false;
}

bool IfcFluidFlowProperties::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
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
        m_FlowConditionTimeSeries = NULL;
    }
    else
    {
        m_FlowConditionTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VelocityTimeSeries = NULL;
    }
    else
    {
        m_VelocityTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FlowrateTimeSeries = NULL;
    }
    else
    {
        m_FlowrateTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Fluid = NULL;
    }
    else
    {
        m_Fluid = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PressureTimeSeries = NULL;
    }
    else
    {
        m_PressureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
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
        m_TemperatureSingleValue = Step::getUnset(m_TemperatureSingleValue);
    }
    else
    {
        m_TemperatureSingleValue = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WetBulbTemperatureSingleValue = Step::getUnset(m_WetBulbTemperatureSingleValue);
    }
    else
    {
        m_WetBulbTemperatureSingleValue = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WetBulbTemperatureTimeSeries = NULL;
    }
    else
    {
        m_WetBulbTemperatureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TemperatureTimeSeries = NULL;
    }
    else
    {
        m_TemperatureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FlowrateSingleValue = NULL;
    }
    else
    {
        m_FlowrateSingleValue = new IfcDerivedMeasureValue;
        if (arg[0] == '#') {
            m_FlowrateSingleValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE")
                {
                    IfcVolumetricFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE")
                {
                    IfcThermalTransmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALRESISTANCEMEASURE")
                {
                    IfcThermalResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALADMITTANCEMEASURE")
                {
                    IfcThermalAdmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPRESSUREMEASURE")
                {
                    IfcPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOWERMEASURE")
                {
                    IfcPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSFLOWRATEMEASURE")
                {
                    IfcMassFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSDENSITYMEASURE")
                {
                    IfcMassDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARVELOCITYMEASURE")
                {
                    IfcLinearVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCKINEMATICVISCOSITYMEASURE")
                {
                    IfcKinematicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATFLUXDENSITYMEASURE")
                {
                    IfcHeatFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFREQUENCYMEASURE")
                {
                    IfcFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCENERGYMEASURE")
                {
                    IfcEnergyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcEnergyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICVOLTAGEMEASURE")
                {
                    IfcElectricVoltageMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDYNAMICVISCOSITYMEASURE")
                {
                    IfcDynamicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCANGULARVELOCITYMEASURE")
                {
                    IfcAngularVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE")
                {
                    IfcThermalConductivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOLECULARWEIGHTMEASURE")
                {
                    IfcMolecularWeightMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                else if (type1 == "IFCVAPORPERMEABILITYMEASURE")
                {
                    IfcVaporPermeabilityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE")
                {
                    IfcMoistureDiffusivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE")
                {
                    IfcIsothermalMoistureCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE")
                {
                    IfcSpecificHeatCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMONETARYMEASURE")
                {
                    IfcMonetaryMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE")
                {
                    IfcMagneticFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXMEASURE")
                {
                    IfcMagneticFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSFLUXMEASURE")
                {
                    IfcLuminousFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFORCEMEASURE")
                {
                    IfcForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCINDUCTANCEMEASURE")
                {
                    IfcInductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcInductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCILLUMINANCEMEASURE")
                {
                    IfcIlluminanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICRESISTANCEMEASURE")
                {
                    IfcElectricResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCONDUCTANCEMEASURE")
                {
                    IfcElectricConductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCHARGEMEASURE")
                {
                    IfcElectricChargeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDOSEEQUIVALENTMEASURE")
                {
                    IfcDoseEquivalentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCAPACITANCEMEASURE")
                {
                    IfcElectricCapacitanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCABSORBEDDOSEMEASURE")
                {
                    IfcAbsorbedDoseMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRADIOACTIVITYMEASURE")
                {
                    IfcRadioActivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALFREQUENCYMEASURE")
                {
                    IfcRotationalFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTORQUEMEASURE")
                {
                    IfcTorqueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcTorqueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCACCELERATIONMEASURE")
                {
                    IfcAccelerationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARFORCEMEASURE")
                {
                    IfcLinearForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARSTIFFNESSMEASURE")
                {
                    IfcLinearStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFELASTICITYMEASURE")
                {
                    IfcModulusOfElasticityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOMENTOFINERTIAMEASURE")
                {
                    IfcMomentOfInertiaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANARFORCEMEASURE")
                {
                    IfcPlanarForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALSTIFFNESSMEASURE")
                {
                    IfcRotationalStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSHEARMODULUSMEASURE")
                {
                    IfcShearModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARMOMENTMEASURE")
                {
                    IfcLinearMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE")
                {
                    IfcLuminousIntensityDistributionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCURVATUREMEASURE")
                {
                    IfcCurvatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSPERLENGTHMEASURE")
                {
                    IfcMassPerLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfLinearSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfRotationalSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALMASSMEASURE")
                {
                    IfcRotationalMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE")
                {
                    IfcSectionalAreaIntegralMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONMODULUSMEASURE")
                {
                    IfcSectionModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTEMPERATUREGRADIENTMEASURE")
                {
                    IfcTemperatureGradientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE")
                {
                    IfcThermalExpansionCoefficientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGCONSTANTMEASURE")
                {
                    IfcWarpingConstantMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGMOMENTMEASURE")
                {
                    IfcWarpingMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPOWERMEASURE")
                {
                    IfcSoundPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPRESSUREMEASURE")
                {
                    IfcSoundPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATINGVALUEMEASURE")
                {
                    IfcHeatingValueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPHMEASURE")
                {
                    IfcPHMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcPHMeasure(tmp_attr1);
                }
                else if (type1 == "IFCIONCONCENTRATIONMEASURE")
                {
                    IfcIonConcentrationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_FlowrateSingleValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FlowConditionSingleValue = Step::getUnset(m_FlowConditionSingleValue);
    }
    else
    {
        m_FlowConditionSingleValue = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_VelocitySingleValue = Step::getUnset(m_VelocitySingleValue);
    }
    else
    {
        m_VelocitySingleValue = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PressureSingleValue = Step::getUnset(m_PressureSingleValue);
    }
    else
    {
        m_PressureSingleValue = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcFluidFlowProperties::copy(const IfcFluidFlowProperties &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setPropertySource(obj.m_PropertySource);
    setFlowConditionTimeSeries((IfcTimeSeries*)copyop(obj.m_FlowConditionTimeSeries.get()));
    setVelocityTimeSeries((IfcTimeSeries*)copyop(obj.m_VelocityTimeSeries.get()));
    setFlowrateTimeSeries((IfcTimeSeries*)copyop(obj.m_FlowrateTimeSeries.get()));
    setFluid((IfcMaterial*)copyop(obj.m_Fluid.get()));
    setPressureTimeSeries((IfcTimeSeries*)copyop(obj.m_PressureTimeSeries.get()));
    setUserDefinedPropertySource(obj.m_UserDefinedPropertySource);
    setTemperatureSingleValue(obj.m_TemperatureSingleValue);
    setWetBulbTemperatureSingleValue(obj.m_WetBulbTemperatureSingleValue);
    setWetBulbTemperatureTimeSeries((IfcTimeSeries*)copyop(obj.m_WetBulbTemperatureTimeSeries.get()));
    setTemperatureTimeSeries((IfcTimeSeries*)copyop(obj.m_TemperatureTimeSeries.get()));
    setFlowrateSingleValue((IfcDerivedMeasureValue*)copyop(obj.m_FlowrateSingleValue.get()));
    setFlowConditionSingleValue(obj.m_FlowConditionSingleValue);
    setVelocitySingleValue(obj.m_VelocitySingleValue);
    setPressureSingleValue(obj.m_PressureSingleValue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFluidFlowProperties, IfcPropertySetDefinition)
