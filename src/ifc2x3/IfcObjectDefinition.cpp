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

#include "precompiled.h"

#include <ifc2x3/IfcObjectDefinition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRelAssigns.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/IfcRelDecomposes.h>
#include <ifc2x3/IfcRoot.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>


#include <string>
#include <vector>

using namespace ifc2x3;

IfcObjectDefinition::IfcObjectDefinition(Step::Id id, Step::SPFData *args)
    : IfcRoot(id, args),
      m_hasAssignments(0),
      m_isDecomposedBy(0),
      m_decomposes(0),
      m_hasAssociations(0)
{
}

IfcObjectDefinition::~IfcObjectDefinition() {
    if (m_hasAssignments)
        delete m_hasAssignments;
    if (m_isDecomposedBy)
        delete m_isDecomposedBy;
    if (m_decomposes)
        delete m_decomposes;
    if (m_hasAssociations)
        delete m_hasAssociations;
}

bool IfcObjectDefinition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcObjectDefinition(this);
}

const std::string &IfcObjectDefinition::type() const {
    return IfcObjectDefinition::s_type.getName();
}

const Step::ClassType &IfcObjectDefinition::getClassType() {
    return IfcObjectDefinition::s_type;
}

const Step::ClassType &IfcObjectDefinition::getType() const {
    return IfcObjectDefinition::s_type;
}

bool IfcObjectDefinition::isOfType(const Step::ClassType &t) const {
    return IfcObjectDefinition::s_type == t ? true : IfcRoot::isOfType(t);
}

Inverse_Set_IfcRelAssigns_0_n &IfcObjectDefinition::getHasAssignments() {
    if (Step::BaseObject::inited()) {
        return *m_hasAssignments;
    }
    else {
        Inverse_Set_IfcRelAssigns_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelAssigns_0_n &IfcObjectDefinition::getHasAssignments() const {
    IfcObjectDefinition * deConstObject = const_cast< IfcObjectDefinition * > (this);
    return deConstObject->getHasAssignments();
}

bool IfcObjectDefinition::testHasAssignments() const {
    return !Step::isUnset(getHasAssignments());
}

Inverse_Set_IfcRelDecomposes_0_n &IfcObjectDefinition::getIsDecomposedBy() {
    if (Step::BaseObject::inited()) {
        return *m_isDecomposedBy;
    }
    else {
        Inverse_Set_IfcRelDecomposes_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelDecomposes_0_n &IfcObjectDefinition::getIsDecomposedBy() const {
    IfcObjectDefinition * deConstObject = const_cast< IfcObjectDefinition * > (this);
    return deConstObject->getIsDecomposedBy();
}

bool IfcObjectDefinition::testIsDecomposedBy() const {
    return !Step::isUnset(getIsDecomposedBy());
}

Inverse_Set_IfcRelDecomposes_0_1 &IfcObjectDefinition::getDecomposes() {
    if (Step::BaseObject::inited()) {
        return *m_decomposes;
    }
    else {
        Inverse_Set_IfcRelDecomposes_0_1 inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelDecomposes_0_1 &IfcObjectDefinition::getDecomposes() const {
    IfcObjectDefinition * deConstObject = const_cast< IfcObjectDefinition * > (this);
    return deConstObject->getDecomposes();
}

bool IfcObjectDefinition::testDecomposes() const {
    return !Step::isUnset(getDecomposes());
}

Inverse_Set_IfcRelAssociates_0_n &IfcObjectDefinition::getHasAssociations() {
    if (Step::BaseObject::inited()) {
        return *m_hasAssociations;
    }
    else {
        Inverse_Set_IfcRelAssociates_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelAssociates_0_n &IfcObjectDefinition::getHasAssociations() const {
    IfcObjectDefinition * deConstObject = const_cast< IfcObjectDefinition * > (this);
    return deConstObject->getHasAssociations();
}

bool IfcObjectDefinition::testHasAssociations() const {
    return !Step::isUnset(getHasAssociations());
}

bool IfcObjectDefinition::init() {
    bool status = IfcRoot::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssigns::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasAssignments = new Inverse_Set_IfcRelAssigns_0_n;
        m_hasAssignments->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasAssignments->insert(static_cast< IfcRelAssigns * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_isDecomposedBy = new Inverse_Set_IfcRelDecomposes_0_n;
        m_isDecomposedBy->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isDecomposedBy->insert(static_cast< IfcRelDecomposes * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelDecomposes::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_decomposes = new Inverse_Set_IfcRelDecomposes_0_1;
        m_decomposes->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_decomposes->insert(static_cast< IfcRelDecomposes * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelAssociates::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasAssociations = new Inverse_Set_IfcRelAssociates_0_n;
        m_hasAssociations->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasAssociations->insert(static_cast< IfcRelAssociates * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObjectDefinition::copy(const IfcObjectDefinition &obj, const CopyOp &copyop) {
    IfcRoot::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcObjectDefinition::s_type("IfcObjectDefinition");
