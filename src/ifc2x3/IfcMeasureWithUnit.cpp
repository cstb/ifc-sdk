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


#include <ifc2x3/IfcMeasureWithUnit.h>

#include <ifc2x3/IfcValue.h>
#include <ifc2x3/IfcUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMeasureWithUnit::IfcMeasureWithUnit(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_ValueComponent = NULL;
    m_UnitComponent = NULL;
}

IfcMeasureWithUnit::~IfcMeasureWithUnit()
{}

bool IfcMeasureWithUnit::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMeasureWithUnit(this);
}


IfcValue *IfcMeasureWithUnit::getValueComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ValueComponent.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcValue *IfcMeasureWithUnit::getValueComponent() const
{
    return const_cast<IfcMeasureWithUnit *>(this)->getValueComponent();
}

void IfcMeasureWithUnit::setValueComponent(const Step::RefPtr< IfcValue > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ValueComponent = value;
}

void IfcMeasureWithUnit::unsetValueComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ValueComponent = Step::getUnset(getValueComponent());
}

bool IfcMeasureWithUnit::testValueComponent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getValueComponent()) == false;
}


IfcUnit *IfcMeasureWithUnit::getUnitComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_UnitComponent.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcUnit *IfcMeasureWithUnit::getUnitComponent() const
{
    return const_cast<IfcMeasureWithUnit *>(this)->getUnitComponent();
}

void IfcMeasureWithUnit::setUnitComponent(const Step::RefPtr< IfcUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitComponent = value;
}

void IfcMeasureWithUnit::unsetUnitComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_UnitComponent = Step::getUnset(getUnitComponent());
}

bool IfcMeasureWithUnit::testUnitComponent() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getUnitComponent()) == false;
}

