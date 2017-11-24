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



#include <ifc2x3/IfcAnnotationFillArea.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcAnnotationFillArea::IfcAnnotationFillArea(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_outerBoundary = NULL;
    m_innerBoundaries.setUnset(true);
}

IfcAnnotationFillArea::~IfcAnnotationFillArea() {
}

bool IfcAnnotationFillArea::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAnnotationFillArea(this);
}

const std::string &IfcAnnotationFillArea::type() const {
    return IfcAnnotationFillArea::s_type.getName();
}

const Step::ClassType &IfcAnnotationFillArea::getClassType() {
    return IfcAnnotationFillArea::s_type;
}

const Step::ClassType &IfcAnnotationFillArea::getType() const {
    return IfcAnnotationFillArea::s_type;
}

bool IfcAnnotationFillArea::isOfType(const Step::ClassType &t) const {
    return IfcAnnotationFillArea::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCurve *IfcAnnotationFillArea::getOuterBoundary() {
    if (Step::BaseObject::inited()) {
        return m_outerBoundary.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcAnnotationFillArea::getOuterBoundary() const {
    IfcAnnotationFillArea * deConstObject = const_cast< IfcAnnotationFillArea * > (this);
    return deConstObject->getOuterBoundary();
}

void IfcAnnotationFillArea::setOuterBoundary(const Step::RefPtr< IfcCurve > &value) {
    m_outerBoundary = value;
}

void IfcAnnotationFillArea::unsetOuterBoundary() {
    m_outerBoundary = Step::getUnset(getOuterBoundary());
}

bool IfcAnnotationFillArea::testOuterBoundary() const {
    return !Step::isUnset(getOuterBoundary());
}

Set_IfcCurve_1_n &IfcAnnotationFillArea::getInnerBoundaries() {
    if (Step::BaseObject::inited()) {
        return m_innerBoundaries;
    }
    else {
        m_innerBoundaries.setUnset(true);
        return m_innerBoundaries;
    }
}

const Set_IfcCurve_1_n &IfcAnnotationFillArea::getInnerBoundaries() const {
    IfcAnnotationFillArea * deConstObject = const_cast< IfcAnnotationFillArea * > (this);
    return deConstObject->getInnerBoundaries();
}

void IfcAnnotationFillArea::setInnerBoundaries(const Set_IfcCurve_1_n &value) {
    m_innerBoundaries = value;
}

void IfcAnnotationFillArea::unsetInnerBoundaries() {
    m_innerBoundaries.clear();
    m_innerBoundaries.setUnset(true);
}

bool IfcAnnotationFillArea::testInnerBoundaries() const {
    return !m_innerBoundaries.isUnset();
}

bool IfcAnnotationFillArea::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
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

void IfcAnnotationFillArea::copy(const IfcAnnotationFillArea &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcCurve >, 1 >::const_iterator it_m_innerBoundaries;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOuterBoundary((IfcCurve*)copyop(obj.m_outerBoundary.get()));
    for (it_m_innerBoundaries = obj.m_innerBoundaries.begin(); it_m_innerBoundaries != obj.m_innerBoundaries.end(); ++it_m_innerBoundaries) {
        Step::RefPtr< IfcCurve > copyTarget = (IfcCurve *) (copyop((*it_m_innerBoundaries).get()));
        m_innerBoundaries.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAnnotationFillArea::s_type("IfcAnnotationFillArea");
