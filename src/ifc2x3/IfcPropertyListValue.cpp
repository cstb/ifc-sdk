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


#include <ifc2x3/IfcPropertyListValue.h>

#include <ifc2x3/IfcValue.h>
#include <ifc2x3/IfcUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPropertyListValue::IfcPropertyListValue(Step::Id id, Step::SPFData *args) : 
    IfcSimpleProperty(id, args)
{
    m_ListValues.setUnset(true);
    m_Unit = NULL;
}

IfcPropertyListValue::~IfcPropertyListValue()
{}

bool IfcPropertyListValue::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPropertyListValue(this);
}


List_IfcValue_1_n &IfcPropertyListValue::getListValues()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ListValues;
    }
    else 
    {
        m_ListValues.setUnset(true);
        return m_ListValues;
    }    
}

const List_IfcValue_1_n &IfcPropertyListValue::getListValues() const
{
    return const_cast<IfcPropertyListValue *>(this)->getListValues();
}

void IfcPropertyListValue::setListValues(const List_IfcValue_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ListValues = value;
}

void IfcPropertyListValue::unsetListValues()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ListValues.clear();
    m_ListValues.setUnset(true);
}

bool IfcPropertyListValue::testListValues() const
{
    return m_ListValues.isUnset() == false;
}


IfcUnit *IfcPropertyListValue::getUnit()
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

const IfcUnit *IfcPropertyListValue::getUnit() const
{
    return const_cast<IfcPropertyListValue *>(this)->getUnit();
}

void IfcPropertyListValue::setUnit(const Step::RefPtr< IfcUnit > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = value;
}

void IfcPropertyListValue::unsetUnit()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Unit = Step::getUnset(getUnit());
}

bool IfcPropertyListValue::testUnit() const
{
    return Step::isUnset(getUnit()) == false;
}

