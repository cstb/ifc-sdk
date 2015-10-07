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



#include <ifc2x3/IfcConnectionPortGeometry.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcProfileDef.h>
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

IfcConnectionPortGeometry::IfcConnectionPortGeometry(Step::Id id, Step::SPFData *args) : IfcConnectionGeometry(id, args) {
    m_locationAtRelatingElement = NULL;
    m_locationAtRelatedElement = NULL;
    m_profileOfPort = NULL;
}

IfcConnectionPortGeometry::~IfcConnectionPortGeometry() {
}

bool IfcConnectionPortGeometry::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionPortGeometry(this);
}

const std::string &IfcConnectionPortGeometry::type() const {
    return IfcConnectionPortGeometry::s_type.getName();
}

const Step::ClassType &IfcConnectionPortGeometry::getClassType() {
    return IfcConnectionPortGeometry::s_type;
}

const Step::ClassType &IfcConnectionPortGeometry::getType() const {
    return IfcConnectionPortGeometry::s_type;
}

bool IfcConnectionPortGeometry::isOfType(const Step::ClassType &t) const {
    return IfcConnectionPortGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_locationAtRelatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatingElement() const {
    IfcConnectionPortGeometry * deConstObject = const_cast< IfcConnectionPortGeometry * > (this);
    return deConstObject->getLocationAtRelatingElement();
}

void IfcConnectionPortGeometry::setLocationAtRelatingElement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_locationAtRelatingElement = value;
}

void IfcConnectionPortGeometry::unsetLocationAtRelatingElement() {
    m_locationAtRelatingElement = Step::getUnset(getLocationAtRelatingElement());
}

bool IfcConnectionPortGeometry::testLocationAtRelatingElement() const {
    return !Step::isUnset(getLocationAtRelatingElement());
}

IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_locationAtRelatedElement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcConnectionPortGeometry::getLocationAtRelatedElement() const {
    IfcConnectionPortGeometry * deConstObject = const_cast< IfcConnectionPortGeometry * > (this);
    return deConstObject->getLocationAtRelatedElement();
}

void IfcConnectionPortGeometry::setLocationAtRelatedElement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_locationAtRelatedElement = value;
}

void IfcConnectionPortGeometry::unsetLocationAtRelatedElement() {
    m_locationAtRelatedElement = Step::getUnset(getLocationAtRelatedElement());
}

bool IfcConnectionPortGeometry::testLocationAtRelatedElement() const {
    return !Step::isUnset(getLocationAtRelatedElement());
}

IfcProfileDef *IfcConnectionPortGeometry::getProfileOfPort() {
    if (Step::BaseObject::inited()) {
        return m_profileOfPort.get();
    }
    else {
        return NULL;
    }
}

const IfcProfileDef *IfcConnectionPortGeometry::getProfileOfPort() const {
    IfcConnectionPortGeometry * deConstObject = const_cast< IfcConnectionPortGeometry * > (this);
    return deConstObject->getProfileOfPort();
}

void IfcConnectionPortGeometry::setProfileOfPort(const Step::RefPtr< IfcProfileDef > &value) {
    m_profileOfPort = value;
}

void IfcConnectionPortGeometry::unsetProfileOfPort() {
    m_profileOfPort = Step::getUnset(getProfileOfPort());
}

bool IfcConnectionPortGeometry::testProfileOfPort() const {
    return !Step::isUnset(getProfileOfPort());
}

bool IfcConnectionPortGeometry::init() {
    bool status = IfcConnectionGeometry::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_locationAtRelatingElement = NULL;
    }
    else {
        m_locationAtRelatingElement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_locationAtRelatingElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_locationAtRelatedElement = NULL;
    }
    else {
        m_locationAtRelatedElement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_locationAtRelatedElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_profileOfPort = NULL;
    }
    else {
        m_profileOfPort = static_cast< IfcProfileDef * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcConnectionPortGeometry::copy(const IfcConnectionPortGeometry &obj, const CopyOp &copyop) {
    IfcConnectionGeometry::copy(obj, copyop);
    m_locationAtRelatingElement = new IfcAxis2Placement;
    m_locationAtRelatingElement->copy(*(obj.m_locationAtRelatingElement.get()), copyop);
    m_locationAtRelatedElement = new IfcAxis2Placement;
    m_locationAtRelatedElement->copy(*(obj.m_locationAtRelatedElement.get()), copyop);
    setProfileOfPort((IfcProfileDef*)copyop(obj.m_profileOfPort.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConnectionPortGeometry::s_type("IfcConnectionPortGeometry");
