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



#include <ifc2x3/IfcPath.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOrientedEdge.h>
#include <ifc2x3/IfcTopologicalRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPath::IfcPath(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
}

IfcPath::~IfcPath() {
}

bool IfcPath::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPath(this);
}

const std::string &IfcPath::type() const {
    return IfcPath::s_type.getName();
}

const Step::ClassType &IfcPath::getClassType() {
    return IfcPath::s_type;
}

const Step::ClassType &IfcPath::getType() const {
    return IfcPath::s_type;
}

bool IfcPath::isOfType(const Step::ClassType &t) const {
    return IfcPath::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

List_IfcOrientedEdge_1_n &IfcPath::getEdgeList() {
    if (Step::BaseObject::inited()) {
        return m_edgeList;
    }
    else {
        m_edgeList.setUnset(true);
        return m_edgeList;
    }
}

const List_IfcOrientedEdge_1_n &IfcPath::getEdgeList() const {
    IfcPath * deConstObject = const_cast< IfcPath * > (this);
    return deConstObject->getEdgeList();
}

void IfcPath::setEdgeList(const List_IfcOrientedEdge_1_n &value) {
    m_edgeList = value;
}

void IfcPath::unsetEdgeList() {
    m_edgeList.clear();
    m_edgeList.setUnset(true);
}

bool IfcPath::testEdgeList() const {
    return !m_edgeList.isUnset();
}

bool IfcPath::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeList.setUnset(true);
    }
    else {
        m_edgeList.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcOrientedEdge > attr2;
                attr2 = static_cast< IfcOrientedEdge * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_edgeList.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPath::copy(const IfcPath &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcOrientedEdge >, 1 >::const_iterator it_m_edgeList;
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    for (it_m_edgeList = obj.m_edgeList.begin(); it_m_edgeList != obj.m_edgeList.end(); ++it_m_edgeList) {
        Step::RefPtr< IfcOrientedEdge > copyTarget = (IfcOrientedEdge *) (copyop((*it_m_edgeList).get()));
        m_edgeList.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPath::s_type("IfcPath");
