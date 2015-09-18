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



#include <ifc2x3/IfcProduct.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcObjectPlacement.h>
#include <ifc2x3/IfcProductDefinitionShape.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcRelAssignsToProduct.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcProduct::IfcProduct(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
    m_objectPlacement = NULL;
    m_representation = NULL;
}

IfcProduct::~IfcProduct() {
}

bool IfcProduct::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProduct(this);
}

const std::string &IfcProduct::type() const {
    return IfcProduct::s_type.getName();
}

const Step::ClassType &IfcProduct::getClassType() {
    return IfcProduct::s_type;
}

const Step::ClassType &IfcProduct::getType() const {
    return IfcProduct::s_type;
}

bool IfcProduct::isOfType(const Step::ClassType &t) const {
    return IfcProduct::s_type == t ? true : IfcObject::isOfType(t);
}

IfcObjectPlacement *IfcProduct::getObjectPlacement() {
    if (Step::BaseObject::inited()) {
        return m_objectPlacement.get();
    }
    else {
        return NULL;
    }
}

const IfcObjectPlacement *IfcProduct::getObjectPlacement() const {
    IfcProduct * deConstObject = const_cast< IfcProduct * > (this);
    return deConstObject->getObjectPlacement();
}

void IfcProduct::setObjectPlacement(const Step::RefPtr< IfcObjectPlacement > &value) {
    if (m_objectPlacement.valid()) {
        m_objectPlacement->m_placesObject.erase(this);
    }
    if (value.valid()) {
        value->m_placesObject.insert(this);
    }
    m_objectPlacement = value;
}

void IfcProduct::unsetObjectPlacement() {
    m_objectPlacement = Step::getUnset(getObjectPlacement());
}

bool IfcProduct::testObjectPlacement() const {
    return !Step::isUnset(getObjectPlacement());
}

IfcProductRepresentation *IfcProduct::getRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_representation.get();
    }
    else {
        return NULL;
    }
}

const IfcProductRepresentation *IfcProduct::getRepresentation() const {
    IfcProduct * deConstObject = const_cast< IfcProduct * > (this);
    return deConstObject->getRepresentation();
}

void IfcProduct::setRepresentation(const Step::RefPtr< IfcProductRepresentation > &value) {
   // If we already had a representation, remove it from Inverse relation
   if (dynamic_cast< IfcProductDefinitionShape * > (m_representation.get()) != NULL) {
      ((IfcProductDefinitionShape *) (m_representation.get()))->m_shapeOfProduct.erase(this);
   }
   // Add new representation to the Inverse relation
   if (dynamic_cast< IfcProductDefinitionShape * > (value.get()) != NULL) {
      ((IfcProductDefinitionShape *) (value.get()))->m_shapeOfProduct.insert(this);
   }
   // Set the new representation
   m_representation = value;
}


void IfcProduct::unsetRepresentation() {
    m_representation = Step::getUnset(getRepresentation());
}

bool IfcProduct::testRepresentation() const {
    return !Step::isUnset(getRepresentation());
}

Inverse_Set_IfcRelAssignsToProduct_0_n &IfcProduct::getReferencedBy() {
    if (Step::BaseObject::inited()) {
        return m_referencedBy;
    }
    else {
        m_referencedBy.setUnset(true);
        return m_referencedBy;
    }
}

const Inverse_Set_IfcRelAssignsToProduct_0_n &IfcProduct::getReferencedBy() const {
    IfcProduct * deConstObject = const_cast< IfcProduct * > (this);
    return deConstObject->getReferencedBy();
}

bool IfcProduct::testReferencedBy() const {
    return !m_referencedBy.isUnset();
}

bool IfcProduct::init() {
    bool status = IfcObject::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_objectPlacement = NULL;
    }
    else {
        m_objectPlacement = static_cast< IfcObjectPlacement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representation = NULL;
    }
    else {
        m_representation = static_cast< IfcProductRepresentation * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    inverses = m_args->getInverses(IfcRelAssignsToProduct::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_referencedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencedBy.insert(static_cast< IfcRelAssignsToProduct * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProduct::copy(const IfcProduct &obj, const CopyOp &copyop) {
    IfcObject::copy(obj, copyop);
    setObjectPlacement((IfcObjectPlacement*)copyop(obj.m_objectPlacement.get()));
    setRepresentation((IfcProductRepresentation*)copyop(obj.m_representation.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcProduct::s_type("IfcProduct");
