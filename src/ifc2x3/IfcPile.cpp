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



#include <ifc2x3/IfcPile.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPile::IfcPile(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_predefinedType = IfcPileTypeEnum_UNSET;
    m_constructionType = IfcPileConstructionEnum_UNSET;
}

IfcPile::~IfcPile() {
}

bool IfcPile::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPile(this);
}

const std::string &IfcPile::type() const {
    return IfcPile::s_type.getName();
}

const Step::ClassType &IfcPile::getClassType() {
    return IfcPile::s_type;
}

const Step::ClassType &IfcPile::getType() const {
    return IfcPile::s_type;
}

bool IfcPile::isOfType(const Step::ClassType &t) const {
    return IfcPile::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcPileTypeEnum IfcPile::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcPileTypeEnum_UNSET;
    }
}

const IfcPileTypeEnum IfcPile::getPredefinedType() const {
    IfcPile * deConstObject = const_cast< IfcPile * > (this);
    return deConstObject->getPredefinedType();
}

void IfcPile::setPredefinedType(IfcPileTypeEnum value) {
    m_predefinedType = value;
}

void IfcPile::unsetPredefinedType() {
    m_predefinedType = IfcPileTypeEnum_UNSET;
}

bool IfcPile::testPredefinedType() const {
    return getPredefinedType() != IfcPileTypeEnum_UNSET;
}

IfcPileConstructionEnum IfcPile::getConstructionType() {
    if (Step::BaseObject::inited()) {
        return m_constructionType;
    }
    else {
        return IfcPileConstructionEnum_UNSET;
    }
}

const IfcPileConstructionEnum IfcPile::getConstructionType() const {
    IfcPile * deConstObject = const_cast< IfcPile * > (this);
    return deConstObject->getConstructionType();
}

void IfcPile::setConstructionType(IfcPileConstructionEnum value) {
    m_constructionType = value;
}

void IfcPile::unsetConstructionType() {
    m_constructionType = IfcPileConstructionEnum_UNSET;
}

bool IfcPile::testConstructionType() const {
    return getConstructionType() != IfcPileConstructionEnum_UNSET;
}

bool IfcPile::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcPileTypeEnum_UNSET;
    }
    else {
        if (arg == ".COHESION.") {
            m_predefinedType = IfcPileTypeEnum_COHESION;
        }
        else if (arg == ".FRICTION.") {
            m_predefinedType = IfcPileTypeEnum_FRICTION;
        }
        else if (arg == ".SUPPORT.") {
            m_predefinedType = IfcPileTypeEnum_SUPPORT;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcPileTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcPileTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_constructionType = IfcPileConstructionEnum_UNSET;
    }
    else {
        if (arg == ".CAST_IN_PLACE.") {
            m_constructionType = IfcPileConstructionEnum_CAST_IN_PLACE;
        }
        else if (arg == ".COMPOSITE.") {
            m_constructionType = IfcPileConstructionEnum_COMPOSITE;
        }
        else if (arg == ".PRECAST_CONCRETE.") {
            m_constructionType = IfcPileConstructionEnum_PRECAST_CONCRETE;
        }
        else if (arg == ".PREFAB_STEEL.") {
            m_constructionType = IfcPileConstructionEnum_PREFAB_STEEL;
        }
        else if (arg == ".USERDEFINED.") {
            m_constructionType = IfcPileConstructionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_constructionType = IfcPileConstructionEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPile::copy(const IfcPile &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    setConstructionType(obj.m_constructionType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPile::s_type("IfcPile");
