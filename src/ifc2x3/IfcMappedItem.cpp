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



#include <ifc2x3/IfcMappedItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianTransformationOperator.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMappedItem::IfcMappedItem(Step::Id id, Step::SPFData *args) : IfcRepresentationItem(id, args) {
    m_mappingSource = NULL;
    m_mappingTarget = NULL;
}

IfcMappedItem::~IfcMappedItem() {
}

bool IfcMappedItem::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMappedItem(this);
}

const std::string &IfcMappedItem::type() const {
    return IfcMappedItem::s_type.getName();
}

const Step::ClassType &IfcMappedItem::getClassType() {
    return IfcMappedItem::s_type;
}

const Step::ClassType &IfcMappedItem::getType() const {
    return IfcMappedItem::s_type;
}

bool IfcMappedItem::isOfType(const Step::ClassType &t) const {
    return IfcMappedItem::s_type == t ? true : IfcRepresentationItem::isOfType(t);
}

IfcRepresentationMap *IfcMappedItem::getMappingSource() {
    if (Step::BaseObject::inited()) {
        return m_mappingSource.get();
    }
    else {
        return NULL;
    }
}

const IfcRepresentationMap *IfcMappedItem::getMappingSource() const {
    IfcMappedItem * deConstObject = const_cast< IfcMappedItem * > (this);
    return deConstObject->getMappingSource();
}

void IfcMappedItem::setMappingSource(const Step::RefPtr< IfcRepresentationMap > &value) {
    if (m_mappingSource.valid()) {
        m_mappingSource->m_mapUsage.erase(this);
    }
    if (value.valid()) {
        value->m_mapUsage.insert(this);
    }
    m_mappingSource = value;
}

void IfcMappedItem::unsetMappingSource() {
    m_mappingSource = Step::getUnset(getMappingSource());
}

bool IfcMappedItem::testMappingSource() const {
    return !Step::isUnset(getMappingSource());
}

IfcCartesianTransformationOperator *IfcMappedItem::getMappingTarget() {
    if (Step::BaseObject::inited()) {
        return m_mappingTarget.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianTransformationOperator *IfcMappedItem::getMappingTarget() const {
    IfcMappedItem * deConstObject = const_cast< IfcMappedItem * > (this);
    return deConstObject->getMappingTarget();
}

void IfcMappedItem::setMappingTarget(const Step::RefPtr< IfcCartesianTransformationOperator > &value) {
    m_mappingTarget = value;
}

void IfcMappedItem::unsetMappingTarget() {
    m_mappingTarget = Step::getUnset(getMappingTarget());
}

bool IfcMappedItem::testMappingTarget() const {
    return !Step::isUnset(getMappingTarget());
}

bool IfcMappedItem::init() {
    bool status = IfcRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mappingSource = NULL;
    }
    else {
        m_mappingSource = static_cast< IfcRepresentationMap * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_mappingTarget = NULL;
    }
    else {
        m_mappingTarget = static_cast< IfcCartesianTransformationOperator * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcMappedItem::copy(const IfcMappedItem &obj, const CopyOp &copyop) {
    IfcRepresentationItem::copy(obj, copyop);
    setMappingSource((IfcRepresentationMap*)copyop(obj.m_mappingSource.get()));
    setMappingTarget((IfcCartesianTransformationOperator*)copyop(obj.m_mappingTarget.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMappedItem::s_type("IfcMappedItem");
