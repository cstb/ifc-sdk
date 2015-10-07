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



#include <ifc2x3/IfcSurfaceStyleRefraction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSurfaceStyleRefraction::IfcSurfaceStyleRefraction(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_refractionIndex = Step::getUnset(m_refractionIndex);
    m_dispersionFactor = Step::getUnset(m_dispersionFactor);
}

IfcSurfaceStyleRefraction::~IfcSurfaceStyleRefraction() {
}

bool IfcSurfaceStyleRefraction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSurfaceStyleRefraction(this);
}

const std::string &IfcSurfaceStyleRefraction::type() const {
    return IfcSurfaceStyleRefraction::s_type.getName();
}

const Step::ClassType &IfcSurfaceStyleRefraction::getClassType() {
    return IfcSurfaceStyleRefraction::s_type;
}

const Step::ClassType &IfcSurfaceStyleRefraction::getType() const {
    return IfcSurfaceStyleRefraction::s_type;
}

bool IfcSurfaceStyleRefraction::isOfType(const Step::ClassType &t) const {
    return IfcSurfaceStyleRefraction::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcReal IfcSurfaceStyleRefraction::getRefractionIndex() {
    if (Step::BaseObject::inited()) {
        return m_refractionIndex;
    }
    else {
        return Step::getUnset(m_refractionIndex);
    }
}

const IfcReal IfcSurfaceStyleRefraction::getRefractionIndex() const {
    IfcSurfaceStyleRefraction * deConstObject = const_cast< IfcSurfaceStyleRefraction * > (this);
    return deConstObject->getRefractionIndex();
}

void IfcSurfaceStyleRefraction::setRefractionIndex(IfcReal value) {
    m_refractionIndex = value;
}

void IfcSurfaceStyleRefraction::unsetRefractionIndex() {
    m_refractionIndex = Step::getUnset(getRefractionIndex());
}

bool IfcSurfaceStyleRefraction::testRefractionIndex() const {
    return !Step::isUnset(getRefractionIndex());
}

IfcReal IfcSurfaceStyleRefraction::getDispersionFactor() {
    if (Step::BaseObject::inited()) {
        return m_dispersionFactor;
    }
    else {
        return Step::getUnset(m_dispersionFactor);
    }
}

const IfcReal IfcSurfaceStyleRefraction::getDispersionFactor() const {
    IfcSurfaceStyleRefraction * deConstObject = const_cast< IfcSurfaceStyleRefraction * > (this);
    return deConstObject->getDispersionFactor();
}

void IfcSurfaceStyleRefraction::setDispersionFactor(IfcReal value) {
    m_dispersionFactor = value;
}

void IfcSurfaceStyleRefraction::unsetDispersionFactor() {
    m_dispersionFactor = Step::getUnset(getDispersionFactor());
}

bool IfcSurfaceStyleRefraction::testDispersionFactor() const {
    return !Step::isUnset(getDispersionFactor());
}

bool IfcSurfaceStyleRefraction::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refractionIndex = Step::getUnset(m_refractionIndex);
    }
    else {
        m_refractionIndex = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dispersionFactor = Step::getUnset(m_dispersionFactor);
    }
    else {
        m_dispersionFactor = Step::spfToReal(arg);
    }
    return true;
}

void IfcSurfaceStyleRefraction::copy(const IfcSurfaceStyleRefraction &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRefractionIndex(obj.m_refractionIndex);
    setDispersionFactor(obj.m_dispersionFactor);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSurfaceStyleRefraction::s_type("IfcSurfaceStyleRefraction");
