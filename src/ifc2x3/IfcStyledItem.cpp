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



#include <ifc2x3/IfcStyledItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPresentationStyleAssignment.h>
#include <ifc2x3/IfcRepresentationItem.h>
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

IfcStyledItem::IfcStyledItem(Step::Id id, Step::SPFData *args) : IfcRepresentationItem(id, args) {
    m_item = NULL;
    m_name = Step::getUnset(m_name);
}

IfcStyledItem::~IfcStyledItem() {
}

bool IfcStyledItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStyledItem(this);
}

const std::string &IfcStyledItem::type() const {
    return IfcStyledItem::s_type.getName();
}

const Step::ClassType &IfcStyledItem::getClassType() {
    return IfcStyledItem::s_type;
}

const Step::ClassType &IfcStyledItem::getType() const {
    return IfcStyledItem::s_type;
}

bool IfcStyledItem::isOfType(const Step::ClassType &t) const {
    return IfcStyledItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

IfcRepresentationItem *IfcStyledItem::getItem() {
    if (Step::BaseObject::inited()) {
        return m_item.get();
    }
    else {
        return NULL;
    }
}

const IfcRepresentationItem *IfcStyledItem::getItem() const {
    IfcStyledItem * deConstObject = const_cast< IfcStyledItem * > (this);
    return deConstObject->getItem();
}

void IfcStyledItem::setItem(const Step::RefPtr< IfcRepresentationItem > &value) {
    if (m_item.valid()) {
        m_item->getStyledByItem().erase(this);
    }
    if (value.valid()) {
        value->getStyledByItem().insert(this);
    }
    m_item = value;
}

void IfcStyledItem::unsetItem() {
    m_item = Step::getUnset(getItem());
}

bool IfcStyledItem::testItem() const {
    return !Step::isUnset(getItem());
}

Set_IfcPresentationStyleAssignment_1_n &IfcStyledItem::getStyles() {
    if (Step::BaseObject::inited()) {
        return m_styles;
    }
    else {
        m_styles.setUnset(true);
        return m_styles;
    }
}

const Set_IfcPresentationStyleAssignment_1_n &IfcStyledItem::getStyles() const {
    IfcStyledItem * deConstObject = const_cast< IfcStyledItem * > (this);
    return deConstObject->getStyles();
}

void IfcStyledItem::setStyles(const Set_IfcPresentationStyleAssignment_1_n &value) {
    m_styles = value;
}

void IfcStyledItem::unsetStyles() {
    m_styles.clear();
    m_styles.setUnset(true);
}

bool IfcStyledItem::testStyles() const {
    return !m_styles.isUnset();
}

IfcLabel IfcStyledItem::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcStyledItem::getName() const {
    IfcStyledItem * deConstObject = const_cast< IfcStyledItem * > (this);
    return deConstObject->getName();
}

void IfcStyledItem::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcStyledItem::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcStyledItem::testName() const {
    return !Step::isUnset(getName());
}

bool IfcStyledItem::init() {
    bool status = IfcRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_item = NULL;
    }
    else {
        m_item = static_cast< IfcRepresentationItem * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
                Step::RefPtr< IfcPresentationStyleAssignment > attr2;
                attr2 = static_cast< IfcPresentationStyleAssignment * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_styles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcStyledItem::copy(const IfcStyledItem &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPresentationStyleAssignment >, 1 >::const_iterator it_m_styles;
    IfcRepresentationItem::copy(obj, copyop);
    setItem((IfcRepresentationItem*)copyop(obj.m_item.get()));
    for (it_m_styles = obj.m_styles.begin(); it_m_styles != obj.m_styles.end(); ++it_m_styles) {
        Step::RefPtr< IfcPresentationStyleAssignment > copyTarget = (IfcPresentationStyleAssignment *) (copyop((*it_m_styles).get()));
        m_styles.insert(copyTarget.get());
    }
    setName(obj.m_name);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStyledItem::s_type("IfcStyledItem");
