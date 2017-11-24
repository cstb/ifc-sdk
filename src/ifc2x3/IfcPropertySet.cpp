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



#include <ifc2x3/IfcPropertySet.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProperty.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPropertySet::IfcPropertySet(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
}

IfcPropertySet::~IfcPropertySet() {
}

bool IfcPropertySet::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPropertySet(this);
}

const std::string &IfcPropertySet::type() const {
    return IfcPropertySet::s_type.getName();
}

const Step::ClassType &IfcPropertySet::getClassType() {
    return IfcPropertySet::s_type;
}

const Step::ClassType &IfcPropertySet::getType() const {
    return IfcPropertySet::s_type;
}

bool IfcPropertySet::isOfType(const Step::ClassType &t) const {
    return IfcPropertySet::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

Set_IfcProperty_1_n &IfcPropertySet::getHasProperties() {
    if (Step::BaseObject::inited()) {
        return m_hasProperties;
    }
    else {
        m_hasProperties.setUnset(true);
        return m_hasProperties;
    }
}

const Set_IfcProperty_1_n &IfcPropertySet::getHasProperties() const {
    IfcPropertySet * deConstObject = const_cast< IfcPropertySet * > (this);
    return deConstObject->getHasProperties();
}

void IfcPropertySet::setHasProperties(const Set_IfcProperty_1_n &value) {
    m_hasProperties = value;
}

void IfcPropertySet::unsetHasProperties() {
    m_hasProperties.clear();
    m_hasProperties.setUnset(true);
}

bool IfcPropertySet::testHasProperties() const {
    return !m_hasProperties.isUnset();
}

bool IfcPropertySet::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hasProperties.setUnset(true);
    }
    else {
        m_hasProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_hasProperties.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPropertySet::copy(const IfcPropertySet &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty >, 1 >::const_iterator it_m_hasProperties;
    IfcPropertySetDefinition::copy(obj, copyop);
    for (it_m_hasProperties = obj.m_hasProperties.begin(); it_m_hasProperties != obj.m_hasProperties.end(); ++it_m_hasProperties) {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_hasProperties).get()));
        m_hasProperties.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPropertySet::s_type("IfcPropertySet");
