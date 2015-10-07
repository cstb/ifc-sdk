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



#include <ifc2x3/IfcCableCarrierFittingType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFlowFittingType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCableCarrierFittingType::IfcCableCarrierFittingType(Step::Id id, Step::SPFData *args) : IfcFlowFittingType(id, args) {
    m_predefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
}

IfcCableCarrierFittingType::~IfcCableCarrierFittingType() {
}

bool IfcCableCarrierFittingType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCableCarrierFittingType(this);
}

const std::string &IfcCableCarrierFittingType::type() const {
    return IfcCableCarrierFittingType::s_type.getName();
}

const Step::ClassType &IfcCableCarrierFittingType::getClassType() {
    return IfcCableCarrierFittingType::s_type;
}

const Step::ClassType &IfcCableCarrierFittingType::getType() const {
    return IfcCableCarrierFittingType::s_type;
}

bool IfcCableCarrierFittingType::isOfType(const Step::ClassType &t) const {
    return IfcCableCarrierFittingType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcCableCarrierFittingTypeEnum IfcCableCarrierFittingType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcCableCarrierFittingTypeEnum_UNSET;
    }
}

const IfcCableCarrierFittingTypeEnum IfcCableCarrierFittingType::getPredefinedType() const {
    IfcCableCarrierFittingType * deConstObject = const_cast< IfcCableCarrierFittingType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcCableCarrierFittingType::setPredefinedType(IfcCableCarrierFittingTypeEnum value) {
    m_predefinedType = value;
}

void IfcCableCarrierFittingType::unsetPredefinedType() {
    m_predefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
}

bool IfcCableCarrierFittingType::testPredefinedType() const {
    return getPredefinedType() != IfcCableCarrierFittingTypeEnum_UNSET;
}

bool IfcCableCarrierFittingType::init() {
    bool status = IfcFlowFittingType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
    }
    else {
        if (arg == ".BEND.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_BEND;
        }
        else if (arg == ".CROSS.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_CROSS;
        }
        else if (arg == ".REDUCER.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_REDUCER;
        }
        else if (arg == ".TEE.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_TEE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcCableCarrierFittingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCableCarrierFittingType::copy(const IfcCableCarrierFittingType &obj, const CopyOp &copyop) {
    IfcFlowFittingType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCableCarrierFittingType::s_type("IfcCableCarrierFittingType");
