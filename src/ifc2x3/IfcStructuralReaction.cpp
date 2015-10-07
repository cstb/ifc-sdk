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



#include <ifc2x3/IfcStructuralReaction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralAction.h>
#include <ifc2x3/IfcStructuralActivity.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralReaction::IfcStructuralReaction(Step::Id id, Step::SPFData *args) : IfcStructuralActivity(id, args) {
}

IfcStructuralReaction::~IfcStructuralReaction() {
}

bool IfcStructuralReaction::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralReaction(this);
}

const std::string &IfcStructuralReaction::type() const {
    return IfcStructuralReaction::s_type.getName();
}

const Step::ClassType &IfcStructuralReaction::getClassType() {
    return IfcStructuralReaction::s_type;
}

const Step::ClassType &IfcStructuralReaction::getType() const {
    return IfcStructuralReaction::s_type;
}

bool IfcStructuralReaction::isOfType(const Step::ClassType &t) const {
    return IfcStructuralReaction::s_type == t ? true : IfcStructuralActivity::isOfType(t);
}

Inverse_Set_IfcStructuralAction_0_n &IfcStructuralReaction::getCauses() {
    if (Step::BaseObject::inited()) {
        return m_causes;
    }
    else {
        m_causes.setUnset(true);
        return m_causes;
    }
}

const Inverse_Set_IfcStructuralAction_0_n &IfcStructuralReaction::getCauses() const {
    IfcStructuralReaction * deConstObject = const_cast< IfcStructuralReaction * > (this);
    return deConstObject->getCauses();
}

bool IfcStructuralReaction::testCauses() const {
    return !m_causes.isUnset();
}

bool IfcStructuralReaction::init() {
    bool status = IfcStructuralActivity::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcStructuralAction::getClassType(), 10);
    if (inverses) {
        unsigned int i;
        m_causes.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_causes.insert(static_cast< IfcStructuralAction * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralReaction::copy(const IfcStructuralReaction &obj, const CopyOp &copyop) {
    IfcStructuralActivity::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralReaction::s_type("IfcStructuralReaction");
