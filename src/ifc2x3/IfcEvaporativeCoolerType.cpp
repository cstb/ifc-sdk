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



#include <ifc2x3/IfcEvaporativeCoolerType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEnergyConversionDeviceType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcEvaporativeCoolerType::IfcEvaporativeCoolerType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
}

IfcEvaporativeCoolerType::~IfcEvaporativeCoolerType() {
}

bool IfcEvaporativeCoolerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEvaporativeCoolerType(this);
}

const std::string &IfcEvaporativeCoolerType::type() const {
    return IfcEvaporativeCoolerType::s_type.getName();
}

const Step::ClassType &IfcEvaporativeCoolerType::getClassType() {
    return IfcEvaporativeCoolerType::s_type;
}

const Step::ClassType &IfcEvaporativeCoolerType::getType() const {
    return IfcEvaporativeCoolerType::s_type;
}

bool IfcEvaporativeCoolerType::isOfType(const Step::ClassType &t) const {
    return IfcEvaporativeCoolerType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcEvaporativeCoolerTypeEnum IfcEvaporativeCoolerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcEvaporativeCoolerTypeEnum_UNSET;
    }
}

const IfcEvaporativeCoolerTypeEnum IfcEvaporativeCoolerType::getPredefinedType() const {
    IfcEvaporativeCoolerType * deConstObject = const_cast< IfcEvaporativeCoolerType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcEvaporativeCoolerType::setPredefinedType(IfcEvaporativeCoolerTypeEnum value) {
    m_predefinedType = value;
}

void IfcEvaporativeCoolerType::unsetPredefinedType() {
    m_predefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
}

bool IfcEvaporativeCoolerType::testPredefinedType() const {
    return getPredefinedType() != IfcEvaporativeCoolerTypeEnum_UNSET;
}

bool IfcEvaporativeCoolerType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
    }
    else {
        if (arg == ".DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVEAIRWASHER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEAIRWASHER;
        }
        else if (arg == ".INDIRECTEVAPORATIVEPACKAGEAIRCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEPACKAGEAIRCOOLER;
        }
        else if (arg == ".INDIRECTEVAPORATIVEWETCOIL.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEWETCOIL;
        }
        else if (arg == ".INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER;
        }
        else if (arg == ".INDIRECTDIRECTCOMBINATION.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTDIRECTCOMBINATION;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcEvaporativeCoolerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcEvaporativeCoolerType::copy(const IfcEvaporativeCoolerType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcEvaporativeCoolerType::s_type("IfcEvaporativeCoolerType");
