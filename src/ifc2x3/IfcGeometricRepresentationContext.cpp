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



#include <ifc2x3/IfcGeometricRepresentationContext.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAxis2Placement.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcGeometricRepresentationSubContext.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcGeometricRepresentationContext::IfcGeometricRepresentationContext(Step::Id id, Step::SPFData *args) : IfcRepresentationContext(id, args) {
    m_coordinateSpaceDimension = Step::getUnset(m_coordinateSpaceDimension);
    m_precision = Step::getUnset(m_precision);
    m_worldCoordinateSystem = new IfcAxis2Placement;
    m_trueNorth = NULL;
}

IfcGeometricRepresentationContext::~IfcGeometricRepresentationContext() {
}

bool IfcGeometricRepresentationContext::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcGeometricRepresentationContext(this);
}

const std::string &IfcGeometricRepresentationContext::type() const {
    return IfcGeometricRepresentationContext::s_type.getName();
}

const Step::ClassType &IfcGeometricRepresentationContext::getClassType() {
    return IfcGeometricRepresentationContext::s_type;
}

const Step::ClassType &IfcGeometricRepresentationContext::getType() const {
    return IfcGeometricRepresentationContext::s_type;
}

bool IfcGeometricRepresentationContext::isOfType(const Step::ClassType &t) const {
    return IfcGeometricRepresentationContext::s_type == t ? true : IfcRepresentationContext::isOfType(t);
}

IfcDimensionCount IfcGeometricRepresentationContext::getCoordinateSpaceDimension() {
    if (Step::BaseObject::inited()) {
        return m_coordinateSpaceDimension;
    }
    else {
        return Step::getUnset(m_coordinateSpaceDimension);
    }
}

const IfcDimensionCount IfcGeometricRepresentationContext::getCoordinateSpaceDimension() const {
    IfcGeometricRepresentationContext * deConstObject = const_cast< IfcGeometricRepresentationContext * > (this);
    return deConstObject->getCoordinateSpaceDimension();
}

void IfcGeometricRepresentationContext::setCoordinateSpaceDimension(IfcDimensionCount value) {
    m_coordinateSpaceDimension = value;
}

void IfcGeometricRepresentationContext::unsetCoordinateSpaceDimension() {
    m_coordinateSpaceDimension = Step::getUnset(getCoordinateSpaceDimension());
}

bool IfcGeometricRepresentationContext::testCoordinateSpaceDimension() const {
    return !Step::isUnset(getCoordinateSpaceDimension());
}

Step::Real IfcGeometricRepresentationContext::getPrecision() {
    if (Step::BaseObject::inited()) {
        return m_precision;
    }
    else {
        return Step::getUnset(m_precision);
    }
}

const Step::Real IfcGeometricRepresentationContext::getPrecision() const {
    IfcGeometricRepresentationContext * deConstObject = const_cast< IfcGeometricRepresentationContext * > (this);
    return deConstObject->getPrecision();
}

void IfcGeometricRepresentationContext::setPrecision(Step::Real value) {
    m_precision = value;
}

void IfcGeometricRepresentationContext::unsetPrecision() {
    m_precision = Step::getUnset(getPrecision());
}

bool IfcGeometricRepresentationContext::testPrecision() const {
    return !Step::isUnset(getPrecision());
}

IfcAxis2Placement *IfcGeometricRepresentationContext::getWorldCoordinateSystem() {
    if (Step::BaseObject::inited()) {
        return m_worldCoordinateSystem.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement *IfcGeometricRepresentationContext::getWorldCoordinateSystem() const {
    IfcGeometricRepresentationContext * deConstObject = const_cast< IfcGeometricRepresentationContext * > (this);
    return deConstObject->getWorldCoordinateSystem();
}

void IfcGeometricRepresentationContext::setWorldCoordinateSystem(const Step::RefPtr< IfcAxis2Placement > &value) {
    m_worldCoordinateSystem = value;
}

void IfcGeometricRepresentationContext::unsetWorldCoordinateSystem() {
    m_worldCoordinateSystem = Step::getUnset(getWorldCoordinateSystem());
}

bool IfcGeometricRepresentationContext::testWorldCoordinateSystem() const {
    return !Step::isUnset(getWorldCoordinateSystem());
}

IfcDirection *IfcGeometricRepresentationContext::getTrueNorth() {
    if (Step::BaseObject::inited()) {
        return m_trueNorth.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcGeometricRepresentationContext::getTrueNorth() const {
    IfcGeometricRepresentationContext * deConstObject = const_cast< IfcGeometricRepresentationContext * > (this);
    return deConstObject->getTrueNorth();
}

void IfcGeometricRepresentationContext::setTrueNorth(const Step::RefPtr< IfcDirection > &value) {
    m_trueNorth = value;
}

void IfcGeometricRepresentationContext::unsetTrueNorth() {
    m_trueNorth = Step::getUnset(getTrueNorth());
}

bool IfcGeometricRepresentationContext::testTrueNorth() const {
    return !Step::isUnset(getTrueNorth());
}

Inverse_Set_IfcGeometricRepresentationSubContext_0_n &IfcGeometricRepresentationContext::getHasSubContexts() {
    if (Step::BaseObject::inited()) {
        return m_hasSubContexts;
    }
    else {
        m_hasSubContexts.setUnset(true);
        return m_hasSubContexts;
    }
}

const Inverse_Set_IfcGeometricRepresentationSubContext_0_n &IfcGeometricRepresentationContext::getHasSubContexts() const {
    IfcGeometricRepresentationContext * deConstObject = const_cast< IfcGeometricRepresentationContext * > (this);
    return deConstObject->getHasSubContexts();
}

bool IfcGeometricRepresentationContext::testHasSubContexts() const {
    return !m_hasSubContexts.isUnset();
}

bool IfcGeometricRepresentationContext::init() {
    bool status = IfcRepresentationContext::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_coordinateSpaceDimension = Step::getUnset(m_coordinateSpaceDimension);
    }
    else {
        m_coordinateSpaceDimension = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_precision = Step::getUnset(m_precision);
    }
    else {
        m_precision = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_worldCoordinateSystem = new IfcAxis2Placement;
    }
    else {
        m_worldCoordinateSystem = new IfcAxis2Placement;
        if (arg[0] == '#') {
            m_worldCoordinateSystem->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_trueNorth = NULL;
    }
    else {
        m_trueNorth = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    inverses = m_args->getInverses(IfcGeometricRepresentationSubContext::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_hasSubContexts.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasSubContexts.insert(static_cast< IfcGeometricRepresentationSubContext * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcGeometricRepresentationContext::copy(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop) {
    IfcRepresentationContext::copy(obj, copyop);
    setCoordinateSpaceDimension(obj.m_coordinateSpaceDimension);
    setPrecision(obj.m_precision);
    m_worldCoordinateSystem = new IfcAxis2Placement;
    m_worldCoordinateSystem->copy(*(obj.m_worldCoordinateSystem.get()), copyop);
    setTrueNorth((IfcDirection*)copyop(obj.m_trueNorth.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcGeometricRepresentationContext::s_type("IfcGeometricRepresentationContext");
