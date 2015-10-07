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



#include <ifc2x3/IfcRelAssociatesApproval.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelAssociatesApproval::IfcRelAssociatesApproval(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingApproval = NULL;
}

IfcRelAssociatesApproval::~IfcRelAssociatesApproval() {
}

bool IfcRelAssociatesApproval::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesApproval(this);
}

const std::string &IfcRelAssociatesApproval::type() const {
    return IfcRelAssociatesApproval::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesApproval::getClassType() {
    return IfcRelAssociatesApproval::s_type;
}

const Step::ClassType &IfcRelAssociatesApproval::getType() const {
    return IfcRelAssociatesApproval::s_type;
}

bool IfcRelAssociatesApproval::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesApproval::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcApproval *IfcRelAssociatesApproval::getRelatingApproval() {
    if (Step::BaseObject::inited()) {
        return m_relatingApproval.get();
    }
    else {
        return NULL;
    }
}

const IfcApproval *IfcRelAssociatesApproval::getRelatingApproval() const {
    IfcRelAssociatesApproval * deConstObject = const_cast< IfcRelAssociatesApproval * > (this);
    return deConstObject->getRelatingApproval();
}

void IfcRelAssociatesApproval::setRelatingApproval(const Step::RefPtr< IfcApproval > &value) {
    m_relatingApproval = value;
}

void IfcRelAssociatesApproval::unsetRelatingApproval() {
    m_relatingApproval = Step::getUnset(getRelatingApproval());
}

bool IfcRelAssociatesApproval::testRelatingApproval() const {
    return !Step::isUnset(getRelatingApproval());
}

bool IfcRelAssociatesApproval::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingApproval = NULL;
    }
    else {
        m_relatingApproval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssociatesApproval::copy(const IfcRelAssociatesApproval &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setRelatingApproval((IfcApproval*)copyop(obj.m_relatingApproval.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssociatesApproval::s_type("IfcRelAssociatesApproval");
