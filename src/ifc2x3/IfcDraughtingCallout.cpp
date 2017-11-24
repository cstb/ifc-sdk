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



#include <ifc2x3/IfcDraughtingCallout.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDraughtingCalloutElement.h>
#include <ifc2x3/IfcDraughtingCalloutRelationship.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcDraughtingCallout::IfcDraughtingCallout(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcDraughtingCallout::~IfcDraughtingCallout() {
}

bool IfcDraughtingCallout::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDraughtingCallout(this);
}

const std::string &IfcDraughtingCallout::type() const {
    return IfcDraughtingCallout::s_type.getName();
}

const Step::ClassType &IfcDraughtingCallout::getClassType() {
    return IfcDraughtingCallout::s_type;
}

const Step::ClassType &IfcDraughtingCallout::getType() const {
    return IfcDraughtingCallout::s_type;
}

bool IfcDraughtingCallout::isOfType(const Step::ClassType &t) const {
    return IfcDraughtingCallout::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Set_IfcDraughtingCalloutElement_1_n &IfcDraughtingCallout::getContents() {
    if (Step::BaseObject::inited()) {
        return m_contents;
    }
    else {
        m_contents.setUnset(true);
        return m_contents;
    }
}

const Set_IfcDraughtingCalloutElement_1_n &IfcDraughtingCallout::getContents() const {
    IfcDraughtingCallout * deConstObject = const_cast< IfcDraughtingCallout * > (this);
    return deConstObject->getContents();
}

void IfcDraughtingCallout::setContents(const Set_IfcDraughtingCalloutElement_1_n &value) {
    m_contents = value;
}

void IfcDraughtingCallout::unsetContents() {
    m_contents.clear();
    m_contents.setUnset(true);
}

bool IfcDraughtingCallout::testContents() const {
    return !m_contents.isUnset();
}

Inverse_Set_IfcDraughtingCalloutRelationship_0_n &IfcDraughtingCallout::getIsRelatedFromCallout() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedFromCallout;
    }
    else {
        m_isRelatedFromCallout.setUnset(true);
        return m_isRelatedFromCallout;
    }
}

const Inverse_Set_IfcDraughtingCalloutRelationship_0_n &IfcDraughtingCallout::getIsRelatedFromCallout() const {
    IfcDraughtingCallout * deConstObject = const_cast< IfcDraughtingCallout * > (this);
    return deConstObject->getIsRelatedFromCallout();
}

bool IfcDraughtingCallout::testIsRelatedFromCallout() const {
    return !m_isRelatedFromCallout.isUnset();
}

Inverse_Set_IfcDraughtingCalloutRelationship_0_n &IfcDraughtingCallout::getIsRelatedToCallout() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedToCallout;
    }
    else {
        m_isRelatedToCallout.setUnset(true);
        return m_isRelatedToCallout;
    }
}

const Inverse_Set_IfcDraughtingCalloutRelationship_0_n &IfcDraughtingCallout::getIsRelatedToCallout() const {
    IfcDraughtingCallout * deConstObject = const_cast< IfcDraughtingCallout * > (this);
    return deConstObject->getIsRelatedToCallout();
}

bool IfcDraughtingCallout::testIsRelatedToCallout() const {
    return !m_isRelatedToCallout.isUnset();
}

bool IfcDraughtingCallout::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contents.setUnset(true);
    }
    else {
        m_contents.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDraughtingCalloutElement > attr2;
                attr2 = new IfcDraughtingCalloutElement;
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
                if (attr2.valid()) m_contents.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcDraughtingCalloutRelationship::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_isRelatedFromCallout.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedFromCallout.insert(static_cast< IfcDraughtingCalloutRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcDraughtingCalloutRelationship::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_isRelatedToCallout.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedToCallout.insert(static_cast< IfcDraughtingCalloutRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDraughtingCallout::copy(const IfcDraughtingCallout &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDraughtingCalloutElement >, 1 >::const_iterator it_m_contents;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    for (it_m_contents = obj.m_contents.begin(); it_m_contents != obj.m_contents.end(); ++it_m_contents) {
        Step::RefPtr< IfcDraughtingCalloutElement > copyTarget = new IfcDraughtingCalloutElement;
        copyTarget->copy(*((*it_m_contents).get()), copyop);
        m_contents.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDraughtingCallout::s_type("IfcDraughtingCallout");
