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



#include <ifc2x3/IfcSurfaceStyleShading.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcColourRgb.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSurfaceStyleShading::IfcSurfaceStyleShading(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_surfaceColour = NULL;
}

IfcSurfaceStyleShading::~IfcSurfaceStyleShading() {
}

bool IfcSurfaceStyleShading::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyleShading(this);
}

const std::string &IfcSurfaceStyleShading::type() const {
    return IfcSurfaceStyleShading::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyleShading::getClassType() {
    return IfcSurfaceStyleShading::s_type;
}

const Step::ClassType &IfcSurfaceStyleShading::getType() const {
    return IfcSurfaceStyleShading::s_type;
}

bool IfcSurfaceStyleShading::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyleShading::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcColourRgb *IfcSurfaceStyleShading::getSurfaceColour() {
    if (Step::BaseObject::inited()) {
        return m_surfaceColour.get();
    }
    else {
        return NULL;
    }
}

const IfcColourRgb *IfcSurfaceStyleShading::getSurfaceColour() const {
    IfcSurfaceStyleShading * deConstObject = const_cast< IfcSurfaceStyleShading * > (this);
    return deConstObject->getSurfaceColour();
}

void IfcSurfaceStyleShading::setSurfaceColour(const Step::RefPtr< IfcColourRgb > &value) {
    m_surfaceColour = value;
}

void IfcSurfaceStyleShading::unsetSurfaceColour() {
    m_surfaceColour = Step::getUnset(getSurfaceColour());
}

bool IfcSurfaceStyleShading::testSurfaceColour() const {
    return !Step::isUnset(getSurfaceColour());
}

bool IfcSurfaceStyleShading::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_surfaceColour = NULL;
    }
    else {
        m_surfaceColour = static_cast< IfcColourRgb * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSurfaceStyleShading::copy(const IfcSurfaceStyleShading &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setSurfaceColour((IfcColourRgb*)copyop(obj.m_surfaceColour.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceStyleShading::s_type("IfcSurfaceStyleShading");
