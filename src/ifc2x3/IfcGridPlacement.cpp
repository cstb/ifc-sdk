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



#include <ifc2x3/IfcGridPlacement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObjectPlacement.h>
#include <ifc2x3/IfcVirtualGridIntersection.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcGridPlacement::IfcGridPlacement(Step::Id id, Step::SPFData *args) : IfcObjectPlacement(id, args) {
    m_placementLocation = NULL;
    m_placementRefDirection = NULL;
}

IfcGridPlacement::~IfcGridPlacement() {
}

bool IfcGridPlacement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGridPlacement(this);
}

const std::string &IfcGridPlacement::type() const {
    return IfcGridPlacement::s_type.getName();
}

const Step::ClassType &IfcGridPlacement::getClassType() {
    return IfcGridPlacement::s_type;
}

const Step::ClassType &IfcGridPlacement::getType() const {
    return IfcGridPlacement::s_type;
}

bool IfcGridPlacement::isOfType(const Step::ClassType &t) const {
    return IfcGridPlacement::s_type == t ? true : IfcObjectPlacement::isOfType(t);
}

IfcVirtualGridIntersection *IfcGridPlacement::getPlacementLocation() {
    if (Step::BaseObject::inited()) {
        return m_placementLocation.get();
    }
    else {
        return NULL;
    }
}

const IfcVirtualGridIntersection *IfcGridPlacement::getPlacementLocation() const {
    IfcGridPlacement * deConstObject = const_cast< IfcGridPlacement * > (this);
    return deConstObject->getPlacementLocation();
}

void IfcGridPlacement::setPlacementLocation(const Step::RefPtr< IfcVirtualGridIntersection > &value) {
    m_placementLocation = value;
}

void IfcGridPlacement::unsetPlacementLocation() {
    m_placementLocation = Step::getUnset(getPlacementLocation());
}

bool IfcGridPlacement::testPlacementLocation() const {
    return !Step::isUnset(getPlacementLocation());
}

IfcVirtualGridIntersection *IfcGridPlacement::getPlacementRefDirection() {
    if (Step::BaseObject::inited()) {
        return m_placementRefDirection.get();
    }
    else {
        return NULL;
    }
}

const IfcVirtualGridIntersection *IfcGridPlacement::getPlacementRefDirection() const {
    IfcGridPlacement * deConstObject = const_cast< IfcGridPlacement * > (this);
    return deConstObject->getPlacementRefDirection();
}

void IfcGridPlacement::setPlacementRefDirection(const Step::RefPtr< IfcVirtualGridIntersection > &value) {
    m_placementRefDirection = value;
}

void IfcGridPlacement::unsetPlacementRefDirection() {
    m_placementRefDirection = Step::getUnset(getPlacementRefDirection());
}

bool IfcGridPlacement::testPlacementRefDirection() const {
    return !Step::isUnset(getPlacementRefDirection());
}

bool IfcGridPlacement::init() {
    bool status = IfcObjectPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placementLocation = NULL;
    }
    else {
        m_placementLocation = static_cast< IfcVirtualGridIntersection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placementRefDirection = NULL;
    }
    else {
        m_placementRefDirection = static_cast< IfcVirtualGridIntersection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcGridPlacement::copy(const IfcGridPlacement &obj, const CopyOp &copyop) {
    IfcObjectPlacement::copy(obj, copyop);
    setPlacementLocation((IfcVirtualGridIntersection*)copyop(obj.m_placementLocation.get()));
    setPlacementRefDirection((IfcVirtualGridIntersection*)copyop(obj.m_placementRefDirection.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGridPlacement::s_type("IfcGridPlacement");
