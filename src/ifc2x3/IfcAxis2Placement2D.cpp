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



#include <ifc2x3/IfcAxis2Placement2D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcPlacement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcAxis2Placement2D::IfcAxis2Placement2D(Step::Id id, Step::SPFData *args) : IfcPlacement(id, args) {
    m_refDirection = NULL;
}

IfcAxis2Placement2D::~IfcAxis2Placement2D() {
}

bool IfcAxis2Placement2D::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAxis2Placement2D(this);
}

const std::string &IfcAxis2Placement2D::type() const {
    return IfcAxis2Placement2D::s_type.getName();
}

const Step::ClassType &IfcAxis2Placement2D::getClassType() {
    return IfcAxis2Placement2D::s_type;
}

const Step::ClassType &IfcAxis2Placement2D::getType() const {
    return IfcAxis2Placement2D::s_type;
}

bool IfcAxis2Placement2D::isOfType(const Step::ClassType &t) const {
    return IfcAxis2Placement2D::s_type == t ? true : IfcPlacement::isOfType(t);
}

IfcDirection *IfcAxis2Placement2D::getRefDirection() {
    if (Step::BaseObject::inited()) {
        return m_refDirection.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcAxis2Placement2D::getRefDirection() const {
    IfcAxis2Placement2D * deConstObject = const_cast< IfcAxis2Placement2D * > (this);
    return deConstObject->getRefDirection();
}

void IfcAxis2Placement2D::setRefDirection(const Step::RefPtr< IfcDirection > &value) {
    m_refDirection = value;
}

void IfcAxis2Placement2D::unsetRefDirection() {
    m_refDirection = Step::getUnset(getRefDirection());
}

bool IfcAxis2Placement2D::testRefDirection() const {
    return !Step::isUnset(getRefDirection());
}

bool IfcAxis2Placement2D::init() {
    bool status = IfcPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refDirection = NULL;
    }
    else {
        m_refDirection = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcAxis2Placement2D::copy(const IfcAxis2Placement2D &obj, const CopyOp &copyop) {
    IfcPlacement::copy(obj, copyop);
    setRefDirection((IfcDirection*)copyop(obj.m_refDirection.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAxis2Placement2D::s_type("IfcAxis2Placement2D");
