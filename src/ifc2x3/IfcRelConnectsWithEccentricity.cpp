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



#include <ifc2x3/IfcRelConnectsWithEccentricity.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcRelConnectsStructuralMember.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelConnectsWithEccentricity::IfcRelConnectsWithEccentricity(Step::Id id, Step::SPFData *args) : IfcRelConnectsStructuralMember(id, args) {
    m_connectionConstraint = NULL;
}

IfcRelConnectsWithEccentricity::~IfcRelConnectsWithEccentricity() {
}

bool IfcRelConnectsWithEccentricity::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelConnectsWithEccentricity(this);
}

const std::string &IfcRelConnectsWithEccentricity::type() const {
    return IfcRelConnectsWithEccentricity::s_type.getName();
}

const Step::ClassType &IfcRelConnectsWithEccentricity::getClassType() {
    return IfcRelConnectsWithEccentricity::s_type;
}

const Step::ClassType &IfcRelConnectsWithEccentricity::getType() const {
    return IfcRelConnectsWithEccentricity::s_type;
}

bool IfcRelConnectsWithEccentricity::isOfType(const Step::ClassType &t) const {
    return IfcRelConnectsWithEccentricity::s_type == t ? true : IfcRelConnectsStructuralMember::isOfType(t);
}

IfcConnectionGeometry *IfcRelConnectsWithEccentricity::getConnectionConstraint() {
    if (Step::BaseObject::inited()) {
        return m_connectionConstraint.get();
    }
    else {
        return NULL;
    }
}

const IfcConnectionGeometry *IfcRelConnectsWithEccentricity::getConnectionConstraint() const {
    IfcRelConnectsWithEccentricity * deConstObject = const_cast< IfcRelConnectsWithEccentricity * > (this);
    return deConstObject->getConnectionConstraint();
}

void IfcRelConnectsWithEccentricity::setConnectionConstraint(const Step::RefPtr< IfcConnectionGeometry > &value) {
    m_connectionConstraint = value;
}

void IfcRelConnectsWithEccentricity::unsetConnectionConstraint() {
    m_connectionConstraint = Step::getUnset(getConnectionConstraint());
}

bool IfcRelConnectsWithEccentricity::testConnectionConstraint() const {
    return !Step::isUnset(getConnectionConstraint());
}

bool IfcRelConnectsWithEccentricity::init() {
    bool status = IfcRelConnectsStructuralMember::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_connectionConstraint = NULL;
    }
    else {
        m_connectionConstraint = static_cast< IfcConnectionGeometry * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelConnectsWithEccentricity::copy(const IfcRelConnectsWithEccentricity &obj, const CopyOp &copyop) {
    IfcRelConnectsStructuralMember::copy(obj, copyop);
    setConnectionConstraint((IfcConnectionGeometry*)copyop(obj.m_connectionConstraint.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelConnectsWithEccentricity::s_type("IfcRelConnectsWithEccentricity");
