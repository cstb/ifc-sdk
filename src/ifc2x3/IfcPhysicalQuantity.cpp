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



#include <ifc2x3/IfcPhysicalQuantity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPhysicalComplexQuantity.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcPhysicalQuantity::IfcPhysicalQuantity(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcPhysicalQuantity::~IfcPhysicalQuantity() {
}

bool IfcPhysicalQuantity::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPhysicalQuantity(this);
}

const std::string &IfcPhysicalQuantity::type() const {
    return IfcPhysicalQuantity::s_type.getName();
}

const Step::ClassType &IfcPhysicalQuantity::getClassType() {
    return IfcPhysicalQuantity::s_type;
}

const Step::ClassType &IfcPhysicalQuantity::getType() const {
    return IfcPhysicalQuantity::s_type;
}

bool IfcPhysicalQuantity::isOfType(const Step::ClassType &t) const {
    return IfcPhysicalQuantity::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPhysicalQuantity::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcPhysicalQuantity::getName() const {
    IfcPhysicalQuantity * deConstObject = const_cast< IfcPhysicalQuantity * > (this);
    return deConstObject->getName();
}

void IfcPhysicalQuantity::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcPhysicalQuantity::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcPhysicalQuantity::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcPhysicalQuantity::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcPhysicalQuantity::getDescription() const {
    IfcPhysicalQuantity * deConstObject = const_cast< IfcPhysicalQuantity * > (this);
    return deConstObject->getDescription();
}

void IfcPhysicalQuantity::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcPhysicalQuantity::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcPhysicalQuantity::testDescription() const {
    return !Step::isUnset(getDescription());
}

Inverse_Set_IfcPhysicalComplexQuantity_0_1 &IfcPhysicalQuantity::getPartOfComplex() {
    if (Step::BaseObject::inited()) {
        return m_partOfComplex;
    }
    else {
        m_partOfComplex.setUnset(true);
        return m_partOfComplex;
    }
}

const Inverse_Set_IfcPhysicalComplexQuantity_0_1 &IfcPhysicalQuantity::getPartOfComplex() const {
    IfcPhysicalQuantity * deConstObject = const_cast< IfcPhysicalQuantity * > (this);
    return deConstObject->getPartOfComplex();
}

bool IfcPhysicalQuantity::testPartOfComplex() const {
    return !m_partOfComplex.isUnset();
}

bool IfcPhysicalQuantity::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcPhysicalComplexQuantity::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_partOfComplex.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_partOfComplex.insert(static_cast< IfcPhysicalComplexQuantity * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPhysicalQuantity::copy(const IfcPhysicalQuantity &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPhysicalQuantity::s_type("IfcPhysicalQuantity");
