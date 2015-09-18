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



#include <ifc2x3/IfcSubedge.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcEdge.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSubedge::IfcSubedge(Step::Id id, Step::SPFData *args) : IfcEdge(id, args) {
    m_parentEdge = NULL;
}

IfcSubedge::~IfcSubedge() {
}

bool IfcSubedge::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSubedge(this);
}

const std::string &IfcSubedge::type() const {
    return IfcSubedge::s_type.getName();
}

const Step::ClassType &IfcSubedge::getClassType() {
    return IfcSubedge::s_type;
}

const Step::ClassType &IfcSubedge::getType() const {
    return IfcSubedge::s_type;
}

bool IfcSubedge::isOfType(const Step::ClassType &t) const {
    return IfcSubedge::s_type == t ? true : IfcEdge::isOfType(t);
}

IfcEdge *IfcSubedge::getParentEdge() {
    if (Step::BaseObject::inited()) {
        return m_parentEdge.get();
    }
    else {
        return NULL;
    }
}

const IfcEdge *IfcSubedge::getParentEdge() const {
    IfcSubedge * deConstObject = const_cast< IfcSubedge * > (this);
    return deConstObject->getParentEdge();
}

void IfcSubedge::setParentEdge(const Step::RefPtr< IfcEdge > &value) {
    m_parentEdge = value;
}

void IfcSubedge::unsetParentEdge() {
    m_parentEdge = Step::getUnset(getParentEdge());
}

bool IfcSubedge::testParentEdge() const {
    return !Step::isUnset(getParentEdge());
}

bool IfcSubedge::init() {
    bool status = IfcEdge::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parentEdge = NULL;
    }
    else {
        m_parentEdge = static_cast< IfcEdge * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcSubedge::copy(const IfcSubedge &obj, const CopyOp &copyop) {
    IfcEdge::copy(obj, copyop);
    setParentEdge((IfcEdge*)copyop(obj.m_parentEdge.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSubedge::s_type("IfcSubedge");
