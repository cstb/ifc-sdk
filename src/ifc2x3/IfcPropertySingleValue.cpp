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


#include <ifc2x3/IfcPropertySingleValue.h>

#include <ifc2x3/IfcValue.h>
#include <ifc2x3/IfcUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPropertySingleValue::IfcPropertySingleValue(Step::Id id, Step::SPFData *args) : 
    IfcSimpleProperty(id, args)
{
    m_NominalValue = NULL;
    m_Unit = NULL;
}

IfcPropertySingleValue::~IfcPropertySingleValue()
{}

bool IfcPropertySingleValue::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPropertySingleValue(this);
}


IfcValue *IfcPropertySingleValue::getNominalValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_NominalValue.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcValue *IfcPropertySingleValue::getNominalValue() const
{
    return const_cast<IfcPropertySingleValue *>(this)->getNominalValue();
}

void IfcPropertySingleValue::setNominalValue(const Step::RefPtr< IfcValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalValue = value;
}

void IfcPropertySingleValue::unsetNominalValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_NominalValue = Step::getUnset(getNominalValue());
}

bool IfcPropertySingleValue::testNominalValue() const
{
    return Step::isUnset(getNominalValue()) == false;
}


IfcUnit *IfcPropertySingleValue::getUnit()
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

const IfcUnit *IfcPropertySingleValue::getUnit() const
{
    return const_cast<IfcPropertySingleValue *>(this)->getUnit();
}

void IfcPropertySingleValue::setUnit(const Step::RefPtr< IfcUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = value;
}

void IfcPropertySingleValue::unsetUnit()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = Step::getUnset(getUnit());
}

bool IfcPropertySingleValue::testUnit() const
{
    return Step::isUnset(getUnit()) == false;
}

