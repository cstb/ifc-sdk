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



#include <ifc2x3/IfcUnitAssignment.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcUnit.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcUnitAssignment::IfcUnitAssignment(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcUnitAssignment::~IfcUnitAssignment() {
}

bool IfcUnitAssignment::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcUnitAssignment(this);
}

const std::string &IfcUnitAssignment::type() const {
    return IfcUnitAssignment::s_type.getName();
}

const Step::ClassType &IfcUnitAssignment::getClassType() {
    return IfcUnitAssignment::s_type;
}

const Step::ClassType &IfcUnitAssignment::getType() const {
    return IfcUnitAssignment::s_type;
}

bool IfcUnitAssignment::isOfType(const Step::ClassType &t) const {
    return IfcUnitAssignment::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Set_IfcUnit_1_n &IfcUnitAssignment::getUnits() {
    if (Step::BaseObject::inited()) {
        return m_units;
    }
    else {
        m_units.setUnset(true);
        return m_units;
    }
}

const Set_IfcUnit_1_n &IfcUnitAssignment::getUnits() const {
    IfcUnitAssignment * deConstObject = const_cast< IfcUnitAssignment * > (this);
    return deConstObject->getUnits();
}

void IfcUnitAssignment::setUnits(const Set_IfcUnit_1_n &value) {
    m_units = value;
}

void IfcUnitAssignment::unsetUnits() {
    m_units.clear();
    m_units.setUnset(true);
}

bool IfcUnitAssignment::testUnits() const {
    return !m_units.isUnset();
}

bool IfcUnitAssignment::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_units.setUnset(true);
    }
    else {
        m_units.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcUnit > attr2;
                attr2 = new IfcUnit;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) m_units.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcUnitAssignment::copy(const IfcUnitAssignment &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcUnit >, 1 >::const_iterator it_m_units;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_units = obj.m_units.begin(); it_m_units != obj.m_units.end(); ++it_m_units) {
        Step::RefPtr< IfcUnit > copyTarget = new IfcUnit;
        copyTarget->copy(*((*it_m_units).get()), copyop);
        m_units.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcUnitAssignment::s_type("IfcUnitAssignment");
