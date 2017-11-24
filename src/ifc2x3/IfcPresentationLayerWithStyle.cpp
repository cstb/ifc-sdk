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



#include <ifc2x3/IfcPresentationLayerWithStyle.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcPresentationStyleSelect.h>
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

IfcPresentationLayerWithStyle::IfcPresentationLayerWithStyle(Step::Id id, Step::SPFData *args) : IfcPresentationLayerAssignment(id, args) {
    m_layerOn = Step::getUnset(m_layerOn);
    m_layerFrozen = Step::getUnset(m_layerFrozen);
    m_layerBlocked = Step::getUnset(m_layerBlocked);
}

IfcPresentationLayerWithStyle::~IfcPresentationLayerWithStyle() {
}

bool IfcPresentationLayerWithStyle::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPresentationLayerWithStyle(this);
}

const std::string &IfcPresentationLayerWithStyle::type() const {
    return IfcPresentationLayerWithStyle::s_type.getName();
}

const Step::ClassType &IfcPresentationLayerWithStyle::getClassType() {
    return IfcPresentationLayerWithStyle::s_type;
}

const Step::ClassType &IfcPresentationLayerWithStyle::getType() const {
    return IfcPresentationLayerWithStyle::s_type;
}

bool IfcPresentationLayerWithStyle::isOfType(const Step::ClassType &t) const {
    return IfcPresentationLayerWithStyle::s_type == t ? true : IfcPresentationLayerAssignment::isOfType(t);
}

Step::Logical IfcPresentationLayerWithStyle::getLayerOn() {
    if (Step::BaseObject::inited()) {
        return m_layerOn;
    }
    else {
        return Step::getUnset(m_layerOn);
    }
}

const Step::Logical IfcPresentationLayerWithStyle::getLayerOn() const {
    IfcPresentationLayerWithStyle * deConstObject = const_cast< IfcPresentationLayerWithStyle * > (this);
    return deConstObject->getLayerOn();
}

void IfcPresentationLayerWithStyle::setLayerOn(Step::Logical value) {
    m_layerOn = value;
}

void IfcPresentationLayerWithStyle::unsetLayerOn() {
    m_layerOn = Step::getUnset(getLayerOn());
}

bool IfcPresentationLayerWithStyle::testLayerOn() const {
    return !Step::isUnset(getLayerOn());
}

Step::Logical IfcPresentationLayerWithStyle::getLayerFrozen() {
    if (Step::BaseObject::inited()) {
        return m_layerFrozen;
    }
    else {
        return Step::getUnset(m_layerFrozen);
    }
}

const Step::Logical IfcPresentationLayerWithStyle::getLayerFrozen() const {
    IfcPresentationLayerWithStyle * deConstObject = const_cast< IfcPresentationLayerWithStyle * > (this);
    return deConstObject->getLayerFrozen();
}

void IfcPresentationLayerWithStyle::setLayerFrozen(Step::Logical value) {
    m_layerFrozen = value;
}

void IfcPresentationLayerWithStyle::unsetLayerFrozen() {
    m_layerFrozen = Step::getUnset(getLayerFrozen());
}

bool IfcPresentationLayerWithStyle::testLayerFrozen() const {
    return !Step::isUnset(getLayerFrozen());
}

Step::Logical IfcPresentationLayerWithStyle::getLayerBlocked() {
    if (Step::BaseObject::inited()) {
        return m_layerBlocked;
    }
    else {
        return Step::getUnset(m_layerBlocked);
    }
}

const Step::Logical IfcPresentationLayerWithStyle::getLayerBlocked() const {
    IfcPresentationLayerWithStyle * deConstObject = const_cast< IfcPresentationLayerWithStyle * > (this);
    return deConstObject->getLayerBlocked();
}

void IfcPresentationLayerWithStyle::setLayerBlocked(Step::Logical value) {
    m_layerBlocked = value;
}

void IfcPresentationLayerWithStyle::unsetLayerBlocked() {
    m_layerBlocked = Step::getUnset(getLayerBlocked());
}

bool IfcPresentationLayerWithStyle::testLayerBlocked() const {
    return !Step::isUnset(getLayerBlocked());
}

Set_IfcPresentationStyleSelect_0_n &IfcPresentationLayerWithStyle::getLayerStyles() {
    if (Step::BaseObject::inited()) {
        return m_layerStyles;
    }
    else {
        m_layerStyles.setUnset(true);
        return m_layerStyles;
    }
}

const Set_IfcPresentationStyleSelect_0_n &IfcPresentationLayerWithStyle::getLayerStyles() const {
    IfcPresentationLayerWithStyle * deConstObject = const_cast< IfcPresentationLayerWithStyle * > (this);
    return deConstObject->getLayerStyles();
}

void IfcPresentationLayerWithStyle::setLayerStyles(const Set_IfcPresentationStyleSelect_0_n &value) {
    m_layerStyles = value;
}

void IfcPresentationLayerWithStyle::unsetLayerStyles() {
    m_layerStyles.clear();
    m_layerStyles.setUnset(true);
}

bool IfcPresentationLayerWithStyle::testLayerStyles() const {
    return !m_layerStyles.isUnset();
}

bool IfcPresentationLayerWithStyle::init() {
    bool status = IfcPresentationLayerAssignment::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerOn = Step::getUnset(m_layerOn);
    }
    else {
        m_layerOn = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerFrozen = Step::getUnset(m_layerFrozen);
    }
    else {
        m_layerFrozen = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerBlocked = Step::getUnset(m_layerBlocked);
    }
    else {
        m_layerBlocked = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerStyles.setUnset(true);
    }
    else {
        m_layerStyles.setUnset(false);
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
                if (attr2.valid()) m_layerStyles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPresentationLayerWithStyle::copy(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPresentationStyleSelect > >::const_iterator it_m_layerStyles;
    IfcPresentationLayerAssignment::copy(obj, copyop);
    setLayerOn(obj.m_layerOn);
    setLayerFrozen(obj.m_layerFrozen);
    setLayerBlocked(obj.m_layerBlocked);
    for (it_m_layerStyles = obj.m_layerStyles.begin(); it_m_layerStyles != obj.m_layerStyles.end(); ++it_m_layerStyles) {
        Step::RefPtr< IfcPresentationStyleSelect > copyTarget = new IfcPresentationStyleSelect;
        copyTarget->copy(*((*it_m_layerStyles).get()), copyop);
        m_layerStyles.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPresentationLayerWithStyle::s_type("IfcPresentationLayerWithStyle");
