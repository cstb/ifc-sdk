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



#include <ifc2x3/IfcAxis2Placement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement2D.h>
#include <ifc2x3/IfcAxis2Placement3D.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcAxis2Placement::IfcAxis2Placement() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcAxis2Placement::IfcAxis2Placement(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcAxis2Placement::~IfcAxis2Placement() {
    deleteUnion();
}

bool IfcAxis2Placement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAxis2Placement(this);
}

bool IfcAxis2Placement::init() {
    return false;
}

const std::string &IfcAxis2Placement::type() const {
    return IfcAxis2Placement::s_type.getName();
}

const Step::ClassType &IfcAxis2Placement::getClassType() {
    return IfcAxis2Placement::s_type;
}

const Step::ClassType &IfcAxis2Placement::getType() const {
    return IfcAxis2Placement::s_type;
}

bool IfcAxis2Placement::isOfType(const Step::ClassType &t) const {
    return IfcAxis2Placement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcAxis2Placement::copy(const IfcAxis2Placement &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCAXIS2PLACEMENT2D:
        setIfcAxis2Placement2D((IfcAxis2Placement2D *) (copyop(obj.m_IfcAxis2Placement_union.m_IfcAxis2Placement2D)));
        break;
    case IFCAXIS2PLACEMENT3D:
        setIfcAxis2Placement3D((IfcAxis2Placement3D *) (copyop(obj.m_IfcAxis2Placement_union.m_IfcAxis2Placement3D)));
        break;
    default:
        break;
    }
}

std::string IfcAxis2Placement::currentTypeName() const {
    switch(m_type) {
    case IFCAXIS2PLACEMENT2D:
        return "IfcAxis2Placement2D";
        break;
    case IFCAXIS2PLACEMENT3D:
        return "IfcAxis2Placement3D";
        break;
    default:
        return "UNSET";
    }
}

IfcAxis2Placement::IfcAxis2Placement_select IfcAxis2Placement::currentType() const {
    return m_type;
}

void IfcAxis2Placement::deleteUnion() {
    switch(m_type) {
    case IFCAXIS2PLACEMENT2D:
        m_IfcAxis2Placement_union.m_IfcAxis2Placement2D->unref();
        break;
    case IFCAXIS2PLACEMENT3D:
        m_IfcAxis2Placement_union.m_IfcAxis2Placement3D->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcAxis2Placement2D *IfcAxis2Placement::getIfcAxis2Placement2D() const {
    if (m_type == IFCAXIS2PLACEMENT2D) {
        return m_IfcAxis2Placement_union.m_IfcAxis2Placement2D;
    }
    else {
        return NULL;
    }
}

void IfcAxis2Placement::setIfcAxis2Placement2D(IfcAxis2Placement2D *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcAxis2Placement_union.m_IfcAxis2Placement2D = value;
    if (value) {
        value->ref();
        m_type = IFCAXIS2PLACEMENT2D;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCAXIS2PLACEMENT2D;
}

IfcAxis2Placement3D *IfcAxis2Placement::getIfcAxis2Placement3D() const {
    if (m_type == IFCAXIS2PLACEMENT3D) {
        return m_IfcAxis2Placement_union.m_IfcAxis2Placement3D;
    }
    else {
        return NULL;
    }
}

void IfcAxis2Placement::setIfcAxis2Placement3D(IfcAxis2Placement3D *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcAxis2Placement_union.m_IfcAxis2Placement3D = value;
    if (value) {
        value->ref();
        m_type = IFCAXIS2PLACEMENT3D;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCAXIS2PLACEMENT3D;
}

void IfcAxis2Placement::set(Step::BaseObject *v) {
    if (v->isOfType(IfcAxis2Placement2D::getClassType())) {
        setIfcAxis2Placement2D(static_cast< IfcAxis2Placement2D* > (v));
    }
    else if (v->isOfType(IfcAxis2Placement3D::getClassType())) {
        setIfcAxis2Placement3D(static_cast< IfcAxis2Placement3D* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcAxis2Placement::s_type("IfcAxis2Placement");