bool IfcMeasureWithUnit::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ValueComponent = NULL;
    }
    else
    {
        m_ValueComponent = new IfcValue;
        if (arg[0] == '#') {
            m_ValueComponent->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
                    m_ValueComponent->setIfcVolumeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTIMEMEASURE")
                {
                    IfcTimeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcTimeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMODYNAMICTEMPERATUREMEASURE")
                {
                    IfcThermodynamicTemperatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcThermodynamicTemperatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOLIDANGLEMEASURE")
                {
                    IfcSolidAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcSolidAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVERATIOMEASURE")
                {
                    IfcPositiveRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcPositiveRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRATIOMEASURE")
                {
                    IfcRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVEPLANEANGLEMEASURE")
                {
                    IfcPositivePlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcPositivePlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANEANGLEMEASURE")
                {
                    IfcPlaneAngleMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcPlaneAngleMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPARAMETERVALUE")
                {
                    IfcParameterValue tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcParameterValue(tmp_attr1);
                }
                else if (type1 == "IFCNUMERICMEASURE")
                {
                    IfcNumericMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcNumericMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSMEASURE")
                {
                    IfcMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOSITIVELENGTHMEASURE")
                {
                    IfcPositiveLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcPositiveLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLENGTHMEASURE")
                {
                    IfcLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCURRENTMEASURE")
                {
                    IfcElectricCurrentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcElectricCurrentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDESCRIPTIVEMEASURE")
                {
                    IfcDescriptiveMeasure tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_ValueComponent->setIfcDescriptiveMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCOUNTMEASURE")
                {
                    IfcCountMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcCountMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCONTEXTDEPENDENTMEASURE")
                {
                    IfcContextDependentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcContextDependentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAREAMEASURE")
                {
                    IfcAreaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcAreaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCAMOUNTOFSUBSTANCEMEASURE")
                {
                    IfcAmountOfSubstanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcAmountOfSubstanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYMEASURE")
                {
                    IfcLuminousIntensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcLuminousIntensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCNORMALISEDRATIOMEASURE")
                {
                    IfcNormalisedRatioMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcNormalisedRatioMeasure(tmp_attr1);
                }
                else if (type1 == "IFCREAL")
                {
                    IfcReal tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcReal(tmp_attr1);
                }
                else if (type1 == "IFCBOOLEAN")
                {
                    IfcBoolean tmp_attr1 = Step::spfToBoolean(arg)
;
                    m_ValueComponent->setIfcBoolean(tmp_attr1);
                }
                else if (type1 == "IFCIDENTIFIER")
                {
                    IfcIdentifier tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_ValueComponent->setIfcIdentifier(tmp_attr1);
                }
                else if (type1 == "IFCTEXT")
                {
                    IfcText tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_ValueComponent->setIfcText(tmp_attr1);
                }
                else if (type1 == "IFCLABEL")
                {
                    IfcLabel tmp_attr1 = Step::String::fromSPF(arg)
;
                    m_ValueComponent->setIfcLabel(tmp_attr1);
                }
                else if (type1 == "IFCLOGICAL")
                {
                    IfcLogical tmp_attr1 = Step::spfToLogical(arg)
;
                    m_ValueComponent->setIfcLogical(tmp_attr1);
                }
                else if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE")
                {
                    IfcVolumetricFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE")
                {
                    IfcThermalTransmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALRESISTANCEMEASURE")
                {
                    IfcThermalResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALADMITTANCEMEASURE")
                {
                    IfcThermalAdmittanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPRESSUREMEASURE")
                {
                    IfcPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPOWERMEASURE")
                {
                    IfcPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSFLOWRATEMEASURE")
                {
                    IfcMassFlowRateMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSDENSITYMEASURE")
                {
                    IfcMassDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMassDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARVELOCITYMEASURE")
                {
                    IfcLinearVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCKINEMATICVISCOSITYMEASURE")
                {
                    IfcKinematicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATFLUXDENSITYMEASURE")
                {
                    IfcHeatFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFREQUENCYMEASURE")
                {
                    IfcFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCENERGYMEASURE")
                {
                    IfcEnergyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcEnergyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICVOLTAGEMEASURE")
                {
                    IfcElectricVoltageMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDYNAMICVISCOSITYMEASURE")
                {
                    IfcDynamicViscosityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCANGULARVELOCITYMEASURE")
                {
                    IfcAngularVelocityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE")
                {
                    IfcThermalConductivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOLECULARWEIGHTMEASURE")
                {
                    IfcMolecularWeightMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                else if (type1 == "IFCVAPORPERMEABILITYMEASURE")
                {
                    IfcVaporPermeabilityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE")
                {
                    IfcMoistureDiffusivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE")
                {
                    IfcIsothermalMoistureCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE")
                {
                    IfcSpecificHeatCapacityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMONETARYMEASURE")
                {
                    IfcMonetaryMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMonetaryMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE")
                {
                    IfcMagneticFluxDensityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMAGNETICFLUXMEASURE")
                {
                    IfcMagneticFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSFLUXMEASURE")
                {
                    IfcLuminousFluxMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                else if (type1 == "IFCFORCEMEASURE")
                {
                    IfcForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCINDUCTANCEMEASURE")
                {
                    IfcInductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcInductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCILLUMINANCEMEASURE")
                {
                    IfcIlluminanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcIlluminanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICRESISTANCEMEASURE")
                {
                    IfcElectricResistanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCONDUCTANCEMEASURE")
                {
                    IfcElectricConductanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCHARGEMEASURE")
                {
                    IfcElectricChargeMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcElectricChargeMeasure(tmp_attr1);
                }
                else if (type1 == "IFCDOSEEQUIVALENTMEASURE")
                {
                    IfcDoseEquivalentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCELECTRICCAPACITANCEMEASURE")
                {
                    IfcElectricCapacitanceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCABSORBEDDOSEMEASURE")
                {
                    IfcAbsorbedDoseMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                else if (type1 == "IFCRADIOACTIVITYMEASURE")
                {
                    IfcRadioActivityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcRadioActivityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALFREQUENCYMEASURE")
                {
                    IfcRotationalFrequencyMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTORQUEMEASURE")
                {
                    IfcTorqueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcTorqueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCACCELERATIONMEASURE")
                {
                    IfcAccelerationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcAccelerationMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARFORCEMEASURE")
                {
                    IfcLinearForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcLinearForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARSTIFFNESSMEASURE")
                {
                    IfcLinearStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFELASTICITYMEASURE")
                {
                    IfcModulusOfElasticityMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMOMENTOFINERTIAMEASURE")
                {
                    IfcMomentOfInertiaMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPLANARFORCEMEASURE")
                {
                    IfcPlanarForceMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcPlanarForceMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALSTIFFNESSMEASURE")
                {
                    IfcRotationalStiffnessMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSHEARMODULUSMEASURE")
                {
                    IfcShearModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcShearModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLINEARMOMENTMEASURE")
                {
                    IfcLinearMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcLinearMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE")
                {
                    IfcLuminousIntensityDistributionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCCURVATUREMEASURE")
                {
                    IfcCurvatureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcCurvatureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMASSPERLENGTHMEASURE")
                {
                    IfcMassPerLengthMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfLinearSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE")
                {
                    IfcModulusOfRotationalSubgradeReactionMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                else if (type1 == "IFCROTATIONALMASSMEASURE")
                {
                    IfcRotationalMassMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcRotationalMassMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE")
                {
                    IfcSectionalAreaIntegralMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSECTIONMODULUSMEASURE")
                {
                    IfcSectionModulusMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcSectionModulusMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTEMPERATUREGRADIENTMEASURE")
                {
                    IfcTemperatureGradientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE")
                {
                    IfcThermalExpansionCoefficientMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGCONSTANTMEASURE")
                {
                    IfcWarpingConstantMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                else if (type1 == "IFCWARPINGMOMENTMEASURE")
                {
                    IfcWarpingMomentMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPOWERMEASURE")
                {
                    IfcSoundPowerMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcSoundPowerMeasure(tmp_attr1);
                }
                else if (type1 == "IFCSOUNDPRESSUREMEASURE")
                {
                    IfcSoundPressureMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcSoundPressureMeasure(tmp_attr1);
                }
                else if (type1 == "IFCHEATINGVALUEMEASURE")
                {
                    IfcHeatingValueMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcHeatingValueMeasure(tmp_attr1);
                }
                else if (type1 == "IFCPHMEASURE")
                {
                    IfcPHMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcPHMeasure(tmp_attr1);
                }
                else if (type1 == "IFCIONCONCENTRATIONMEASURE")
                {
                    IfcIonConcentrationMeasure tmp_attr1 = Step::spfToReal(arg)

;
                    m_ValueComponent->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_UnitComponent = NULL;
    }
    else
    {
        m_UnitComponent = new IfcUnit;
        if (arg[0] == '#') {
            m_UnitComponent->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcMeasureWithUnit::copy(const IfcMeasureWithUnit &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setValueComponent((IfcValue*)copyop(obj.m_ValueComponent.get()));
    setUnitComponent((IfcUnit*)copyop(obj.m_UnitComponent.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMeasureWithUnit, Step::BaseEntity)
