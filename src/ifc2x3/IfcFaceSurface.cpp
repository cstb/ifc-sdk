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



#include <ifc2x3/IfcFaceSurface.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFace.h>
#include <ifc2x3/IfcSurface.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcFaceSurface::IfcFaceSurface(Step::Id id, Step::SPFData *args) : IfcFace(id, args) {
    m_faceSurface = NULL;
    m_sameSense = Step::getUnset(m_sameSense);
}

IfcFaceSurface::~IfcFaceSurface() {
}

bool IfcFaceSurface::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFaceSurface(this);
}

const std::string &IfcFaceSurface::type() const {
    return IfcFaceSurface::s_type.getName();
}

const Step::ClassType &IfcFaceSurface::getClassType() {
    return IfcFaceSurface::s_type;
}

const Step::ClassType &IfcFaceSurface::getType() const {
    return IfcFaceSurface::s_type;
}

bool IfcFaceSurface::isOfType(const Step::ClassType &t) const {
    return IfcFaceSurface::s_type == t ? true : IfcFace::isOfType(t);
}

IfcSurface *IfcFaceSurface::getFaceSurface() {
    if (Step::BaseObject::inited()) {
        return m_faceSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcSurface *IfcFaceSurface::getFaceSurface() const {
    IfcFaceSurface * deConstObject = const_cast< IfcFaceSurface * > (this);
    return deConstObject->getFaceSurface();
}

void IfcFaceSurface::setFaceSurface(const Step::RefPtr< IfcSurface > &value) {
    m_faceSurface = value;
}

void IfcFaceSurface::unsetFaceSurface() {
    m_faceSurface = Step::getUnset(getFaceSurface());
}

bool IfcFaceSurface::testFaceSurface() const {
    return !Step::isUnset(getFaceSurface());
}

Step::Boolean IfcFaceSurface::getSameSense() {
    if (Step::BaseObject::inited()) {
        return m_sameSense;
    }
    else {
        return Step::getUnset(m_sameSense);
    }
}

const Step::Boolean IfcFaceSurface::getSameSense() const {
    IfcFaceSurface * deConstObject = const_cast< IfcFaceSurface * > (this);
    return deConstObject->getSameSense();
}

void IfcFaceSurface::setSameSense(Step::Boolean value) {
    m_sameSense = value;
}

void IfcFaceSurface::unsetSameSense() {
    m_sameSense = Step::getUnset(getSameSense());
}

bool IfcFaceSurface::testSameSense() const {
    return !Step::isUnset(getSameSense());
}

bool IfcFaceSurface::init() {
    bool status = IfcFace::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_faceSurface = NULL;
    }
    else {
        m_faceSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sameSense = Step::getUnset(m_sameSense);
    }
    else {
        m_sameSense = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcFaceSurface::copy(const IfcFaceSurface &obj, const CopyOp &copyop) {
    IfcFace::copy(obj, copyop);
    setFaceSurface((IfcSurface*)copyop(obj.m_faceSurface.get()));
    setSameSense(obj.m_sameSense);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcFaceSurface::s_type("IfcFaceSurface");
