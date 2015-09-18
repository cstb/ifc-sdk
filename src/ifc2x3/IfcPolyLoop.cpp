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



#include <ifc2x3/IfcPolyLoop.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcLoop.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPolyLoop::IfcPolyLoop(Step::Id id, Step::SPFData *args) : IfcLoop(id, args) {
}

IfcPolyLoop::~IfcPolyLoop() {
}

bool IfcPolyLoop::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPolyLoop(this);
}

const std::string &IfcPolyLoop::type() const {
    return IfcPolyLoop::s_type.getName();
}

const Step::ClassType &IfcPolyLoop::getClassType() {
    return IfcPolyLoop::s_type;
}

const Step::ClassType &IfcPolyLoop::getType() const {
    return IfcPolyLoop::s_type;
}

bool IfcPolyLoop::isOfType(const Step::ClassType &t) const {
    return IfcPolyLoop::s_type == t ? true : IfcLoop::isOfType(t);
}

List_IfcCartesianPoint_3_n &IfcPolyLoop::getPolygon() {
    if (Step::BaseObject::inited()) {
        return m_polygon;
    }
    else {
        m_polygon.setUnset(true);
        return m_polygon;
    }
}

const List_IfcCartesianPoint_3_n &IfcPolyLoop::getPolygon() const {
    IfcPolyLoop * deConstObject = const_cast< IfcPolyLoop * > (this);
    return deConstObject->getPolygon();
}

void IfcPolyLoop::setPolygon(const List_IfcCartesianPoint_3_n &value) {
    m_polygon = value;
}

void IfcPolyLoop::unsetPolygon() {
    m_polygon.clear();
    m_polygon.setUnset(true);
}

bool IfcPolyLoop::testPolygon() const {
    return !m_polygon.isUnset();
}

bool IfcPolyLoop::init() {
    bool status = IfcLoop::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_polygon.setUnset(true);
    }
    else {
        m_polygon.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCartesianPoint > attr2;
                attr2 = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_polygon.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPolyLoop::copy(const IfcPolyLoop &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCartesianPoint >, 3 >::const_iterator it_m_polygon;
    IfcLoop::copy(obj, copyop);
    for (it_m_polygon = obj.m_polygon.begin(); it_m_polygon != obj.m_polygon.end(); ++it_m_polygon) {
        Step::RefPtr< IfcCartesianPoint > copyTarget = (IfcCartesianPoint *) (copyop((*it_m_polygon).get()));
        m_polygon.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPolyLoop::s_type("IfcPolyLoop");
