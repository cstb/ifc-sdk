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



#include <ifc2x3/IfcEdgeFeature.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFeatureElementSubtraction.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcEdgeFeature::IfcEdgeFeature(Step::Id id, Step::SPFData *args) : IfcFeatureElementSubtraction(id, args) {
    m_featureLength = Step::getUnset(m_featureLength);
}

IfcEdgeFeature::~IfcEdgeFeature() {
}

bool IfcEdgeFeature::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEdgeFeature(this);
}

const std::string &IfcEdgeFeature::type() const {
    return IfcEdgeFeature::s_type.getName();
}

const Step::ClassType &IfcEdgeFeature::getClassType() {
    return IfcEdgeFeature::s_type;
}

const Step::ClassType &IfcEdgeFeature::getType() const {
    return IfcEdgeFeature::s_type;
}

bool IfcEdgeFeature::isOfType(const Step::ClassType &t) const {
    return IfcEdgeFeature::s_type == t ? true : IfcFeatureElementSubtraction::isOfType(t);
}

IfcPositiveLengthMeasure IfcEdgeFeature::getFeatureLength() {
    if (Step::BaseObject::inited()) {
        return m_featureLength;
    }
    else {
        return Step::getUnset(m_featureLength);
    }
}

const IfcPositiveLengthMeasure IfcEdgeFeature::getFeatureLength() const {
    IfcEdgeFeature * deConstObject = const_cast< IfcEdgeFeature * > (this);
    return deConstObject->getFeatureLength();
}

void IfcEdgeFeature::setFeatureLength(IfcPositiveLengthMeasure value) {
    m_featureLength = value;
}

void IfcEdgeFeature::unsetFeatureLength() {
    m_featureLength = Step::getUnset(getFeatureLength());
}

bool IfcEdgeFeature::testFeatureLength() const {
    return !Step::isUnset(getFeatureLength());
}

bool IfcEdgeFeature::init() {
    bool status = IfcFeatureElementSubtraction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_featureLength = Step::getUnset(m_featureLength);
    }
    else {
        m_featureLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcEdgeFeature::copy(const IfcEdgeFeature &obj, const CopyOp &copyop) {
    IfcFeatureElementSubtraction::copy(obj, copyop);
    setFeatureLength(obj.m_featureLength);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcEdgeFeature::s_type("IfcEdgeFeature");
