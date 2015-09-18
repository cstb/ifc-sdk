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



#include <ifc2x3/IfcSurfaceCurveSweptAreaSolid.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/IfcSweptAreaSolid.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSurfaceCurveSweptAreaSolid::IfcSurfaceCurveSweptAreaSolid(Step::Id id, Step::SPFData *args) : IfcSweptAreaSolid(id, args) {
    m_directrix = NULL;
    m_startParam = Step::getUnset(m_startParam);
    m_endParam = Step::getUnset(m_endParam);
    m_referenceSurface = NULL;
}

IfcSurfaceCurveSweptAreaSolid::~IfcSurfaceCurveSweptAreaSolid() {
}

bool IfcSurfaceCurveSweptAreaSolid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceCurveSweptAreaSolid(this);
}

const std::string &IfcSurfaceCurveSweptAreaSolid::type() const {
    return IfcSurfaceCurveSweptAreaSolid::s_type.getName();
}

const Step::ClassType &IfcSurfaceCurveSweptAreaSolid::getClassType() {
    return IfcSurfaceCurveSweptAreaSolid::s_type;
}

const Step::ClassType &IfcSurfaceCurveSweptAreaSolid::getType() const {
    return IfcSurfaceCurveSweptAreaSolid::s_type;
}

bool IfcSurfaceCurveSweptAreaSolid::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceCurveSweptAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcCurve *IfcSurfaceCurveSweptAreaSolid::getDirectrix() {
    if (Step::BaseObject::inited()) {
        return m_directrix.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcSurfaceCurveSweptAreaSolid::getDirectrix() const {
    IfcSurfaceCurveSweptAreaSolid * deConstObject = const_cast< IfcSurfaceCurveSweptAreaSolid * > (this);
    return deConstObject->getDirectrix();
}

void IfcSurfaceCurveSweptAreaSolid::setDirectrix(const Step::RefPtr< IfcCurve > &value) {
    m_directrix = value;
}

void IfcSurfaceCurveSweptAreaSolid::unsetDirectrix() {
    m_directrix = Step::getUnset(getDirectrix());
}

bool IfcSurfaceCurveSweptAreaSolid::testDirectrix() const {
    return !Step::isUnset(getDirectrix());
}

IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getStartParam() {
    if (Step::BaseObject::inited()) {
        return m_startParam;
    }
    else {
        return Step::getUnset(m_startParam);
    }
}

const IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getStartParam() const {
    IfcSurfaceCurveSweptAreaSolid * deConstObject = const_cast< IfcSurfaceCurveSweptAreaSolid * > (this);
    return deConstObject->getStartParam();
}

void IfcSurfaceCurveSweptAreaSolid::setStartParam(IfcParameterValue value) {
    m_startParam = value;
}

void IfcSurfaceCurveSweptAreaSolid::unsetStartParam() {
    m_startParam = Step::getUnset(getStartParam());
}

bool IfcSurfaceCurveSweptAreaSolid::testStartParam() const {
    return !Step::isUnset(getStartParam());
}

IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getEndParam() {
    if (Step::BaseObject::inited()) {
        return m_endParam;
    }
    else {
        return Step::getUnset(m_endParam);
    }
}

const IfcParameterValue IfcSurfaceCurveSweptAreaSolid::getEndParam() const {
    IfcSurfaceCurveSweptAreaSolid * deConstObject = const_cast< IfcSurfaceCurveSweptAreaSolid * > (this);
    return deConstObject->getEndParam();
}

void IfcSurfaceCurveSweptAreaSolid::setEndParam(IfcParameterValue value) {
    m_endParam = value;
}

void IfcSurfaceCurveSweptAreaSolid::unsetEndParam() {
    m_endParam = Step::getUnset(getEndParam());
}

bool IfcSurfaceCurveSweptAreaSolid::testEndParam() const {
    return !Step::isUnset(getEndParam());
}

IfcSurface *IfcSurfaceCurveSweptAreaSolid::getReferenceSurface() {
    if (Step::BaseObject::inited()) {
        return m_referenceSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcSurface *IfcSurfaceCurveSweptAreaSolid::getReferenceSurface() const {
    IfcSurfaceCurveSweptAreaSolid * deConstObject = const_cast< IfcSurfaceCurveSweptAreaSolid * > (this);
    return deConstObject->getReferenceSurface();
}

void IfcSurfaceCurveSweptAreaSolid::setReferenceSurface(const Step::RefPtr< IfcSurface > &value) {
    m_referenceSurface = value;
}

void IfcSurfaceCurveSweptAreaSolid::unsetReferenceSurface() {
    m_referenceSurface = Step::getUnset(getReferenceSurface());
}

bool IfcSurfaceCurveSweptAreaSolid::testReferenceSurface() const {
    return !Step::isUnset(getReferenceSurface());
}

bool IfcSurfaceCurveSweptAreaSolid::init() {
    bool status = IfcSweptAreaSolid::init();
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referenceSurface = NULL;
    }
    else {
        m_referenceSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSurfaceCurveSweptAreaSolid::copy(const IfcSurfaceCurveSweptAreaSolid &obj, const CopyOp &copyop) {
    IfcSweptAreaSolid::copy(obj, copyop);
    setDirectrix((IfcCurve*)copyop(obj.m_directrix.get()));
    setStartParam(obj.m_startParam);
    setEndParam(obj.m_endParam);
    setReferenceSurface((IfcSurface*)copyop(obj.m_referenceSurface.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceCurveSweptAreaSolid::s_type("IfcSurfaceCurveSweptAreaSolid");
