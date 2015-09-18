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



#include <ifc2x3/IfcVertexLoop.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcLoop.h>
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

IfcVertexLoop::IfcVertexLoop(Step::Id id, Step::SPFData *args) : IfcLoop(id, args) {
    m_loopVertex = NULL;
}

IfcVertexLoop::~IfcVertexLoop() {
}

bool IfcVertexLoop::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVertexLoop(this);
}

const std::string &IfcVertexLoop::type() const {
    return IfcVertexLoop::s_type.getName();
}

const Step::ClassType &IfcVertexLoop::getClassType() {
    return IfcVertexLoop::s_type;
}

const Step::ClassType &IfcVertexLoop::getType() const {
    return IfcVertexLoop::s_type;
}

bool IfcVertexLoop::isOfType(const Step::ClassType &t) const {
    return IfcVertexLoop::s_type == t ? true : IfcLoop::isOfType(t);
}

IfcVertex *IfcVertexLoop::getLoopVertex() {
    if (Step::BaseObject::inited()) {
        return m_loopVertex.get();
    }
    else {
        return NULL;
    }
}

const IfcVertex *IfcVertexLoop::getLoopVertex() const {
    IfcVertexLoop * deConstObject = const_cast< IfcVertexLoop * > (this);
    return deConstObject->getLoopVertex();
}

void IfcVertexLoop::setLoopVertex(const Step::RefPtr< IfcVertex > &value) {
    m_loopVertex = value;
}

void IfcVertexLoop::unsetLoopVertex() {
    m_loopVertex = Step::getUnset(getLoopVertex());
}

bool IfcVertexLoop::testLoopVertex() const {
    return !Step::isUnset(getLoopVertex());
}

bool IfcVertexLoop::init() {
    bool status = IfcLoop::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_loopVertex = NULL;
    }
    else {
        m_loopVertex = static_cast< IfcVertex * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcVertexLoop::copy(const IfcVertexLoop &obj, const CopyOp &copyop) {
    IfcLoop::copy(obj, copyop);
    setLoopVertex((IfcVertex*)copyop(obj.m_loopVertex.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcVertexLoop::s_type("IfcVertexLoop");
