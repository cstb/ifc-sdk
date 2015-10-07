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



#include <ifc2x3/IfcPointOnSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPoint.h>
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

IfcPointOnSurface::IfcPointOnSurface(Step::Id id, Step::SPFData *args) : IfcPoint(id, args) {
    m_basisSurface = NULL;
    m_pointParameterU = Step::getUnset(m_pointParameterU);
    m_pointParameterV = Step::getUnset(m_pointParameterV);
}

IfcPointOnSurface::~IfcPointOnSurface() {
}

bool IfcPointOnSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPointOnSurface(this);
}

const std::string &IfcPointOnSurface::type() const {
    return IfcPointOnSurface::s_type.getName();
}

const Step::ClassType &IfcPointOnSurface::getClassType() {
    return IfcPointOnSurface::s_type;
}

const Step::ClassType &IfcPointOnSurface::getType() const {
    return IfcPointOnSurface::s_type;
}

bool IfcPointOnSurface::isOfType(const Step::ClassType &t) const {
    return IfcPointOnSurface::s_type == t ? true : IfcPoint::isOfType(t);
}

IfcSurface *IfcPointOnSurface::getBasisSurface() {
    if (Step::BaseObject::inited()) {
        return m_basisSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcSurface *IfcPointOnSurface::getBasisSurface() const {
    IfcPointOnSurface * deConstObject = const_cast< IfcPointOnSurface * > (this);
    return deConstObject->getBasisSurface();
}

void IfcPointOnSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value) {
    m_basisSurface = value;
}

void IfcPointOnSurface::unsetBasisSurface() {
    m_basisSurface = Step::getUnset(getBasisSurface());
}

bool IfcPointOnSurface::testBasisSurface() const {
    return !Step::isUnset(getBasisSurface());
}

IfcParameterValue IfcPointOnSurface::getPointParameterU() {
    if (Step::BaseObject::inited()) {
        return m_pointParameterU;
    }
    else {
        return Step::getUnset(m_pointParameterU);
    }
}

const IfcParameterValue IfcPointOnSurface::getPointParameterU() const {
    IfcPointOnSurface * deConstObject = const_cast< IfcPointOnSurface * > (this);
    return deConstObject->getPointParameterU();
}

void IfcPointOnSurface::setPointParameterU(IfcParameterValue value) {
    m_pointParameterU = value;
}

void IfcPointOnSurface::unsetPointParameterU() {
    m_pointParameterU = Step::getUnset(getPointParameterU());
}

bool IfcPointOnSurface::testPointParameterU() const {
    return !Step::isUnset(getPointParameterU());
}

IfcParameterValue IfcPointOnSurface::getPointParameterV() {
    if (Step::BaseObject::inited()) {
        return m_pointParameterV;
    }
    else {
        return Step::getUnset(m_pointParameterV);
    }
}

const IfcParameterValue IfcPointOnSurface::getPointParameterV() const {
    IfcPointOnSurface * deConstObject = const_cast< IfcPointOnSurface * > (this);
    return deConstObject->getPointParameterV();
}

void IfcPointOnSurface::setPointParameterV(IfcParameterValue value) {
    m_pointParameterV = value;
}

void IfcPointOnSurface::unsetPointParameterV() {
    m_pointParameterV = Step::getUnset(getPointParameterV());
}

bool IfcPointOnSurface::testPointParameterV() const {
    return !Step::isUnset(getPointParameterV());
}

bool IfcPointOnSurface::init() {
    bool status = IfcPoint::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basisSurface = NULL;
    }
    else {
        m_basisSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointParameterU = Step::getUnset(m_pointParameterU);
    }
    else {
        m_pointParameterU = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointParameterV = Step::getUnset(m_pointParameterV);
    }
    else {
        m_pointParameterV = Step::spfToReal(arg);
    }
    return true;
}

void IfcPointOnSurface::copy(const IfcPointOnSurface &obj, const CopyOp &copyop) {
    IfcPoint::copy(obj, copyop);
    setBasisSurface((IfcSurface*)copyop(obj.m_basisSurface.get()));
    setPointParameterU(obj.m_pointParameterU);
    setPointParameterV(obj.m_pointParameterV);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPointOnSurface::s_type("IfcPointOnSurface");
