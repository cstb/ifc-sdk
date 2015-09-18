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



#include <ifc2x3/IfcRectangularTrimmedSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundedSurface.h>
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

IfcRectangularTrimmedSurface::IfcRectangularTrimmedSurface(Step::Id id, Step::SPFData *args) : IfcBoundedSurface(id, args) {
    m_basisSurface = NULL;
    m_u1 = Step::getUnset(m_u1);
    m_v1 = Step::getUnset(m_v1);
    m_u2 = Step::getUnset(m_u2);
    m_v2 = Step::getUnset(m_v2);
    m_usense = Step::getUnset(m_usense);
    m_vsense = Step::getUnset(m_vsense);
}

IfcRectangularTrimmedSurface::~IfcRectangularTrimmedSurface() {
}

bool IfcRectangularTrimmedSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRectangularTrimmedSurface(this);
}

const std::string &IfcRectangularTrimmedSurface::type() const {
    return IfcRectangularTrimmedSurface::s_type.getName();
}

const Step::ClassType &IfcRectangularTrimmedSurface::getClassType() {
    return IfcRectangularTrimmedSurface::s_type;
}

const Step::ClassType &IfcRectangularTrimmedSurface::getType() const {
    return IfcRectangularTrimmedSurface::s_type;
}

bool IfcRectangularTrimmedSurface::isOfType(const Step::ClassType &t) const {
    return IfcRectangularTrimmedSurface::s_type == t ? true : IfcBoundedSurface::isOfType(t);
}

IfcSurface *IfcRectangularTrimmedSurface::getBasisSurface() {
    if (Step::BaseObject::inited()) {
        return m_basisSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcSurface *IfcRectangularTrimmedSurface::getBasisSurface() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getBasisSurface();
}

void IfcRectangularTrimmedSurface::setBasisSurface(const Step::RefPtr< IfcSurface > &value) {
    m_basisSurface = value;
}

void IfcRectangularTrimmedSurface::unsetBasisSurface() {
    m_basisSurface = Step::getUnset(getBasisSurface());
}

bool IfcRectangularTrimmedSurface::testBasisSurface() const {
    return !Step::isUnset(getBasisSurface());
}

IfcParameterValue IfcRectangularTrimmedSurface::getU1() {
    if (Step::BaseObject::inited()) {
        return m_u1;
    }
    else {
        return Step::getUnset(m_u1);
    }
}

const IfcParameterValue IfcRectangularTrimmedSurface::getU1() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getU1();
}

void IfcRectangularTrimmedSurface::setU1(IfcParameterValue value) {
    m_u1 = value;
}

void IfcRectangularTrimmedSurface::unsetU1() {
    m_u1 = Step::getUnset(getU1());
}

bool IfcRectangularTrimmedSurface::testU1() const {
    return !Step::isUnset(getU1());
}

IfcParameterValue IfcRectangularTrimmedSurface::getV1() {
    if (Step::BaseObject::inited()) {
        return m_v1;
    }
    else {
        return Step::getUnset(m_v1);
    }
}

const IfcParameterValue IfcRectangularTrimmedSurface::getV1() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getV1();
}

void IfcRectangularTrimmedSurface::setV1(IfcParameterValue value) {
    m_v1 = value;
}

void IfcRectangularTrimmedSurface::unsetV1() {
    m_v1 = Step::getUnset(getV1());
}

bool IfcRectangularTrimmedSurface::testV1() const {
    return !Step::isUnset(getV1());
}

IfcParameterValue IfcRectangularTrimmedSurface::getU2() {
    if (Step::BaseObject::inited()) {
        return m_u2;
    }
    else {
        return Step::getUnset(m_u2);
    }
}

const IfcParameterValue IfcRectangularTrimmedSurface::getU2() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getU2();
}

void IfcRectangularTrimmedSurface::setU2(IfcParameterValue value) {
    m_u2 = value;
}

void IfcRectangularTrimmedSurface::unsetU2() {
    m_u2 = Step::getUnset(getU2());
}

bool IfcRectangularTrimmedSurface::testU2() const {
    return !Step::isUnset(getU2());
}

IfcParameterValue IfcRectangularTrimmedSurface::getV2() {
    if (Step::BaseObject::inited()) {
        return m_v2;
    }
    else {
        return Step::getUnset(m_v2);
    }
}

const IfcParameterValue IfcRectangularTrimmedSurface::getV2() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getV2();
}

void IfcRectangularTrimmedSurface::setV2(IfcParameterValue value) {
    m_v2 = value;
}

void IfcRectangularTrimmedSurface::unsetV2() {
    m_v2 = Step::getUnset(getV2());
}

bool IfcRectangularTrimmedSurface::testV2() const {
    return !Step::isUnset(getV2());
}

Step::Boolean IfcRectangularTrimmedSurface::getUsense() {
    if (Step::BaseObject::inited()) {
        return m_usense;
    }
    else {
        return Step::getUnset(m_usense);
    }
}

const Step::Boolean IfcRectangularTrimmedSurface::getUsense() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getUsense();
}

void IfcRectangularTrimmedSurface::setUsense(Step::Boolean value) {
    m_usense = value;
}

void IfcRectangularTrimmedSurface::unsetUsense() {
    m_usense = Step::getUnset(getUsense());
}

bool IfcRectangularTrimmedSurface::testUsense() const {
    return !Step::isUnset(getUsense());
}

Step::Boolean IfcRectangularTrimmedSurface::getVsense() {
    if (Step::BaseObject::inited()) {
        return m_vsense;
    }
    else {
        return Step::getUnset(m_vsense);
    }
}

const Step::Boolean IfcRectangularTrimmedSurface::getVsense() const {
    IfcRectangularTrimmedSurface * deConstObject = const_cast< IfcRectangularTrimmedSurface * > (this);
    return deConstObject->getVsense();
}

void IfcRectangularTrimmedSurface::setVsense(Step::Boolean value) {
    m_vsense = value;
}

void IfcRectangularTrimmedSurface::unsetVsense() {
    m_vsense = Step::getUnset(getVsense());
}

bool IfcRectangularTrimmedSurface::testVsense() const {
    return !Step::isUnset(getVsense());
}

bool IfcRectangularTrimmedSurface::init() {
    bool status = IfcBoundedSurface::init();
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
        m_u1 = Step::getUnset(m_u1);
    }
    else {
        m_u1 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_v1 = Step::getUnset(m_v1);
    }
    else {
        m_v1 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_u2 = Step::getUnset(m_u2);
    }
    else {
        m_u2 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_v2 = Step::getUnset(m_v2);
    }
    else {
        m_v2 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usense = Step::getUnset(m_usense);
    }
    else {
        m_usense = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_vsense = Step::getUnset(m_vsense);
    }
    else {
        m_vsense = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcRectangularTrimmedSurface::copy(const IfcRectangularTrimmedSurface &obj, const CopyOp &copyop) {
    IfcBoundedSurface::copy(obj, copyop);
    setBasisSurface((IfcSurface*)copyop(obj.m_basisSurface.get()));
    setU1(obj.m_u1);
    setV1(obj.m_v1);
    setU2(obj.m_u2);
    setV2(obj.m_v2);
    setUsense(obj.m_usense);
    setVsense(obj.m_vsense);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRectangularTrimmedSurface::s_type("IfcRectangularTrimmedSurface");
