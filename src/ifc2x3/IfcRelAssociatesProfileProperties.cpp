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



#include <ifc2x3/IfcRelAssociatesProfileProperties.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOrientationSelect.h>
#include <ifc2x3/IfcProfileProperties.h>
#include <ifc2x3/IfcRelAssociates.h>
#include <ifc2x3/IfcShapeAspect.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRelAssociatesProfileProperties::IfcRelAssociatesProfileProperties(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingProfileProperties = NULL;
    m_profileSectionLocation = NULL;
    m_profileOrientation = NULL;
}

IfcRelAssociatesProfileProperties::~IfcRelAssociatesProfileProperties() {
}

bool IfcRelAssociatesProfileProperties::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesProfileProperties(this);
}

const std::string &IfcRelAssociatesProfileProperties::type() const {
    return IfcRelAssociatesProfileProperties::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesProfileProperties::getClassType() {
    return IfcRelAssociatesProfileProperties::s_type;
}

const Step::ClassType &IfcRelAssociatesProfileProperties::getType() const {
    return IfcRelAssociatesProfileProperties::s_type;
}

bool IfcRelAssociatesProfileProperties::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesProfileProperties::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcProfileProperties *IfcRelAssociatesProfileProperties::getRelatingProfileProperties() {
    if (Step::BaseObject::inited()) {
        return m_relatingProfileProperties.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileProperties *IfcRelAssociatesProfileProperties::getRelatingProfileProperties() const {
    IfcRelAssociatesProfileProperties * deConstObject = const_cast< IfcRelAssociatesProfileProperties * > (this);
    return deConstObject->getRelatingProfileProperties();
}

void IfcRelAssociatesProfileProperties::setRelatingProfileProperties(const Step::RefPtr< IfcProfileProperties > &value) {
    m_relatingProfileProperties = value;
}

void IfcRelAssociatesProfileProperties::unsetRelatingProfileProperties() {
    m_relatingProfileProperties = Step::getUnset(getRelatingProfileProperties());
}

bool IfcRelAssociatesProfileProperties::testRelatingProfileProperties() const {
    return !Step::isUnset(getRelatingProfileProperties());
}

IfcShapeAspect *IfcRelAssociatesProfileProperties::getProfileSectionLocation() {
    if (Step::BaseObject::inited()) {
        return m_profileSectionLocation.get();
    }
    else {
        return NULL;
    }
}

const IfcShapeAspect *IfcRelAssociatesProfileProperties::getProfileSectionLocation() const {
    IfcRelAssociatesProfileProperties * deConstObject = const_cast< IfcRelAssociatesProfileProperties * > (this);
    return deConstObject->getProfileSectionLocation();
}

void IfcRelAssociatesProfileProperties::setProfileSectionLocation(const Step::RefPtr< IfcShapeAspect > &value) {
    m_profileSectionLocation = value;
}

void IfcRelAssociatesProfileProperties::unsetProfileSectionLocation() {
    m_profileSectionLocation = Step::getUnset(getProfileSectionLocation());
}

bool IfcRelAssociatesProfileProperties::testProfileSectionLocation() const {
    return !Step::isUnset(getProfileSectionLocation());
}

IfcOrientationSelect *IfcRelAssociatesProfileProperties::getProfileOrientation() {
    if (Step::BaseObject::inited()) {
        return m_profileOrientation.get();
    }
    else {
        return NULL;
    }
}

const IfcOrientationSelect *IfcRelAssociatesProfileProperties::getProfileOrientation() const {
    IfcRelAssociatesProfileProperties * deConstObject = const_cast< IfcRelAssociatesProfileProperties * > (this);
    return deConstObject->getProfileOrientation();
}

void IfcRelAssociatesProfileProperties::setProfileOrientation(const Step::RefPtr< IfcOrientationSelect > &value) {
    m_profileOrientation = value;
}

void IfcRelAssociatesProfileProperties::unsetProfileOrientation() {
    m_profileOrientation = Step::getUnset(getProfileOrientation());
}

bool IfcRelAssociatesProfileProperties::testProfileOrientation() const {
    return !Step::isUnset(getProfileOrientation());
}

bool IfcRelAssociatesProfileProperties::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingProfileProperties = NULL;
    }
    else {
        m_relatingProfileProperties = static_cast< IfcProfileProperties * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileSectionLocation = NULL;
    }
    else {
        m_profileSectionLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileOrientation = NULL;
    }
    else {
        m_profileOrientation = new IfcOrientationSelect;
        if (arg[0] == '#') {
            m_profileOrientation->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCPLANEANGLEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_profileOrientation->setIfcPlaneAngleMeasure(tmp_attr1);
                }
            }
        }
    }
    return true;
}

void IfcRelAssociatesProfileProperties::copy(const IfcRelAssociatesProfileProperties &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    setRelatingProfileProperties((IfcProfileProperties*)copyop(obj.m_relatingProfileProperties.get()));
    setProfileSectionLocation((IfcShapeAspect*)copyop(obj.m_profileSectionLocation.get()));
    m_profileOrientation = new IfcOrientationSelect;
    m_profileOrientation->copy(*(obj.m_profileOrientation.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelAssociatesProfileProperties::s_type("IfcRelAssociatesProfileProperties");
