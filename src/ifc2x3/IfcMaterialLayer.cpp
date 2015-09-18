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



#include <ifc2x3/IfcMaterialLayer.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterial.h>
#include <ifc2x3/IfcMaterialLayerSet.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcMaterialLayer::IfcMaterialLayer(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_material = NULL;
    m_layerThickness = Step::getUnset(m_layerThickness);
    m_isVentilated = Step::getUnset(m_isVentilated);
}

IfcMaterialLayer::~IfcMaterialLayer() {
}

bool IfcMaterialLayer::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialLayer(this);
}

const std::string &IfcMaterialLayer::type() const {
    return IfcMaterialLayer::s_type.getName();
}

const Step::ClassType &IfcMaterialLayer::getClassType() {
    return IfcMaterialLayer::s_type;
}

const Step::ClassType &IfcMaterialLayer::getType() const {
    return IfcMaterialLayer::s_type;
}

bool IfcMaterialLayer::isOfType(const Step::ClassType &t) const {
    return IfcMaterialLayer::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMaterial *IfcMaterialLayer::getMaterial() {
    if (Step::BaseObject::inited()) {
        return m_material.get();
    }
    else {
        return NULL;
    }
}

const IfcMaterial *IfcMaterialLayer::getMaterial() const {
    IfcMaterialLayer * deConstObject = const_cast< IfcMaterialLayer * > (this);
    return deConstObject->getMaterial();
}

void IfcMaterialLayer::setMaterial(const Step::RefPtr< IfcMaterial > &value) {
    m_material = value;
}

void IfcMaterialLayer::unsetMaterial() {
    m_material = Step::getUnset(getMaterial());
}

bool IfcMaterialLayer::testMaterial() const {
    return !Step::isUnset(getMaterial());
}

IfcPositiveLengthMeasure IfcMaterialLayer::getLayerThickness() {
    if (Step::BaseObject::inited()) {
        return m_layerThickness;
    }
    else {
        return Step::getUnset(m_layerThickness);
    }
}

const IfcPositiveLengthMeasure IfcMaterialLayer::getLayerThickness() const {
    IfcMaterialLayer * deConstObject = const_cast< IfcMaterialLayer * > (this);
    return deConstObject->getLayerThickness();
}

void IfcMaterialLayer::setLayerThickness(IfcPositiveLengthMeasure value) {
    m_layerThickness = value;
}

void IfcMaterialLayer::unsetLayerThickness() {
    m_layerThickness = Step::getUnset(getLayerThickness());
}

bool IfcMaterialLayer::testLayerThickness() const {
    return !Step::isUnset(getLayerThickness());
}

IfcLogical IfcMaterialLayer::getIsVentilated() {
    if (Step::BaseObject::inited()) {
        return m_isVentilated;
    }
    else {
        return Step::getUnset(m_isVentilated);
    }
}

const IfcLogical IfcMaterialLayer::getIsVentilated() const {
    IfcMaterialLayer * deConstObject = const_cast< IfcMaterialLayer * > (this);
    return deConstObject->getIsVentilated();
}

void IfcMaterialLayer::setIsVentilated(IfcLogical value) {
    m_isVentilated = value;
}

void IfcMaterialLayer::unsetIsVentilated() {
    m_isVentilated = Step::getUnset(getIsVentilated());
}

bool IfcMaterialLayer::testIsVentilated() const {
    return !Step::isUnset(getIsVentilated());
}

IfcMaterialLayerSet *IfcMaterialLayer::getToMaterialLayerSet() {
    if (Step::BaseObject::inited()) {
        return m_toMaterialLayerSet.get();
    }
    else {
        return NULL;
    }
}

const IfcMaterialLayerSet *IfcMaterialLayer::getToMaterialLayerSet() const {
    IfcMaterialLayer * deConstObject = const_cast< IfcMaterialLayer * > (this);
    return deConstObject->getToMaterialLayerSet();
}

bool IfcMaterialLayer::testToMaterialLayerSet() const {
    return !Step::isUnset(getToMaterialLayerSet());
}

bool IfcMaterialLayer::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_material = NULL;
    }
    else {
        m_material = static_cast< IfcMaterial * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerThickness = Step::getUnset(m_layerThickness);
    }
    else {
        m_layerThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isVentilated = Step::getUnset(m_isVentilated);
    }
    else {
        m_isVentilated = Step::spfToLogical(arg);
    }
    inverses = m_args->getInverses(IfcMaterialLayerSet::getClassType(), 0);
    if (inverses) {
        m_toMaterialLayerSet = static_cast< IfcMaterialLayerSet * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcMaterialLayer::copy(const IfcMaterialLayer &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setMaterial((IfcMaterial*)copyop(obj.m_material.get()));
    setLayerThickness(obj.m_layerThickness);
    setIsVentilated(obj.m_isVentilated);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMaterialLayer::s_type("IfcMaterialLayer");
