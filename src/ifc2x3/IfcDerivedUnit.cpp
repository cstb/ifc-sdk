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



#include <ifc2x3/IfcDerivedUnit.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDerivedUnitElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDerivedUnit::IfcDerivedUnit(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_unitType = IfcDerivedUnitEnum_UNSET;
    m_userDefinedType = Step::getUnset(m_userDefinedType);
}

IfcDerivedUnit::~IfcDerivedUnit() {
}

bool IfcDerivedUnit::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDerivedUnit(this);
}

const std::string &IfcDerivedUnit::type() const {
    return IfcDerivedUnit::s_type.getName();
}

const Step::ClassType &IfcDerivedUnit::getClassType() {
    return IfcDerivedUnit::s_type;
}

const Step::ClassType &IfcDerivedUnit::getType() const {
    return IfcDerivedUnit::s_type;
}

bool IfcDerivedUnit::isOfType(const Step::ClassType &t) const {
    return IfcDerivedUnit::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Set_IfcDerivedUnitElement_1_n &IfcDerivedUnit::getElements() {
    if (Step::BaseObject::inited()) {
        return m_elements;
    }
    else {
        m_elements.setUnset(true);
        return m_elements;
    }
}

const Set_IfcDerivedUnitElement_1_n &IfcDerivedUnit::getElements() const {
    IfcDerivedUnit * deConstObject = const_cast< IfcDerivedUnit * > (this);
    return deConstObject->getElements();
}

void IfcDerivedUnit::setElements(const Set_IfcDerivedUnitElement_1_n &value) {
    m_elements = value;
}

void IfcDerivedUnit::unsetElements() {
    m_elements.clear();
    m_elements.setUnset(true);
}

bool IfcDerivedUnit::testElements() const {
    return !m_elements.isUnset();
}

IfcDerivedUnitEnum IfcDerivedUnit::getUnitType() {
    if (Step::BaseObject::inited()) {
        return m_unitType;
    }
    else {
        return IfcDerivedUnitEnum_UNSET;
    }
}

const IfcDerivedUnitEnum IfcDerivedUnit::getUnitType() const {
    IfcDerivedUnit * deConstObject = const_cast< IfcDerivedUnit * > (this);
    return deConstObject->getUnitType();
}

void IfcDerivedUnit::setUnitType(IfcDerivedUnitEnum value) {
    m_unitType = value;
}

void IfcDerivedUnit::unsetUnitType() {
    m_unitType = IfcDerivedUnitEnum_UNSET;
}

bool IfcDerivedUnit::testUnitType() const {
    return getUnitType() != IfcDerivedUnitEnum_UNSET;
}

IfcLabel IfcDerivedUnit::getUserDefinedType() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedType;
    }
    else {
        return Step::getUnset(m_userDefinedType);
    }
}

const IfcLabel IfcDerivedUnit::getUserDefinedType() const {
    IfcDerivedUnit * deConstObject = const_cast< IfcDerivedUnit * > (this);
    return deConstObject->getUserDefinedType();
}

void IfcDerivedUnit::setUserDefinedType(const IfcLabel &value) {
    m_userDefinedType = value;
}

void IfcDerivedUnit::unsetUserDefinedType() {
    m_userDefinedType = Step::getUnset(getUserDefinedType());
}

bool IfcDerivedUnit::testUserDefinedType() const {
    return !Step::isUnset(getUserDefinedType());
}

