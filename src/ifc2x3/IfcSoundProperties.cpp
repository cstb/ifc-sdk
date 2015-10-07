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



#include <ifc2x3/IfcSoundProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcSoundValue.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSoundProperties::IfcSoundProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_isAttenuating = Step::getUnset(m_isAttenuating);
    m_soundScale = IfcSoundScaleEnum_UNSET;
}

IfcSoundProperties::~IfcSoundProperties() {
}

bool IfcSoundProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSoundProperties(this);
}

const std::string &IfcSoundProperties::type() const {
    return IfcSoundProperties::s_type.getName();
}

const Step::ClassType &IfcSoundProperties::getClassType() {
    return IfcSoundProperties::s_type;
}

const Step::ClassType &IfcSoundProperties::getType() const {
    return IfcSoundProperties::s_type;
}

bool IfcSoundProperties::isOfType(const Step::ClassType &t) const {
    return IfcSoundProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcBoolean IfcSoundProperties::getIsAttenuating() {
    if (Step::BaseObject::inited()) {
        return m_isAttenuating;
    }
    else {
        return Step::getUnset(m_isAttenuating);
    }
}

const IfcBoolean IfcSoundProperties::getIsAttenuating() const {
    IfcSoundProperties * deConstObject = const_cast< IfcSoundProperties * > (this);
    return deConstObject->getIsAttenuating();
}

void IfcSoundProperties::setIsAttenuating(IfcBoolean value) {
    m_isAttenuating = value;
}

void IfcSoundProperties::unsetIsAttenuating() {
    m_isAttenuating = Step::getUnset(getIsAttenuating());
}

bool IfcSoundProperties::testIsAttenuating() const {
    return !Step::isUnset(getIsAttenuating());
}

IfcSoundScaleEnum IfcSoundProperties::getSoundScale() {
    if (Step::BaseObject::inited()) {
        return m_soundScale;
    }
    else {
        return IfcSoundScaleEnum_UNSET;
    }
}

const IfcSoundScaleEnum IfcSoundProperties::getSoundScale() const {
    IfcSoundProperties * deConstObject = const_cast< IfcSoundProperties * > (this);
    return deConstObject->getSoundScale();
}

void IfcSoundProperties::setSoundScale(IfcSoundScaleEnum value) {
    m_soundScale = value;
}

void IfcSoundProperties::unsetSoundScale() {
    m_soundScale = IfcSoundScaleEnum_UNSET;
}

bool IfcSoundProperties::testSoundScale() const {
    return getSoundScale() != IfcSoundScaleEnum_UNSET;
}

List_IfcSoundValue_1_8 &IfcSoundProperties::getSoundValues() {
    if (Step::BaseObject::inited()) {
        return m_soundValues;
    }
    else {
        m_soundValues.setUnset(true);
        return m_soundValues;
    }
}

const List_IfcSoundValue_1_8 &IfcSoundProperties::getSoundValues() const {
    IfcSoundProperties * deConstObject = const_cast< IfcSoundProperties * > (this);
    return deConstObject->getSoundValues();
}

void IfcSoundProperties::setSoundValues(const List_IfcSoundValue_1_8 &value) {
    m_soundValues = value;
}

void IfcSoundProperties::unsetSoundValues() {
    m_soundValues.clear();
    m_soundValues.setUnset(true);
}

bool IfcSoundProperties::testSoundValues() const {
    return !m_soundValues.isUnset();
}

bool IfcSoundProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isAttenuating = Step::getUnset(m_isAttenuating);
    }
    else {
        m_isAttenuating = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_soundScale = IfcSoundScaleEnum_UNSET;
    }
    else {
        if (arg == ".DBA.") {
            m_soundScale = IfcSoundScaleEnum_DBA;
        }
        else if (arg == ".DBB.") {
            m_soundScale = IfcSoundScaleEnum_DBB;
        }
        else if (arg == ".DBC.") {
            m_soundScale = IfcSoundScaleEnum_DBC;
        }
        else if (arg == ".NC.") {
            m_soundScale = IfcSoundScaleEnum_NC;
        }
        else if (arg == ".NR.") {
            m_soundScale = IfcSoundScaleEnum_NR;
        }
        else if (arg == ".USERDEFINED.") {
            m_soundScale = IfcSoundScaleEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_soundScale = IfcSoundScaleEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_soundValues.setUnset(true);
    }
    else {
        m_soundValues.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSoundValue > attr2;
                attr2 = static_cast< IfcSoundValue * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_soundValues.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSoundProperties::copy(const IfcSoundProperties &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcSoundValue >, 1, 8 >::const_iterator it_m_soundValues;
    IfcPropertySetDefinition::copy(obj, copyop);
    setIsAttenuating(obj.m_isAttenuating);
    setSoundScale(obj.m_soundScale);
    for (it_m_soundValues = obj.m_soundValues.begin(); it_m_soundValues != obj.m_soundValues.end(); ++it_m_soundValues) {
        Step::RefPtr< IfcSoundValue > copyTarget = (IfcSoundValue *) (copyop((*it_m_soundValues).get()));
        m_soundValues.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSoundProperties::s_type("IfcSoundProperties");
