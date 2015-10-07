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



#include <ifc2x3/IfcDistributionChamberElementType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDistributionFlowElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDistributionChamberElementType::IfcDistributionChamberElementType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
    m_predefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
}

IfcDistributionChamberElementType::~IfcDistributionChamberElementType() {
}

bool IfcDistributionChamberElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDistributionChamberElementType(this);
}

const std::string &IfcDistributionChamberElementType::type() const {
    return IfcDistributionChamberElementType::s_type.getName();
}

const Step::ClassType &IfcDistributionChamberElementType::getClassType() {
    return IfcDistributionChamberElementType::s_type;
}

const Step::ClassType &IfcDistributionChamberElementType::getType() const {
    return IfcDistributionChamberElementType::s_type;
}

bool IfcDistributionChamberElementType::isOfType(const Step::ClassType &t) const {
    return IfcDistributionChamberElementType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

IfcDistributionChamberElementTypeEnum IfcDistributionChamberElementType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcDistributionChamberElementTypeEnum_UNSET;
    }
}

const IfcDistributionChamberElementTypeEnum IfcDistributionChamberElementType::getPredefinedType() const {
    IfcDistributionChamberElementType * deConstObject = const_cast< IfcDistributionChamberElementType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcDistributionChamberElementType::setPredefinedType(IfcDistributionChamberElementTypeEnum value) {
    m_predefinedType = value;
}

void IfcDistributionChamberElementType::unsetPredefinedType() {
    m_predefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
}

bool IfcDistributionChamberElementType::testPredefinedType() const {
    return getPredefinedType() != IfcDistributionChamberElementTypeEnum_UNSET;
}

bool IfcDistributionChamberElementType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
    }
    else {
        if (arg == ".FORMEDDUCT.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_FORMEDDUCT;
        }
        else if (arg == ".INSPECTIONCHAMBER.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_INSPECTIONCHAMBER;
        }
        else if (arg == ".INSPECTIONPIT.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_INSPECTIONPIT;
        }
        else if (arg == ".MANHOLE.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_MANHOLE;
        }
        else if (arg == ".METERCHAMBER.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_METERCHAMBER;
        }
        else if (arg == ".SUMP.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_SUMP;
        }
        else if (arg == ".TRENCH.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_TRENCH;
        }
        else if (arg == ".VALVECHAMBER.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_VALVECHAMBER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcDistributionChamberElementTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDistributionChamberElementType::copy(const IfcDistributionChamberElementType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDistributionChamberElementType::s_type("IfcDistributionChamberElementType");
