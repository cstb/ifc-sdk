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



#include <ifc2x3/IfcCurveBoundedPlane.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundedSurface.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcPlane.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCurveBoundedPlane::IfcCurveBoundedPlane(Step::Id id, Step::SPFData *args) : IfcBoundedSurface(id, args) {
    m_basisSurface = NULL;
    m_outerBoundary = NULL;
}

IfcCurveBoundedPlane::~IfcCurveBoundedPlane() {
}

bool IfcCurveBoundedPlane::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCurveBoundedPlane(this);
}

const std::string &IfcCurveBoundedPlane::type() const {
    return IfcCurveBoundedPlane::s_type.getName();
}

const Step::ClassType &IfcCurveBoundedPlane::getClassType() {
    return IfcCurveBoundedPlane::s_type;
}

const Step::ClassType &IfcCurveBoundedPlane::getType() const {
    return IfcCurveBoundedPlane::s_type;
}

bool IfcCurveBoundedPlane::isOfType(const Step::ClassType &t) const {
    return IfcCurveBoundedPlane::s_type == t ? true : IfcBoundedSurface::isOfType(t);
}

IfcPlane *IfcCurveBoundedPlane::getBasisSurface() {
    if (Step::BaseObject::inited()) {
        return m_basisSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcPlane *IfcCurveBoundedPlane::getBasisSurface() const {
    IfcCurveBoundedPlane * deConstObject = const_cast< IfcCurveBoundedPlane * > (this);
    return deConstObject->getBasisSurface();
}

void IfcCurveBoundedPlane::setBasisSurface(const Step::RefPtr< IfcPlane > &value) {
    m_basisSurface = value;
}

void IfcCurveBoundedPlane::unsetBasisSurface() {
    m_basisSurface = Step::getUnset(getBasisSurface());
}

bool IfcCurveBoundedPlane::testBasisSurface() const {
    return !Step::isUnset(getBasisSurface());
}

IfcCurve *IfcCurveBoundedPlane::getOuterBoundary() {
    if (Step::BaseObject::inited()) {
        return m_outerBoundary.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcCurveBoundedPlane::getOuterBoundary() const {
    IfcCurveBoundedPlane * deConstObject = const_cast< IfcCurveBoundedPlane * > (this);
    return deConstObject->getOuterBoundary();
}

void IfcCurveBoundedPlane::setOuterBoundary(const Step::RefPtr< IfcCurve > &value) {
    m_outerBoundary = value;
}

void IfcCurveBoundedPlane::unsetOuterBoundary() {
    m_outerBoundary = Step::getUnset(getOuterBoundary());
}

bool IfcCurveBoundedPlane::testOuterBoundary() const {
    return !Step::isUnset(getOuterBoundary());
}

Set_IfcCurve_0_n &IfcCurveBoundedPlane::getInnerBoundaries() {
    if (Step::BaseObject::inited()) {
        return m_innerBoundaries;
    }
    else {
        m_innerBoundaries.setUnset(true);
        return m_innerBoundaries;
    }
}

const Set_IfcCurve_0_n &IfcCurveBoundedPlane::getInnerBoundaries() const {
    IfcCurveBoundedPlane * deConstObject = const_cast< IfcCurveBoundedPlane * > (this);
    return deConstObject->getInnerBoundaries();
}

void IfcCurveBoundedPlane::setInnerBoundaries(const Set_IfcCurve_0_n &value) {
    m_innerBoundaries = value;
}

void IfcCurveBoundedPlane::unsetInnerBoundaries() {
    m_innerBoundaries.clear();
    m_innerBoundaries.setUnset(true);
}

bool IfcCurveBoundedPlane::testInnerBoundaries() const {
    return !m_innerBoundaries.isUnset();
}

bool IfcCurveBoundedPlane::init() {
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
        m_basisSurface = static_cast< IfcPlane * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outerBoundary = NULL;
    }
    else {
        m_outerBoundary = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_innerBoundaries.setUnset(true);
    }
    else {
        m_innerBoundaries.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCurve > attr2;
                attr2 = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_innerBoundaries.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcCurveBoundedPlane::copy(const IfcCurveBoundedPlane &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcCurve > >::const_iterator it_m_innerBoundaries;
    IfcBoundedSurface::copy(obj, copyop);
    setBasisSurface((IfcPlane*)copyop(obj.m_basisSurface.get()));
    setOuterBoundary((IfcCurve*)copyop(obj.m_outerBoundary.get()));
    for (it_m_innerBoundaries = obj.m_innerBoundaries.begin(); it_m_innerBoundaries != obj.m_innerBoundaries.end(); ++it_m_innerBoundaries) {
        Step::RefPtr< IfcCurve > copyTarget = (IfcCurve *) (copyop((*it_m_innerBoundaries).get()));
        m_innerBoundaries.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCurveBoundedPlane::s_type("IfcCurveBoundedPlane");
