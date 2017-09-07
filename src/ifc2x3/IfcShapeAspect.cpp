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



#include <ifc2x3/IfcShapeAspect.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProductDefinitionShape.h>
#include <ifc2x3/IfcShapeModel.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcShapeAspect_ShapeRepresentations_type::Inverted_IfcShapeAspect_ShapeRepresentations_type():
    mOwner(0)
{
}

void Inverted_IfcShapeAspect_ShapeRepresentations_type::setOwner(IfcShapeAspect *owner) {
    mOwner = owner;
}

void Inverted_IfcShapeAspect_ShapeRepresentations_type::push_back(const Step::RefPtr< IfcShapeModel > &value) throw(std::out_of_range) {
    IfcShapeModel *inverse = const_cast< IfcShapeModel * > (value.get());
    List_IfcShapeModel_1_n::push_back(value);
    inverse->m_ofShapeAspect.insert(mOwner);
}

Inverted_IfcShapeAspect_ShapeRepresentations_type::iterator Inverted_IfcShapeAspect_ShapeRepresentations_type::erase(const Step::RefPtr< IfcShapeModel > &value) {
    IfcShapeModel *inverse = const_cast< IfcShapeModel * > (value.get());
    inverse->m_ofShapeAspect.erase(mOwner);
    return List_IfcShapeModel_1_n::erase(value);
}

void Inverted_IfcShapeAspect_ShapeRepresentations_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcShapeAspect::IfcShapeAspect(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_shapeRepresentations.setOwner(this);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_productDefinitional = Step::getUnset(m_productDefinitional);
    m_partOfProductDefinitionShape = NULL;
}

IfcShapeAspect::~IfcShapeAspect() {
}

bool IfcShapeAspect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcShapeAspect(this);
}

const std::string &IfcShapeAspect::type() const {
    return IfcShapeAspect::s_type.getName();
}

const Step::ClassType &IfcShapeAspect::getClassType() {
    return IfcShapeAspect::s_type;
}

const Step::ClassType &IfcShapeAspect::getType() const {
    return IfcShapeAspect::s_type;
}

bool IfcShapeAspect::isOfType(const Step::ClassType &t) const {
    return IfcShapeAspect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

List_IfcShapeModel_1_n &IfcShapeAspect::getShapeRepresentations() {
    if (Step::BaseObject::inited()) {
        return m_shapeRepresentations;
    }
    else {
        m_shapeRepresentations.setUnset(true);
        return m_shapeRepresentations;
    }
}

const List_IfcShapeModel_1_n &IfcShapeAspect::getShapeRepresentations() const {
    IfcShapeAspect * deConstObject = const_cast< IfcShapeAspect * > (this);
    return deConstObject->getShapeRepresentations();
}

void IfcShapeAspect::unsetShapeRepresentations() {
    m_shapeRepresentations.clear();
    m_shapeRepresentations.setUnset(true);
}

bool IfcShapeAspect::testShapeRepresentations() const {
    return !m_shapeRepresentations.isUnset();
}

IfcLabel IfcShapeAspect::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcShapeAspect::getName() const {
    IfcShapeAspect * deConstObject = const_cast< IfcShapeAspect * > (this);
    return deConstObject->getName();
}

void IfcShapeAspect::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcShapeAspect::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcShapeAspect::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcShapeAspect::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcShapeAspect::getDescription() const {
    IfcShapeAspect * deConstObject = const_cast< IfcShapeAspect * > (this);
    return deConstObject->getDescription();
}

void IfcShapeAspect::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcShapeAspect::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcShapeAspect::testDescription() const {
    return !Step::isUnset(getDescription());
}

Step::Logical IfcShapeAspect::getProductDefinitional() {
    if (Step::BaseObject::inited()) {
        return m_productDefinitional;
    }
    else {
        return Step::getUnset(m_productDefinitional);
    }
}

const Step::Logical IfcShapeAspect::getProductDefinitional() const {
    IfcShapeAspect * deConstObject = const_cast< IfcShapeAspect * > (this);
    return deConstObject->getProductDefinitional();
}

void IfcShapeAspect::setProductDefinitional(Step::Logical value) {
    m_productDefinitional = value;
}

void IfcShapeAspect::unsetProductDefinitional() {
    m_productDefinitional = Step::getUnset(getProductDefinitional());
}

bool IfcShapeAspect::testProductDefinitional() const {
    return !Step::isUnset(getProductDefinitional());
}

IfcProductDefinitionShape *IfcShapeAspect::getPartOfProductDefinitionShape() {
    if (Step::BaseObject::inited()) {
        return m_partOfProductDefinitionShape.get();
    }
    else {
        return NULL;
    }
}

const IfcProductDefinitionShape *IfcShapeAspect::getPartOfProductDefinitionShape() const {
    IfcShapeAspect * deConstObject = const_cast< IfcShapeAspect * > (this);
    return deConstObject->getPartOfProductDefinitionShape();
}

void IfcShapeAspect::setPartOfProductDefinitionShape(const Step::RefPtr< IfcProductDefinitionShape > &value) {
    if (m_partOfProductDefinitionShape.valid()) {
        m_partOfProductDefinitionShape->m_hasShapeAspects.erase(this);
    }
    if (value.valid()) {
        value->m_hasShapeAspects.insert(this);
    }
    m_partOfProductDefinitionShape = value;
}

void IfcShapeAspect::unsetPartOfProductDefinitionShape() {
    m_partOfProductDefinitionShape = Step::getUnset(getPartOfProductDefinitionShape());
}

bool IfcShapeAspect::testPartOfProductDefinitionShape() const {
    return !Step::isUnset(getPartOfProductDefinitionShape());
}

bool IfcShapeAspect::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeRepresentations.setUnset(true);
    }
    else {
        m_shapeRepresentations.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcShapeModel > attr2;
                attr2 = static_cast< IfcShapeModel * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_shapeRepresentations.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_productDefinitional = Step::getUnset(m_productDefinitional);
    }
    else {
        m_productDefinitional = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_partOfProductDefinitionShape = NULL;
    }
    else {
        m_partOfProductDefinitionShape = static_cast< IfcProductDefinitionShape * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcShapeAspect::copy(const IfcShapeAspect &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcShapeModel >, 1 >::const_iterator it_m_shapeRepresentations;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_shapeRepresentations = obj.m_shapeRepresentations.begin(); it_m_shapeRepresentations != obj.m_shapeRepresentations.end(); ++it_m_shapeRepresentations) {
        Step::RefPtr< IfcShapeModel > copyTarget = (IfcShapeModel *) (copyop((*it_m_shapeRepresentations).get()));
        m_shapeRepresentations.push_back(copyTarget.get());
    }
    setName(obj.m_name);
    setDescription(obj.m_description);
    setProductDefinitional(obj.m_productDefinitional);
    setPartOfProductDefinitionShape((IfcProductDefinitionShape*)copyop(obj.m_partOfProductDefinitionShape.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcShapeAspect::s_type("IfcShapeAspect");
