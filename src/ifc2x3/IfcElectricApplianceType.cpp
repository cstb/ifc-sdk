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



#include <ifc2x3/IfcElectricApplianceType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowTerminalType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcElectricApplianceType::IfcElectricApplianceType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcElectricApplianceTypeEnum_UNSET;
}

IfcElectricApplianceType::~IfcElectricApplianceType() {
}

bool IfcElectricApplianceType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricApplianceType(this);
}

const std::string &IfcElectricApplianceType::type() const {
    return IfcElectricApplianceType::s_type.getName();
}

const Step::ClassType &IfcElectricApplianceType::getClassType() {
    return IfcElectricApplianceType::s_type;
}

const Step::ClassType &IfcElectricApplianceType::getType() const {
    return IfcElectricApplianceType::s_type;
}

bool IfcElectricApplianceType::isOfType(const Step::ClassType &t) const {
    return IfcElectricApplianceType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcElectricApplianceTypeEnum IfcElectricApplianceType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcElectricApplianceTypeEnum_UNSET;
    }
}

const IfcElectricApplianceTypeEnum IfcElectricApplianceType::getPredefinedType() const {
    IfcElectricApplianceType * deConstObject = const_cast< IfcElectricApplianceType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcElectricApplianceType::setPredefinedType(IfcElectricApplianceTypeEnum value) {
    m_predefinedType = value;
}

void IfcElectricApplianceType::unsetPredefinedType() {
    m_predefinedType = IfcElectricApplianceTypeEnum_UNSET;
}

bool IfcElectricApplianceType::testPredefinedType() const {
    return getPredefinedType() != IfcElectricApplianceTypeEnum_UNSET;
}

bool IfcElectricApplianceType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcElectricApplianceTypeEnum_UNSET;
    }
    else {
        if (arg == ".COMPUTER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_COMPUTER;
        }
        else if (arg == ".DIRECTWATERHEATER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_DIRECTWATERHEATER;
        }
        else if (arg == ".DISHWASHER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_DISHWASHER;
        }
        else if (arg == ".ELECTRICCOOKER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_ELECTRICCOOKER;
        }
        else if (arg == ".ELECTRICHEATER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_ELECTRICHEATER;
        }
        else if (arg == ".FACSIMILE.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_FACSIMILE;
        }
        else if (arg == ".FREESTANDINGFAN.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_FREESTANDINGFAN;
        }
        else if (arg == ".FREEZER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_FREEZER;
        }
        else if (arg == ".FRIDGE_FREEZER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_FRIDGE_FREEZER;
        }
        else if (arg == ".HANDDRYER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_HANDDRYER;
        }
        else if (arg == ".INDIRECTWATERHEATER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_INDIRECTWATERHEATER;
        }
        else if (arg == ".MICROWAVE.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_MICROWAVE;
        }
        else if (arg == ".PHOTOCOPIER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_PHOTOCOPIER;
        }
        else if (arg == ".PRINTER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_PRINTER;
        }
        else if (arg == ".REFRIGERATOR.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_REFRIGERATOR;
        }
        else if (arg == ".RADIANTHEATER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_RADIANTHEATER;
        }
        else if (arg == ".SCANNER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_SCANNER;
        }
        else if (arg == ".TELEPHONE.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_TELEPHONE;
        }
        else if (arg == ".TUMBLEDRYER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_TUMBLEDRYER;
        }
        else if (arg == ".TV.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_TV;
        }
        else if (arg == ".VENDINGMACHINE.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_VENDINGMACHINE;
        }
        else if (arg == ".WASHINGMACHINE.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_WASHINGMACHINE;
        }
        else if (arg == ".WATERHEATER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_WATERHEATER;
        }
        else if (arg == ".WATERCOOLER.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_WATERCOOLER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcElectricApplianceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricApplianceType::copy(const IfcElectricApplianceType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElectricApplianceType::s_type("IfcElectricApplianceType");
