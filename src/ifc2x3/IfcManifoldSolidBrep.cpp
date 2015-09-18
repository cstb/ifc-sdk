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



#include <ifc2x3/IfcManifoldSolidBrep.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcClosedShell.h>
#include <ifc2x3/IfcSolidModel.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcManifoldSolidBrep::IfcManifoldSolidBrep(Step::Id id, Step::SPFData *args) : IfcSolidModel(id, args) {
    m_outer = NULL;
}

IfcManifoldSolidBrep::~IfcManifoldSolidBrep() {
}

bool IfcManifoldSolidBrep::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcManifoldSolidBrep(this);
}

const std::string &IfcManifoldSolidBrep::type() const {
    return IfcManifoldSolidBrep::s_type.getName();
}

const Step::ClassType &IfcManifoldSolidBrep::getClassType() {
    return IfcManifoldSolidBrep::s_type;
}

const Step::ClassType &IfcManifoldSolidBrep::getType() const {
    return IfcManifoldSolidBrep::s_type;
}

bool IfcManifoldSolidBrep::isOfType(const Step::ClassType &t) const {
    return IfcManifoldSolidBrep::s_type == t ? true : IfcSolidModel::isOfType(t);
}

IfcClosedShell *IfcManifoldSolidBrep::getOuter() {
    if (Step::BaseObject::inited()) {
        return m_outer.get();
    }
    else {
        return NULL;
    }
}

const IfcClosedShell *IfcManifoldSolidBrep::getOuter() const {
    IfcManifoldSolidBrep * deConstObject = const_cast< IfcManifoldSolidBrep * > (this);
    return deConstObject->getOuter();
}

void IfcManifoldSolidBrep::setOuter(const Step::RefPtr< IfcClosedShell > &value) {
    m_outer = value;
}

void IfcManifoldSolidBrep::unsetOuter() {
    m_outer = Step::getUnset(getOuter());
}

bool IfcManifoldSolidBrep::testOuter() const {
    return !Step::isUnset(getOuter());
}

bool IfcManifoldSolidBrep::init() {
    bool status = IfcSolidModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outer = NULL;
    }
    else {
        m_outer = static_cast< IfcClosedShell * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcManifoldSolidBrep::copy(const IfcManifoldSolidBrep &obj, const CopyOp &copyop) {
    IfcSolidModel::copy(obj, copyop);
    setOuter((IfcClosedShell*)copyop(obj.m_outer.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcManifoldSolidBrep::s_type("IfcManifoldSolidBrep");
