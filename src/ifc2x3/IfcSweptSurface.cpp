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



#include <ifc2x3/IfcSweptSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSweptSurface::IfcSweptSurface(Step::Id id, Step::SPFData *args) : IfcSurface(id, args) {
    m_sweptCurve = NULL;
    m_position = NULL;
}

IfcSweptSurface::~IfcSweptSurface() {
}

bool IfcSweptSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSweptSurface(this);
}

const std::string &IfcSweptSurface::type() const {
    return IfcSweptSurface::s_type.getName();
}

const Step::ClassType &IfcSweptSurface::getClassType() {
    return IfcSweptSurface::s_type;
}

const Step::ClassType &IfcSweptSurface::getType() const {
    return IfcSweptSurface::s_type;
}

bool IfcSweptSurface::isOfType(const Step::ClassType &t) const {
    return IfcSweptSurface::s_type == t ? true : IfcSurface::isOfType(t);
}

IfcProfileDef *IfcSweptSurface::getSweptCurve() {
    if (Step::BaseObject::inited()) {
        return m_sweptCurve.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileDef *IfcSweptSurface::getSweptCurve() const {
    IfcSweptSurface * deConstObject = const_cast< IfcSweptSurface * > (this);
    return deConstObject->getSweptCurve();
}

void IfcSweptSurface::setSweptCurve(const Step::RefPtr< IfcProfileDef > &value) {
    m_sweptCurve = value;
}

void IfcSweptSurface::unsetSweptCurve() {
    m_sweptCurve = Step::getUnset(getSweptCurve());
}

bool IfcSweptSurface::testSweptCurve() const {
    return !Step::isUnset(getSweptCurve());
}

IfcAxis2Placement3D *IfcSweptSurface::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement3D *IfcSweptSurface::getPosition() const {
    IfcSweptSurface * deConstObject = const_cast< IfcSweptSurface * > (this);
    return deConstObject->getPosition();
}

void IfcSweptSurface::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

void IfcSweptSurface::unsetPosition() {
    m_position = Step::getUnset(getPosition());
}

bool IfcSweptSurface::testPosition() const {
    return !Step::isUnset(getPosition());
}

bool IfcSweptSurface::init() {
    bool status = IfcSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sweptCurve = NULL;
    }
    else {
        m_sweptCurve = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSweptSurface::copy(const IfcSweptSurface &obj, const CopyOp &copyop) {
    IfcSurface::copy(obj, copyop);
    setSweptCurve((IfcProfileDef*)copyop(obj.m_sweptCurve.get()));
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_position.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSweptSurface::s_type("IfcSweptSurface");