bool IfcPropertySingleValue::init()
{
    if (IfcSimpleProperty::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_NominalValue = NULL;
    }
    else
    {
        m_NominalValue = new IfcValue;
        if (arg[0] == '#') {
            m_NominalValue->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_NominalValue->setIfcVolumeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTIMEMEASURE")
                {
                    IfcTimeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcTimeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE")
                {
                    IfcThermodynamicTemperatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOLIDANGLEMEASURE")
                {
                    IfcSolidAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcSolidAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE")
                {
                    IfcPositivePlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANEANGLEMEASURE")
                {
                    IfcPlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPARAMETERVALUE")
                {
                    IfcParameterValue tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcParameterValue(tmp_attr1);
                }
                else if (type1 == "IFCNUMERICMEASURE")
                {
                    IfcNumericMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcNumericMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSMEASURE")
                {
                    IfcMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCURRENTMEASURE")
                {
                    IfcElectricCurrentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_NominalValue->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCOUNTMEASURE")
                {
                    IfcCountMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcCountMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCONTEXTDEPENDENTMEASURE")
                {
                    IfcContextDependentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcContextDependentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAREAMEASURE")
                {
                    IfcAreaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcAreaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE")
                {
                    IfcAmountOfSubstanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYMEASURE")
                {
                    IfcLuminousIntensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCREAL")
                {
                    IfcReal tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcReal(tmp_attr1);
                }
                else if (type1 == "IFCBOOLEAN")
                {
                    IfcBoolean tmp_attr1 = Step::spfToBoolean(arg)
;
                    m_NominalValue->setIfcBoolean(tmp_attr1);
                }
                else if (type1 == "IFCIDENTIFIER")
                {
                    IfcIdentifier tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_NominalValue->setIfcIdentifier(tmp_attr1);
                }
                else if (type1 == "IFCTEXT")
                {
                    IfcText tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_NominalValue->setIfcText(tmp_attr1);
                }
                else if (type1 == "IFCLABEL")
                {
                    IfcLabel tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_NominalValue->setIfcLabel(tmp_attr1);
                }
                else if (type1 == "IFCLOGICAL")
                {
                    IfcLogical tmp_attr1 = Step::spfToLogical(arg)
;
                    m_NominalValue->setIfcLogical(tmp_attr1);
                }
                else if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE")
                {
                    IfcVolumetricFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE")
                {
                    IfcThermalTransmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALRESISTANCEMEASURE")
                {
                    IfcThermalResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALADMITTANCEMEASURE")
                {
                    IfcThermalAdmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPRESSUREMEASURE")
                {
                    IfcPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOWERMEASURE")
                {
                    IfcPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSFLOWRATEMEASURE")
                {
                    IfcMassFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSDENSITYMEASURE")
                {
                    IfcMassDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARVELOCITYMEASURE")
                {
                    IfcLinearVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCKINEMATICVISCOSITYMEASURE")
                {
                    IfcKinematicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATFLUXDENSITYMEASURE")
                {
                    IfcHeatFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFREQUENCYMEASURE")
                {
                    IfcFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCENERGYMEASURE")
                {
                    IfcEnergyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcEnergyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICVOLTAGEMEASURE")
                {
                    IfcElectricVoltageMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDYNAMICVISCOSITYMEASURE")
                {
                    IfcDynamicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCANGULARVELOCITYMEASURE")
                {
                    IfcAngularVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE")
                {
                    IfcThermalConductivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOLECULARWEIGHTMEASURE")
                {
                    IfcMolecularWeightMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                else if (type1 == "IFCVAPORPERMEABILITYMEASURE")
                {
                    IfcVaporPermeabilityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE")
                {
                    IfcMoistureDiffusivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE")
                {
                    IfcIsothermalMoistureCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE")
                {
                    IfcSpecificHeatCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMONETARYMEASURE")
                {
                    IfcMonetaryMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE")
                {
                    IfcMagneticFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXMEASURE")
                {
                    IfcMagneticFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSFLUXMEASURE")
                {
                    IfcLuminousFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFORCEMEASURE")
                {
                    IfcForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCINDUCTANCEMEASURE")
                {
                    IfcInductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcInductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCILLUMINANCEMEASURE")
                {
                    IfcIlluminanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICRESISTANCEMEASURE")
                {
                    IfcElectricResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCONDUCTANCEMEASURE")
                {
                    IfcElectricConductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCHARGEMEASURE")
                {
                    IfcElectricChargeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDOSEEQUIVALENTMEASURE")
                {
                    IfcDoseEquivalentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCAPACITANCEMEASURE")
                {
                    IfcElectricCapacitanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCABSORBEDDOSEMEASURE")
                {
                    IfcAbsorbedDoseMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRADIOACTIVITYMEASURE")
                {
                    IfcRadioActivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALFREQUENCYMEASURE")
                {
                    IfcRotationalFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTORQUEMEASURE")
                {
                    IfcTorqueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcTorqueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCACCELERATIONMEASURE")
                {
                    IfcAccelerationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARFORCEMEASURE")
                {
                    IfcLinearForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARSTIFFNESSMEASURE")
                {
                    IfcLinearStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFELASTICITYMEASURE")
                {
                    IfcModulusOfElasticityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOMENTOFINERTIAMEASURE")
                {
                    IfcMomentOfInertiaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANARFORCEMEASURE")
                {
                    IfcPlanarForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALSTIFFNESSMEASURE")
                {
                    IfcRotationalStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSHEARMODULUSMEASURE")
                {
                    IfcShearModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARMOMENTMEASURE")
                {
                    IfcLinearMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE")
                {
                    IfcLuminousIntensityDistributionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCURVATUREMEASURE")
                {
                    IfcCurvatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSPERLENGTHMEASURE")
                {
                    IfcMassPerLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfLinearSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfRotationalSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALMASSMEASURE")
                {
                    IfcRotationalMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE")
                {
                    IfcSectionalAreaIntegralMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONMODULUSMEASURE")
                {
                    IfcSectionModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTEMPERATUREGRADIENTMEASURE")
                {
                    IfcTemperatureGradientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE")
                {
                    IfcThermalExpansionCoefficientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGCONSTANTMEASURE")
                {
                    IfcWarpingConstantMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGMOMENTMEASURE")
                {
                    IfcWarpingMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPOWERMEASURE")
                {
                    IfcSoundPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPRESSUREMEASURE")
                {
                    IfcSoundPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATINGVALUEMEASURE")
                {
                    IfcHeatingValueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPHMEASURE")
                {
                    IfcPHMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcPHMeasure(tmp_attr1);
                }
                else if (type1 == "IFCIONCONCENTRATIONMEASURE")
                {
                    IfcIonConcentrationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_NominalValue->setIfcIonConcentrationMeasure(tmp_attr1);
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

void IfcPropertySingleValue::copy(const IfcPropertySingleValue &obj, const CopyOp &copyop)
{
    IfcSimpleProperty::copy(obj, copyop);
    setNominalValue((IfcValue*)copyop(obj.m_NominalValue.get()));
    setUnit((IfcUnit*)copyop(obj.m_Unit.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPropertySingleValue, IfcSimpleProperty)
