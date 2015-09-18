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



#include <ifc2x3/IfcStructuralLoadTemperature.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcStructuralLoadStatic.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStructuralLoadTemperature::IfcStructuralLoadTemperature(Step::Id id, Step::SPFData *args) : IfcStructuralLoadStatic(id, args) {
    m_deltaT_Constant = Step::getUnset(m_deltaT_Constant);
    m_deltaT_Y = Step::getUnset(m_deltaT_Y);
    m_deltaT_Z = Step::getUnset(m_deltaT_Z);
}

IfcStructuralLoadTemperature::~IfcStructuralLoadTemperature() {
}

bool IfcStructuralLoadTemperature::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralLoadTemperature(this);
}

const std::string &IfcStructuralLoadTemperature::type() const {
    return IfcStructuralLoadTemperature::s_type.getName();
}

const Step::ClassType &IfcStructuralLoadTemperature::getClassType() {
    return IfcStructuralLoadTemperature::s_type;
}

const Step::ClassType &IfcStructuralLoadTemperature::getType() const {
    return IfcStructuralLoadTemperature::s_type;
}

bool IfcStructuralLoadTemperature::isOfType(const Step::ClassType &t) const {
    return IfcStructuralLoadTemperature::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Constant() {
    if (Step::BaseObject::inited()) {
        return m_deltaT_Constant;
    }
    else {
        return Step::getUnset(m_deltaT_Constant);
    }
}

const IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Constant() const {
    IfcStructuralLoadTemperature * deConstObject = const_cast< IfcStructuralLoadTemperature * > (this);
    return deConstObject->getDeltaT_Constant();
}

void IfcStructuralLoadTemperature::setDeltaT_Constant(IfcThermodynamicTemperatureMeasure value) {
    m_deltaT_Constant = value;
}

void IfcStructuralLoadTemperature::unsetDeltaT_Constant() {
    m_deltaT_Constant = Step::getUnset(getDeltaT_Constant());
}

bool IfcStructuralLoadTemperature::testDeltaT_Constant() const {
    return !Step::isUnset(getDeltaT_Constant());
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Y() {
    if (Step::BaseObject::inited()) {
        return m_deltaT_Y;
    }
    else {
        return Step::getUnset(m_deltaT_Y);
    }
}

const IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Y() const {
    IfcStructuralLoadTemperature * deConstObject = const_cast< IfcStructuralLoadTemperature * > (this);
    return deConstObject->getDeltaT_Y();
}

void IfcStructuralLoadTemperature::setDeltaT_Y(IfcThermodynamicTemperatureMeasure value) {
    m_deltaT_Y = value;
}

void IfcStructuralLoadTemperature::unsetDeltaT_Y() {
    m_deltaT_Y = Step::getUnset(getDeltaT_Y());
}

bool IfcStructuralLoadTemperature::testDeltaT_Y() const {
    return !Step::isUnset(getDeltaT_Y());
}

IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Z() {
    if (Step::BaseObject::inited()) {
        return m_deltaT_Z;
    }
    else {
        return Step::getUnset(m_deltaT_Z);
    }
}

const IfcThermodynamicTemperatureMeasure IfcStructuralLoadTemperature::getDeltaT_Z() const {
    IfcStructuralLoadTemperature * deConstObject = const_cast< IfcStructuralLoadTemperature * > (this);
    return deConstObject->getDeltaT_Z();
}

void IfcStructuralLoadTemperature::setDeltaT_Z(IfcThermodynamicTemperatureMeasure value) {
    m_deltaT_Z = value;
}

void IfcStructuralLoadTemperature::unsetDeltaT_Z() {
    m_deltaT_Z = Step::getUnset(getDeltaT_Z());
}

bool IfcStructuralLoadTemperature::testDeltaT_Z() const {
    return !Step::isUnset(getDeltaT_Z());
}

bool IfcStructuralLoadTemperature::init() {
    bool status = IfcStructuralLoadStatic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_deltaT_Constant = Step::getUnset(m_deltaT_Constant);
    }
    else {
        m_deltaT_Constant = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_deltaT_Y = Step::getUnset(m_deltaT_Y);
    }
    else {
        m_deltaT_Y = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_deltaT_Z = Step::getUnset(m_deltaT_Z);
    }
    else {
        m_deltaT_Z = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadTemperature::copy(const IfcStructuralLoadTemperature &obj, const CopyOp &copyop) {
    IfcStructuralLoadStatic::copy(obj, copyop);
    setDeltaT_Constant(obj.m_deltaT_Constant);
    setDeltaT_Y(obj.m_deltaT_Y);
    setDeltaT_Z(obj.m_deltaT_Z);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStructuralLoadTemperature::s_type("IfcStructuralLoadTemperature");
