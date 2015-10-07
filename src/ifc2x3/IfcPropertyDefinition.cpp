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



#include <ifc2x3/IfcPropertyDefinition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcPropertyDefinition::IfcPropertyDefinition(Step::Id id, Step::SPFData *args) : IfcRoot(id, args) {
}

IfcPropertyDefinition::~IfcPropertyDefinition() {
}

bool IfcPropertyDefinition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPropertyDefinition(this);
}

const std::string &IfcPropertyDefinition::type() const {
    return IfcPropertyDefinition::s_type.getName();
}

const Step::ClassType &IfcPropertyDefinition::getClassType() {
    return IfcPropertyDefinition::s_type;
}

const Step::ClassType &IfcPropertyDefinition::getType() const {
    return IfcPropertyDefinition::s_type;
}

bool IfcPropertyDefinition::isOfType(const Step::ClassType &t) const {
    return IfcPropertyDefinition::s_type == t ? true : IfcRoot::isOfType(t);
}

Inverse_Set_IfcRelAssociates_0_n &IfcPropertyDefinition::getHasAssociations() {
    if (Step::BaseObject::inited()) {
        return m_hasAssociations;
    }
    else {
        m_hasAssociations.setUnset(true);
        return m_hasAssociations;
    }
}

const Inverse_Set_IfcRelAssociates_0_n &IfcPropertyDefinition::getHasAssociations() const {
    IfcPropertyDefinition * deConstObject = const_cast< IfcPropertyDefinition * > (this);
    return deConstObject->getHasAssociations();
}

bool IfcPropertyDefinition::testHasAssociations() const {
    return !m_hasAssociations.isUnset();
}

bool IfcPropertyDefinition::init() {
    bool status = IfcRoot::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssociates::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasAssociations.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasAssociations.insert(static_cast< IfcRelAssociates * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPropertyDefinition::copy(const IfcPropertyDefinition &obj, const CopyOp &copyop) {
    IfcRoot::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPropertyDefinition::s_type("IfcPropertyDefinition");
