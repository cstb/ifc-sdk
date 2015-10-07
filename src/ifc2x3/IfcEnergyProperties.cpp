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



#include <ifc2x3/IfcEnergyProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcEnergyProperties::IfcEnergyProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_energySequence = IfcEnergySequenceEnum_UNSET;
    m_userDefinedEnergySequence = Step::getUnset(m_userDefinedEnergySequence);
}

IfcEnergyProperties::~IfcEnergyProperties() {
}

bool IfcEnergyProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEnergyProperties(this);
}

const std::string &IfcEnergyProperties::type() const {
    return IfcEnergyProperties::s_type.getName();
}

const Step::ClassType &IfcEnergyProperties::getClassType() {
    return IfcEnergyProperties::s_type;
}

const Step::ClassType &IfcEnergyProperties::getType() const {
    return IfcEnergyProperties::s_type;
}

bool IfcEnergyProperties::isOfType(const Step::ClassType &t) const {
    return IfcEnergyProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcEnergySequenceEnum IfcEnergyProperties::getEnergySequence() {
    if (Step::BaseObject::inited()) {
        return m_energySequence;
    }
    else {
        return IfcEnergySequenceEnum_UNSET;
    }
}

const IfcEnergySequenceEnum IfcEnergyProperties::getEnergySequence() const {
    IfcEnergyProperties * deConstObject = const_cast< IfcEnergyProperties * > (this);
    return deConstObject->getEnergySequence();
}

void IfcEnergyProperties::setEnergySequence(IfcEnergySequenceEnum value) {
    m_energySequence = value;
}

void IfcEnergyProperties::unsetEnergySequence() {
    m_energySequence = IfcEnergySequenceEnum_UNSET;
}

bool IfcEnergyProperties::testEnergySequence() const {
    return getEnergySequence() != IfcEnergySequenceEnum_UNSET;
}

IfcLabel IfcEnergyProperties::getUserDefinedEnergySequence() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedEnergySequence;
    }
    else {
        return Step::getUnset(m_userDefinedEnergySequence);
    }
}

const IfcLabel IfcEnergyProperties::getUserDefinedEnergySequence() const {
    IfcEnergyProperties * deConstObject = const_cast< IfcEnergyProperties * > (this);
    return deConstObject->getUserDefinedEnergySequence();
}

void IfcEnergyProperties::setUserDefinedEnergySequence(const IfcLabel &value) {
    m_userDefinedEnergySequence = value;
}

void IfcEnergyProperties::unsetUserDefinedEnergySequence() {
    m_userDefinedEnergySequence = Step::getUnset(getUserDefinedEnergySequence());
}

bool IfcEnergyProperties::testUserDefinedEnergySequence() const {
    return !Step::isUnset(getUserDefinedEnergySequence());
}

bool IfcEnergyProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_energySequence = IfcEnergySequenceEnum_UNSET;
    }
    else {
        if (arg == ".PRIMARY.") {
            m_energySequence = IfcEnergySequenceEnum_PRIMARY;
        }
        else if (arg == ".SECONDARY.") {
            m_energySequence = IfcEnergySequenceEnum_SECONDARY;
        }
        else if (arg == ".TERTIARY.") {
            m_energySequence = IfcEnergySequenceEnum_TERTIARY;
        }
        else if (arg == ".AUXILIARY.") {
            m_energySequence = IfcEnergySequenceEnum_AUXILIARY;
        }
        else if (arg == ".USERDEFINED.") {
            m_energySequence = IfcEnergySequenceEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_energySequence = IfcEnergySequenceEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedEnergySequence = Step::getUnset(m_userDefinedEnergySequence);
    }
    else {
        m_userDefinedEnergySequence = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcEnergyProperties::copy(const IfcEnergyProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setEnergySequence(obj.m_energySequence);
    setUserDefinedEnergySequence(obj.m_userDefinedEnergySequence);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcEnergyProperties::s_type("IfcEnergyProperties");
