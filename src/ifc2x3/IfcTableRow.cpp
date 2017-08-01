// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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



#include <ifc2x3/IfcTableRow.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTable.h>
#include <ifc2x3/IfcValue.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcTableRow::IfcTableRow(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_isHeading = Step::getUnset(m_isHeading);
}

IfcTableRow::~IfcTableRow() {
}

bool IfcTableRow::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTableRow(this);
}

const std::string &IfcTableRow::type() const {
    return IfcTableRow::s_type.getName();
}

const Step::ClassType &IfcTableRow::getClassType() {
    return IfcTableRow::s_type;
}

const Step::ClassType &IfcTableRow::getType() const {
    return IfcTableRow::s_type;
}

bool IfcTableRow::isOfType(const Step::ClassType &t) const {
    return IfcTableRow::s_type == t ? true : Step::BaseObject::isOfType(t);
}

List_IfcValue_1_n &IfcTableRow::getRowCells() {
    if (Step::BaseObject::inited()) {
        return m_rowCells;
    }
    else {
        m_rowCells.setUnset(true);
        return m_rowCells;
    }
}

const List_IfcValue_1_n &IfcTableRow::getRowCells() const {
    IfcTableRow * deConstObject = const_cast< IfcTableRow * > (this);
    return deConstObject->getRowCells();
}

void IfcTableRow::setRowCells(const List_IfcValue_1_n &value) {
    m_rowCells = value;
}

void IfcTableRow::unsetRowCells() {
    m_rowCells.clear();
    m_rowCells.setUnset(true);
}

bool IfcTableRow::testRowCells() const {
    return !m_rowCells.isUnset();
}

Step::Boolean IfcTableRow::getIsHeading() {
    if (Step::BaseObject::inited()) {
        return m_isHeading;
    }
    else {
        return Step::getUnset(m_isHeading);
    }
}

const Step::Boolean IfcTableRow::getIsHeading() const {
    IfcTableRow * deConstObject = const_cast< IfcTableRow * > (this);
    return deConstObject->getIsHeading();
}

void IfcTableRow::setIsHeading(Step::Boolean value) {
    m_isHeading = value;
}

void IfcTableRow::unsetIsHeading() {
    m_isHeading = Step::getUnset(getIsHeading());
}

bool IfcTableRow::testIsHeading() const {
    return !Step::isUnset(getIsHeading());
}

IfcTable *IfcTableRow::getOfTable() {
    if (Step::BaseObject::inited()) {
        return m_ofTable.get();
    }
    else {
        return nullptr;
    }
}

const IfcTable *IfcTableRow::getOfTable() const {
    IfcTableRow * deConstObject = const_cast< IfcTableRow * > (this);
    return deConstObject->getOfTable();
}

bool IfcTableRow::testOfTable() const {
    return !Step::isUnset(getOfTable());
}

