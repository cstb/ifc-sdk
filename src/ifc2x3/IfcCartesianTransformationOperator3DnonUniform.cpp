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



#include <ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianTransformationOperator3D.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCartesianTransformationOperator3DnonUniform::IfcCartesianTransformationOperator3DnonUniform(Step::Id id, Step::SPFData *args) : IfcCartesianTransformationOperator3D(id, args) {
    m_scale2 = Step::getUnset(m_scale2);
    m_scale3 = Step::getUnset(m_scale3);
}

IfcCartesianTransformationOperator3DnonUniform::~IfcCartesianTransformationOperator3DnonUniform() {
}

bool IfcCartesianTransformationOperator3DnonUniform::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCartesianTransformationOperator3DnonUniform(this);
}

const std::string &IfcCartesianTransformationOperator3DnonUniform::type() const {
    return IfcCartesianTransformationOperator3DnonUniform::s_type.getName();
}

const Step::ClassType &IfcCartesianTransformationOperator3DnonUniform::getClassType() {
    return IfcCartesianTransformationOperator3DnonUniform::s_type;
}

const Step::ClassType &IfcCartesianTransformationOperator3DnonUniform::getType() const {
    return IfcCartesianTransformationOperator3DnonUniform::s_type;
}

bool IfcCartesianTransformationOperator3DnonUniform::isOfType(const Step::ClassType &t) const {
    return IfcCartesianTransformationOperator3DnonUniform::s_type == t ? true : IfcCartesianTransformationOperator3D::isOfType(t);
}

Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale2() {
    if (Step::BaseObject::inited()) {
        return m_scale2;
    }
    else {
        return Step::getUnset(m_scale2);
    }
}

const Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale2() const {
    IfcCartesianTransformationOperator3DnonUniform * deConstObject = const_cast< IfcCartesianTransformationOperator3DnonUniform * > (this);
    return deConstObject->getScale2();
}

void IfcCartesianTransformationOperator3DnonUniform::setScale2(Step::Real value) {
    m_scale2 = value;
}

void IfcCartesianTransformationOperator3DnonUniform::unsetScale2() {
    m_scale2 = Step::getUnset(getScale2());
}

bool IfcCartesianTransformationOperator3DnonUniform::testScale2() const {
    return !Step::isUnset(getScale2());
}

Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale3() {
    if (Step::BaseObject::inited()) {
        return m_scale3;
    }
    else {
        return Step::getUnset(m_scale3);
    }
}

const Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale3() const {
    IfcCartesianTransformationOperator3DnonUniform * deConstObject = const_cast< IfcCartesianTransformationOperator3DnonUniform * > (this);
    return deConstObject->getScale3();
}

void IfcCartesianTransformationOperator3DnonUniform::setScale3(Step::Real value) {
    m_scale3 = value;
}

void IfcCartesianTransformationOperator3DnonUniform::unsetScale3() {
    m_scale3 = Step::getUnset(getScale3());
}

bool IfcCartesianTransformationOperator3DnonUniform::testScale3() const {
    return !Step::isUnset(getScale3());
}

bool IfcCartesianTransformationOperator3DnonUniform::init() {
    bool status = IfcCartesianTransformationOperator3D::init();
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scale3 = Step::getUnset(m_scale3);
    }
    else {
        m_scale3 = Step::spfToReal(arg);
    }
    return true;
}

void IfcCartesianTransformationOperator3DnonUniform::copy(const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator3D::copy(obj, copyop);
    setScale2(obj.m_scale2);
    setScale3(obj.m_scale3);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCartesianTransformationOperator3DnonUniform::s_type("IfcCartesianTransformationOperator3DnonUniform");
