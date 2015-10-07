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



#include <ifc2x3/IfcRelAssociatesAppliedValue.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAppliedValue.h>
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

IfcRelAssociatesAppliedValue::IfcRelAssociatesAppliedValue(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingAppliedValue = NULL;
}

IfcRelAssociatesAppliedValue::~IfcRelAssociatesAppliedValue() {
}

bool IfcRelAssociatesAppliedValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesAppliedValue(this);
}

const std::string &IfcRelAssociatesAppliedValue::type() const {
    return IfcRelAssociatesAppliedValue::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesAppliedValue::getClassType() {
    return IfcRelAssociatesAppliedValue::s_type;
}

const Step::ClassType &IfcRelAssociatesAppliedValue::getType() const {
    return IfcRelAssociatesAppliedValue::s_type;
}

bool IfcRelAssociatesAppliedValue::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesAppliedValue::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcAppliedValue *IfcRelAssociatesAppliedValue::getRelatingAppliedValue() {
    if (Step::BaseObject::inited()) {
        return m_relatingAppliedValue.get();
    }
    else {
        return NULL;
    }
}

const IfcAppliedValue *IfcRelAssociatesAppliedValue::getRelatingAppliedValue() const {
    IfcRelAssociatesAppliedValue * deConstObject = const_cast< IfcRelAssociatesAppliedValue * > (this);
    return deConstObject->getRelatingAppliedValue();
}

void IfcRelAssociatesAppliedValue::setRelatingAppliedValue(const Step::RefPtr< IfcAppliedValue > &value) {
    m_relatingAppliedValue = value;
}

void IfcRelAssociatesAppliedValue::unsetRelatingAppliedValue() {
    m_relatingAppliedValue = Step::getUnset(getRelatingAppliedValue());
}

bool IfcRelAssociatesAppliedValue::testRelatingAppliedValue() const {
    return !Step::isUnset(getRelatingAppliedValue());
}

bool IfcRelAssociatesAppliedValue::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingAppliedValue = NULL;
    }
    else {
        m_relatingAppliedValue = static_cast< IfcAppliedValue * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssociatesAppliedValue::copy(const IfcRelAssociatesAppliedValue &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setRelatingAppliedValue((IfcAppliedValue*)copyop(obj.m_relatingAppliedValue.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssociatesAppliedValue::s_type("IfcRelAssociatesAppliedValue");
