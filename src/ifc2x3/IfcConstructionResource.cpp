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



#include <ifc2x3/IfcConstructionResource.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/IfcResource.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConstructionResource::IfcConstructionResource(Step::Id id, Step::SPFData *args) : IfcResource(id, args) {
    m_resourceIdentifier = Step::getUnset(m_resourceIdentifier);
    m_resourceGroup = Step::getUnset(m_resourceGroup);
    m_resourceConsumption = IfcResourceConsumptionEnum_UNSET;
    m_baseQuantity = NULL;
}

IfcConstructionResource::~IfcConstructionResource() {
}

bool IfcConstructionResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstructionResource(this);
}

const std::string &IfcConstructionResource::type() const {
    return IfcConstructionResource::s_type.getName();
}

const Step::ClassType &IfcConstructionResource::getClassType() {
    return IfcConstructionResource::s_type;
}

const Step::ClassType &IfcConstructionResource::getType() const {
    return IfcConstructionResource::s_type;
}

bool IfcConstructionResource::isOfType(const Step::ClassType &t) const {
    return IfcConstructionResource::s_type == t ? true : IfcResource::isOfType(t);
}

IfcIdentifier IfcConstructionResource::getResourceIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_resourceIdentifier;
    }
    else {
        return Step::getUnset(m_resourceIdentifier);
    }
}

const IfcIdentifier IfcConstructionResource::getResourceIdentifier() const {
    IfcConstructionResource * deConstObject = const_cast< IfcConstructionResource * > (this);
    return deConstObject->getResourceIdentifier();
}

void IfcConstructionResource::setResourceIdentifier(const IfcIdentifier &value) {
    m_resourceIdentifier = value;
}

void IfcConstructionResource::unsetResourceIdentifier() {
    m_resourceIdentifier = Step::getUnset(getResourceIdentifier());
}

bool IfcConstructionResource::testResourceIdentifier() const {
    return !Step::isUnset(getResourceIdentifier());
}

IfcLabel IfcConstructionResource::getResourceGroup() {
    if (Step::BaseObject::inited()) {
        return m_resourceGroup;
    }
    else {
        return Step::getUnset(m_resourceGroup);
    }
}

const IfcLabel IfcConstructionResource::getResourceGroup() const {
    IfcConstructionResource * deConstObject = const_cast< IfcConstructionResource * > (this);
    return deConstObject->getResourceGroup();
}

void IfcConstructionResource::setResourceGroup(const IfcLabel &value) {
    m_resourceGroup = value;
}

void IfcConstructionResource::unsetResourceGroup() {
    m_resourceGroup = Step::getUnset(getResourceGroup());
}

bool IfcConstructionResource::testResourceGroup() const {
    return !Step::isUnset(getResourceGroup());
}

IfcResourceConsumptionEnum IfcConstructionResource::getResourceConsumption() {
    if (Step::BaseObject::inited()) {
        return m_resourceConsumption;
    }
    else {
        return IfcResourceConsumptionEnum_UNSET;
    }
}

const IfcResourceConsumptionEnum IfcConstructionResource::getResourceConsumption() const {
    IfcConstructionResource * deConstObject = const_cast< IfcConstructionResource * > (this);
    return deConstObject->getResourceConsumption();
}

void IfcConstructionResource::setResourceConsumption(IfcResourceConsumptionEnum value) {
    m_resourceConsumption = value;
}

void IfcConstructionResource::unsetResourceConsumption() {
    m_resourceConsumption = IfcResourceConsumptionEnum_UNSET;
}

bool IfcConstructionResource::testResourceConsumption() const {
    return getResourceConsumption() != IfcResourceConsumptionEnum_UNSET;
}

IfcMeasureWithUnit *IfcConstructionResource::getBaseQuantity() {
    if (Step::BaseObject::inited()) {
        return m_baseQuantity.get();
    }
    else {
        return NULL;
    }
}

const IfcMeasureWithUnit *IfcConstructionResource::getBaseQuantity() const {
    IfcConstructionResource * deConstObject = const_cast< IfcConstructionResource * > (this);
    return deConstObject->getBaseQuantity();
}

void IfcConstructionResource::setBaseQuantity(const Step::RefPtr< IfcMeasureWithUnit > &value) {
    m_baseQuantity = value;
}

void IfcConstructionResource::unsetBaseQuantity() {
    m_baseQuantity = Step::getUnset(getBaseQuantity());
}

bool IfcConstructionResource::testBaseQuantity() const {
    return !Step::isUnset(getBaseQuantity());
}

bool IfcConstructionResource::init() {
    bool status = IfcResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resourceIdentifier = Step::getUnset(m_resourceIdentifier);
    }
    else {
        m_resourceIdentifier = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resourceGroup = Step::getUnset(m_resourceGroup);
    }
    else {
        m_resourceGroup = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resourceConsumption = IfcResourceConsumptionEnum_UNSET;
    }
    else {
        if (arg == ".CONSUMED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_CONSUMED;
        }
        else if (arg == ".PARTIALLYCONSUMED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_PARTIALLYCONSUMED;
        }
        else if (arg == ".NOTCONSUMED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_NOTCONSUMED;
        }
        else if (arg == ".OCCUPIED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_OCCUPIED;
        }
        else if (arg == ".PARTIALLYOCCUPIED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_PARTIALLYOCCUPIED;
        }
        else if (arg == ".NOTOCCUPIED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_NOTOCCUPIED;
        }
        else if (arg == ".USERDEFINED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_resourceConsumption = IfcResourceConsumptionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_baseQuantity = NULL;
    }
    else {
        m_baseQuantity = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcConstructionResource::copy(const IfcConstructionResource &obj, const CopyOp &copyop) {
    IfcResource::copy(obj, copyop);
    setResourceIdentifier(obj.m_resourceIdentifier);
    setResourceGroup(obj.m_resourceGroup);
    setResourceConsumption(obj.m_resourceConsumption);
    setBaseQuantity((IfcMeasureWithUnit*)copyop(obj.m_baseQuantity.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConstructionResource::s_type("IfcConstructionResource");
