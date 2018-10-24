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


#include <ifc2x3/IfcSoundValue.h>

#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/IfcDerivedMeasureValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSoundValue::IfcSoundValue(Step::Id id, Step::SPFData *args) : 
    IfcPropertySetDefinition(id, args)
{
    m_SoundLevelTimeSeries = NULL;
    m_Frequency = Step::getUnset(m_Frequency);
    m_SoundLevelSingleValue = NULL;
}

IfcSoundValue::~IfcSoundValue()
{}

bool IfcSoundValue::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSoundValue(this);
}


IfcTimeSeries *IfcSoundValue::getSoundLevelTimeSeries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SoundLevelTimeSeries.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcSoundValue::getSoundLevelTimeSeries() const
{
    return const_cast<IfcSoundValue *>(this)->getSoundLevelTimeSeries();
}

void IfcSoundValue::setSoundLevelTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SoundLevelTimeSeries = value;
}

void IfcSoundValue::unsetSoundLevelTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SoundLevelTimeSeries = Step::getUnset(getSoundLevelTimeSeries());
}

bool IfcSoundValue::testSoundLevelTimeSeries() const
{
    return Step::isUnset(getSoundLevelTimeSeries()) == false;
}


IfcFrequencyMeasure IfcSoundValue::getFrequency()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Frequency;
    }
    else 
    {
        return Step::getUnset(m_Frequency);
    }    
}

IfcFrequencyMeasure IfcSoundValue::getFrequency() const
{
    return const_cast<IfcSoundValue *>(this)->getFrequency();
}

void IfcSoundValue::setFrequency(IfcFrequencyMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Frequency = value;
}

void IfcSoundValue::unsetFrequency()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Frequency = Step::getUnset(getFrequency());
}

bool IfcSoundValue::testFrequency() const
{
    return Step::isUnset(getFrequency()) == false;
}


IfcDerivedMeasureValue *IfcSoundValue::getSoundLevelSingleValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SoundLevelSingleValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcDerivedMeasureValue *IfcSoundValue::getSoundLevelSingleValue() const
{
    return const_cast<IfcSoundValue *>(this)->getSoundLevelSingleValue();
}

void IfcSoundValue::setSoundLevelSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SoundLevelSingleValue = value;
}

void IfcSoundValue::unsetSoundLevelSingleValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SoundLevelSingleValue = Step::getUnset(getSoundLevelSingleValue());
}

bool IfcSoundValue::testSoundLevelSingleValue() const
{
    return Step::isUnset(getSoundLevelSingleValue()) == false;
}

