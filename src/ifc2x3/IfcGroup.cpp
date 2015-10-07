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



#include <ifc2x3/IfcGroup.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcRelAssignsToGroup.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcGroup::IfcGroup(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
}

IfcGroup::~IfcGroup() {
}

bool IfcGroup::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGroup(this);
}

const std::string &IfcGroup::type() const {
    return IfcGroup::s_type.getName();
}

const Step::ClassType &IfcGroup::getClassType() {
    return IfcGroup::s_type;
}

const Step::ClassType &IfcGroup::getType() const {
    return IfcGroup::s_type;
}

bool IfcGroup::isOfType(const Step::ClassType &t) const {
    return IfcGroup::s_type == t ? true : IfcObject::isOfType(t);
}

IfcRelAssignsToGroup *IfcGroup::getIsGroupedBy() {
    if (Step::BaseObject::inited()) {
        return m_isGroupedBy.get();
    }
    else {
        return NULL;
    }
}

const IfcRelAssignsToGroup *IfcGroup::getIsGroupedBy() const {
    IfcGroup * deConstObject = const_cast< IfcGroup * > (this);
    return deConstObject->getIsGroupedBy();
}

bool IfcGroup::testIsGroupedBy() const {
    return !Step::isUnset(getIsGroupedBy());
}

bool IfcGroup::init() {
    bool status = IfcObject::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssignsToGroup::getClassType(), 6);
    if (inverses) {
        m_isGroupedBy = static_cast< IfcRelAssignsToGroup * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcGroup::copy(const IfcGroup &obj, const CopyOp &copyop) {
    IfcObject::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGroup::s_type("IfcGroup");
