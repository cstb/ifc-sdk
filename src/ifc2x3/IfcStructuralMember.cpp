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



#include <ifc2x3/IfcStructuralMember.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelConnectsStructuralElement.h>
#include <ifc2x3/IfcRelConnectsStructuralMember.h>
#include <ifc2x3/IfcStructuralItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralMember::IfcStructuralMember(Step::Id id, Step::SPFData *args) : IfcStructuralItem(id, args) {
}

IfcStructuralMember::~IfcStructuralMember() {
}

bool IfcStructuralMember::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralMember(this);
}

const std::string &IfcStructuralMember::type() const {
    return IfcStructuralMember::s_type.getName();
}

const Step::ClassType &IfcStructuralMember::getClassType() {
    return IfcStructuralMember::s_type;
}

const Step::ClassType &IfcStructuralMember::getType() const {
    return IfcStructuralMember::s_type;
}

bool IfcStructuralMember::isOfType(const Step::ClassType &t) const {
    return IfcStructuralMember::s_type == t ? true : IfcStructuralItem::isOfType(t);
}

Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcStructuralMember::getReferencesElement() {
    if (Step::BaseObject::inited()) {
        return m_referencesElement;
    }
    else {
        m_referencesElement.setUnset(true);
        return m_referencesElement;
    }
}

const Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcStructuralMember::getReferencesElement() const {
    IfcStructuralMember * deConstObject = const_cast< IfcStructuralMember * > (this);
    return deConstObject->getReferencesElement();
}

bool IfcStructuralMember::testReferencesElement() const {
    return !m_referencesElement.isUnset();
}

Inverse_Set_IfcRelConnectsStructuralMember_0_n &IfcStructuralMember::getConnectedBy() {
    if (Step::BaseObject::inited()) {
        return m_connectedBy;
    }
    else {
        m_connectedBy.setUnset(true);
        return m_connectedBy;
    }
}

const Inverse_Set_IfcRelConnectsStructuralMember_0_n &IfcStructuralMember::getConnectedBy() const {
    IfcStructuralMember * deConstObject = const_cast< IfcStructuralMember * > (this);
    return deConstObject->getConnectedBy();
}

bool IfcStructuralMember::testConnectedBy() const {
    return !m_connectedBy.isUnset();
}

bool IfcStructuralMember::init() {
    bool status = IfcStructuralItem::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralElement::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_referencesElement.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencesElement.insert(static_cast< IfcRelConnectsStructuralElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralMember::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_connectedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedBy.insert(static_cast< IfcRelConnectsStructuralMember * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralMember::copy(const IfcStructuralMember &obj, const CopyOp &copyop) {
    IfcStructuralItem::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralMember::s_type("IfcStructuralMember");