bool IfcSoundValue::init()
{
    if (IfcPropertySetDefinition::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SoundLevelTimeSeries = NULL;
    }
    else
    {
        m_SoundLevelTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Frequency = Step::getUnset(m_Frequency);
    }
    else
    {
        m_Frequency = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SoundLevelSingleValue = NULL;
    }
    else
    {
        m_SoundLevelSingleValue = new IfcDerivedMeasureValue;
        if (arg[0] == '#') {
            m_SoundLevelSingleValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_SoundLevelSingleValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE")
                {
                    IfcThermalTransmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALRESISTANCEMEASURE")
                {
                    IfcThermalResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALADMITTANCEMEASURE")
                {
                    IfcThermalAdmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPRESSUREMEASURE")
                {
                    IfcPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOWERMEASURE")
                {
                    IfcPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSFLOWRATEMEASURE")
                {
                    IfcMassFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSDENSITYMEASURE")
                {
                    IfcMassDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARVELOCITYMEASURE")
                {
                    IfcLinearVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCKINEMATICVISCOSITYMEASURE")
                {
                    IfcKinematicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATFLUXDENSITYMEASURE")
                {
                    IfcHeatFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFREQUENCYMEASURE")
                {
                    IfcFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCENERGYMEASURE")
                {
                    IfcEnergyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcEnergyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICVOLTAGEMEASURE")
                {
                    IfcElectricVoltageMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDYNAMICVISCOSITYMEASURE")
                {
                    IfcDynamicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCANGULARVELOCITYMEASURE")
                {
                    IfcAngularVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE")
                {
                    IfcThermalConductivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOLECULARWEIGHTMEASURE")
                {
                    IfcMolecularWeightMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                else if (type1 == "IFCVAPORPERMEABILITYMEASURE")
                {
                    IfcVaporPermeabilityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE")
                {
                    IfcMoistureDiffusivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE")
                {
                    IfcIsothermalMoistureCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE")
                {
                    IfcSpecificHeatCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMONETARYMEASURE")
                {
                    IfcMonetaryMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE")
                {
                    IfcMagneticFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXMEASURE")
                {
                    IfcMagneticFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSFLUXMEASURE")
                {
                    IfcLuminousFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFORCEMEASURE")
                {
                    IfcForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCINDUCTANCEMEASURE")
                {
                    IfcInductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcInductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCILLUMINANCEMEASURE")
                {
                    IfcIlluminanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICRESISTANCEMEASURE")
                {
                    IfcElectricResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCONDUCTANCEMEASURE")
                {
                    IfcElectricConductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCHARGEMEASURE")
                {
                    IfcElectricChargeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDOSEEQUIVALENTMEASURE")
                {
                    IfcDoseEquivalentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCAPACITANCEMEASURE")
                {
                    IfcElectricCapacitanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCABSORBEDDOSEMEASURE")
                {
                    IfcAbsorbedDoseMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRADIOACTIVITYMEASURE")
                {
                    IfcRadioActivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALFREQUENCYMEASURE")
                {
                    IfcRotationalFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTORQUEMEASURE")
                {
                    IfcTorqueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcTorqueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCACCELERATIONMEASURE")
                {
                    IfcAccelerationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARFORCEMEASURE")
                {
                    IfcLinearForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARSTIFFNESSMEASURE")
                {
                    IfcLinearStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFELASTICITYMEASURE")
                {
                    IfcModulusOfElasticityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOMENTOFINERTIAMEASURE")
                {
                    IfcMomentOfInertiaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANARFORCEMEASURE")
                {
                    IfcPlanarForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALSTIFFNESSMEASURE")
                {
                    IfcRotationalStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSHEARMODULUSMEASURE")
                {
                    IfcShearModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARMOMENTMEASURE")
                {
                    IfcLinearMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE")
                {
                    IfcLuminousIntensityDistributionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCURVATUREMEASURE")
                {
                    IfcCurvatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSPERLENGTHMEASURE")
                {
                    IfcMassPerLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfLinearSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfRotationalSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALMASSMEASURE")
                {
                    IfcRotationalMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE")
                {
                    IfcSectionalAreaIntegralMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONMODULUSMEASURE")
                {
                    IfcSectionModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTEMPERATUREGRADIENTMEASURE")
                {
                    IfcTemperatureGradientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE")
                {
                    IfcThermalExpansionCoefficientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGCONSTANTMEASURE")
                {
                    IfcWarpingConstantMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGMOMENTMEASURE")
                {
                    IfcWarpingMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPOWERMEASURE")
                {
                    IfcSoundPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPRESSUREMEASURE")
                {
                    IfcSoundPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATINGVALUEMEASURE")
                {
                    IfcHeatingValueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPHMEASURE")
                {
                    IfcPHMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcPHMeasure(tmp_attr1);
                }
                else if (type1 == "IFCIONCONCENTRATIONMEASURE")
                {
                    IfcIonConcentrationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_SoundLevelSingleValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcSoundValue::copy(const IfcSoundValue &obj, const CopyOp &copyop)
{
    IfcPropertySetDefinition::copy(obj, copyop);
    setSoundLevelTimeSeries((IfcTimeSeries*)copyop(obj.m_SoundLevelTimeSeries.get()));
    setFrequency(obj.m_Frequency);
    setSoundLevelSingleValue((IfcDerivedMeasureValue*)copyop(obj.m_SoundLevelSingleValue.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSoundValue, IfcPropertySetDefinition)
