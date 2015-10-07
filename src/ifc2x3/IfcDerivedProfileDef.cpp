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



#include <ifc2x3/IfcDerivedProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/IfcProfileDef.h>
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

IfcDerivedProfileDef::IfcDerivedProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_parentProfile = NULL;
    m_operator = NULL;
    m_label = Step::getUnset(m_label);
}

IfcDerivedProfileDef::~IfcDerivedProfileDef() {
}

bool IfcDerivedProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDerivedProfileDef(this);
}

const std::string &IfcDerivedProfileDef::type() const {
    return IfcDerivedProfileDef::s_type.getName();
}

const Step::ClassType &IfcDerivedProfileDef::getClassType() {
    return IfcDerivedProfileDef::s_type;
}

const Step::ClassType &IfcDerivedProfileDef::getType() const {
    return IfcDerivedProfileDef::s_type;
}

bool IfcDerivedProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcDerivedProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcProfileDef *IfcDerivedProfileDef::getParentProfile() {
    if (Step::BaseObject::inited()) {
        return m_parentProfile.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileDef *IfcDerivedProfileDef::getParentProfile() const {
    IfcDerivedProfileDef * deConstObject = const_cast< IfcDerivedProfileDef * > (this);
    return deConstObject->getParentProfile();
}

void IfcDerivedProfileDef::setParentProfile(const Step::RefPtr< IfcProfileDef > &value) {
    m_parentProfile = value;
}

void IfcDerivedProfileDef::unsetParentProfile() {
    m_parentProfile = Step::getUnset(getParentProfile());
}

bool IfcDerivedProfileDef::testParentProfile() const {
    return !Step::isUnset(getParentProfile());
}

IfcCartesianTransformationOperator2D *IfcDerivedProfileDef::getOperator() {
    if (Step::BaseObject::inited()) {
        return m_operator.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianTransformationOperator2D *IfcDerivedProfileDef::getOperator() const {
    IfcDerivedProfileDef * deConstObject = const_cast< IfcDerivedProfileDef * > (this);
    return deConstObject->getOperator();
}

void IfcDerivedProfileDef::setOperator(const Step::RefPtr< IfcCartesianTransformationOperator2D > &value) {
    m_operator = value;
}

void IfcDerivedProfileDef::unsetOperator() {
    m_operator = Step::getUnset(getOperator());
}

bool IfcDerivedProfileDef::testOperator() const {
    return !Step::isUnset(getOperator());
}

IfcLabel IfcDerivedProfileDef::getLabel() {
    if (Step::BaseObject::inited()) {
        return m_label;
    }
    else {
        return Step::getUnset(m_label);
    }
}

const IfcLabel IfcDerivedProfileDef::getLabel() const {
    IfcDerivedProfileDef * deConstObject = const_cast< IfcDerivedProfileDef * > (this);
    return deConstObject->getLabel();
}

void IfcDerivedProfileDef::setLabel(const IfcLabel &value) {
    m_label = value;
}

void IfcDerivedProfileDef::unsetLabel() {
    m_label = Step::getUnset(getLabel());
}

bool IfcDerivedProfileDef::testLabel() const {
    return !Step::isUnset(getLabel());
}

bool IfcDerivedProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parentProfile = NULL;
    }
    else {
        m_parentProfile = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operator = NULL;
    }
    else {
        m_operator = static_cast< IfcCartesianTransformationOperator2D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_label = Step::getUnset(m_label);
    }
    else {
        m_label = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcDerivedProfileDef::copy(const IfcDerivedProfileDef &obj, const CopyOp &copyop) {
    IfcProfileDef::copy(obj, copyop);
    setParentProfile((IfcProfileDef*)copyop(obj.m_parentProfile.get()));
    setOperator((IfcCartesianTransformationOperator2D*)copyop(obj.m_operator.get()));
    setLabel(obj.m_label);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDerivedProfileDef::s_type("IfcDerivedProfileDef");
