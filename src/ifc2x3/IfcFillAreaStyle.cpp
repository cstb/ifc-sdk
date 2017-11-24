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



#include <ifc2x3/IfcFillAreaStyle.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFillStyleSelect.h>
#include <ifc2x3/IfcPresentationStyle.h>
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

IfcFillAreaStyle::IfcFillAreaStyle(Step::Id id, Step::SPFData *args) : IfcPresentationStyle(id, args) {
}

IfcFillAreaStyle::~IfcFillAreaStyle() {
}

bool IfcFillAreaStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFillAreaStyle(this);
}

const std::string &IfcFillAreaStyle::type() const {
    return IfcFillAreaStyle::s_type.getName();
}

const Step::ClassType &IfcFillAreaStyle::getClassType() {
    return IfcFillAreaStyle::s_type;
}

const Step::ClassType &IfcFillAreaStyle::getType() const {
    return IfcFillAreaStyle::s_type;
}

bool IfcFillAreaStyle::isOfType(const Step::ClassType &t) const {
    return IfcFillAreaStyle::s_type == t ? true : IfcPresentationStyle::isOfType(t);
}

Set_IfcFillStyleSelect_1_n &IfcFillAreaStyle::getFillStyles() {
    if (Step::BaseObject::inited()) {
        return m_fillStyles;
    }
    else {
        m_fillStyles.setUnset(true);
        return m_fillStyles;
    }
}

const Set_IfcFillStyleSelect_1_n &IfcFillAreaStyle::getFillStyles() const {
    IfcFillAreaStyle * deConstObject = const_cast< IfcFillAreaStyle * > (this);
    return deConstObject->getFillStyles();
}

void IfcFillAreaStyle::setFillStyles(const Set_IfcFillStyleSelect_1_n &value) {
    m_fillStyles = value;
}

void IfcFillAreaStyle::unsetFillStyles() {
    m_fillStyles.clear();
    m_fillStyles.setUnset(true);
}

bool IfcFillAreaStyle::testFillStyles() const {
    return !m_fillStyles.isUnset();
}

bool IfcFillAreaStyle::init() {
    bool status = IfcPresentationStyle::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fillStyles.setUnset(true);
    }
    else {
        m_fillStyles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcFillStyleSelect > attr2;
                attr2 = new IfcFillStyleSelect;
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
                if (attr2.valid()) m_fillStyles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcFillAreaStyle::copy(const IfcFillAreaStyle &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcFillStyleSelect >, 1 >::const_iterator it_m_fillStyles;
    IfcPresentationStyle::copy(obj, copyop);
    for (it_m_fillStyles = obj.m_fillStyles.begin(); it_m_fillStyles != obj.m_fillStyles.end(); ++it_m_fillStyles) {
        Step::RefPtr< IfcFillStyleSelect > copyTarget = new IfcFillStyleSelect;
        copyTarget->copy(*((*it_m_fillStyles).get()), copyop);
        m_fillStyles.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFillAreaStyle::s_type("IfcFillAreaStyle");
