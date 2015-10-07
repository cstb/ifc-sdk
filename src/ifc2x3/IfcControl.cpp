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



#include <ifc2x3/IfcControl.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObject.h>
#include <ifc2x3/IfcRelAssignsToControl.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcControl::IfcControl(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
}

IfcControl::~IfcControl() {
}

bool IfcControl::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcControl(this);
}

const std::string &IfcControl::type() const {
    return IfcControl::s_type.getName();
}

const Step::ClassType &IfcControl::getClassType() {
    return IfcControl::s_type;
}

const Step::ClassType &IfcControl::getType() const {
    return IfcControl::s_type;
}

bool IfcControl::isOfType(const Step::ClassType &t) const {
    return IfcControl::s_type == t ? true : IfcObject::isOfType(t);
}

Inverse_Set_IfcRelAssignsToControl_0_n &IfcControl::getControls() {
    if (Step::BaseObject::inited()) {
        return m_controls;
    }
    else {
        m_controls.setUnset(true);
        return m_controls;
    }
}

const Inverse_Set_IfcRelAssignsToControl_0_n &IfcControl::getControls() const {
    IfcControl * deConstObject = const_cast< IfcControl * > (this);
    return deConstObject->getControls();
}

bool IfcControl::testControls() const {
    return !m_controls.isUnset();
}

bool IfcControl::init() {
    bool status = IfcObject::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelAssignsToControl::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_controls.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_controls.insert(static_cast< IfcRelAssignsToControl * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcControl::copy(const IfcControl &obj, const CopyOp &copyop) {
    IfcObject::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcControl::s_type("IfcControl");
