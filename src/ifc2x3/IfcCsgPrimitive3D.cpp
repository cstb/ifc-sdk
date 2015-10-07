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



#include <ifc2x3/IfcCsgPrimitive3D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
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

IfcCsgPrimitive3D::IfcCsgPrimitive3D(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_position = NULL;
}

IfcCsgPrimitive3D::~IfcCsgPrimitive3D() {
}

bool IfcCsgPrimitive3D::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCsgPrimitive3D(this);
}

const std::string &IfcCsgPrimitive3D::type() const {
    return IfcCsgPrimitive3D::s_type.getName();
}

const Step::ClassType &IfcCsgPrimitive3D::getClassType() {
    return IfcCsgPrimitive3D::s_type;
}

const Step::ClassType &IfcCsgPrimitive3D::getType() const {
    return IfcCsgPrimitive3D::s_type;
}

bool IfcCsgPrimitive3D::isOfType(const Step::ClassType &t) const {
    return IfcCsgPrimitive3D::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcAxis2Placement3D *IfcCsgPrimitive3D::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement3D *IfcCsgPrimitive3D::getPosition() const {
    IfcCsgPrimitive3D * deConstObject = const_cast< IfcCsgPrimitive3D * > (this);
    return deConstObject->getPosition();
}

void IfcCsgPrimitive3D::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

void IfcCsgPrimitive3D::unsetPosition() {
    m_position = Step::getUnset(getPosition());
}

bool IfcCsgPrimitive3D::testPosition() const {
    return !Step::isUnset(getPosition());
}

bool IfcCsgPrimitive3D::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
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

void IfcCsgPrimitive3D::copy(const IfcCsgPrimitive3D &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_position.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCsgPrimitive3D::s_type("IfcCsgPrimitive3D");
