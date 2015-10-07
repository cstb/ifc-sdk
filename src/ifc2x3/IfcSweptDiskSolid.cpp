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



#include <ifc2x3/IfcSweptDiskSolid.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSweptDiskSolid::IfcSweptDiskSolid(Step::Id id, Step::SPFData *args) : IfcSolidModel(id, args) {
    m_directrix = NULL;
    m_radius = Step::getUnset(m_radius);
    m_innerRadius = Step::getUnset(m_innerRadius);
    m_startParam = Step::getUnset(m_startParam);
    m_endParam = Step::getUnset(m_endParam);
}

IfcSweptDiskSolid::~IfcSweptDiskSolid() {
}

bool IfcSweptDiskSolid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSweptDiskSolid(this);
}

const std::string &IfcSweptDiskSolid::type() const {
    return IfcSweptDiskSolid::s_type.getName();
}

const Step::ClassType &IfcSweptDiskSolid::getClassType() {
    return IfcSweptDiskSolid::s_type;
}

const Step::ClassType &IfcSweptDiskSolid::getType() const {
    return IfcSweptDiskSolid::s_type;
}

bool IfcSweptDiskSolid::isOfType(const Step::ClassType &t) const {
    return IfcSweptDiskSolid::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcCurve *IfcSweptDiskSolid::getDirectrix() {
    if (Step::BaseObject::inited()) {
        return m_directrix.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcSweptDiskSolid::getDirectrix() const {
    IfcSweptDiskSolid * deConstObject = const_cast< IfcSweptDiskSolid * > (this);
    return deConstObject->getDirectrix();
}

void IfcSweptDiskSolid::setDirectrix(const Step::RefPtr< IfcCurve > &value) {
    m_directrix = value;
}

void IfcSweptDiskSolid::unsetDirectrix() {
    m_directrix = Step::getUnset(getDirectrix());
}

bool IfcSweptDiskSolid::testDirectrix() const {
    return !Step::isUnset(getDirectrix());
}

IfcPositiveLengthMeasure IfcSweptDiskSolid::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcSweptDiskSolid::getRadius() const {
    IfcSweptDiskSolid * deConstObject = const_cast< IfcSweptDiskSolid * > (this);
    return deConstObject->getRadius();
}

void IfcSweptDiskSolid::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcSweptDiskSolid::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcSweptDiskSolid::testRadius() const {
    return !Step::isUnset(getRadius());
}

IfcPositiveLengthMeasure IfcSweptDiskSolid::getInnerRadius() {
    if (Step::BaseObject::inited()) {
        return m_innerRadius;
    }
    else {
        return Step::getUnset(m_innerRadius);
    }
}

const IfcPositiveLengthMeasure IfcSweptDiskSolid::getInnerRadius() const {
    IfcSweptDiskSolid * deConstObject = const_cast< IfcSweptDiskSolid * > (this);
    return deConstObject->getInnerRadius();
}

void IfcSweptDiskSolid::setInnerRadius(IfcPositiveLengthMeasure value) {
    m_innerRadius = value;
}

void IfcSweptDiskSolid::unsetInnerRadius() {
    m_innerRadius = Step::getUnset(getInnerRadius());
}

bool IfcSweptDiskSolid::testInnerRadius() const {
    return !Step::isUnset(getInnerRadius());
}

IfcParameterValue IfcSweptDiskSolid::getStartParam() {
    if (Step::BaseObject::inited()) {
        return m_startParam;
    }
    else {
        return Step::getUnset(m_startParam);
    }
}

const IfcParameterValue IfcSweptDiskSolid::getStartParam() const {
    IfcSweptDiskSolid * deConstObject = const_cast< IfcSweptDiskSolid * > (this);
    return deConstObject->getStartParam();
}

void IfcSweptDiskSolid::setStartParam(IfcParameterValue value) {
    m_startParam = value;
}

void IfcSweptDiskSolid::unsetStartParam() {
    m_startParam = Step::getUnset(getStartParam());
}

bool IfcSweptDiskSolid::testStartParam() const {
    return !Step::isUnset(getStartParam());
}

IfcParameterValue IfcSweptDiskSolid::getEndParam() {
    if (Step::BaseObject::inited()) {
        return m_endParam;
    }
    else {
        return Step::getUnset(m_endParam);
    }
}

const IfcParameterValue IfcSweptDiskSolid::getEndParam() const {
    IfcSweptDiskSolid * deConstObject = const_cast< IfcSweptDiskSolid * > (this);
    return deConstObject->getEndParam();
}

void IfcSweptDiskSolid::setEndParam(IfcParameterValue value) {
    m_endParam = value;
}

void IfcSweptDiskSolid::unsetEndParam() {
    m_endParam = Step::getUnset(getEndParam());
}

bool IfcSweptDiskSolid::testEndParam() const {
    return !Step::isUnset(getEndParam());
}

bool IfcSweptDiskSolid::init() {
    bool status = IfcSolidModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_directrix = NULL;
    }
    else {
        m_directrix = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_radius = Step::getUnset(m_radius);
    }
    else {
        m_radius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_innerRadius = Step::getUnset(m_innerRadius);
    }
    else {
        m_innerRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_startParam = Step::getUnset(m_startParam);
    }
    else {
        m_startParam = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_endParam = Step::getUnset(m_endParam);
    }
    else {
        m_endParam = Step::spfToReal(arg);
    }
    return true;
}

void IfcSweptDiskSolid::copy(const IfcSweptDiskSolid &obj, const CopyOp &copyop) {
    IfcSolidModel::copy(obj, copyop);
    setDirectrix((IfcCurve*)copyop(obj.m_directrix.get()));
    setRadius(obj.m_radius);
    setInnerRadius(obj.m_innerRadius);
    setStartParam(obj.m_startParam);
    setEndParam(obj.m_endParam);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSweptDiskSolid::s_type("IfcSweptDiskSolid");
