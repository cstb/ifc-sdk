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



#include <ifc2x3/IfcAnnotation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcAnnotation::IfcAnnotation(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
}

IfcAnnotation::~IfcAnnotation() {
}

bool IfcAnnotation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAnnotation(this);
}

const std::string &IfcAnnotation::type() const {
    return IfcAnnotation::s_type.getName();
}

const Step::ClassType &IfcAnnotation::getClassType() {
    return IfcAnnotation::s_type;
}

const Step::ClassType &IfcAnnotation::getType() const {
    return IfcAnnotation::s_type;
}

bool IfcAnnotation::isOfType(const Step::ClassType &t) const {
    return IfcAnnotation::s_type == t ? true : IfcProduct::isOfType(t);
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcAnnotation::getContainedInStructure() {
    if (Step::BaseObject::inited()) {
        return m_containedInStructure;
    }
    else {
        m_containedInStructure.setUnset(true);
        return m_containedInStructure;
    }
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcAnnotation::getContainedInStructure() const {
    IfcAnnotation * deConstObject = const_cast< IfcAnnotation * > (this);
    return deConstObject->getContainedInStructure();
}

bool IfcAnnotation::testContainedInStructure() const {
    return !m_containedInStructure.isUnset();
}

bool IfcAnnotation::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_containedInStructure.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcAnnotation::copy(const IfcAnnotation &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAnnotation::s_type("IfcAnnotation");
