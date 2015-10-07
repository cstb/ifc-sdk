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



#include <ifc2x3/IfcControllerType.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDistributionControlElementType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcControllerType::IfcControllerType(Step::Id id, Step::SPFData *args) : IfcDistributionControlElementType(id, args) {
    m_predefinedType = IfcControllerTypeEnum_UNSET;
}

IfcControllerType::~IfcControllerType() {
}

bool IfcControllerType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcControllerType(this);
}

const std::string &IfcControllerType::type() const {
    return IfcControllerType::s_type.getName();
}

const Step::ClassType &IfcControllerType::getClassType() {
    return IfcControllerType::s_type;
}

const Step::ClassType &IfcControllerType::getType() const {
    return IfcControllerType::s_type;
}

bool IfcControllerType::isOfType(const Step::ClassType &t) const {
    return IfcControllerType::s_type == t ? true : IfcDistributionControlElementType::isOfType(t);
}

IfcControllerTypeEnum IfcControllerType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcControllerTypeEnum_UNSET;
    }
}

const IfcControllerTypeEnum IfcControllerType::getPredefinedType() const {
    IfcControllerType * deConstObject = const_cast< IfcControllerType * > (this);
    return deConstObject->getPredefinedType();
}

void IfcControllerType::setPredefinedType(IfcControllerTypeEnum value) {
    m_predefinedType = value;
}

void IfcControllerType::unsetPredefinedType() {
    m_predefinedType = IfcControllerTypeEnum_UNSET;
}

bool IfcControllerType::testPredefinedType() const {
    return getPredefinedType() != IfcControllerTypeEnum_UNSET;
}

bool IfcControllerType::init() {
    bool status = IfcDistributionControlElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcControllerTypeEnum_UNSET;
    }
    else {
        if (arg == ".FLOATING.") {
            m_predefinedType = IfcControllerTypeEnum_FLOATING;
        }
        else if (arg == ".PROPORTIONAL.") {
            m_predefinedType = IfcControllerTypeEnum_PROPORTIONAL;
        }
        else if (arg == ".PROPORTIONALINTEGRAL.") {
            m_predefinedType = IfcControllerTypeEnum_PROPORTIONALINTEGRAL;
        }
        else if (arg == ".PROPORTIONALINTEGRALDERIVATIVE.") {
            m_predefinedType = IfcControllerTypeEnum_PROPORTIONALINTEGRALDERIVATIVE;
        }
        else if (arg == ".TIMEDTWOPOSITION.") {
            m_predefinedType = IfcControllerTypeEnum_TIMEDTWOPOSITION;
        }
        else if (arg == ".TWOPOSITION.") {
            m_predefinedType = IfcControllerTypeEnum_TWOPOSITION;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcControllerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcControllerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcControllerType::copy(const IfcControllerType &obj, const CopyOp &copyop) {
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcControllerType::s_type("IfcControllerType");
