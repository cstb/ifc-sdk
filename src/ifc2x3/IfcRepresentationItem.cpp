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

#include <ifc2x3/IfcRepresentationItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcStyledItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>


#include <string>
#include <vector>

using namespace ifc2x3;

IfcRepresentationItem::IfcRepresentationItem(Step::Id id, Step::SPFData *args)
    : Step::BaseEntity(id, args),
      m_layerAssignments(0),
      m_styledByItem(0)
{
}

IfcRepresentationItem::~IfcRepresentationItem() {
    if (m_layerAssignments)
        delete m_layerAssignments;
    if (m_styledByItem)
        delete m_styledByItem;
}

bool IfcRepresentationItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRepresentationItem(this);
}

const std::string &IfcRepresentationItem::type() const {
    return IfcRepresentationItem::s_type.getName();
}

const Step::ClassType &IfcRepresentationItem::getClassType() {
    return IfcRepresentationItem::s_type;
}

const Step::ClassType &IfcRepresentationItem::getType() const {
    return IfcRepresentationItem::s_type;
}

bool IfcRepresentationItem::isOfType(const Step::ClassType &t) const {
    return IfcRepresentationItem::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Step::RefPtr< Inverse_Set_IfcPresentationLayerAssignment_0_n > &IfcRepresentationItem::getLayerAssignments() {
    if (Step::BaseObject::inited()) {
        return *m_layerAssignments;
    }
    else {
        Inverse_Set_IfcPresentationLayerAssignment_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Step::RefPtr< Inverse_Set_IfcPresentationLayerAssignment_0_n > &IfcRepresentationItem::getLayerAssignments() const {
    IfcRepresentationItem * deConstObject = const_cast< IfcRepresentationItem * > (this);
    return deConstObject->getLayerAssignments();
}

bool IfcRepresentationItem::testLayerAssignments() const {
    return !Step::isUnset(getLayerAssignments());
}

Step::RefPtr< Inverse_Set_IfcStyledItem_0_1 > &IfcRepresentationItem::getStyledByItem() {
    if (Step::BaseObject::inited()) {
        return *m_styledByItem;
    }
    else {
        Inverse_Set_IfcStyledItem_0_1 styleSet;
        styleSet.setUnset(true);
        return styleSet;
    }
}

const Step::RefPtr< Inverse_Set_IfcStyledItem_0_1 > &IfcRepresentationItem::getStyledByItem() const {
    IfcRepresentationItem * deConstObject = const_cast< IfcRepresentationItem * > (this);
    return deConstObject->getStyledByItem();
}

bool IfcRepresentationItem::testStyledByItem() const {
    return !Step::isUnset(getStyledByItem());
}

bool IfcRepresentationItem::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcPresentationLayerAssignment::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_layerAssignments = new Inverse_Set_IfcPresentationLayerAssignment_0_n;
        m_layerAssignments->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_layerAssignments->insert(static_cast< IfcPresentationLayerAssignment * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcStyledItem::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_styledByItem = new Inverse_Set_IfcStyledItem_0_1;
        m_styledByItem->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_styledByItem->insert(static_cast< IfcStyledItem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentationItem::copy(const IfcRepresentationItem &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRepresentationItem::s_type("IfcRepresentationItem");
