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



#include <ifc2x3/IfcBoundingBox.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianPoint.h>
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

IfcBoundingBox::IfcBoundingBox(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_corner = NULL;
    m_xDim = Step::getUnset(m_xDim);
    m_yDim = Step::getUnset(m_yDim);
    m_zDim = Step::getUnset(m_zDim);
}

IfcBoundingBox::~IfcBoundingBox() {
}

bool IfcBoundingBox::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundingBox(this);
}

const std::string &IfcBoundingBox::type() const {
    return IfcBoundingBox::s_type.getName();
}

const Step::ClassType &IfcBoundingBox::getClassType() {
    return IfcBoundingBox::s_type;
}

const Step::ClassType &IfcBoundingBox::getType() const {
    return IfcBoundingBox::s_type;
}

bool IfcBoundingBox::isOfType(const Step::ClassType &t) const {
    return IfcBoundingBox::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcCartesianPoint *IfcBoundingBox::getCorner() {
    if (Step::BaseObject::inited()) {
        return m_corner.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcBoundingBox::getCorner() const {
    IfcBoundingBox * deConstObject = const_cast< IfcBoundingBox * > (this);
    return deConstObject->getCorner();
}

void IfcBoundingBox::setCorner(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_corner = value;
}

void IfcBoundingBox::unsetCorner() {
    m_corner = Step::getUnset(getCorner());
}

bool IfcBoundingBox::testCorner() const {
    return !Step::isUnset(getCorner());
}

IfcPositiveLengthMeasure IfcBoundingBox::getXDim() {
    if (Step::BaseObject::inited()) {
        return m_xDim;
    }
    else {
        return Step::getUnset(m_xDim);
    }
}

const IfcPositiveLengthMeasure IfcBoundingBox::getXDim() const {
    IfcBoundingBox * deConstObject = const_cast< IfcBoundingBox * > (this);
    return deConstObject->getXDim();
}

void IfcBoundingBox::setXDim(IfcPositiveLengthMeasure value) {
    m_xDim = value;
}

void IfcBoundingBox::unsetXDim() {
    m_xDim = Step::getUnset(getXDim());
}

bool IfcBoundingBox::testXDim() const {
    return !Step::isUnset(getXDim());
}

IfcPositiveLengthMeasure IfcBoundingBox::getYDim() {
    if (Step::BaseObject::inited()) {
        return m_yDim;
    }
    else {
        return Step::getUnset(m_yDim);
    }
}

const IfcPositiveLengthMeasure IfcBoundingBox::getYDim() const {
    IfcBoundingBox * deConstObject = const_cast< IfcBoundingBox * > (this);
    return deConstObject->getYDim();
}

void IfcBoundingBox::setYDim(IfcPositiveLengthMeasure value) {
    m_yDim = value;
}

void IfcBoundingBox::unsetYDim() {
    m_yDim = Step::getUnset(getYDim());
}

bool IfcBoundingBox::testYDim() const {
    return !Step::isUnset(getYDim());
}

IfcPositiveLengthMeasure IfcBoundingBox::getZDim() {
    if (Step::BaseObject::inited()) {
        return m_zDim;
    }
    else {
        return Step::getUnset(m_zDim);
    }
}

const IfcPositiveLengthMeasure IfcBoundingBox::getZDim() const {
    IfcBoundingBox * deConstObject = const_cast< IfcBoundingBox * > (this);
    return deConstObject->getZDim();
}

void IfcBoundingBox::setZDim(IfcPositiveLengthMeasure value) {
    m_zDim = value;
}

void IfcBoundingBox::unsetZDim() {
    m_zDim = Step::getUnset(getZDim());
}

bool IfcBoundingBox::testZDim() const {
    return !Step::isUnset(getZDim());
}

bool IfcBoundingBox::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_corner = NULL;
    }
    else {
        m_corner = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_xDim = Step::getUnset(m_xDim);
    }
    else {
        m_xDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yDim = Step::getUnset(m_yDim);
    }
    else {
        m_yDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_zDim = Step::getUnset(m_zDim);
    }
    else {
        m_zDim = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundingBox::copy(const IfcBoundingBox &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setCorner((IfcCartesianPoint*)copyop(obj.m_corner.get()));
    setXDim(obj.m_xDim);
    setYDim(obj.m_yDim);
    setZDim(obj.m_zDim);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBoundingBox::s_type("IfcBoundingBox");
