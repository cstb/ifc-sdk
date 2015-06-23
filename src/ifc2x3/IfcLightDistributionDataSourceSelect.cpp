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



#include <ifc2x3/IfcLightDistributionDataSourceSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcExternalReference.h>
#include <ifc2x3/IfcLightIntensityDistribution.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcLightDistributionDataSourceSelect::~IfcLightDistributionDataSourceSelect() {
    deleteUnion();
}

bool IfcLightDistributionDataSourceSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLightDistributionDataSourceSelect(this);
}

bool IfcLightDistributionDataSourceSelect::init() {
    return false;
}

const std::string &IfcLightDistributionDataSourceSelect::type() const {
    return IfcLightDistributionDataSourceSelect::s_type.getName();
}

const Step::ClassType &IfcLightDistributionDataSourceSelect::getClassType() {
    return IfcLightDistributionDataSourceSelect::s_type;
}

const Step::ClassType &IfcLightDistributionDataSourceSelect::getType() const {
    return IfcLightDistributionDataSourceSelect::s_type;
}

bool IfcLightDistributionDataSourceSelect::isOfType(const Step::ClassType &t) const {
    return IfcLightDistributionDataSourceSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcLightDistributionDataSourceSelect::copy(const IfcLightDistributionDataSourceSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCEXTERNALREFERENCE:
        setIfcExternalReference((IfcExternalReference *) (copyop(obj.m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference)));
        break;
    case IFCLIGHTINTENSITYDISTRIBUTION:
        setIfcLightIntensityDistribution((IfcLightIntensityDistribution *) (copyop(obj.m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution)));
        break;
    default:
        break;
    }
}

std::string IfcLightDistributionDataSourceSelect::currentTypeName() const {
    switch(m_type) {
    case IFCEXTERNALREFERENCE:
        return "IfcExternalReference";
        break;
    case IFCLIGHTINTENSITYDISTRIBUTION:
        return "IfcLightIntensityDistribution";
        break;
    default:
        return "UNSET";
    }
}

IfcLightDistributionDataSourceSelect::IfcLightDistributionDataSourceSelect_select IfcLightDistributionDataSourceSelect::currentType() const {
    return m_type;
}

void IfcLightDistributionDataSourceSelect::deleteUnion() {
    switch(m_type) {
    case IFCEXTERNALREFERENCE:
        m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference->unref();
        break;
    case IFCLIGHTINTENSITYDISTRIBUTION:
        m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcExternalReference *IfcLightDistributionDataSourceSelect::getIfcExternalReference() const {
    if (m_type == IFCEXTERNALREFERENCE) {
        return m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference;
    }
    else {
        return NULL;
    }
}

void IfcLightDistributionDataSourceSelect::setIfcExternalReference(IfcExternalReference *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcLightDistributionDataSourceSelect_union.m_IfcExternalReference = value;
    if (value) {
        value->ref();
        m_type = IFCEXTERNALREFERENCE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCEXTERNALREFERENCE;
}

IfcLightIntensityDistribution *IfcLightDistributionDataSourceSelect::getIfcLightIntensityDistribution() const {
    if (m_type == IFCLIGHTINTENSITYDISTRIBUTION) {
        return m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution;
    }
    else {
        return NULL;
    }
}

void IfcLightDistributionDataSourceSelect::setIfcLightIntensityDistribution(IfcLightIntensityDistribution *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcLightDistributionDataSourceSelect_union.m_IfcLightIntensityDistribution = value;
    if (value) {
        value->ref();
        m_type = IFCLIGHTINTENSITYDISTRIBUTION;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCLIGHTINTENSITYDISTRIBUTION;
}

void IfcLightDistributionDataSourceSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcExternalReference::getClassType())) {
        setIfcExternalReference(static_cast< IfcExternalReference* > (v));
    }
    else if (v && v->isOfType(IfcLightIntensityDistribution::getClassType())) {
        setIfcLightIntensityDistribution(static_cast< IfcLightIntensityDistribution* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcLightDistributionDataSourceSelect::s_type("IfcLightDistributionDataSourceSelect");
