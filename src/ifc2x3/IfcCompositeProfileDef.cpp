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



#include <ifc2x3/IfcCompositeProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCompositeProfileDef::IfcCompositeProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_label = Step::getUnset(m_label);
}

IfcCompositeProfileDef::~IfcCompositeProfileDef() {
}

bool IfcCompositeProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCompositeProfileDef(this);
}

const std::string &IfcCompositeProfileDef::type() const {
    return IfcCompositeProfileDef::s_type.getName();
}

const Step::ClassType &IfcCompositeProfileDef::getClassType() {
    return IfcCompositeProfileDef::s_type;
}

const Step::ClassType &IfcCompositeProfileDef::getType() const {
    return IfcCompositeProfileDef::s_type;
}

bool IfcCompositeProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcCompositeProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

Set_IfcProfileDef_2_n &IfcCompositeProfileDef::getProfiles() {
    if (Step::BaseObject::inited()) {
        return m_profiles;
    }
    else {
        m_profiles.setUnset(true);
        return m_profiles;
    }
}

const Set_IfcProfileDef_2_n &IfcCompositeProfileDef::getProfiles() const {
    IfcCompositeProfileDef * deConstObject = const_cast< IfcCompositeProfileDef * > (this);
    return deConstObject->getProfiles();
}

void IfcCompositeProfileDef::setProfiles(const Set_IfcProfileDef_2_n &value) {
    m_profiles = value;
}

void IfcCompositeProfileDef::unsetProfiles() {
    m_profiles.clear();
    m_profiles.setUnset(true);
}

bool IfcCompositeProfileDef::testProfiles() const {
    return !m_profiles.isUnset();
}

IfcLabel IfcCompositeProfileDef::getLabel() {
    if (Step::BaseObject::inited()) {
        return m_label;
    }
    else {
        return Step::getUnset(m_label);
    }
}

const IfcLabel IfcCompositeProfileDef::getLabel() const {
    IfcCompositeProfileDef * deConstObject = const_cast< IfcCompositeProfileDef * > (this);
    return deConstObject->getLabel();
}

void IfcCompositeProfileDef::setLabel(const IfcLabel &value) {
    m_label = value;
}

void IfcCompositeProfileDef::unsetLabel() {
    m_label = Step::getUnset(getLabel());
}

bool IfcCompositeProfileDef::testLabel() const {
    return !Step::isUnset(getLabel());
}

bool IfcCompositeProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profiles.setUnset(true);
    }
    else {
        m_profiles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProfileDef > attr2;
                attr2 = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_profiles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_label = Step::getUnset(m_label);
    }
    else {
        m_label = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcCompositeProfileDef::copy(const IfcCompositeProfileDef &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProfileDef >, 2 >::const_iterator it_m_profiles;
    IfcProfileDef::copy(obj, copyop);
    for (it_m_profiles = obj.m_profiles.begin(); it_m_profiles != obj.m_profiles.end(); ++it_m_profiles) {
        Step::RefPtr< IfcProfileDef > copyTarget = (IfcProfileDef *) (copyop((*it_m_profiles).get()));
        m_profiles.insert(copyTarget.get());
    }
    setLabel(obj.m_label);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCompositeProfileDef::s_type("IfcCompositeProfileDef");
