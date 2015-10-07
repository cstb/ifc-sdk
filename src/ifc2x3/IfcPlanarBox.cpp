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



#include <ifc2x3/IfcPlanarBox.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcPlanarExtent.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcPlanarBox::IfcPlanarBox(Step::Id id, Step::SPFData *args) : IfcPlanarExtent(id, args) {
    m_placement = NULL;
}

IfcPlanarBox::~IfcPlanarBox() {
}

bool IfcPlanarBox::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPlanarBox(this);
}

const std::string &IfcPlanarBox::type() const {
    return IfcPlanarBox::s_type.getName();
}

const Step::ClassType &IfcPlanarBox::getClassType() {
    return IfcPlanarBox::s_type;
}

const Step::ClassType &IfcPlanarBox::getType() const {
    return IfcPlanarBox::s_type;
}

bool IfcPlanarBox::isOfType(const Step::ClassType &t) const {
    return IfcPlanarBox::s_type == t ? true : IfcPlanarExtent::isOfType(t);
}

IfcAxis2Placement *IfcPlanarBox::getPlacement() {
    if (Step::BaseObject::inited()) {
        return m_placement.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcPlanarBox::getPlacement() const {
    IfcPlanarBox * deConstObject = const_cast< IfcPlanarBox * > (this);
    return deConstObject->getPlacement();
}

void IfcPlanarBox::setPlacement(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_placement = value;
}

void IfcPlanarBox::unsetPlacement() {
    m_placement = Step::getUnset(getPlacement());
}

bool IfcPlanarBox::testPlacement() const {
    return !Step::isUnset(getPlacement());
}

bool IfcPlanarBox::init() {
    bool status = IfcPlanarExtent::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_placement = NULL;
    }
    else {
        m_placement = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_placement->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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

void IfcPlanarBox::copy(const IfcPlanarBox &obj, const CopyOp &copyop) {
    IfcPlanarExtent::copy(obj, copyop);
    m_placement = new IfcAxis2Placement;
    m_placement->copy(*(obj.m_placement.get()), copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPlanarBox::s_type("IfcPlanarBox");
