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



#include <ifc2x3/IfcConnectionPointGeometry.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcPointOrVertexPoint.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConnectionPointGeometry::IfcConnectionPointGeometry(Step::Id id, Step::SPFData *args) : IfcConnectionGeometry(id, args) {
    m_pointOnRelatingElement = NULL;
    m_pointOnRelatedElement = NULL;
}

IfcConnectionPointGeometry::~IfcConnectionPointGeometry() {
}

bool IfcConnectionPointGeometry::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionPointGeometry(this);
}

const std::string &IfcConnectionPointGeometry::type() const {
    return IfcConnectionPointGeometry::s_type.getName();
}

const Step::ClassType &IfcConnectionPointGeometry::getClassType() {
    return IfcConnectionPointGeometry::s_type;
}

const Step::ClassType &IfcConnectionPointGeometry::getType() const {
    return IfcConnectionPointGeometry::s_type;
}

bool IfcConnectionPointGeometry::isOfType(const Step::ClassType &t) const {
    return IfcConnectionPointGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcPointOrVertexPoint *IfcConnectionPointGeometry::getPointOnRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_pointOnRelatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcPointOrVertexPoint *IfcConnectionPointGeometry::getPointOnRelatingElement() const {
    IfcConnectionPointGeometry * deConstObject = const_cast< IfcConnectionPointGeometry * > (this);
    return deConstObject->getPointOnRelatingElement();
}

void IfcConnectionPointGeometry::setPointOnRelatingElement(const Step::RefPtr< IfcPointOrVertexPoint > &value) {
    m_pointOnRelatingElement = value;
}

void IfcConnectionPointGeometry::unsetPointOnRelatingElement() {
    m_pointOnRelatingElement = Step::getUnset(getPointOnRelatingElement());
}

bool IfcConnectionPointGeometry::testPointOnRelatingElement() const {
    return !Step::isUnset(getPointOnRelatingElement());
}

IfcPointOrVertexPoint *IfcConnectionPointGeometry::getPointOnRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_pointOnRelatedElement.get();
    }
    else {
        return NULL;
    }
}

const IfcPointOrVertexPoint *IfcConnectionPointGeometry::getPointOnRelatedElement() const {
    IfcConnectionPointGeometry * deConstObject = const_cast< IfcConnectionPointGeometry * > (this);
    return deConstObject->getPointOnRelatedElement();
}

void IfcConnectionPointGeometry::setPointOnRelatedElement(const Step::RefPtr< IfcPointOrVertexPoint > &value) {
    m_pointOnRelatedElement = value;
}

void IfcConnectionPointGeometry::unsetPointOnRelatedElement() {
    m_pointOnRelatedElement = Step::getUnset(getPointOnRelatedElement());
}

bool IfcConnectionPointGeometry::testPointOnRelatedElement() const {
    return !Step::isUnset(getPointOnRelatedElement());
}

bool IfcConnectionPointGeometry::init() {
    bool status = IfcConnectionGeometry::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointOnRelatingElement = NULL;
    }
    else {
        m_pointOnRelatingElement = new IfcPointOrVertexPoint;
        if (arg[0] == '#') {
            m_pointOnRelatingElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_pointOnRelatedElement = NULL;
    }
    else {
        m_pointOnRelatedElement = new IfcPointOrVertexPoint;
        if (arg[0] == '#') {
            m_pointOnRelatedElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    return true;
}

void IfcConnectionPointGeometry::copy(const IfcConnectionPointGeometry &obj, const CopyOp &copyop) {
    IfcConnectionGeometry::copy(obj, copyop);
    m_pointOnRelatingElement = new IfcPointOrVertexPoint;
    m_pointOnRelatingElement->copy(*(obj.m_pointOnRelatingElement.get()), copyop);
    m_pointOnRelatedElement = new IfcPointOrVertexPoint;
    m_pointOnRelatedElement->copy(*(obj.m_pointOnRelatedElement.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConnectionPointGeometry::s_type("IfcConnectionPointGeometry");
