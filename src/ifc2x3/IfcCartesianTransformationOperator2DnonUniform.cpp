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



#include <ifc2x3/IfcCartesianTransformationOperator2DnonUniform.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianTransformationOperator2D.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCartesianTransformationOperator2DnonUniform::IfcCartesianTransformationOperator2DnonUniform(Step::Id id, Step::SPFData *args) : IfcCartesianTransformationOperator2D(id, args) {
    m_scale2 = Step::getUnset(m_scale2);
}

IfcCartesianTransformationOperator2DnonUniform::~IfcCartesianTransformationOperator2DnonUniform() {
}

bool IfcCartesianTransformationOperator2DnonUniform::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCartesianTransformationOperator2DnonUniform(this);
}

const std::string &IfcCartesianTransformationOperator2DnonUniform::type() const {
    return IfcCartesianTransformationOperator2DnonUniform::s_type.getName();
}

const Step::ClassType &IfcCartesianTransformationOperator2DnonUniform::getClassType() {
    return IfcCartesianTransformationOperator2DnonUniform::s_type;
}

const Step::ClassType &IfcCartesianTransformationOperator2DnonUniform::getType() const {
    return IfcCartesianTransformationOperator2DnonUniform::s_type;
}

bool IfcCartesianTransformationOperator2DnonUniform::isOfType(const Step::ClassType &t) const {
    return IfcCartesianTransformationOperator2DnonUniform::s_type == t ? true : IfcCartesianTransformationOperator2D::isOfType(t);
}

Step::Real IfcCartesianTransformationOperator2DnonUniform::getScale2() {
    if (Step::BaseObject::inited()) {
        return m_scale2;
    }
    else {
        return Step::getUnset(m_scale2);
    }
}

const Step::Real IfcCartesianTransformationOperator2DnonUniform::getScale2() const {
    IfcCartesianTransformationOperator2DnonUniform * deConstObject = const_cast< IfcCartesianTransformationOperator2DnonUniform * > (this);
    return deConstObject->getScale2();
}

void IfcCartesianTransformationOperator2DnonUniform::setScale2(Step::Real value) {
    m_scale2 = value;
}

void IfcCartesianTransformationOperator2DnonUniform::unsetScale2() {
    m_scale2 = Step::getUnset(getScale2());
}

bool IfcCartesianTransformationOperator2DnonUniform::testScale2() const {
    return !Step::isUnset(getScale2());
}

bool IfcCartesianTransformationOperator2DnonUniform::init() {
    bool status = IfcCartesianTransformationOperator2D::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scale2 = Step::getUnset(m_scale2);
    }
    else {
        m_scale2 = Step::spfToReal(arg);
    }
    return true;
}

void IfcCartesianTransformationOperator2DnonUniform::copy(const IfcCartesianTransformationOperator2DnonUniform &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator2D::copy(obj, copyop);
    setScale2(obj.m_scale2);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCartesianTransformationOperator2DnonUniform::s_type("IfcCartesianTransformationOperator2DnonUniform");
