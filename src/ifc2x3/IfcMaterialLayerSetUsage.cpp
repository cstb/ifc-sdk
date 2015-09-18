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



#include <ifc2x3/IfcMaterialLayerSetUsage.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
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

IfcMaterialLayerSetUsage::IfcMaterialLayerSetUsage(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_forLayerSet = NULL;
    m_layerSetDirection = IfcLayerSetDirectionEnum_UNSET;
    m_directionSense = IfcDirectionSenseEnum_UNSET;
    m_offsetFromReferenceLine = Step::getUnset(m_offsetFromReferenceLine);
}

IfcMaterialLayerSetUsage::~IfcMaterialLayerSetUsage() {
}

bool IfcMaterialLayerSetUsage::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialLayerSetUsage(this);
}

const std::string &IfcMaterialLayerSetUsage::type() const {
    return IfcMaterialLayerSetUsage::s_type.getName();
}

const Step::ClassType &IfcMaterialLayerSetUsage::getClassType() {
    return IfcMaterialLayerSetUsage::s_type;
}

const Step::ClassType &IfcMaterialLayerSetUsage::getType() const {
    return IfcMaterialLayerSetUsage::s_type;
}

bool IfcMaterialLayerSetUsage::isOfType(const Step::ClassType &t) const {
    return IfcMaterialLayerSetUsage::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterialLayerSet *IfcMaterialLayerSetUsage::getForLayerSet() {
    if (Step::BaseObject::inited()) {
        return m_forLayerSet.get();
    }
    else {
        return NULL;
    }
}

const IfcMaterialLayerSet *IfcMaterialLayerSetUsage::getForLayerSet() const {
    IfcMaterialLayerSetUsage * deConstObject = const_cast< IfcMaterialLayerSetUsage * > (this);
    return deConstObject->getForLayerSet();
}

void IfcMaterialLayerSetUsage::setForLayerSet(const Step::RefPtr< IfcMaterialLayerSet > &value) {
    m_forLayerSet = value;
}

void IfcMaterialLayerSetUsage::unsetForLayerSet() {
    m_forLayerSet = Step::getUnset(getForLayerSet());
}

bool IfcMaterialLayerSetUsage::testForLayerSet() const {
    return !Step::isUnset(getForLayerSet());
}

IfcLayerSetDirectionEnum IfcMaterialLayerSetUsage::getLayerSetDirection() {
    if (Step::BaseObject::inited()) {
        return m_layerSetDirection;
    }
    else {
        return IfcLayerSetDirectionEnum_UNSET;
    }
}

const IfcLayerSetDirectionEnum IfcMaterialLayerSetUsage::getLayerSetDirection() const {
    IfcMaterialLayerSetUsage * deConstObject = const_cast< IfcMaterialLayerSetUsage * > (this);
    return deConstObject->getLayerSetDirection();
}

void IfcMaterialLayerSetUsage::setLayerSetDirection(IfcLayerSetDirectionEnum value) {
    m_layerSetDirection = value;
}

void IfcMaterialLayerSetUsage::unsetLayerSetDirection() {
    m_layerSetDirection = IfcLayerSetDirectionEnum_UNSET;
}

bool IfcMaterialLayerSetUsage::testLayerSetDirection() const {
    return getLayerSetDirection() != IfcLayerSetDirectionEnum_UNSET;
}

IfcDirectionSenseEnum IfcMaterialLayerSetUsage::getDirectionSense() {
    if (Step::BaseObject::inited()) {
        return m_directionSense;
    }
    else {
        return IfcDirectionSenseEnum_UNSET;
    }
}

const IfcDirectionSenseEnum IfcMaterialLayerSetUsage::getDirectionSense() const {
    IfcMaterialLayerSetUsage * deConstObject = const_cast< IfcMaterialLayerSetUsage * > (this);
    return deConstObject->getDirectionSense();
}

void IfcMaterialLayerSetUsage::setDirectionSense(IfcDirectionSenseEnum value) {
    m_directionSense = value;
}

void IfcMaterialLayerSetUsage::unsetDirectionSense() {
    m_directionSense = IfcDirectionSenseEnum_UNSET;
}

bool IfcMaterialLayerSetUsage::testDirectionSense() const {
    return getDirectionSense() != IfcDirectionSenseEnum_UNSET;
}

IfcLengthMeasure IfcMaterialLayerSetUsage::getOffsetFromReferenceLine() {
    if (Step::BaseObject::inited()) {
        return m_offsetFromReferenceLine;
    }
    else {
        return Step::getUnset(m_offsetFromReferenceLine);
    }
}

const IfcLengthMeasure IfcMaterialLayerSetUsage::getOffsetFromReferenceLine() const {
    IfcMaterialLayerSetUsage * deConstObject = const_cast< IfcMaterialLayerSetUsage * > (this);
    return deConstObject->getOffsetFromReferenceLine();
}

void IfcMaterialLayerSetUsage::setOffsetFromReferenceLine(IfcLengthMeasure value) {
    m_offsetFromReferenceLine = value;
}

void IfcMaterialLayerSetUsage::unsetOffsetFromReferenceLine() {
    m_offsetFromReferenceLine = Step::getUnset(getOffsetFromReferenceLine());
}

bool IfcMaterialLayerSetUsage::testOffsetFromReferenceLine() const {
    return !Step::isUnset(getOffsetFromReferenceLine());
}

bool IfcMaterialLayerSetUsage::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_forLayerSet = NULL;
    }
    else {
        m_forLayerSet = static_cast< IfcMaterialLayerSet * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerSetDirection = IfcLayerSetDirectionEnum_UNSET;
    }
    else {
        if (arg == ".AXIS1.") {
            m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS1;
        }
        else if (arg == ".AXIS2.") {
            m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS2;
        }
        else if (arg == ".AXIS3.") {
            m_layerSetDirection = IfcLayerSetDirectionEnum_AXIS3;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_directionSense = IfcDirectionSenseEnum_UNSET;
    }
    else {
        if (arg == ".POSITIVE.") {
            m_directionSense = IfcDirectionSenseEnum_POSITIVE;
        }
        else if (arg == ".NEGATIVE.") {
            m_directionSense = IfcDirectionSenseEnum_NEGATIVE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_offsetFromReferenceLine = Step::getUnset(m_offsetFromReferenceLine);
    }
    else {
        m_offsetFromReferenceLine = Step::spfToReal(arg);
    }
    return true;
}

void IfcMaterialLayerSetUsage::copy(const IfcMaterialLayerSetUsage &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setForLayerSet((IfcMaterialLayerSet*)copyop(obj.m_forLayerSet.get()));
    setLayerSetDirection(obj.m_layerSetDirection);
    setDirectionSense(obj.m_directionSense);
    setOffsetFromReferenceLine(obj.m_offsetFromReferenceLine);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMaterialLayerSetUsage::s_type("IfcMaterialLayerSetUsage");