bool IfcDerivedUnit::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_elements.setUnset(true);
    }
    else {
        m_elements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDerivedUnitElement > attr2;
                attr2 = static_cast< IfcDerivedUnitElement * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_elements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unitType = IfcDerivedUnitEnum_UNSET;
    }
    else {
        if (arg == ".ANGULARVELOCITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_ANGULARVELOCITYUNIT;
        }
        else if (arg == ".COMPOUNDPLANEANGLEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_COMPOUNDPLANEANGLEUNIT;
        }
        else if (arg == ".DYNAMICVISCOSITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_DYNAMICVISCOSITYUNIT;
        }
        else if (arg == ".HEATFLUXDENSITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_HEATFLUXDENSITYUNIT;
        }
        else if (arg == ".INTEGERCOUNTRATEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_INTEGERCOUNTRATEUNIT;
        }
        else if (arg == ".ISOTHERMALMOISTURECAPACITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_ISOTHERMALMOISTURECAPACITYUNIT;
        }
        else if (arg == ".KINEMATICVISCOSITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_KINEMATICVISCOSITYUNIT;
        }
        else if (arg == ".LINEARVELOCITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_LINEARVELOCITYUNIT;
        }
        else if (arg == ".MASSDENSITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MASSDENSITYUNIT;
        }
        else if (arg == ".MASSFLOWRATEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MASSFLOWRATEUNIT;
        }
        else if (arg == ".MOISTUREDIFFUSIVITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MOISTUREDIFFUSIVITYUNIT;
        }
        else if (arg == ".MOLECULARWEIGHTUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MOLECULARWEIGHTUNIT;
        }
        else if (arg == ".SPECIFICHEATCAPACITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_SPECIFICHEATCAPACITYUNIT;
        }
        else if (arg == ".THERMALADMITTANCEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_THERMALADMITTANCEUNIT;
        }
        else if (arg == ".THERMALCONDUCTANCEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_THERMALCONDUCTANCEUNIT;
        }
        else if (arg == ".THERMALRESISTANCEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_THERMALRESISTANCEUNIT;
        }
        else if (arg == ".THERMALTRANSMITTANCEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_THERMALTRANSMITTANCEUNIT;
        }
        else if (arg == ".VAPORPERMEABILITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_VAPORPERMEABILITYUNIT;
        }
        else if (arg == ".VOLUMETRICFLOWRATEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_VOLUMETRICFLOWRATEUNIT;
        }
        else if (arg == ".ROTATIONALFREQUENCYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_ROTATIONALFREQUENCYUNIT;
        }
        else if (arg == ".TORQUEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_TORQUEUNIT;
        }
        else if (arg == ".MOMENTOFINERTIAUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MOMENTOFINERTIAUNIT;
        }
        else if (arg == ".LINEARMOMENTUNIT.") {
            m_unitType = IfcDerivedUnitEnum_LINEARMOMENTUNIT;
        }
        else if (arg == ".LINEARFORCEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_LINEARFORCEUNIT;
        }
        else if (arg == ".PLANARFORCEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_PLANARFORCEUNIT;
        }
        else if (arg == ".MODULUSOFELASTICITYUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MODULUSOFELASTICITYUNIT;
        }
        else if (arg == ".SHEARMODULUSUNIT.") {
            m_unitType = IfcDerivedUnitEnum_SHEARMODULUSUNIT;
        }
        else if (arg == ".LINEARSTIFFNESSUNIT.") {
            m_unitType = IfcDerivedUnitEnum_LINEARSTIFFNESSUNIT;
        }
        else if (arg == ".ROTATIONALSTIFFNESSUNIT.") {
            m_unitType = IfcDerivedUnitEnum_ROTATIONALSTIFFNESSUNIT;
        }
        else if (arg == ".MODULUSOFSUBGRADEREACTIONUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MODULUSOFSUBGRADEREACTIONUNIT;
        }
        else if (arg == ".ACCELERATIONUNIT.") {
            m_unitType = IfcDerivedUnitEnum_ACCELERATIONUNIT;
        }
        else if (arg == ".CURVATUREUNIT.") {
            m_unitType = IfcDerivedUnitEnum_CURVATUREUNIT;
        }
        else if (arg == ".HEATINGVALUEUNIT.") {
            m_unitType = IfcDerivedUnitEnum_HEATINGVALUEUNIT;
        }
        else if (arg == ".IONCONCENTRATIONUNIT.") {
            m_unitType = IfcDerivedUnitEnum_IONCONCENTRATIONUNIT;
        }
        else if (arg == ".LUMINOUSINTENSITYDISTRIBUTIONUNIT.") {
            m_unitType = IfcDerivedUnitEnum_LUMINOUSINTENSITYDISTRIBUTIONUNIT;
        }
        else if (arg == ".MASSPERLENGTHUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MASSPERLENGTHUNIT;
        }
        else if (arg == ".MODULUSOFLINEARSUBGRADEREACTIONUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MODULUSOFLINEARSUBGRADEREACTIONUNIT;
        }
        else if (arg == ".MODULUSOFROTATIONALSUBGRADEREACTIONUNIT.") {
            m_unitType = IfcDerivedUnitEnum_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT;
        }
        else if (arg == ".PHUNIT.") {
            m_unitType = IfcDerivedUnitEnum_PHUNIT;
        }
        else if (arg == ".ROTATIONALMASSUNIT.") {
            m_unitType = IfcDerivedUnitEnum_ROTATIONALMASSUNIT;
        }
        else if (arg == ".SECTIONAREAINTEGRALUNIT.") {
            m_unitType = IfcDerivedUnitEnum_SECTIONAREAINTEGRALUNIT;
        }
        else if (arg == ".SECTIONMODULUSUNIT.") {
            m_unitType = IfcDerivedUnitEnum_SECTIONMODULUSUNIT;
        }
        else if (arg == ".SOUNDPOWERUNIT.") {
            m_unitType = IfcDerivedUnitEnum_SOUNDPOWERUNIT;
        }
        else if (arg == ".SOUNDPRESSUREUNIT.") {
            m_unitType = IfcDerivedUnitEnum_SOUNDPRESSUREUNIT;
        }
        else if (arg == ".TEMPERATUREGRADIENTUNIT.") {
            m_unitType = IfcDerivedUnitEnum_TEMPERATUREGRADIENTUNIT;
        }
        else if (arg == ".THERMALEXPANSIONCOEFFICIENTUNIT.") {
            m_unitType = IfcDerivedUnitEnum_THERMALEXPANSIONCOEFFICIENTUNIT;
        }
        else if (arg == ".WARPINGCONSTANTUNIT.") {
            m_unitType = IfcDerivedUnitEnum_WARPINGCONSTANTUNIT;
        }
        else if (arg == ".WARPINGMOMENTUNIT.") {
            m_unitType = IfcDerivedUnitEnum_WARPINGMOMENTUNIT;
        }
        else if (arg == ".USERDEFINED.") {
            m_unitType = IfcDerivedUnitEnum_USERDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedType = Step::getUnset(m_userDefinedType);
    }
    else {
        m_userDefinedType = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcDerivedUnit::copy(const IfcDerivedUnit &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDerivedUnitElement >, 1 >::const_iterator it_m_elements;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_elements = obj.m_elements.begin(); it_m_elements != obj.m_elements.end(); ++it_m_elements) {
        Step::RefPtr< IfcDerivedUnitElement > copyTarget = (IfcDerivedUnitElement *) (copyop((*it_m_elements).get()));
        m_elements.insert(copyTarget.get());
    }
    setUnitType(obj.m_unitType);
    setUserDefinedType(obj.m_userDefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDerivedUnit::s_type("IfcDerivedUnit");
