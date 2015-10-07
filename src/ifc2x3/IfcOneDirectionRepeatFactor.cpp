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



#include <ifc2x3/IfcOneDirectionRepeatFactor.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
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

IfcOneDirectionRepeatFactor::IfcOneDirectionRepeatFactor(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_repeatFactor = NULL;
}

IfcOneDirectionRepeatFactor::~IfcOneDirectionRepeatFactor() {
}

bool IfcOneDirectionRepeatFactor::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOneDirectionRepeatFactor(this);
}

const std::string &IfcOneDirectionRepeatFactor::type() const {
    return IfcOneDirectionRepeatFactor::s_type.getName();
}

const Step::ClassType &IfcOneDirectionRepeatFactor::getClassType() {
    return IfcOneDirectionRepeatFactor::s_type;
}

const Step::ClassType &IfcOneDirectionRepeatFactor::getType() const {
    return IfcOneDirectionRepeatFactor::s_type;
}

bool IfcOneDirectionRepeatFactor::isOfType(const Step::ClassType &t) const {
    return IfcOneDirectionRepeatFactor::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcVector *IfcOneDirectionRepeatFactor::getRepeatFactor() {
    if (Step::BaseObject::inited()) {
        return m_repeatFactor.get();
    }
    else {
        return NULL;
    }
}

const IfcVector *IfcOneDirectionRepeatFactor::getRepeatFactor() const {
    IfcOneDirectionRepeatFactor * deConstObject = const_cast< IfcOneDirectionRepeatFactor * > (this);
    return deConstObject->getRepeatFactor();
}

void IfcOneDirectionRepeatFactor::setRepeatFactor(const Step::RefPtr< IfcVector > &value) {
    m_repeatFactor = value;
}

void IfcOneDirectionRepeatFactor::unsetRepeatFactor() {
    m_repeatFactor = Step::getUnset(getRepeatFactor());
}

bool IfcOneDirectionRepeatFactor::testRepeatFactor() const {
    return !Step::isUnset(getRepeatFactor());
}

bool IfcOneDirectionRepeatFactor::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_repeatFactor = NULL;
    }
    else {
        m_repeatFactor = static_cast< IfcVector * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcOneDirectionRepeatFactor::copy(const IfcOneDirectionRepeatFactor &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setRepeatFactor((IfcVector*)copyop(obj.m_repeatFactor.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOneDirectionRepeatFactor::s_type("IfcOneDirectionRepeatFactor");
