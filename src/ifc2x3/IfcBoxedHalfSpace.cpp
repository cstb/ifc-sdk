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



#include <ifc2x3/IfcBoxedHalfSpace.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundingBox.h>
#include <ifc2x3/IfcHalfSpaceSolid.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBoxedHalfSpace::IfcBoxedHalfSpace(Step::Id id, Step::SPFData *args) : IfcHalfSpaceSolid(id, args) {
    m_enclosure = NULL;
}

IfcBoxedHalfSpace::~IfcBoxedHalfSpace() {
}

bool IfcBoxedHalfSpace::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoxedHalfSpace(this);
}

const std::string &IfcBoxedHalfSpace::type() const {
    return IfcBoxedHalfSpace::s_type.getName();
}

const Step::ClassType &IfcBoxedHalfSpace::getClassType() {
    return IfcBoxedHalfSpace::s_type;
}

const Step::ClassType &IfcBoxedHalfSpace::getType() const {
    return IfcBoxedHalfSpace::s_type;
}

bool IfcBoxedHalfSpace::isOfType(const Step::ClassType &t) const {
    return IfcBoxedHalfSpace::s_type == t ? true : IfcHalfSpaceSolid::isOfType(t);
}

IfcBoundingBox *IfcBoxedHalfSpace::getEnclosure() {
    if (Step::BaseObject::inited()) {
        return m_enclosure.get();
    }
    else {
        return NULL;
    }
}

const IfcBoundingBox *IfcBoxedHalfSpace::getEnclosure() const {
    IfcBoxedHalfSpace * deConstObject = const_cast< IfcBoxedHalfSpace * > (this);
    return deConstObject->getEnclosure();
}

void IfcBoxedHalfSpace::setEnclosure(const Step::RefPtr< IfcBoundingBox > &value) {
    m_enclosure = value;
}

void IfcBoxedHalfSpace::unsetEnclosure() {
    m_enclosure = Step::getUnset(getEnclosure());
}

bool IfcBoxedHalfSpace::testEnclosure() const {
    return !Step::isUnset(getEnclosure());
}

bool IfcBoxedHalfSpace::init() {
    bool status = IfcHalfSpaceSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_enclosure = NULL;
    }
    else {
        m_enclosure = static_cast< IfcBoundingBox * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcBoxedHalfSpace::copy(const IfcBoxedHalfSpace &obj, const CopyOp &copyop) {
    IfcHalfSpaceSolid::copy(obj, copyop);
    setEnclosure((IfcBoundingBox*)copyop(obj.m_enclosure.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBoxedHalfSpace::s_type("IfcBoxedHalfSpace");
