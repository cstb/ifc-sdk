/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcAppliedValueSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

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
    if (v->isOfType(IfcMeasureWithUnit::getClassType())) {
        setIfcMeasureWithUnit(static_cast< IfcMeasureWithUnit* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcAppliedValueSelect::s_type("IfcAppliedValueSelect");
