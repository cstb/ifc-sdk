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



#include <ifc2x3/IfcLocalPlacement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcObjectPlacement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLocalPlacement::IfcLocalPlacement(Step::Id id, Step::SPFData *args) : IfcObjectPlacement(id, args) {
    m_placementRelTo = NULL;
    m_relativePlacement = NULL;
}

IfcLocalPlacement::~IfcLocalPlacement() {
}

bool IfcLocalPlacement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLocalPlacement(this);
}

const std::string &IfcLocalPlacement::type() const {
    return IfcLocalPlacement::s_type.getName();
}

const Step::ClassType &IfcLocalPlacement::getClassType() {
    return IfcLocalPlacement::s_type;
}

const Step::ClassType &IfcLocalPlacement::getType() const {
    return IfcLocalPlacement::s_type;
}

bool IfcLocalPlacement::isOfType(const Step::ClassType &t) const {
    return IfcLocalPlacement::s_type == t ? true : IfcObjectPlacement::isOfType(t);
}

IfcObjectPlacement *IfcLocalPlacement::getPlacementRelTo() {
    if (Step::BaseObject::inited()) {
        return m_placementRelTo.get();
    }
    else {
        return NULL;
    }
}

const IfcObjectPlacement *IfcLocalPlacement::getPlacementRelTo() const {
    IfcLocalPlacement * deConstObject = const_cast< IfcLocalPlacement * > (this);
    return deConstObject->getPlacementRelTo();
}

void IfcLocalPlacement::setPlacementRelTo(const Step::RefPtr< IfcObjectPlacement > &value) {
    if (m_placementRelTo.valid()) {
        m_placementRelTo->m_referencedByPlacements.erase(this);
    }
    if (value.valid()) {
        value->m_referencedByPlacements.insert(this);
    }
    m_placementRelTo = value;
}

void IfcLocalPlacement::unsetPlacementRelTo() {
    m_placementRelTo = Step::getUnset(getPlacementRelTo());
}

bool IfcLocalPlacement::testPlacementRelTo() const {
    return !Step::isUnset(getPlacementRelTo());
}

IfcAxis2Placement *IfcLocalPlacement::getRelativePlacement() {
    if (Step::BaseObject::inited()) {
        return m_relativePlacement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcLocalPlacement::getRelativePlacement() const {
    IfcLocalPlacement * deConstObject = const_cast< IfcLocalPlacement * > (this);
    return deConstObject->getRelativePlacement();
}

void IfcLocalPlacement::setRelativePlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_relativePlacement = value;
}

void IfcLocalPlacement::unsetRelativePlacement() {
    m_relativePlacement = Step::getUnset(getRelativePlacement());
}

bool IfcLocalPlacement::testRelativePlacement() const {
    return !Step::isUnset(getRelativePlacement());
}

bool IfcLocalPlacement::init() {
    bool status = IfcObjectPlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placementRelTo = NULL;
    }
    else {
        m_placementRelTo = static_cast< IfcObjectPlacement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relativePlacement = NULL;
    }
    else {
        m_relativePlacement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_relativePlacement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcLocalPlacement::copy(const IfcLocalPlacement &obj, const CopyOp &copyop) {
    IfcObjectPlacement::copy(obj, copyop);
    setPlacementRelTo((IfcObjectPlacement*)copyop(obj.m_placementRelTo.get()));
    m_relativePlacement = new IfcAxis2Placement;
    m_relativePlacement->copy(*(obj.m_relativePlacement.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLocalPlacement::s_type("IfcLocalPlacement");
