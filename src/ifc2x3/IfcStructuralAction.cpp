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



#include <ifc2x3/IfcStructuralAction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralActivity.h>
#include <ifc2x3/IfcStructuralReaction.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralAction::IfcStructuralAction(Step::Id id, Step::SPFData *args) : IfcStructuralActivity(id, args) {
    m_destabilizingLoad = Step::getUnset(m_destabilizingLoad);
    m_causedBy = NULL;
}

IfcStructuralAction::~IfcStructuralAction() {
}

bool IfcStructuralAction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralAction(this);
}

const std::string &IfcStructuralAction::type() const {
    return IfcStructuralAction::s_type.getName();
}

const Step::ClassType &IfcStructuralAction::getClassType() {
    return IfcStructuralAction::s_type;
}

const Step::ClassType &IfcStructuralAction::getType() const {
    return IfcStructuralAction::s_type;
}

bool IfcStructuralAction::isOfType(const Step::ClassType &t) const {
    return IfcStructuralAction::s_type == t ? true : IfcStructuralActivity::isOfType(t);
}

Step::Boolean IfcStructuralAction::getDestabilizingLoad() {
    if (Step::BaseObject::inited()) {
        return m_destabilizingLoad;
    }
    else {
        return Step::getUnset(m_destabilizingLoad);
    }
}

const Step::Boolean IfcStructuralAction::getDestabilizingLoad() const {
    IfcStructuralAction * deConstObject = const_cast< IfcStructuralAction * > (this);
    return deConstObject->getDestabilizingLoad();
}

void IfcStructuralAction::setDestabilizingLoad(Step::Boolean value) {
    m_destabilizingLoad = value;
}

void IfcStructuralAction::unsetDestabilizingLoad() {
    m_destabilizingLoad = Step::getUnset(getDestabilizingLoad());
}

bool IfcStructuralAction::testDestabilizingLoad() const {
    return !Step::isUnset(getDestabilizingLoad());
}

IfcStructuralReaction *IfcStructuralAction::getCausedBy() {
    if (Step::BaseObject::inited()) {
        return m_causedBy.get();
    }
    else {
        return NULL;
    }
}

const IfcStructuralReaction *IfcStructuralAction::getCausedBy() const {
    IfcStructuralAction * deConstObject = const_cast< IfcStructuralAction * > (this);
    return deConstObject->getCausedBy();
}

void IfcStructuralAction::setCausedBy(const Step::RefPtr< IfcStructuralReaction > &value) {
    if (m_causedBy.valid()) {
        m_causedBy->m_causes.erase(this);
    }
    if (value.valid()) {
        value->m_causes.insert(this);
    }
    m_causedBy = value;
}

void IfcStructuralAction::unsetCausedBy() {
    m_causedBy = Step::getUnset(getCausedBy());
}

bool IfcStructuralAction::testCausedBy() const {
    return !Step::isUnset(getCausedBy());
}

bool IfcStructuralAction::init() {
    bool status = IfcStructuralActivity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_destabilizingLoad = Step::getUnset(m_destabilizingLoad);
    }
    else {
        m_destabilizingLoad = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_causedBy = NULL;
    }
    else {
        m_causedBy = static_cast< IfcStructuralReaction * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcStructuralAction::copy(const IfcStructuralAction &obj, const CopyOp &copyop) {
    IfcStructuralActivity::copy(obj, copyop);
    setDestabilizingLoad(obj.m_destabilizingLoad);
    setCausedBy((IfcStructuralReaction*)copyop(obj.m_causedBy.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralAction::s_type("IfcStructuralAction");
