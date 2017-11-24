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



#include <ifc2x3/IfcSurfaceStyle.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPresentationStyle.h>
#include <ifc2x3/IfcSurfaceStyleElementSelect.h>
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

IfcSurfaceStyle::IfcSurfaceStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
    m_side = IfcSurfaceSide_UNSET;
}

IfcSurfaceStyle::~IfcSurfaceStyle() {
}

bool IfcSurfaceStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyle(this);
}

const std::string &IfcSurfaceStyle::type() const {
    return IfcSurfaceStyle::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyle::getClassType() {
    return IfcSurfaceStyle::s_type;
}

const Step::ClassType &IfcSurfaceStyle::getType() const {
    return IfcSurfaceStyle::s_type;
}

bool IfcSurfaceStyle::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

IfcSurfaceSide IfcSurfaceStyle::getSide() {
    if (Step::BaseObject::inited()) {
        return m_side;
    }
    else {
        return IfcSurfaceSide_UNSET;
    }
}

const IfcSurfaceSide IfcSurfaceStyle::getSide() const {
    IfcSurfaceStyle * deConstObject = const_cast< IfcSurfaceStyle * > (this);
    return deConstObject->getSide();
}

void IfcSurfaceStyle::setSide(IfcSurfaceSide value) {
    m_side = value;
}

void IfcSurfaceStyle::unsetSide() {
    m_side = IfcSurfaceSide_UNSET;
}

bool IfcSurfaceStyle::testSide() const {
    return getSide() != IfcSurfaceSide_UNSET;
}

Set_IfcSurfaceStyleElementSelect_1_5 &IfcSurfaceStyle::getStyles() {
    if (Step::BaseObject::inited()) {
        return m_styles;
    }
    else {
        m_styles.setUnset(true);
        return m_styles;
    }
}

const Set_IfcSurfaceStyleElementSelect_1_5 &IfcSurfaceStyle::getStyles() const {
    IfcSurfaceStyle * deConstObject = const_cast< IfcSurfaceStyle * > (this);
    return deConstObject->getStyles();
}

void IfcSurfaceStyle::setStyles(const Set_IfcSurfaceStyleElementSelect_1_5 &value) {
    m_styles = value;
}

void IfcSurfaceStyle::unsetStyles() {
    m_styles.clear();
    m_styles.setUnset(true);
}

bool IfcSurfaceStyle::testStyles() const {
    return !m_styles.isUnset();
}

bool IfcSurfaceStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_side = IfcSurfaceSide_UNSET;
    }
    else {
        if (arg == ".POSITIVE.") {
            m_side = IfcSurfaceSide_POSITIVE;
        }
        else if (arg == ".NEGATIVE.") {
            m_side = IfcSurfaceSide_NEGATIVE;
        }
        else if (arg == ".BOTH.") {
            m_side = IfcSurfaceSide_BOTH;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_styles.setUnset(true);
    }
    else {
        m_styles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcSurfaceStyleElementSelect > attr2;
                attr2 = new IfcSurfaceStyleElementSelect;
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
                if (attr2.valid()) m_styles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcSurfaceStyle::copy(const IfcSurfaceStyle &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcSurfaceStyleElementSelect >, 1, 5 >::const_iterator it_m_styles;
    IfcPresentationStyle::copy(obj, copyop);
    setSide(obj.m_side);
    for (it_m_styles = obj.m_styles.begin(); it_m_styles != obj.m_styles.end(); ++it_m_styles) {
        Step::RefPtr< IfcSurfaceStyleElementSelect > copyTarget = new IfcSurfaceStyleElementSelect;
        copyTarget->copy(*((*it_m_styles).get()), copyop);
        m_styles.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceStyle::s_type("IfcSurfaceStyle");
