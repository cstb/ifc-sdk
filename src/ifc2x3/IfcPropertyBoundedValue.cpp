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


#include <ifc2x3/IfcPropertyBoundedValue.h>

#include <ifc2x3/IfcValue.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/IfcUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPropertyBoundedValue::IfcPropertyBoundedValue(Step::Id id, Step::SPFData *args) : 
    IfcSimpleProperty(id, args)
{
    m_UpperBoundValue = NULL;
    m_LowerBoundValue = NULL;
    m_Unit = NULL;
}

IfcPropertyBoundedValue::~IfcPropertyBoundedValue()
{}

bool IfcPropertyBoundedValue::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPropertyBoundedValue(this);
}


IfcValue *IfcPropertyBoundedValue::getUpperBoundValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UpperBoundValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcValue *IfcPropertyBoundedValue::getUpperBoundValue() const
{
    return const_cast<IfcPropertyBoundedValue *>(this)->getUpperBoundValue();
}

void IfcPropertyBoundedValue::setUpperBoundValue(const Step::RefPtr< IfcValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UpperBoundValue = value;
}

void IfcPropertyBoundedValue::unsetUpperBoundValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UpperBoundValue = Step::getUnset(getUpperBoundValue());
}

bool IfcPropertyBoundedValue::testUpperBoundValue() const
{
    return Step::isUnset(getUpperBoundValue()) == false;
}


IfcValue *IfcPropertyBoundedValue::getLowerBoundValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_LowerBoundValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcValue *IfcPropertyBoundedValue::getLowerBoundValue() const
{
    return const_cast<IfcPropertyBoundedValue *>(this)->getLowerBoundValue();
}

void IfcPropertyBoundedValue::setLowerBoundValue(const Step::RefPtr< IfcValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LowerBoundValue = value;
}

void IfcPropertyBoundedValue::unsetLowerBoundValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_LowerBoundValue = Step::getUnset(getLowerBoundValue());
}

bool IfcPropertyBoundedValue::testLowerBoundValue() const
{
    return Step::isUnset(getLowerBoundValue()) == false;
}


IfcUnit *IfcPropertyBoundedValue::getUnit()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Unit.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcUnit *IfcPropertyBoundedValue::getUnit() const
{
    return const_cast<IfcPropertyBoundedValue *>(this)->getUnit();
}

void IfcPropertyBoundedValue::setUnit(const Step::RefPtr< IfcUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = value;
}

void IfcPropertyBoundedValue::unsetUnit()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = Step::getUnset(getUnit());
}

bool IfcPropertyBoundedValue::testUnit() const
{
    return Step::isUnset(getUnit()) == false;
}

