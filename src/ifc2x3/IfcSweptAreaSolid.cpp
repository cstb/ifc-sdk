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



#include <ifc2x3/IfcSweptAreaSolid.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/IfcProfileDef.h>
#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSweptAreaSolid::IfcSweptAreaSolid(Step::Id id, Step::SPFData *args) : IfcSolidModel(id, args) {
    m_sweptArea = NULL;
    m_position = NULL;
}

IfcSweptAreaSolid::~IfcSweptAreaSolid() {
}

bool IfcSweptAreaSolid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSweptAreaSolid(this);
}

const std::string &IfcSweptAreaSolid::type() const {
    return IfcSweptAreaSolid::s_type.getName();
}

const Step::ClassType &IfcSweptAreaSolid::getClassType() {
    return IfcSweptAreaSolid::s_type;
}

const Step::ClassType &IfcSweptAreaSolid::getType() const {
    return IfcSweptAreaSolid::s_type;
}

bool IfcSweptAreaSolid::isOfType(const Step::ClassType &t) const {
    return IfcSweptAreaSolid::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcProfileDef *IfcSweptAreaSolid::getSweptArea() {
    if (Step::BaseObject::inited()) {
        return m_sweptArea.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileDef *IfcSweptAreaSolid::getSweptArea() const {
    IfcSweptAreaSolid * deConstObject = const_cast< IfcSweptAreaSolid * > (this);
    return deConstObject->getSweptArea();
}

void IfcSweptAreaSolid::setSweptArea(const Step::RefPtr< IfcProfileDef > &value) {
    m_sweptArea = value;
}

void IfcSweptAreaSolid::unsetSweptArea() {
    m_sweptArea = Step::getUnset(getSweptArea());
}

bool IfcSweptAreaSolid::testSweptArea() const {
    return !Step::isUnset(getSweptArea());
}

IfcAxis2Placement3D *IfcSweptAreaSolid::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement3D *IfcSweptAreaSolid::getPosition() const {
    IfcSweptAreaSolid * deConstObject = const_cast< IfcSweptAreaSolid * > (this);
    return deConstObject->getPosition();
}

void IfcSweptAreaSolid::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

void IfcSweptAreaSolid::unsetPosition() {
    m_position = Step::getUnset(getPosition());
}

bool IfcSweptAreaSolid::testPosition() const {
    return !Step::isUnset(getPosition());
}

bool IfcSweptAreaSolid::init() {
    bool status = IfcSolidModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sweptArea = NULL;
    }
    else {
        m_sweptArea = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSweptAreaSolid::copy(const IfcSweptAreaSolid &obj, const CopyOp &copyop) {
    IfcSolidModel::copy(obj, copyop);
    setSweptArea((IfcProfileDef*)copyop(obj.m_sweptArea.get()));
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_position.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSweptAreaSolid::s_type("IfcSweptAreaSolid");
