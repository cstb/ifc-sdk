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



#include <ifc2x3/IfcPresentationStyleAssignment.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPresentationStyleSelect.h>
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

IfcPresentationStyleAssignment::IfcPresentationStyleAssignment(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcPresentationStyleAssignment::~IfcPresentationStyleAssignment() {
}

bool IfcPresentationStyleAssignment::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPresentationStyleAssignment(this);
}

const std::string &IfcPresentationStyleAssignment::type() const {
    return IfcPresentationStyleAssignment::s_type.getName();
}

const Step::ClassType &IfcPresentationStyleAssignment::getClassType() {
    return IfcPresentationStyleAssignment::s_type;
}

const Step::ClassType &IfcPresentationStyleAssignment::getType() const {
    return IfcPresentationStyleAssignment::s_type;
}

bool IfcPresentationStyleAssignment::isOfType(const Step::ClassType &t) const {
    return IfcPresentationStyleAssignment::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Set_IfcPresentationStyleSelect_1_n &IfcPresentationStyleAssignment::getStyles() {
    if (Step::BaseObject::inited()) {
        return m_styles;
    }
    else {
        m_styles.setUnset(true);
        return m_styles;
    }
}

const Set_IfcPresentationStyleSelect_1_n &IfcPresentationStyleAssignment::getStyles() const {
    IfcPresentationStyleAssignment * deConstObject = const_cast< IfcPresentationStyleAssignment * > (this);
    return deConstObject->getStyles();
}

void IfcPresentationStyleAssignment::setStyles(const Set_IfcPresentationStyleSelect_1_n &value) {
    m_styles = value;
}

void IfcPresentationStyleAssignment::unsetStyles() {
    m_styles.clear();
    m_styles.setUnset(true);
}

bool IfcPresentationStyleAssignment::testStyles() const {
    return !m_styles.isUnset();
}

bool IfcPresentationStyleAssignment::init() {
    std::string arg;
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
                Step::RefPtr< IfcPresentationStyleSelect > attr2;
                attr2 = new IfcPresentationStyleSelect;
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
                        if (type2 == "IFCNULLSTYLE") {
                            IfcNullStyle tmp_attr2 = IfcNullStyle_UNSET;
                            if (str1 == ".NULL.") {
                                tmp_attr2 = IfcNullStyle_NULL;
                            }
                            attr2->setIfcNullStyle(tmp_attr2);
                        }
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

void IfcPresentationStyleAssignment::copy(const IfcPresentationStyleAssignment &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPresentationStyleSelect >, 1 >::const_iterator it_m_styles;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_styles = obj.m_styles.begin(); it_m_styles != obj.m_styles.end(); ++it_m_styles) {
        Step::RefPtr< IfcPresentationStyleSelect > copyTarget = new IfcPresentationStyleSelect;
        copyTarget->copy(*((*it_m_styles).get()), copyop);
        m_styles.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPresentationStyleAssignment::s_type("IfcPresentationStyleAssignment");
