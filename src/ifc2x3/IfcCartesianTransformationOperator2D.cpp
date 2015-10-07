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



#include <ifc2x3/IfcCartesianTransformationOperator2D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <ifc2x3/Visitor.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCartesianTransformationOperator2D::IfcCartesianTransformationOperator2D(Step::Id id, Step::SPFData *args) : IfcCartesianTransformationOperator(id, args) {
}

IfcCartesianTransformationOperator2D::~IfcCartesianTransformationOperator2D() {
}

bool IfcCartesianTransformationOperator2D::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCartesianTransformationOperator2D(this);
}

const std::string &IfcCartesianTransformationOperator2D::type() const {
    return IfcCartesianTransformationOperator2D::s_type.getName();
}

const Step::ClassType &IfcCartesianTransformationOperator2D::getClassType() {
    return IfcCartesianTransformationOperator2D::s_type;
}

const Step::ClassType &IfcCartesianTransformationOperator2D::getType() const {
    return IfcCartesianTransformationOperator2D::s_type;
}

bool IfcCartesianTransformationOperator2D::isOfType(const Step::ClassType &t) const {
    return IfcCartesianTransformationOperator2D::s_type == t ? true : IfcCartesianTransformationOperator::isOfType(t);
}

bool IfcCartesianTransformationOperator2D::init() {
    bool status = IfcCartesianTransformationOperator::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCartesianTransformationOperator2D::copy(const IfcCartesianTransformationOperator2D &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCartesianTransformationOperator2D::s_type("IfcCartesianTransformationOperator2D");
