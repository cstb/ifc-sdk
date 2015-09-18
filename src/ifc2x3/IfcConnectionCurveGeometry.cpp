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



#include <ifc2x3/IfcConnectionCurveGeometry.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcCurveOrEdgeCurve.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcConnectionCurveGeometry::IfcConnectionCurveGeometry(Step::Id id, Step::SPFData *args) : IfcConnectionGeometry(id, args) {
    m_curveOnRelatingElement = NULL;
    m_curveOnRelatedElement = NULL;
}

IfcConnectionCurveGeometry::~IfcConnectionCurveGeometry() {
}

bool IfcConnectionCurveGeometry::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionCurveGeometry(this);
}

const std::string &IfcConnectionCurveGeometry::type() const {
    return IfcConnectionCurveGeometry::s_type.getName();
}

const Step::ClassType &IfcConnectionCurveGeometry::getClassType() {
    return IfcConnectionCurveGeometry::s_type;
}

const Step::ClassType &IfcConnectionCurveGeometry::getType() const {
    return IfcConnectionCurveGeometry::s_type;
}

bool IfcConnectionCurveGeometry::isOfType(const Step::ClassType &t) const {
    return IfcConnectionCurveGeometry::s_type == t ? true : IfcConnectionGeometry::isOfType(t);
}

IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatingElement() {
    if (Step::BaseObject::inited()) {
        return m_curveOnRelatingElement.get();
    }
    else {
        return NULL;
    }
}

const IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatingElement() const {
    IfcConnectionCurveGeometry * deConstObject = const_cast< IfcConnectionCurveGeometry * > (this);
    return deConstObject->getCurveOnRelatingElement();
}

void IfcConnectionCurveGeometry::setCurveOnRelatingElement(const Step::RefPtr< IfcCurveOrEdgeCurve > &value) {
    m_curveOnRelatingElement = value;
}

void IfcConnectionCurveGeometry::unsetCurveOnRelatingElement() {
    m_curveOnRelatingElement = Step::getUnset(getCurveOnRelatingElement());
}

bool IfcConnectionCurveGeometry::testCurveOnRelatingElement() const {
    return !Step::isUnset(getCurveOnRelatingElement());
}

IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatedElement() {
    if (Step::BaseObject::inited()) {
        return m_curveOnRelatedElement.get();
    }
    else {
        return NULL;
    }
}

const IfcCurveOrEdgeCurve *IfcConnectionCurveGeometry::getCurveOnRelatedElement() const {
    IfcConnectionCurveGeometry * deConstObject = const_cast< IfcConnectionCurveGeometry * > (this);
    return deConstObject->getCurveOnRelatedElement();
}

void IfcConnectionCurveGeometry::setCurveOnRelatedElement(const Step::RefPtr< IfcCurveOrEdgeCurve > &value) {
    m_curveOnRelatedElement = value;
}

void IfcConnectionCurveGeometry::unsetCurveOnRelatedElement() {
    m_curveOnRelatedElement = Step::getUnset(getCurveOnRelatedElement());
}

bool IfcConnectionCurveGeometry::testCurveOnRelatedElement() const {
    return !Step::isUnset(getCurveOnRelatedElement());
}

bool IfcConnectionCurveGeometry::init() {
    bool status = IfcConnectionGeometry::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveOnRelatingElement = NULL;
    }
    else {
        m_curveOnRelatingElement = new IfcCurveOrEdgeCurve;
        if (arg[0] == '#') {
            m_curveOnRelatingElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_curveOnRelatedElement = NULL;
    }
    else {
        m_curveOnRelatedElement = new IfcCurveOrEdgeCurve;
        if (arg[0] == '#') {
            m_curveOnRelatedElement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcConnectionCurveGeometry::copy(const IfcConnectionCurveGeometry &obj, const CopyOp &copyop) {
    IfcConnectionGeometry::copy(obj, copyop);
    m_curveOnRelatingElement = new IfcCurveOrEdgeCurve;
    m_curveOnRelatingElement->copy(*(obj.m_curveOnRelatingElement.get()), copyop);
    m_curveOnRelatedElement = new IfcCurveOrEdgeCurve;
    m_curveOnRelatedElement->copy(*(obj.m_curveOnRelatedElement.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConnectionCurveGeometry::s_type("IfcConnectionCurveGeometry");
