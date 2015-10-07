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



#include <ifc2x3/IfcClassification.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcClassification::IfcClassification(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_source = Step::getUnset(m_source);
    m_edition = Step::getUnset(m_edition);
    m_editionDate = NULL;
    m_name = Step::getUnset(m_name);
}

IfcClassification::~IfcClassification() {
}

bool IfcClassification::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcClassification(this);
}

const std::string &IfcClassification::type() const {
    return IfcClassification::s_type.getName();
}

const Step::ClassType &IfcClassification::getClassType() {
    return IfcClassification::s_type;
}

const Step::ClassType &IfcClassification::getType() const {
    return IfcClassification::s_type;
}

bool IfcClassification::isOfType(const Step::ClassType &t) const {
    return IfcClassification::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcClassification::getSource() {
    if (Step::BaseObject::inited()) {
        return m_source;
    }
    else {
        return Step::getUnset(m_source);
    }
}

const IfcLabel IfcClassification::getSource() const {
    IfcClassification * deConstObject = const_cast< IfcClassification * > (this);
    return deConstObject->getSource();
}

void IfcClassification::setSource(const IfcLabel &value) {
    m_source = value;
}

void IfcClassification::unsetSource() {
    m_source = Step::getUnset(getSource());
}

bool IfcClassification::testSource() const {
    return !Step::isUnset(getSource());
}

IfcLabel IfcClassification::getEdition() {
    if (Step::BaseObject::inited()) {
        return m_edition;
    }
    else {
        return Step::getUnset(m_edition);
    }
}

const IfcLabel IfcClassification::getEdition() const {
    IfcClassification * deConstObject = const_cast< IfcClassification * > (this);
    return deConstObject->getEdition();
}

void IfcClassification::setEdition(const IfcLabel &value) {
    m_edition = value;
}

void IfcClassification::unsetEdition() {
    m_edition = Step::getUnset(getEdition());
}

bool IfcClassification::testEdition() const {
    return !Step::isUnset(getEdition());
}

IfcCalendarDate *IfcClassification::getEditionDate() {
    if (Step::BaseObject::inited()) {
        return m_editionDate.get();
    }
    else {
        return NULL;
    }
}

const IfcCalendarDate *IfcClassification::getEditionDate() const {
    IfcClassification * deConstObject = const_cast< IfcClassification * > (this);
    return deConstObject->getEditionDate();
}

void IfcClassification::setEditionDate(const Step::RefPtr< IfcCalendarDate > &value) {
    m_editionDate = value;
}

void IfcClassification::unsetEditionDate() {
    m_editionDate = Step::getUnset(getEditionDate());
}

bool IfcClassification::testEditionDate() const {
    return !Step::isUnset(getEditionDate());
}

IfcLabel IfcClassification::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcClassification::getName() const {
    IfcClassification * deConstObject = const_cast< IfcClassification * > (this);
    return deConstObject->getName();
}

void IfcClassification::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcClassification::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcClassification::testName() const {
    return !Step::isUnset(getName());
}

Inverse_Set_IfcClassificationItem_0_n &IfcClassification::getContains() {
    if (Step::BaseObject::inited()) {
        return m_contains;
    }
    else {
        m_contains.setUnset(true);
        return m_contains;
    }
}

const Inverse_Set_IfcClassificationItem_0_n &IfcClassification::getContains() const {
    IfcClassification * deConstObject = const_cast< IfcClassification * > (this);
    return deConstObject->getContains();
}

bool IfcClassification::testContains() const {
    return !m_contains.isUnset();
}

bool IfcClassification::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_source = Step::getUnset(m_source);
    }
    else {
        m_source = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edition = Step::getUnset(m_edition);
    }
    else {
        m_edition = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_editionDate = NULL;
    }
    else {
        m_editionDate = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcClassificationItem::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_contains.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_contains.insert(static_cast< IfcClassificationItem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcClassification::copy(const IfcClassification &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setSource(obj.m_source);
    setEdition(obj.m_edition);
    setEditionDate((IfcCalendarDate*)copyop(obj.m_editionDate.get()));
    setName(obj.m_name);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcClassification::s_type("IfcClassification");