bool IfcTableRow::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rowCells.setUnset(true);
    }
    else {
        m_rowCells.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcValue > attr2;
                attr2 = new IfcValue;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCVOLUMEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVolumeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTIMEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTimeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMODYNAMICTEMPERATUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermodynamicTemperatureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOLIDANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSolidAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVERATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositiveRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCRATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVEPLANEANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositivePlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPLANEANGLEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPARAMETERVALUE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcParameterValue(tmp_attr2);
                        }
                        if (type2 == "IFCNUMERICMEASURE") {
                            Step::Number tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcNumericMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOSITIVELENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPositiveLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCURRENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricCurrentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDESCRIPTIVEMEASURE") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcDescriptiveMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOUNTMEASURE") {
                            Step::Number tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcCountMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCONTEXTDEPENDENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcContextDependentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCAREAMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAreaMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCAMOUNTOFSUBSTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAmountOfSubstanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSINTENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousIntensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCNORMALISEDRATIOMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcNormalisedRatioMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOMPLEXNUMBER") {
                            Array_Real_1_2 tmp_attr2;
                            Array_Real_1_2::iterator it_tmp_attr2 = tmp_attr2.begin();
                            tmp_attr2.setUnset(false);
                            while (true) {
                                std::string str3;
                                Step::getSubParameter(str1, str3);
                                if (str3 != "") {
                                    Step::Real attr4;
                                    attr4 = Step::spfToReal(str3);
                                    *(it_tmp_attr2++) = attr4;
                                }
                                else {
                                    break;
                                }
                            }
                            attr2->setIfcComplexNumber(tmp_attr2);
                        }
                        if (type2 == "IFCINTEGER") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcInteger(tmp_attr2);
                        }
                        if (type2 == "IFCREAL") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcReal(tmp_attr2);
                        }
                        if (type2 == "IFCBOOLEAN") {
                            Step::Boolean tmp_attr2;
                            tmp_attr2 = Step::spfToBoolean(str1);
                            attr2->setIfcBoolean(tmp_attr2);
                        }
                        if (type2 == "IFCIDENTIFIER") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcIdentifier(tmp_attr2);
                        }
                        if (type2 == "IFCTEXT") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcText(tmp_attr2);
                        }
                        if (type2 == "IFCLABEL") {
                            Step::String tmp_attr2;
                            tmp_attr2 = Step::String::fromSPF(str1);
                            attr2->setIfcLabel(tmp_attr2);
                        }
                        if (type2 == "IFCLOGICAL") {
                            Step::Logical tmp_attr2;
                            tmp_attr2 = Step::spfToLogical(str1);
                            attr2->setIfcLogical(tmp_attr2);
                        }
                        if (type2 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVolumetricFlowRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTIMESTAMP") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcTimeStamp(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalTransmittanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALRESISTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalResistanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALADMITTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalAdmittanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPRESSUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPressureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPOWERMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPowerMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSFLOWRATEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassFlowRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARVELOCITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearVelocityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCKINEMATICVISCOSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcKinematicViscosityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCINTEGERCOUNTRATEMEASURE") {
                            Step::Integer tmp_attr2;
                            tmp_attr2 = Step::spfToInteger(str1);
                            attr2->setIfcIntegerCountRateMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCHEATFLUXDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcHeatFluxDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCFREQUENCYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcFrequencyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCENERGYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcEnergyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICVOLTAGEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricVoltageMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDYNAMICVISCOSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcDynamicViscosityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCOMPOUNDPLANEANGLEMEASURE") {
                            List_Integer_3_4 tmp_attr2;
                            tmp_attr2.setUnset(false);
                            while (true) {
                                std::string str3;
                                Step::getSubParameter(str1, str3);
                                if (str3 != "") {
                                    Step::Integer attr4;
                                    attr4 = Step::spfToInteger(str3);
                                    tmp_attr2.push_back(attr4);
                                }
                                else {
                                    break;
                                }
                            }
                            attr2->setIfcCompoundPlaneAngleMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCANGULARVELOCITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAngularVelocityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalConductivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOLECULARWEIGHTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMolecularWeightMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCVAPORPERMEABILITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcVaporPermeabilityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMoistureDiffusivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIsothermalMoistureCapacityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSpecificHeatCapacityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMONETARYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMonetaryMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMagneticFluxDensityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMAGNETICFLUXMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMagneticFluxMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSFLUXMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousFluxMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCINDUCTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcInductanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCILLUMINANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIlluminanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICRESISTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricResistanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCONDUCTANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricConductanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCHARGEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricChargeMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCDOSEEQUIVALENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcDoseEquivalentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCELECTRICCAPACITANCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcElectricCapacitanceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCABSORBEDDOSEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAbsorbedDoseMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCRADIOACTIVITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRadioActivityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALFREQUENCYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalFrequencyMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTORQUEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTorqueMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCACCELERATIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcAccelerationMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARSTIFFNESSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearStiffnessMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFELASTICITYMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfElasticityMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMOMENTOFINERTIAMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMomentOfInertiaMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPLANARFORCEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPlanarForceMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALSTIFFNESSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalStiffnessMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSHEARMODULUSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcShearModulusMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLINEARMOMENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLinearMomentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcLuminousIntensityDistributionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCCURVATUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcCurvatureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMASSPERLENGTHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcMassPerLengthMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCROTATIONALMASSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcRotationalMassMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSectionalAreaIntegralMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSECTIONMODULUSMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSectionModulusMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTEMPERATUREGRADIENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcTemperatureGradientMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcThermalExpansionCoefficientMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCWARPINGCONSTANTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcWarpingConstantMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCWARPINGMOMENTMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcWarpingMomentMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOUNDPOWERMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSoundPowerMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCSOUNDPRESSUREMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcSoundPressureMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCHEATINGVALUEMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcHeatingValueMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCPHMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcPHMeasure(tmp_attr2);
                        }
                        if (type2 == "IFCIONCONCENTRATIONMEASURE") {
                            Step::Real tmp_attr2;
                            tmp_attr2 = Step::spfToReal(str1);
                            attr2->setIfcIonConcentrationMeasure(tmp_attr2);
                        }
                    }
                }
                m_rowCells.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isHeading = Step::getUnset(m_isHeading);
    }
    else {
        m_isHeading = Step::spfToBoolean(arg);
    }
    inverses = m_args->getInverses(IfcTable::getClassType(), 1);
    if (inverses) {
        m_ofTable = static_cast< IfcTable * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcTableRow::copy(const IfcTableRow &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcValue >, 1 >::const_iterator it_m_rowCells;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_rowCells = obj.m_rowCells.begin(); it_m_rowCells != obj.m_rowCells.end(); ++it_m_rowCells) {
        Step::RefPtr< IfcValue > copyTarget = new IfcValue;
        copyTarget->copy(*((*it_m_rowCells).get()), copyop);
        m_rowCells.push_back(copyTarget.get());
    }
    setIsHeading(obj.m_isHeading);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTableRow::s_type("IfcTableRow");
