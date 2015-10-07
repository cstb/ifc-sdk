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



#include <ifc2x3/IfcPolyline.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPolyline::IfcPolyline(Step::Id id, Step::SPFData *args) : IfcBoundedCurve(id, args) {
}

IfcPolyline::~IfcPolyline() {
}

bool IfcPolyline::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPolyline(this);
}

const std::string &IfcPolyline::type() const {
    return IfcPolyline::s_type.getName();
}

const Step::ClassType &IfcPolyline::getClassType() {
    return IfcPolyline::s_type;
}

const Step::ClassType &IfcPolyline::getType() const {
    return IfcPolyline::s_type;
}

bool IfcPolyline::isOfType(const Step::ClassType &t) const {
    return IfcPolyline::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

List_IfcCartesianPoint_2_n &IfcPolyline::getPoints() {
    if (Step::BaseObject::inited()) {
        return m_points;
    }
    else {
        m_points.setUnset(true);
        return m_points;
    }
}

const List_IfcCartesianPoint_2_n &IfcPolyline::getPoints() const {
    IfcPolyline * deConstObject = const_cast< IfcPolyline * > (this);
    return deConstObject->getPoints();
}

void IfcPolyline::setPoints(const List_IfcCartesianPoint_2_n &value) {
    m_points = value;
}

void IfcPolyline::unsetPoints() {
    m_points.clear();
    m_points.setUnset(true);
}

bool IfcPolyline::testPoints() const {
    return !m_points.isUnset();
}

bool IfcPolyline::init() {
    bool status = IfcBoundedCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_points.setUnset(true);
    }
    else {
        m_points.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCartesianPoint > attr2;
                attr2 = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_points.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPolyline::copy(const IfcPolyline &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCartesianPoint >, 2 >::const_iterator it_m_points;
    IfcBoundedCurve::copy(obj, copyop);
    for (it_m_points = obj.m_points.begin(); it_m_points != obj.m_points.end(); ++it_m_points) {
        Step::RefPtr< IfcCartesianPoint > copyTarget = (IfcCartesianPoint *) (copyop((*it_m_points).get()));
        m_points.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPolyline::s_type("IfcPolyline");
