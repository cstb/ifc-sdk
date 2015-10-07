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



#include <ifc2x3/IfcAppliedValueSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMeasureWithUnit.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcAppliedValueSelect::IfcAppliedValueSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcAppliedValueSelect::IfcAppliedValueSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcAppliedValueSelect::~IfcAppliedValueSelect() {
    deleteUnion();
}

bool IfcAppliedValueSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAppliedValueSelect(this);
}

bool IfcAppliedValueSelect::init() {
    return false;
}

const std::string &IfcAppliedValueSelect::type() const {
    return IfcAppliedValueSelect::s_type.getName();
}

const Step::ClassType &IfcAppliedValueSelect::getClassType() {
    return IfcAppliedValueSelect::s_type;
}

const Step::ClassType &IfcAppliedValueSelect::getType() const {
    return IfcAppliedValueSelect::s_type;
}

bool IfcAppliedValueSelect::isOfType(const Step::ClassType &t) const {
    return IfcAppliedValueSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcAppliedValueSelect::copy(const IfcAppliedValueSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCRATIOMEASURE:
        setIfcRatioMeasure(obj.m_IfcAppliedValueSelect_union.m_IfcRatioMeasure);
        break;
    case IFCMEASUREWITHUNIT:
        setIfcMeasureWithUnit((IfcMeasureWithUnit *) (copyop(obj.m_IfcAppliedValueSelect_union.m_IfcMeasureWithUnit)));
        break;
    case IFCMONETARYMEASURE:
        setIfcMonetaryMeasure(obj.m_IfcAppliedValueSelect_union.m_IfcMonetaryMeasure);
        break;
    default:
        break;
    }
}

std::string IfcAppliedValueSelect::currentTypeName() const {
    switch(m_type) {
    case IFCRATIOMEASURE:
        return "IfcRatioMeasure";
        break;
    case IFCMEASUREWITHUNIT:
        return "IfcMeasureWithUnit";
        break;
    case IFCMONETARYMEASURE:
        return "IfcMonetaryMeasure";
        break;
    default:
        return "UNSET";
    }
}

IfcAppliedValueSelect::IfcAppliedValueSelect_select IfcAppliedValueSelect::currentType() const {
    return m_type;
}

void IfcAppliedValueSelect::deleteUnion() {
    switch(m_type) {
    case IFCMEASUREWITHUNIT:
        m_IfcAppliedValueSelect_union.m_IfcMeasureWithUnit->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcRatioMeasure IfcAppliedValueSelect::getIfcRatioMeasure() const {
    if (m_type == IFCRATIOMEASURE) {
        return m_IfcAppliedValueSelect_union.m_IfcRatioMeasure;
    }
    else {
        return Step::getUnset(m_IfcAppliedValueSelect_union.m_IfcRatioMeasure);
    }
}

void IfcAppliedValueSelect::setIfcRatioMeasure(IfcRatioMeasure value) {
    m_IfcAppliedValueSelect_union.m_IfcRatioMeasure = value;
    m_type = IFCRATIOMEASURE;
}

IfcMeasureWithUnit *IfcAppliedValueSelect::getIfcMeasureWithUnit() const {
    if (m_type == IFCMEASUREWITHUNIT) {
        return m_IfcAppliedValueSelect_union.m_IfcMeasureWithUnit;
    }
    else {
        return NULL;
    }
}

void IfcAppliedValueSelect::setIfcMeasureWithUnit(IfcMeasureWithUnit *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcAppliedValueSelect_union.m_IfcMeasureWithUnit = value;
    if (value) {
        value->ref();
        m_type = IFCMEASUREWITHUNIT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMEASUREWITHUNIT;
}

IfcMonetaryMeasure IfcAppliedValueSelect::getIfcMonetaryMeasure() const {
    if (m_type == IFCMONETARYMEASURE) {
        return m_IfcAppliedValueSelect_union.m_IfcMonetaryMeasure;
    }
    else {
        return Step::getUnset(m_IfcAppliedValueSelect_union.m_IfcMonetaryMeasure);
    }
}

void IfcAppliedValueSelect::setIfcMonetaryMeasure(IfcMonetaryMeasure value) {
    m_IfcAppliedValueSelect_union.m_IfcMonetaryMeasure = value;
    m_type = IFCMONETARYMEASURE;
}

void IfcAppliedValueSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcMeasureWithUnit::getClassType())) {
        setIfcMeasureWithUnit(static_cast< IfcMeasureWithUnit* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcAppliedValueSelect::s_type("IfcAppliedValueSelect");
