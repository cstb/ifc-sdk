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



#include <ifc2x3/IfcProductDefinitionShape.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcProductDefinitionShape::IfcProductDefinitionShape(Step::Id id, Step::SPFData *args) : IfcProductRepresentation(id, args) {
}

IfcProductDefinitionShape::~IfcProductDefinitionShape() {
}

bool IfcProductDefinitionShape::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProductDefinitionShape(this);
}

const std::string &IfcProductDefinitionShape::type() const {
    return IfcProductDefinitionShape::s_type.getName();
}

const Step::ClassType &IfcProductDefinitionShape::getClassType() {
    return IfcProductDefinitionShape::s_type;
}

const Step::ClassType &IfcProductDefinitionShape::getType() const {
    return IfcProductDefinitionShape::s_type;
}

bool IfcProductDefinitionShape::isOfType(const Step::ClassType &t) const {
    return IfcProductDefinitionShape::s_type == t ? true : IfcProductRepresentation::isOfType(t);
}

Inverse_Set_IfcProduct_1_n &IfcProductDefinitionShape::getShapeOfProduct() {
    if (Step::BaseObject::inited()) {
        return m_shapeOfProduct;
    }
    else {
        m_shapeOfProduct.setUnset(true);
        return m_shapeOfProduct;
    }
}

const Inverse_Set_IfcProduct_1_n &IfcProductDefinitionShape::getShapeOfProduct() const {
    IfcProductDefinitionShape * deConstObject = const_cast< IfcProductDefinitionShape * > (this);
    return deConstObject->getShapeOfProduct();
}

bool IfcProductDefinitionShape::testShapeOfProduct() const {
    return !m_shapeOfProduct.isUnset();
}

Inverse_Set_IfcShapeAspect_0_n &IfcProductDefinitionShape::getHasShapeAspects() {
    if (Step::BaseObject::inited()) {
        return m_hasShapeAspects;
    }
    else {
        m_hasShapeAspects.setUnset(true);
        return m_hasShapeAspects;
    }
}

const Inverse_Set_IfcShapeAspect_0_n &IfcProductDefinitionShape::getHasShapeAspects() const {
    IfcProductDefinitionShape * deConstObject = const_cast< IfcProductDefinitionShape * > (this);
    return deConstObject->getHasShapeAspects();
}

bool IfcProductDefinitionShape::testHasShapeAspects() const {
    return !m_hasShapeAspects.isUnset();
}

bool IfcProductDefinitionShape::init() {
    bool status = IfcProductRepresentation::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcProduct::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_shapeOfProduct.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_shapeOfProduct.insert(static_cast< IfcProduct * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcShapeAspect::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasShapeAspects.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasShapeAspects.insert(static_cast< IfcShapeAspect * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProductDefinitionShape::copy(const IfcProductDefinitionShape &obj, const CopyOp &copyop) {
    IfcProductRepresentation::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcProductDefinitionShape::s_type("IfcProductDefinitionShape");
