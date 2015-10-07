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



#include <ifc2x3/IfcCartesianTransformationOperator3D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCartesianTransformationOperator3D::IfcCartesianTransformationOperator3D(Step::Id id, Step::SPFData *args) : IfcCartesianTransformationOperator(id, args) {
    m_axis3 = NULL;
}

IfcCartesianTransformationOperator3D::~IfcCartesianTransformationOperator3D() {
}

bool IfcCartesianTransformationOperator3D::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCartesianTransformationOperator3D(this);
}

const std::string &IfcCartesianTransformationOperator3D::type() const {
    return IfcCartesianTransformationOperator3D::s_type.getName();
}

const Step::ClassType &IfcCartesianTransformationOperator3D::getClassType() {
    return IfcCartesianTransformationOperator3D::s_type;
}

const Step::ClassType &IfcCartesianTransformationOperator3D::getType() const {
    return IfcCartesianTransformationOperator3D::s_type;
}

bool IfcCartesianTransformationOperator3D::isOfType(const Step::ClassType &t) const {
    return IfcCartesianTransformationOperator3D::s_type == t ? true : IfcCartesianTransformationOperator::isOfType(t);
}

IfcDirection *IfcCartesianTransformationOperator3D::getAxis3() {
    if (Step::BaseObject::inited()) {
        return m_axis3.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcCartesianTransformationOperator3D::getAxis3() const {
    IfcCartesianTransformationOperator3D * deConstObject = const_cast< IfcCartesianTransformationOperator3D * > (this);
    return deConstObject->getAxis3();
}

void IfcCartesianTransformationOperator3D::setAxis3(const Step::RefPtr< IfcDirection > &value) {
    m_axis3 = value;
}

void IfcCartesianTransformationOperator3D::unsetAxis3() {
    m_axis3 = Step::getUnset(getAxis3());
}

bool IfcCartesianTransformationOperator3D::testAxis3() const {
    return !Step::isUnset(getAxis3());
}

bool IfcCartesianTransformationOperator3D::init() {
    bool status = IfcCartesianTransformationOperator::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis3 = NULL;
    }
    else {
        m_axis3 = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcCartesianTransformationOperator3D::copy(const IfcCartesianTransformationOperator3D &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator::copy(obj, copyop);
    setAxis3((IfcDirection*)copyop(obj.m_axis3.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCartesianTransformationOperator3D::s_type("IfcCartesianTransformationOperator3D");
