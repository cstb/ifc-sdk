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



#include <ifc2x3/IfcHalfSpaceSolid.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
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

IfcHalfSpaceSolid::IfcHalfSpaceSolid(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_baseSurface = NULL;
    m_agreementFlag = Step::getUnset(m_agreementFlag);
}

IfcHalfSpaceSolid::~IfcHalfSpaceSolid() {
}

bool IfcHalfSpaceSolid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcHalfSpaceSolid(this);
}

const std::string &IfcHalfSpaceSolid::type() const {
    return IfcHalfSpaceSolid::s_type.getName();
}

const Step::ClassType &IfcHalfSpaceSolid::getClassType() {
    return IfcHalfSpaceSolid::s_type;
}

const Step::ClassType &IfcHalfSpaceSolid::getType() const {
    return IfcHalfSpaceSolid::s_type;
}

bool IfcHalfSpaceSolid::isOfType(const Step::ClassType &t) const {
    return IfcHalfSpaceSolid::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcSurface *IfcHalfSpaceSolid::getBaseSurface() {
    if (Step::BaseObject::inited()) {
        return m_baseSurface.get();
    }
    else {
        return NULL;
    }
}

const IfcSurface *IfcHalfSpaceSolid::getBaseSurface() const {
    IfcHalfSpaceSolid * deConstObject = const_cast< IfcHalfSpaceSolid * > (this);
    return deConstObject->getBaseSurface();
}

void IfcHalfSpaceSolid::setBaseSurface(const Step::RefPtr< IfcSurface > &value) {
    m_baseSurface = value;
}

void IfcHalfSpaceSolid::unsetBaseSurface() {
    m_baseSurface = Step::getUnset(getBaseSurface());
}

bool IfcHalfSpaceSolid::testBaseSurface() const {
    return !Step::isUnset(getBaseSurface());
}

Step::Boolean IfcHalfSpaceSolid::getAgreementFlag() {
    if (Step::BaseObject::inited()) {
        return m_agreementFlag;
    }
    else {
        return Step::getUnset(m_agreementFlag);
    }
}

const Step::Boolean IfcHalfSpaceSolid::getAgreementFlag() const {
    IfcHalfSpaceSolid * deConstObject = const_cast< IfcHalfSpaceSolid * > (this);
    return deConstObject->getAgreementFlag();
}

void IfcHalfSpaceSolid::setAgreementFlag(Step::Boolean value) {
    m_agreementFlag = value;
}

void IfcHalfSpaceSolid::unsetAgreementFlag() {
    m_agreementFlag = Step::getUnset(getAgreementFlag());
}

bool IfcHalfSpaceSolid::testAgreementFlag() const {
    return !Step::isUnset(getAgreementFlag());
}

bool IfcHalfSpaceSolid::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_baseSurface = NULL;
    }
    else {
        m_baseSurface = static_cast< IfcSurface * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_agreementFlag = Step::getUnset(m_agreementFlag);
    }
    else {
        m_agreementFlag = Step::spfToBoolean(arg);
    }
    return true;
}

void IfcHalfSpaceSolid::copy(const IfcHalfSpaceSolid &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setBaseSurface((IfcSurface*)copyop(obj.m_baseSurface.get()));
    setAgreementFlag(obj.m_agreementFlag);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcHalfSpaceSolid::s_type("IfcHalfSpaceSolid");
