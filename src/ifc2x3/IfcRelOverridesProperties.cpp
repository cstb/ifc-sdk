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



#include <ifc2x3/IfcRelOverridesProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/IfcRelDefinesByProperties.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelOverridesProperties::IfcRelOverridesProperties(Step::Id id, Step::SPFData *args) : IfcRelDefinesByProperties(id, args) {
}

IfcRelOverridesProperties::~IfcRelOverridesProperties() {
}

bool IfcRelOverridesProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelOverridesProperties(this);
}

const std::string &IfcRelOverridesProperties::type() const {
    return IfcRelOverridesProperties::s_type.getName();
}

const Step::ClassType &IfcRelOverridesProperties::getClassType() {
    return IfcRelOverridesProperties::s_type;
}

const Step::ClassType &IfcRelOverridesProperties::getType() const {
    return IfcRelOverridesProperties::s_type;
}

bool IfcRelOverridesProperties::isOfType(const Step::ClassType &t) const {
    return IfcRelOverridesProperties::s_type == t ? true : IfcRelDefinesByProperties::isOfType(t);
}

Set_IfcProperty_1_n &IfcRelOverridesProperties::getOverridingProperties() {
    if (Step::BaseObject::inited()) {
        return m_overridingProperties;
    }
    else {
        m_overridingProperties.setUnset(true);
        return m_overridingProperties;
    }
}

const Set_IfcProperty_1_n &IfcRelOverridesProperties::getOverridingProperties() const {
    IfcRelOverridesProperties * deConstObject = const_cast< IfcRelOverridesProperties * > (this);
    return deConstObject->getOverridingProperties();
}

void IfcRelOverridesProperties::setOverridingProperties(const Set_IfcProperty_1_n &value) {
    m_overridingProperties = value;
}

void IfcRelOverridesProperties::unsetOverridingProperties() {
    m_overridingProperties.clear();
    m_overridingProperties.setUnset(true);
}

bool IfcRelOverridesProperties::testOverridingProperties() const {
    return !m_overridingProperties.isUnset();
}

bool IfcRelOverridesProperties::init() {
    bool status = IfcRelDefinesByProperties::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overridingProperties.setUnset(true);
    }
    else {
        m_overridingProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_overridingProperties.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcRelOverridesProperties::copy(const IfcRelOverridesProperties &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty >, 1 >::const_iterator it_m_overridingProperties;
    IfcRelDefinesByProperties::copy(obj, copyop);
    for (it_m_overridingProperties = obj.m_overridingProperties.begin(); it_m_overridingProperties != obj.m_overridingProperties.end(); ++it_m_overridingProperties) {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_overridingProperties).get()));
        m_overridingProperties.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelOverridesProperties::s_type("IfcRelOverridesProperties");
