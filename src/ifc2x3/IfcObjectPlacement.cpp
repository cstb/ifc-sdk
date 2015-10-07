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



#include <ifc2x3/IfcObjectPlacement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcLocalPlacement.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcObjectPlacement::IfcObjectPlacement(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcObjectPlacement::~IfcObjectPlacement() {
}

bool IfcObjectPlacement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcObjectPlacement(this);
}

const std::string &IfcObjectPlacement::type() const {
    return IfcObjectPlacement::s_type.getName();
}

const Step::ClassType &IfcObjectPlacement::getClassType() {
    return IfcObjectPlacement::s_type;
}

const Step::ClassType &IfcObjectPlacement::getType() const {
    return IfcObjectPlacement::s_type;
}

bool IfcObjectPlacement::isOfType(const Step::ClassType &t) const {
    return IfcObjectPlacement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

Inverse_Set_IfcProduct_1_n &IfcObjectPlacement::getPlacesObject() {
    if (Step::BaseObject::inited()) {
        return m_placesObject;
    }
    else {
        m_placesObject.setUnset(true);
        return m_placesObject;
    }
}

const Inverse_Set_IfcProduct_1_n &IfcObjectPlacement::getPlacesObject() const {
    IfcObjectPlacement * deConstObject = const_cast< IfcObjectPlacement * > (this);
    return deConstObject->getPlacesObject();
}

bool IfcObjectPlacement::testPlacesObject() const {
    return !m_placesObject.isUnset();
}

Inverse_Set_IfcLocalPlacement_0_n &IfcObjectPlacement::getReferencedByPlacements() {
    if (Step::BaseObject::inited()) {
        return m_referencedByPlacements;
    }
    else {
        m_referencedByPlacements.setUnset(true);
        return m_referencedByPlacements;
    }
}

const Inverse_Set_IfcLocalPlacement_0_n &IfcObjectPlacement::getReferencedByPlacements() const {
    IfcObjectPlacement * deConstObject = const_cast< IfcObjectPlacement * > (this);
    return deConstObject->getReferencedByPlacements();
}

bool IfcObjectPlacement::testReferencedByPlacements() const {
    return !m_referencedByPlacements.isUnset();
}

bool IfcObjectPlacement::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcProduct::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_placesObject.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_placesObject.insert(static_cast< IfcProduct * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcLocalPlacement::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_referencedByPlacements.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencedByPlacements.insert(static_cast< IfcLocalPlacement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcObjectPlacement::copy(const IfcObjectPlacement &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcObjectPlacement::s_type("IfcObjectPlacement");