bool IfcPropertyListValue::init()
{
    if (IfcSimpleProperty::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ListValues.setUnset(true);
    }
    else
    {
        m_ListValues.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcValue > attr2 = new IfcValue();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCVOLUMEMEASURE")
                        {
                            IfcVolumeMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcVolumeMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTIMEMEASURE")
                        {
                            IfcTimeMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcTimeMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTHERMODYNAMICTEMPERATUREMEASURE")
                        {
                            IfcThermodynamicTemperatureMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcThermodynamicTemperatureMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCSOLIDANGLEMEASURE")
                        {
                            IfcSolidAngleMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcSolidAngleMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPOSITIVERATIOMEASURE")
                        {
                            IfcPositiveRatioMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcPositiveRatioMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCRATIOMEASURE")
                        {
                            IfcRatioMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcRatioMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPOSITIVEPLANEANGLEMEASURE")
                        {
                            IfcPositivePlaneAngleMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcPositivePlaneAngleMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPLANEANGLEMEASURE")
                        {
                            IfcPlaneAngleMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcPlaneAngleMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPARAMETERVALUE")
                        {
                            IfcParameterValue tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcParameterValue(tmp_attr2);
                        }
                        else if (type2 == "IFCNUMERICMEASURE")
                        {
                            IfcNumericMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcNumericMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMASSMEASURE")
                        {
                            IfcMassMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMassMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPOSITIVELENGTHMEASURE")
                        {
                            IfcPositiveLengthMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcPositiveLengthMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCLENGTHMEASURE")
                        {
                            IfcLengthMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcLengthMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCELECTRICCURRENTMEASURE")
                        {
                            IfcElectricCurrentMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcElectricCurrentMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCDESCRIPTIVEMEASURE")
                        {
                            IfcDescriptiveMeasure tmp_attr2 = Step::String::fromSPF(arg)
;
                            attr2->setIfcDescriptiveMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCCOUNTMEASURE")
                        {
                            IfcCountMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcCountMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCCONTEXTDEPENDENTMEASURE")
                        {
                            IfcContextDependentMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcContextDependentMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCAREAMEASURE")
                        {
                            IfcAreaMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcAreaMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCAMOUNTOFSUBSTANCEMEASURE")
                        {
                            IfcAmountOfSubstanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcAmountOfSubstanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCLUMINOUSINTENSITYMEASURE")
                        {
                            IfcLuminousIntensityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcLuminousIntensityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCNORMALISEDRATIOMEASURE")
                        {
                            IfcNormalisedRatioMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcNormalisedRatioMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCREAL")
                        {
                            IfcReal tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcReal(tmp_attr2);
                        }
                        else if (type2 == "IFCBOOLEAN")
                        {
                            IfcBoolean tmp_attr2 = Step::spfToBoolean(arg)
;
                            attr2->setIfcBoolean(tmp_attr2);
                        }
                        else if (type2 == "IFCIDENTIFIER")
                        {
                            IfcIdentifier tmp_attr2 = Step::String::fromSPF(arg)
;
                            attr2->setIfcIdentifier(tmp_attr2);
                        }
                        else if (type2 == "IFCTEXT")
                        {
                            IfcText tmp_attr2 = Step::String::fromSPF(arg)
;
                            attr2->setIfcText(tmp_attr2);
                        }
                        else if (type2 == "IFCLABEL")
                        {
                            IfcLabel tmp_attr2 = Step::String::fromSPF(arg)
;
                            attr2->setIfcLabel(tmp_attr2);
                        }
                        else if (type2 == "IFCLOGICAL")
                        {
                            IfcLogical tmp_attr2 = Step::spfToLogical(arg)
;
                            attr2->setIfcLogical(tmp_attr2);
                        }
                        else if (type2 == "IFCVOLUMETRICFLOWRATEMEASURE")
                        {
                            IfcVolumetricFlowRateMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcVolumetricFlowRateMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTHERMALTRANSMITTANCEMEASURE")
                        {
                            IfcThermalTransmittanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcThermalTransmittanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTHERMALRESISTANCEMEASURE")
                        {
                            IfcThermalResistanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcThermalResistanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTHERMALADMITTANCEMEASURE")
                        {
                            IfcThermalAdmittanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcThermalAdmittanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPRESSUREMEASURE")
                        {
                            IfcPressureMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcPressureMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPOWERMEASURE")
                        {
                            IfcPowerMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcPowerMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMASSFLOWRATEMEASURE")
                        {
                            IfcMassFlowRateMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMassFlowRateMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMASSDENSITYMEASURE")
                        {
                            IfcMassDensityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMassDensityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCLINEARVELOCITYMEASURE")
                        {
                            IfcLinearVelocityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcLinearVelocityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCKINEMATICVISCOSITYMEASURE")
                        {
                            IfcKinematicViscosityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcKinematicViscosityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCHEATFLUXDENSITYMEASURE")
                        {
                            IfcHeatFluxDensityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcHeatFluxDensityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCFREQUENCYMEASURE")
                        {
                            IfcFrequencyMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcFrequencyMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCENERGYMEASURE")
                        {
                            IfcEnergyMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcEnergyMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCELECTRICVOLTAGEMEASURE")
                        {
                            IfcElectricVoltageMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcElectricVoltageMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCDYNAMICVISCOSITYMEASURE")
                        {
                            IfcDynamicViscosityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcDynamicViscosityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCANGULARVELOCITYMEASURE")
                        {
                            IfcAngularVelocityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcAngularVelocityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTHERMALCONDUCTIVITYMEASURE")
                        {
                            IfcThermalConductivityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcThermalConductivityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMOLECULARWEIGHTMEASURE")
                        {
                            IfcMolecularWeightMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMolecularWeightMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCVAPORPERMEABILITYMEASURE")
                        {
                            IfcVaporPermeabilityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcVaporPermeabilityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMOISTUREDIFFUSIVITYMEASURE")
                        {
                            IfcMoistureDiffusivityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMoistureDiffusivityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCISOTHERMALMOISTURECAPACITYMEASURE")
                        {
                            IfcIsothermalMoistureCapacityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcIsothermalMoistureCapacityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCSPECIFICHEATCAPACITYMEASURE")
                        {
                            IfcSpecificHeatCapacityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcSpecificHeatCapacityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMONETARYMEASURE")
                        {
                            IfcMonetaryMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMonetaryMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMAGNETICFLUXDENSITYMEASURE")
                        {
                            IfcMagneticFluxDensityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMagneticFluxDensityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMAGNETICFLUXMEASURE")
                        {
                            IfcMagneticFluxMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMagneticFluxMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCLUMINOUSFLUXMEASURE")
                        {
                            IfcLuminousFluxMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcLuminousFluxMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCFORCEMEASURE")
                        {
                            IfcForceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcForceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCINDUCTANCEMEASURE")
                        {
                            IfcInductanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcInductanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCILLUMINANCEMEASURE")
                        {
                            IfcIlluminanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcIlluminanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCELECTRICRESISTANCEMEASURE")
                        {
                            IfcElectricResistanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcElectricResistanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCELECTRICCONDUCTANCEMEASURE")
                        {
                            IfcElectricConductanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcElectricConductanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCELECTRICCHARGEMEASURE")
                        {
                            IfcElectricChargeMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcElectricChargeMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCDOSEEQUIVALENTMEASURE")
                        {
                            IfcDoseEquivalentMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcDoseEquivalentMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCELECTRICCAPACITANCEMEASURE")
                        {
                            IfcElectricCapacitanceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcElectricCapacitanceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCABSORBEDDOSEMEASURE")
                        {
                            IfcAbsorbedDoseMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcAbsorbedDoseMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCRADIOACTIVITYMEASURE")
                        {
                            IfcRadioActivityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcRadioActivityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCROTATIONALFREQUENCYMEASURE")
                        {
                            IfcRotationalFrequencyMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcRotationalFrequencyMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTORQUEMEASURE")
                        {
                            IfcTorqueMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcTorqueMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCACCELERATIONMEASURE")
                        {
                            IfcAccelerationMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcAccelerationMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCLINEARFORCEMEASURE")
                        {
                            IfcLinearForceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcLinearForceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCLINEARSTIFFNESSMEASURE")
                        {
                            IfcLinearStiffnessMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcLinearStiffnessMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE")
                        {
                            IfcModulusOfSubgradeReactionMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcModulusOfSubgradeReactionMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMODULUSOFELASTICITYMEASURE")
                        {
                            IfcModulusOfElasticityMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcModulusOfElasticityMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMOMENTOFINERTIAMEASURE")
                        {
                            IfcMomentOfInertiaMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMomentOfInertiaMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPLANARFORCEMEASURE")
                        {
                            IfcPlanarForceMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcPlanarForceMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCROTATIONALSTIFFNESSMEASURE")
                        {
                            IfcRotationalStiffnessMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcRotationalStiffnessMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCSHEARMODULUSMEASURE")
                        {
                            IfcShearModulusMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcShearModulusMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCLINEARMOMENTMEASURE")
                        {
                            IfcLinearMomentMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcLinearMomentMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE")
                        {
                            IfcLuminousIntensityDistributionMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcLuminousIntensityDistributionMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCCURVATUREMEASURE")
                        {
                            IfcCurvatureMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcCurvatureMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMASSPERLENGTHMEASURE")
                        {
                            IfcMassPerLengthMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcMassPerLengthMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE")
                        {
                            IfcModulusOfLinearSubgradeReactionMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE")
                        {
                            IfcModulusOfRotationalSubgradeReactionMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCROTATIONALMASSMEASURE")
                        {
                            IfcRotationalMassMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcRotationalMassMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCSECTIONALAREAINTEGRALMEASURE")
                        {
                            IfcSectionalAreaIntegralMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcSectionalAreaIntegralMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCSECTIONMODULUSMEASURE")
                        {
                            IfcSectionModulusMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcSectionModulusMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTEMPERATUREGRADIENTMEASURE")
                        {
                            IfcTemperatureGradientMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcTemperatureGradientMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE")
                        {
                            IfcThermalExpansionCoefficientMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcThermalExpansionCoefficientMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCWARPINGCONSTANTMEASURE")
                        {
                            IfcWarpingConstantMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcWarpingConstantMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCWARPINGMOMENTMEASURE")
                        {
                            IfcWarpingMomentMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcWarpingMomentMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCSOUNDPOWERMEASURE")
                        {
                            IfcSoundPowerMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcSoundPowerMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCSOUNDPRESSUREMEASURE")
                        {
                            IfcSoundPressureMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcSoundPressureMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCHEATINGVALUEMEASURE")
                        {
                            IfcHeatingValueMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcHeatingValueMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCPHMEASURE")
                        {
                            IfcPHMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcPHMeasure(tmp_attr2);
                        }
                        else if (type2 == "IFCIONCONCENTRATIONMEASURE")
                        {
                            IfcIonConcentrationMeasure tmp_attr2 = Step::spfToReal(arg)

;
                            attr2->setIfcIonConcentrationMeasure(tmp_attr2);
                        }
                    }
                }
                if (attr2.valid()) 
                {
                    m_ListValues.push_back(attr2);
                }
            }
            else 
            {
                break;
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

void IfcPropertyListValue::copy(const IfcPropertyListValue &obj, const CopyOp &copyop)
{
    IfcSimpleProperty::copy(obj, copyop);
    List_IfcValue_1_n::const_iterator it_m_ListValues;
    for (it_m_ListValues = obj.m_ListValues.begin(); it_m_ListValues != obj.m_ListValues.end(); ++it_m_ListValues)
    {
        Step::RefPtr< IfcValue > copyTarget = new IfcValue;
        copyTarget->copy(*((*it_m_ListValues).get()), copyop);
        m_ListValues.push_back(copyTarget.get());
    }
    
    setUnit((IfcUnit*)copyop(obj.m_Unit.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPropertyListValue, IfcSimpleProperty)
