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



#include <ifc2x3/IfcEdge.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcTopologicalRepresentationItem.h>
#include <ifc2x3/IfcVertex.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcEdge::IfcEdge(Step::Id id, Step::SPFData *args) : IfcTopologicalRepresentationItem(id, args) {
    m_edgeStart = NULL;
    m_edgeEnd = NULL;
}

IfcEdge::~IfcEdge() {
}

bool IfcEdge::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEdge(this);
}

const std::string &IfcEdge::type() const {
    return IfcEdge::s_type.getName();
}

const Step::ClassType &IfcEdge::getClassType() {
    return IfcEdge::s_type;
}

const Step::ClassType &IfcEdge::getType() const {
    return IfcEdge::s_type;
}

bool IfcEdge::isOfType(const Step::ClassType &t) const {
    return IfcEdge::s_type == t ? true : IfcTopologicalRepresentationItem::isOfType(t);
}

IfcVertex *IfcEdge::getEdgeStart() {
    if (Step::BaseObject::inited()) {
        return m_edgeStart.get();
    }
    else {
        return NULL;
    }
}

const IfcVertex *IfcEdge::getEdgeStart() const {
    IfcEdge * deConstObject = const_cast< IfcEdge * > (this);
    return deConstObject->getEdgeStart();
}

void IfcEdge::setEdgeStart(const Step::RefPtr< IfcVertex > &value) {
    m_edgeStart = value;
}

void IfcEdge::unsetEdgeStart() {
    m_edgeStart = Step::getUnset(getEdgeStart());
}

bool IfcEdge::testEdgeStart() const {
    return !Step::isUnset(getEdgeStart());
}

IfcVertex *IfcEdge::getEdgeEnd() {
    if (Step::BaseObject::inited()) {
        return m_edgeEnd.get();
    }
    else {
        return NULL;
    }
}

const IfcVertex *IfcEdge::getEdgeEnd() const {
    IfcEdge * deConstObject = const_cast< IfcEdge * > (this);
    return deConstObject->getEdgeEnd();
}

void IfcEdge::setEdgeEnd(const Step::RefPtr< IfcVertex > &value) {
    m_edgeEnd = value;
}

void IfcEdge::unsetEdgeEnd() {
    m_edgeEnd = Step::getUnset(getEdgeEnd());
}

bool IfcEdge::testEdgeEnd() const {
    return !Step::isUnset(getEdgeEnd());
}

bool IfcEdge::init() {
    bool status = IfcTopologicalRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeStart = NULL;
    }
    else {
        m_edgeStart = static_cast< IfcVertex * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeEnd = NULL;
    }
    else {
        m_edgeEnd = static_cast< IfcVertex * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcEdge::copy(const IfcEdge &obj, const CopyOp &copyop) {
    IfcTopologicalRepresentationItem::copy(obj, copyop);
    setEdgeStart((IfcVertex*)copyop(obj.m_edgeStart.get()));
    setEdgeEnd((IfcVertex*)copyop(obj.m_edgeEnd.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcEdge::s_type("IfcEdge");
