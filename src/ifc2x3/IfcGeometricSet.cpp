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



#include <ifc2x3/IfcGeometricSet.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/IfcGeometricSetSelect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcGeometricSet::IfcGeometricSet(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcGeometricSet::~IfcGeometricSet() {
}

bool IfcGeometricSet::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeometricSet(this);
}

const std::string &IfcGeometricSet::type() const {
    return IfcGeometricSet::s_type.getName();
}

const Step::ClassType &IfcGeometricSet::getClassType() {
    return IfcGeometricSet::s_type;
}

const Step::ClassType &IfcGeometricSet::getType() const {
    return IfcGeometricSet::s_type;
}

bool IfcGeometricSet::isOfType(const Step::ClassType &t) const {
    return IfcGeometricSet::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Set_IfcGeometricSetSelect_1_n &IfcGeometricSet::getElements() {
    if (Step::BaseObject::inited()) {
        return m_elements;
    }
    else {
        m_elements.setUnset(true);
        return m_elements;
    }
}

const Set_IfcGeometricSetSelect_1_n &IfcGeometricSet::getElements() const {
    IfcGeometricSet * deConstObject = const_cast< IfcGeometricSet * > (this);
    return deConstObject->getElements();
}

void IfcGeometricSet::setElements(const Set_IfcGeometricSetSelect_1_n &value) {
    m_elements = value;
}

void IfcGeometricSet::unsetElements() {
    m_elements.clear();
    m_elements.setUnset(true);
}

bool IfcGeometricSet::testElements() const {
    return !m_elements.isUnset();
}

bool IfcGeometricSet::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_elements.setUnset(true);
    }
    else {
        m_elements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcGeometricSetSelect > attr2;
                attr2 = new IfcGeometricSetSelect;
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
                if (attr2.valid()) m_elements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcGeometricSet::copy(const IfcGeometricSet &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcGeometricSetSelect >, 1 >::const_iterator it_m_elements;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    for (it_m_elements = obj.m_elements.begin(); it_m_elements != obj.m_elements.end(); ++it_m_elements) {
        Step::RefPtr< IfcGeometricSetSelect > copyTarget = new IfcGeometricSetSelect;
        copyTarget->copy(*((*it_m_elements).get()), copyop);
        m_elements.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGeometricSet::s_type("IfcGeometricSet");
