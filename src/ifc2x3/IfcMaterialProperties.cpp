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



#include <ifc2x3/IfcMaterialProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMaterialProperties::IfcMaterialProperties(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_material = NULL;
}

IfcMaterialProperties::~IfcMaterialProperties() {
}

bool IfcMaterialProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialProperties(this);
}

const std::string &IfcMaterialProperties::type() const {
    return IfcMaterialProperties::s_type.getName();
}

const Step::ClassType &IfcMaterialProperties::getClassType() {
    return IfcMaterialProperties::s_type;
}

const Step::ClassType &IfcMaterialProperties::getType() const {
    return IfcMaterialProperties::s_type;
}

bool IfcMaterialProperties::isOfType(const Step::ClassType &t) const {
    return IfcMaterialProperties::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterial *IfcMaterialProperties::getMaterial() {
    if (Step::BaseObject::inited()) {
        return m_material.get();
    }
    else {
        return NULL;
    }
}

const IfcMaterial *IfcMaterialProperties::getMaterial() const {
    IfcMaterialProperties * deConstObject = const_cast< IfcMaterialProperties * > (this);
    return deConstObject->getMaterial();
}

void IfcMaterialProperties::setMaterial(const Step::RefPtr< IfcMaterial > &value) {
    m_material = value;
}

void IfcMaterialProperties::unsetMaterial() {
    m_material = Step::getUnset(getMaterial());
}

bool IfcMaterialProperties::testMaterial() const {
    return !Step::isUnset(getMaterial());
}

bool IfcMaterialProperties::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_material = NULL;
    }
    else {
        m_material = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcMaterialProperties::copy(const IfcMaterialProperties &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setMaterial((IfcMaterial*)copyop(obj.m_material.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMaterialProperties::s_type("IfcMaterialProperties");