bool IfcPropertyBoundedValue::init()
{
    if (IfcSimpleProperty::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UpperBoundValue = NULL;
    }
    else
    {
        m_UpperBoundValue = new IfcValue;
        if (arg[0] == '#') {
            m_UpperBoundValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMEMEASURE")
                {
                    IfcVolumeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcVolumeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTIMEMEASURE")
                {
                    IfcTimeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcTimeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE")
                {
                    IfcThermodynamicTemperatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOLIDANGLEMEASURE")
                {
                    IfcSolidAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE")
                {
                    IfcPositivePlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANEANGLEMEASURE")
                {
                    IfcPlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPARAMETERVALUE")
                {
                    IfcParameterValue tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcParameterValue(tmp_attr1);
                }
                else if (type1 == "IFCNUMERICMEASURE")
                {
                    IfcNumericMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcNumericMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSMEASURE")
                {
                    IfcMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCURRENTMEASURE")
                {
                    IfcElectricCurrentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_UpperBoundValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCOUNTMEASURE")
                {
                    IfcCountMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcCountMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCONTEXTDEPENDENTMEASURE")
                {
                    IfcContextDependentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAREAMEASURE")
                {
                    IfcAreaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcAreaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE")
                {
                    IfcAmountOfSubstanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYMEASURE")
                {
                    IfcLuminousIntensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCREAL")
                {
                    IfcReal tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcReal(tmp_attr1);
                }
                else if (type1 == "IFCBOOLEAN")
                {
                    IfcBoolean tmp_attr1 = Step::spfToBoolean(arg)
;
                    m_UpperBoundValue->setIfcBoolean(tmp_attr1);
                }
                else if (type1 == "IFCIDENTIFIER")
                {
                    IfcIdentifier tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_UpperBoundValue->setIfcIdentifier(tmp_attr1);
                }
                else if (type1 == "IFCTEXT")
                {
                    IfcText tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_UpperBoundValue->setIfcText(tmp_attr1);
                }
                else if (type1 == "IFCLABEL")
                {
                    IfcLabel tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_UpperBoundValue->setIfcLabel(tmp_attr1);
                }
                else if (type1 == "IFCLOGICAL")
                {
                    IfcLogical tmp_attr1 = Step::spfToLogical(arg)
;
                    m_UpperBoundValue->setIfcLogical(tmp_attr1);
                }
                else if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE")
                {
                    IfcVolumetricFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE")
                {
                    IfcThermalTransmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALRESISTANCEMEASURE")
                {
                    IfcThermalResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALADMITTANCEMEASURE")
                {
                    IfcThermalAdmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPRESSUREMEASURE")
                {
                    IfcPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOWERMEASURE")
                {
                    IfcPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSFLOWRATEMEASURE")
                {
                    IfcMassFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSDENSITYMEASURE")
                {
                    IfcMassDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARVELOCITYMEASURE")
                {
                    IfcLinearVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCKINEMATICVISCOSITYMEASURE")
                {
                    IfcKinematicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATFLUXDENSITYMEASURE")
                {
                    IfcHeatFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFREQUENCYMEASURE")
                {
                    IfcFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCENERGYMEASURE")
                {
                    IfcEnergyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcEnergyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICVOLTAGEMEASURE")
                {
                    IfcElectricVoltageMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDYNAMICVISCOSITYMEASURE")
                {
                    IfcDynamicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCANGULARVELOCITYMEASURE")
                {
                    IfcAngularVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE")
                {
                    IfcThermalConductivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOLECULARWEIGHTMEASURE")
                {
                    IfcMolecularWeightMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                else if (type1 == "IFCVAPORPERMEABILITYMEASURE")
                {
                    IfcVaporPermeabilityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE")
                {
                    IfcMoistureDiffusivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE")
                {
                    IfcIsothermalMoistureCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE")
                {
                    IfcSpecificHeatCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMONETARYMEASURE")
                {
                    IfcMonetaryMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE")
                {
                    IfcMagneticFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXMEASURE")
                {
                    IfcMagneticFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSFLUXMEASURE")
                {
                    IfcLuminousFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFORCEMEASURE")
                {
                    IfcForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCINDUCTANCEMEASURE")
                {
                    IfcInductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcInductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCILLUMINANCEMEASURE")
                {
                    IfcIlluminanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICRESISTANCEMEASURE")
                {
                    IfcElectricResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCONDUCTANCEMEASURE")
                {
                    IfcElectricConductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCHARGEMEASURE")
                {
                    IfcElectricChargeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDOSEEQUIVALENTMEASURE")
                {
                    IfcDoseEquivalentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCAPACITANCEMEASURE")
                {
                    IfcElectricCapacitanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCABSORBEDDOSEMEASURE")
                {
                    IfcAbsorbedDoseMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRADIOACTIVITYMEASURE")
                {
                    IfcRadioActivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALFREQUENCYMEASURE")
                {
                    IfcRotationalFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTORQUEMEASURE")
                {
                    IfcTorqueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcTorqueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCACCELERATIONMEASURE")
                {
                    IfcAccelerationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARFORCEMEASURE")
                {
                    IfcLinearForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARSTIFFNESSMEASURE")
                {
                    IfcLinearStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFELASTICITYMEASURE")
                {
                    IfcModulusOfElasticityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOMENTOFINERTIAMEASURE")
                {
                    IfcMomentOfInertiaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANARFORCEMEASURE")
                {
                    IfcPlanarForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALSTIFFNESSMEASURE")
                {
                    IfcRotationalStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSHEARMODULUSMEASURE")
                {
                    IfcShearModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARMOMENTMEASURE")
                {
                    IfcLinearMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE")
                {
                    IfcLuminousIntensityDistributionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCURVATUREMEASURE")
                {
                    IfcCurvatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSPERLENGTHMEASURE")
                {
                    IfcMassPerLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfLinearSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfRotationalSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALMASSMEASURE")
                {
                    IfcRotationalMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE")
                {
                    IfcSectionalAreaIntegralMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONMODULUSMEASURE")
                {
                    IfcSectionModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTEMPERATUREGRADIENTMEASURE")
                {
                    IfcTemperatureGradientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE")
                {
                    IfcThermalExpansionCoefficientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGCONSTANTMEASURE")
                {
                    IfcWarpingConstantMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGMOMENTMEASURE")
                {
                    IfcWarpingMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPOWERMEASURE")
                {
                    IfcSoundPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPRESSUREMEASURE")
                {
                    IfcSoundPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATINGVALUEMEASURE")
                {
                    IfcHeatingValueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPHMEASURE")
                {
                    IfcPHMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcPHMeasure(tmp_attr1);
                }
                else if (type1 == "IFCIONCONCENTRATIONMEASURE")
                {
                    IfcIonConcentrationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_UpperBoundValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_LowerBoundValue = NULL;
    }
    else
    {
        m_LowerBoundValue = new IfcValue;
        if (arg[0] == '#') {
            m_LowerBoundValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMEMEASURE")
                {
                    IfcVolumeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcVolumeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTIMEMEASURE")
                {
                    IfcTimeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcTimeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE")
                {
                    IfcThermodynamicTemperatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOLIDANGLEMEASURE")
                {
                    IfcSolidAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE")
                {
                    IfcPositivePlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANEANGLEMEASURE")
                {
                    IfcPlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPARAMETERVALUE")
                {
                    IfcParameterValue tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcParameterValue(tmp_attr1);
                }
                else if (type1 == "IFCNUMERICMEASURE")
                {
                    IfcNumericMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcNumericMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSMEASURE")
                {
                    IfcMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCURRENTMEASURE")
                {
                    IfcElectricCurrentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_LowerBoundValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCOUNTMEASURE")
                {
                    IfcCountMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcCountMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCONTEXTDEPENDENTMEASURE")
                {
                    IfcContextDependentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAREAMEASURE")
                {
                    IfcAreaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcAreaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE")
                {
                    IfcAmountOfSubstanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYMEASURE")
                {
                    IfcLuminousIntensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCREAL")
                {
                    IfcReal tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcReal(tmp_attr1);
                }
                else if (type1 == "IFCBOOLEAN")
                {
                    IfcBoolean tmp_attr1 = Step::spfToBoolean(arg)
;
                    m_LowerBoundValue->setIfcBoolean(tmp_attr1);
                }
                else if (type1 == "IFCIDENTIFIER")
                {
                    IfcIdentifier tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_LowerBoundValue->setIfcIdentifier(tmp_attr1);
                }
                else if (type1 == "IFCTEXT")
                {
                    IfcText tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_LowerBoundValue->setIfcText(tmp_attr1);
                }
                else if (type1 == "IFCLABEL")
                {
                    IfcLabel tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_LowerBoundValue->setIfcLabel(tmp_attr1);
                }
                else if (type1 == "IFCLOGICAL")
                {
                    IfcLogical tmp_attr1 = Step::spfToLogical(arg)
;
                    m_LowerBoundValue->setIfcLogical(tmp_attr1);
                }
                else if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE")
                {
                    IfcVolumetricFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE")
                {
                    IfcThermalTransmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALRESISTANCEMEASURE")
                {
                    IfcThermalResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALADMITTANCEMEASURE")
                {
                    IfcThermalAdmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPRESSUREMEASURE")
                {
                    IfcPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOWERMEASURE")
                {
                    IfcPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSFLOWRATEMEASURE")
                {
                    IfcMassFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSDENSITYMEASURE")
                {
                    IfcMassDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARVELOCITYMEASURE")
                {
                    IfcLinearVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCKINEMATICVISCOSITYMEASURE")
                {
                    IfcKinematicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATFLUXDENSITYMEASURE")
                {
                    IfcHeatFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFREQUENCYMEASURE")
                {
                    IfcFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCENERGYMEASURE")
                {
                    IfcEnergyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcEnergyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICVOLTAGEMEASURE")
                {
                    IfcElectricVoltageMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDYNAMICVISCOSITYMEASURE")
                {
                    IfcDynamicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCANGULARVELOCITYMEASURE")
                {
                    IfcAngularVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE")
                {
                    IfcThermalConductivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOLECULARWEIGHTMEASURE")
                {
                    IfcMolecularWeightMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                else if (type1 == "IFCVAPORPERMEABILITYMEASURE")
                {
                    IfcVaporPermeabilityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE")
                {
                    IfcMoistureDiffusivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE")
                {
                    IfcIsothermalMoistureCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE")
                {
                    IfcSpecificHeatCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMONETARYMEASURE")
                {
                    IfcMonetaryMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE")
                {
                    IfcMagneticFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXMEASURE")
                {
                    IfcMagneticFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSFLUXMEASURE")
                {
                    IfcLuminousFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFORCEMEASURE")
                {
                    IfcForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCINDUCTANCEMEASURE")
                {
                    IfcInductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcInductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCILLUMINANCEMEASURE")
                {
                    IfcIlluminanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICRESISTANCEMEASURE")
                {
                    IfcElectricResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCONDUCTANCEMEASURE")
                {
                    IfcElectricConductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCHARGEMEASURE")
                {
                    IfcElectricChargeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDOSEEQUIVALENTMEASURE")
                {
                    IfcDoseEquivalentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCAPACITANCEMEASURE")
                {
                    IfcElectricCapacitanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCABSORBEDDOSEMEASURE")
                {
                    IfcAbsorbedDoseMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRADIOACTIVITYMEASURE")
                {
                    IfcRadioActivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALFREQUENCYMEASURE")
                {
                    IfcRotationalFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTORQUEMEASURE")
                {
                    IfcTorqueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcTorqueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCACCELERATIONMEASURE")
                {
                    IfcAccelerationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARFORCEMEASURE")
                {
                    IfcLinearForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARSTIFFNESSMEASURE")
                {
                    IfcLinearStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFELASTICITYMEASURE")
                {
                    IfcModulusOfElasticityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOMENTOFINERTIAMEASURE")
                {
                    IfcMomentOfInertiaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANARFORCEMEASURE")
                {
                    IfcPlanarForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALSTIFFNESSMEASURE")
                {
                    IfcRotationalStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSHEARMODULUSMEASURE")
                {
                    IfcShearModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARMOMENTMEASURE")
                {
                    IfcLinearMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE")
                {
                    IfcLuminousIntensityDistributionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCURVATUREMEASURE")
                {
                    IfcCurvatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSPERLENGTHMEASURE")
                {
                    IfcMassPerLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfLinearSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfRotationalSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALMASSMEASURE")
                {
                    IfcRotationalMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE")
                {
                    IfcSectionalAreaIntegralMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONMODULUSMEASURE")
                {
                    IfcSectionModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTEMPERATUREGRADIENTMEASURE")
                {
                    IfcTemperatureGradientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE")
                {
                    IfcThermalExpansionCoefficientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGCONSTANTMEASURE")
                {
                    IfcWarpingConstantMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGMOMENTMEASURE")
                {
                    IfcWarpingMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPOWERMEASURE")
                {
                    IfcSoundPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPRESSUREMEASURE")
                {
                    IfcSoundPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATINGVALUEMEASURE")
                {
                    IfcHeatingValueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPHMEASURE")
                {
                    IfcPHMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcPHMeasure(tmp_attr1);
                }
                else if (type1 == "IFCIONCONCENTRATIONMEASURE")
                {
                    IfcIonConcentrationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_LowerBoundValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Unit = NULL;
    }
    else
    {
        m_Unit = new IfcUnit;
        if (arg[0] == '#') {
            m_Unit->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcPropertyBoundedValue::copy(const IfcPropertyBoundedValue &obj, const CopyOp &copyop)
{
    IfcSimpleProperty::copy(obj, copyop);
    setUpperBoundValue((IfcValue*)copyop(obj.m_UpperBoundValue.get()));
    setLowerBoundValue((IfcValue*)copyop(obj.m_LowerBoundValue.get()));
    setUnit((IfcUnit*)copyop(obj.m_Unit.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPropertyBoundedValue, IfcSimpleProperty)
