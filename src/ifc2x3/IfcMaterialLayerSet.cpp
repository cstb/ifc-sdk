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



#include <ifc2x3/IfcMaterialLayerSet.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterialLayer.h>
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

Inverted_IfcMaterialLayerSet_MaterialLayers_type::Inverted_IfcMaterialLayerSet_MaterialLayers_type():
    mOwner(0)
{
}

void Inverted_IfcMaterialLayerSet_MaterialLayers_type::setOwner(IfcMaterialLayerSet *owner) {
    mOwner = owner;
}

void Inverted_IfcMaterialLayerSet_MaterialLayers_type::push_back(const Step::RefPtr< IfcMaterialLayer > &value) throw(std::out_of_range) {
    IfcMaterialLayer *inverse = const_cast< IfcMaterialLayer * > (value.get());
    List_IfcMaterialLayer_1_n::push_back(value);
    inverse->m_toMaterialLayerSet = mOwner;
}

Inverted_IfcMaterialLayerSet_MaterialLayers_type::iterator Inverted_IfcMaterialLayerSet_MaterialLayers_type::erase(const Step::RefPtr< IfcMaterialLayer > &value) {
    IfcMaterialLayer *inverse = const_cast< IfcMaterialLayer * > (value.get());
    inverse->m_toMaterialLayerSet = NULL;
    return List_IfcMaterialLayer_1_n::erase(value);
}

void Inverted_IfcMaterialLayerSet_MaterialLayers_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcMaterialLayerSet::IfcMaterialLayerSet(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_materialLayers.setOwner(this);
    m_layerSetName = Step::getUnset(m_layerSetName);
}

IfcMaterialLayerSet::~IfcMaterialLayerSet() {
}

bool IfcMaterialLayerSet::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterialLayerSet(this);
}

const std::string &IfcMaterialLayerSet::type() const {
    return IfcMaterialLayerSet::s_type.getName();
}

const Step::ClassType &IfcMaterialLayerSet::getClassType() {
    return IfcMaterialLayerSet::s_type;
}

const Step::ClassType &IfcMaterialLayerSet::getType() const {
    return IfcMaterialLayerSet::s_type;
}

bool IfcMaterialLayerSet::isOfType(const Step::ClassType &t) const {
    return IfcMaterialLayerSet::s_type == t ? true : Step::BaseObject::isOfType(t);
}

List_IfcMaterialLayer_1_n &IfcMaterialLayerSet::getMaterialLayers() {
    if (Step::BaseObject::inited()) {
        return m_materialLayers;
    }
    else {
        m_materialLayers.setUnset(true);
        return m_materialLayers;
    }
}

const List_IfcMaterialLayer_1_n &IfcMaterialLayerSet::getMaterialLayers() const {
    IfcMaterialLayerSet * deConstObject = const_cast< IfcMaterialLayerSet * > (this);
    return deConstObject->getMaterialLayers();
}

void IfcMaterialLayerSet::unsetMaterialLayers() {
    m_materialLayers.clear();
    m_materialLayers.setUnset(true);
}

bool IfcMaterialLayerSet::testMaterialLayers() const {
    return !m_materialLayers.isUnset();
}

IfcLabel IfcMaterialLayerSet::getLayerSetName() {
    if (Step::BaseObject::inited()) {
        return m_layerSetName;
    }
    else {
        return Step::getUnset(m_layerSetName);
    }
}

const IfcLabel IfcMaterialLayerSet::getLayerSetName() const {
    IfcMaterialLayerSet * deConstObject = const_cast< IfcMaterialLayerSet * > (this);
    return deConstObject->getLayerSetName();
}

void IfcMaterialLayerSet::setLayerSetName(const IfcLabel &value) {
    m_layerSetName = value;
}

void IfcMaterialLayerSet::unsetLayerSetName() {
    m_layerSetName = Step::getUnset(getLayerSetName());
}

bool IfcMaterialLayerSet::testLayerSetName() const {
    return !Step::isUnset(getLayerSetName());
}

bool IfcMaterialLayerSet::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_materialLayers.setUnset(true);
    }
    else {
        m_materialLayers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcMaterialLayer > attr2;
                attr2 = static_cast< IfcMaterialLayer * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_materialLayers.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerSetName = Step::getUnset(m_layerSetName);
    }
    else {
        m_layerSetName = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcMaterialLayerSet::copy(const IfcMaterialLayerSet &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcMaterialLayer >, 1 >::const_iterator it_m_materialLayers;
    Step::BaseEntity::copy(obj, copyop);
    for (it_m_materialLayers = obj.m_materialLayers.begin(); it_m_materialLayers != obj.m_materialLayers.end(); ++it_m_materialLayers) {
        Step::RefPtr< IfcMaterialLayer > copyTarget = (IfcMaterialLayer *) (copyop((*it_m_materialLayers).get()));
        m_materialLayers.push_back(copyTarget.get());
    }
    setLayerSetName(obj.m_layerSetName);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMaterialLayerSet::s_type("IfcMaterialLayerSet");
