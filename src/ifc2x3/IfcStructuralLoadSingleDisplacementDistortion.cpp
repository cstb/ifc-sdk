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



#include <ifc2x3/IfcStructuralLoadSingleDisplacementDistortion.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralLoadSingleDisplacement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralLoadSingleDisplacementDistortion::IfcStructuralLoadSingleDisplacementDistortion(Step::Id id, Step::SPFData *args) : IfcStructuralLoadSingleDisplacement(id, args) {
    m_distortion = Step::getUnset(m_distortion);
}

IfcStructuralLoadSingleDisplacementDistortion::~IfcStructuralLoadSingleDisplacementDistortion() {
}

bool IfcStructuralLoadSingleDisplacementDistortion::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLoadSingleDisplacementDistortion(this);
}

const std::string &IfcStructuralLoadSingleDisplacementDistortion::type() const {
    return IfcStructuralLoadSingleDisplacementDistortion::s_type.getName();
}

const Step::ClassType &IfcStructuralLoadSingleDisplacementDistortion::getClassType() {
    return IfcStructuralLoadSingleDisplacementDistortion::s_type;
}

const Step::ClassType &IfcStructuralLoadSingleDisplacementDistortion::getType() const {
    return IfcStructuralLoadSingleDisplacementDistortion::s_type;
}

bool IfcStructuralLoadSingleDisplacementDistortion::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLoadSingleDisplacementDistortion::s_type == t ? true : IfcStructuralLoadSingleDisplacement::isOfType(t);
}

IfcCurvatureMeasure IfcStructuralLoadSingleDisplacementDistortion::getDistortion() {
    if (Step::BaseObject::inited()) {
        return m_distortion;
    }
    else {
        return Step::getUnset(m_distortion);
    }
}

const IfcCurvatureMeasure IfcStructuralLoadSingleDisplacementDistortion::getDistortion() const {
    IfcStructuralLoadSingleDisplacementDistortion * deConstObject = const_cast< IfcStructuralLoadSingleDisplacementDistortion * > (this);
    return deConstObject->getDistortion();
}

void IfcStructuralLoadSingleDisplacementDistortion::setDistortion(IfcCurvatureMeasure value) {
    m_distortion = value;
}

void IfcStructuralLoadSingleDisplacementDistortion::unsetDistortion() {
    m_distortion = Step::getUnset(getDistortion());
}

bool IfcStructuralLoadSingleDisplacementDistortion::testDistortion() const {
    return !Step::isUnset(getDistortion());
}

bool IfcStructuralLoadSingleDisplacementDistortion::init() {
    bool status = IfcStructuralLoadSingleDisplacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_distortion = Step::getUnset(m_distortion);
    }
    else {
        m_distortion = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadSingleDisplacementDistortion::copy(const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop) {
    IfcStructuralLoadSingleDisplacement::copy(obj, copyop);
    setDistortion(obj.m_distortion);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralLoadSingleDisplacementDistortion::s_type("IfcStructuralLoadSingleDisplacementDistortion");
