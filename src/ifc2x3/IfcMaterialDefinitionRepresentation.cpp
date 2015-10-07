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



#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMaterialDefinitionRepresentation::IfcMaterialDefinitionRepresentation(Step::Id id, Step::SPFData *args) : IfcProductRepresentation(id, args) {
    m_representedMaterial = NULL;
}

IfcMaterialDefinitionRepresentation::~IfcMaterialDefinitionRepresentation() {
}

bool IfcMaterialDefinitionRepresentation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialDefinitionRepresentation(this);
}

const std::string &IfcMaterialDefinitionRepresentation::type() const {
    return IfcMaterialDefinitionRepresentation::s_type.getName();
}

const Step::ClassType &IfcMaterialDefinitionRepresentation::getClassType() {
    return IfcMaterialDefinitionRepresentation::s_type;
}

const Step::ClassType &IfcMaterialDefinitionRepresentation::getType() const {
    return IfcMaterialDefinitionRepresentation::s_type;
}

bool IfcMaterialDefinitionRepresentation::isOfType(const Step::ClassType &t) const {
    return IfcMaterialDefinitionRepresentation::s_type == t ? true : IfcProductRepresentation::isOfType(t);
}

IfcMaterial *IfcMaterialDefinitionRepresentation::getRepresentedMaterial() {
    if (Step::BaseObject::inited()) {
        return m_representedMaterial.get();
    }
    else {
        return NULL;
    }
}

const IfcMaterial *IfcMaterialDefinitionRepresentation::getRepresentedMaterial() const {
    IfcMaterialDefinitionRepresentation * deConstObject = const_cast< IfcMaterialDefinitionRepresentation * > (this);
    return deConstObject->getRepresentedMaterial();
}

void IfcMaterialDefinitionRepresentation::setRepresentedMaterial(const Step::RefPtr< IfcMaterial > &value) {
    if (m_representedMaterial.valid()) {
        m_representedMaterial->m_hasRepresentation.erase(this);
    }
    if (value.valid()) {
        value->m_hasRepresentation.insert(this);
    }
    m_representedMaterial = value;
}

void IfcMaterialDefinitionRepresentation::unsetRepresentedMaterial() {
    m_representedMaterial = Step::getUnset(getRepresentedMaterial());
}

bool IfcMaterialDefinitionRepresentation::testRepresentedMaterial() const {
    return !Step::isUnset(getRepresentedMaterial());
}

bool IfcMaterialDefinitionRepresentation::init() {
    bool status = IfcProductRepresentation::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representedMaterial = NULL;
    }
    else {
        m_representedMaterial = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcMaterialDefinitionRepresentation::copy(const IfcMaterialDefinitionRepresentation &obj, const CopyOp &copyop) {
    IfcProductRepresentation::copy(obj, copyop);
    setRepresentedMaterial((IfcMaterial*)copyop(obj.m_representedMaterial.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMaterialDefinitionRepresentation::s_type("IfcMaterialDefinitionRepresentation");
