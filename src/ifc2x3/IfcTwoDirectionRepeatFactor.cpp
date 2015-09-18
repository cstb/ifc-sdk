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



#include <ifc2x3/IfcTwoDirectionRepeatFactor.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOneDirectionRepeatFactor.h>
#include <ifc2x3/IfcVector.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTwoDirectionRepeatFactor::IfcTwoDirectionRepeatFactor(Step::Id id, Step::SPFData *args) : IfcOneDirectionRepeatFactor(id, args) {
    m_secondRepeatFactor = NULL;
}

IfcTwoDirectionRepeatFactor::~IfcTwoDirectionRepeatFactor() {
}

bool IfcTwoDirectionRepeatFactor::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTwoDirectionRepeatFactor(this);
}

const std::string &IfcTwoDirectionRepeatFactor::type() const {
    return IfcTwoDirectionRepeatFactor::s_type.getName();
}

const Step::ClassType &IfcTwoDirectionRepeatFactor::getClassType() {
    return IfcTwoDirectionRepeatFactor::s_type;
}

const Step::ClassType &IfcTwoDirectionRepeatFactor::getType() const {
    return IfcTwoDirectionRepeatFactor::s_type;
}

bool IfcTwoDirectionRepeatFactor::isOfType(const Step::ClassType &t) const {
    return IfcTwoDirectionRepeatFactor::s_type == t ? true : IfcOneDirectionRepeatFactor::isOfType(t);
}

IfcVector *IfcTwoDirectionRepeatFactor::getSecondRepeatFactor() {
    if (Step::BaseObject::inited()) {
        return m_secondRepeatFactor.get();
    }
    else {
        return NULL;
    }
}

const IfcVector *IfcTwoDirectionRepeatFactor::getSecondRepeatFactor() const {
    IfcTwoDirectionRepeatFactor * deConstObject = const_cast< IfcTwoDirectionRepeatFactor * > (this);
    return deConstObject->getSecondRepeatFactor();
}

void IfcTwoDirectionRepeatFactor::setSecondRepeatFactor(const Step::RefPtr< IfcVector > &value) {
    m_secondRepeatFactor = value;
}

void IfcTwoDirectionRepeatFactor::unsetSecondRepeatFactor() {
    m_secondRepeatFactor = Step::getUnset(getSecondRepeatFactor());
}

bool IfcTwoDirectionRepeatFactor::testSecondRepeatFactor() const {
    return !Step::isUnset(getSecondRepeatFactor());
}

bool IfcTwoDirectionRepeatFactor::init() {
    bool status = IfcOneDirectionRepeatFactor::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondRepeatFactor = NULL;
    }
    else {
        m_secondRepeatFactor = static_cast< IfcVector * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcTwoDirectionRepeatFactor::copy(const IfcTwoDirectionRepeatFactor &obj, const CopyOp &copyop) {
    IfcOneDirectionRepeatFactor::copy(obj, copyop);
    setSecondRepeatFactor((IfcVector*)copyop(obj.m_secondRepeatFactor.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTwoDirectionRepeatFactor::s_type("IfcTwoDirectionRepeatFactor");
