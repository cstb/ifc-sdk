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



#include <ifc2x3/IfcSurfaceOfLinearExtrusion.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDirection.h>
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

IfcSurfaceOfLinearExtrusion::IfcSurfaceOfLinearExtrusion(Step::Id id, Step::SPFData *args) : IfcSweptSurface(id, args) {
    m_extrudedDirection = NULL;
    m_depth = Step::getUnset(m_depth);
}

IfcSurfaceOfLinearExtrusion::~IfcSurfaceOfLinearExtrusion() {
}

bool IfcSurfaceOfLinearExtrusion::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceOfLinearExtrusion(this);
}

const std::string &IfcSurfaceOfLinearExtrusion::type() const {
    return IfcSurfaceOfLinearExtrusion::s_type.getName();
}

const Step::ClassType &IfcSurfaceOfLinearExtrusion::getClassType() {
    return IfcSurfaceOfLinearExtrusion::s_type;
}

const Step::ClassType &IfcSurfaceOfLinearExtrusion::getType() const {
    return IfcSurfaceOfLinearExtrusion::s_type;
}

bool IfcSurfaceOfLinearExtrusion::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceOfLinearExtrusion::s_type == t ? true : IfcSweptSurface::isOfType(t);
}

IfcDirection *IfcSurfaceOfLinearExtrusion::getExtrudedDirection() {
    if (Step::BaseObject::inited()) {
        return m_extrudedDirection.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcSurfaceOfLinearExtrusion::getExtrudedDirection() const {
    IfcSurfaceOfLinearExtrusion * deConstObject = const_cast< IfcSurfaceOfLinearExtrusion * > (this);
    return deConstObject->getExtrudedDirection();
}

void IfcSurfaceOfLinearExtrusion::setExtrudedDirection(const Step::RefPtr< IfcDirection > &value) {
    m_extrudedDirection = value;
}

void IfcSurfaceOfLinearExtrusion::unsetExtrudedDirection() {
    m_extrudedDirection = Step::getUnset(getExtrudedDirection());
}

bool IfcSurfaceOfLinearExtrusion::testExtrudedDirection() const {
    return !Step::isUnset(getExtrudedDirection());
}

IfcLengthMeasure IfcSurfaceOfLinearExtrusion::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

const IfcLengthMeasure IfcSurfaceOfLinearExtrusion::getDepth() const {
    IfcSurfaceOfLinearExtrusion * deConstObject = const_cast< IfcSurfaceOfLinearExtrusion * > (this);
    return deConstObject->getDepth();
}

void IfcSurfaceOfLinearExtrusion::setDepth(IfcLengthMeasure value) {
    m_depth = value;
}

void IfcSurfaceOfLinearExtrusion::unsetDepth() {
    m_depth = Step::getUnset(getDepth());
}

bool IfcSurfaceOfLinearExtrusion::testDepth() const {
    return !Step::isUnset(getDepth());
}

bool IfcSurfaceOfLinearExtrusion::init() {
    bool status = IfcSweptSurface::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_extrudedDirection = NULL;
    }
    else {
        m_extrudedDirection = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depth = Step::getUnset(m_depth);
    }
    else {
        m_depth = Step::spfToReal(arg);
    }
    return true;
}

void IfcSurfaceOfLinearExtrusion::copy(const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop) {
    IfcSweptSurface::copy(obj, copyop);
    setExtrudedDirection((IfcDirection*)copyop(obj.m_extrudedDirection.get()));
    setDepth(obj.m_depth);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceOfLinearExtrusion::s_type("IfcSurfaceOfLinearExtrusion");
