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



#include <ifc2x3/IfcSurfaceOfRevolution.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis1Placement.h>
#include <ifc2x3/IfcSweptSurface.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSurfaceOfRevolution::IfcSurfaceOfRevolution(Step::Id id, Step::SPFData *args) : IfcSweptSurface(id, args) {
    m_axisPosition = NULL;
}

IfcSurfaceOfRevolution::~IfcSurfaceOfRevolution() {
}

bool IfcSurfaceOfRevolution::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceOfRevolution(this);
}

const std::string &IfcSurfaceOfRevolution::type() const {
    return IfcSurfaceOfRevolution::s_type.getName();
}

const Step::ClassType &IfcSurfaceOfRevolution::getClassType() {
    return IfcSurfaceOfRevolution::s_type;
}

const Step::ClassType &IfcSurfaceOfRevolution::getType() const {
    return IfcSurfaceOfRevolution::s_type;
}

bool IfcSurfaceOfRevolution::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceOfRevolution::s_type == t ? true : IfcSweptSurface::isOfType(t);
}

IfcAxis1Placement *IfcSurfaceOfRevolution::getAxisPosition() {
    if (Step::BaseObject::inited()) {
        return m_axisPosition.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis1Placement *IfcSurfaceOfRevolution::getAxisPosition() const {
    IfcSurfaceOfRevolution * deConstObject = const_cast< IfcSurfaceOfRevolution * > (this);
    return deConstObject->getAxisPosition();
}

void IfcSurfaceOfRevolution::setAxisPosition(const Step::RefPtr< IfcAxis1Placement > &value) {
    m_axisPosition = value;
}

void IfcSurfaceOfRevolution::unsetAxisPosition() {
    m_axisPosition = Step::getUnset(getAxisPosition());
}

bool IfcSurfaceOfRevolution::testAxisPosition() const {
    return !Step::isUnset(getAxisPosition());
}

bool IfcSurfaceOfRevolution::init() {
    bool status = IfcSweptSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axisPosition = NULL;
    }
    else {
        m_axisPosition = static_cast< IfcAxis1Placement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSurfaceOfRevolution::copy(const IfcSurfaceOfRevolution &obj, const CopyOp &copyop) {
    IfcSweptSurface::copy(obj, copyop);
    setAxisPosition((IfcAxis1Placement*)copyop(obj.m_axisPosition.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceOfRevolution::s_type("IfcSurfaceOfRevolution");
