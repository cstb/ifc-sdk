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



#include <ifc2x3/IfcElementQuantity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPhysicalQuantity.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
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

IfcElementQuantity::IfcElementQuantity(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_methodOfMeasurement = Step::getUnset(m_methodOfMeasurement);
}

IfcElementQuantity::~IfcElementQuantity() {
}

bool IfcElementQuantity::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElementQuantity(this);
}

const std::string &IfcElementQuantity::type() const {
    return IfcElementQuantity::s_type.getName();
}

const Step::ClassType &IfcElementQuantity::getClassType() {
    return IfcElementQuantity::s_type;
}

const Step::ClassType &IfcElementQuantity::getType() const {
    return IfcElementQuantity::s_type;
}

bool IfcElementQuantity::isOfType(const Step::ClassType &t) const {
    return IfcElementQuantity::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcLabel IfcElementQuantity::getMethodOfMeasurement() {
    if (Step::BaseObject::inited()) {
        return m_methodOfMeasurement;
    }
    else {
        return Step::getUnset(m_methodOfMeasurement);
    }
}

const IfcLabel IfcElementQuantity::getMethodOfMeasurement() const {
    IfcElementQuantity * deConstObject = const_cast< IfcElementQuantity * > (this);
    return deConstObject->getMethodOfMeasurement();
}

void IfcElementQuantity::setMethodOfMeasurement(const IfcLabel &value) {
    m_methodOfMeasurement = value;
}

void IfcElementQuantity::unsetMethodOfMeasurement() {
    m_methodOfMeasurement = Step::getUnset(getMethodOfMeasurement());
}

bool IfcElementQuantity::testMethodOfMeasurement() const {
    return !Step::isUnset(getMethodOfMeasurement());
}

Set_IfcPhysicalQuantity_1_n &IfcElementQuantity::getQuantities() {
    if (Step::BaseObject::inited()) {
        return m_quantities;
    }
    else {
        m_quantities.setUnset(true);
        return m_quantities;
    }
}

const Set_IfcPhysicalQuantity_1_n &IfcElementQuantity::getQuantities() const {
    IfcElementQuantity * deConstObject = const_cast< IfcElementQuantity * > (this);
    return deConstObject->getQuantities();
}

void IfcElementQuantity::setQuantities(const Set_IfcPhysicalQuantity_1_n &value) {
    m_quantities = value;
}

void IfcElementQuantity::unsetQuantities() {
    m_quantities.clear();
    m_quantities.setUnset(true);
}

bool IfcElementQuantity::testQuantities() const {
    return !m_quantities.isUnset();
}

bool IfcElementQuantity::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_methodOfMeasurement = Step::getUnset(m_methodOfMeasurement);
    }
    else {
        m_methodOfMeasurement = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_quantities.setUnset(true);
    }
    else {
        m_quantities.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPhysicalQuantity > attr2;
                attr2 = static_cast< IfcPhysicalQuantity * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_quantities.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcElementQuantity::copy(const IfcElementQuantity &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPhysicalQuantity >, 1 >::const_iterator it_m_quantities;
    IfcPropertySetDefinition::copy(obj, copyop);
    setMethodOfMeasurement(obj.m_methodOfMeasurement);
    for (it_m_quantities = obj.m_quantities.begin(); it_m_quantities != obj.m_quantities.end(); ++it_m_quantities) {
        Step::RefPtr< IfcPhysicalQuantity > copyTarget = (IfcPhysicalQuantity *) (copyop((*it_m_quantities).get()));
        m_quantities.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElementQuantity::s_type("IfcElementQuantity");
