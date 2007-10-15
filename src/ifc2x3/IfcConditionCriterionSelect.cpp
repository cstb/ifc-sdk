/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include "ifc2x3/IfcConditionCriterionSelect.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcConditionCriterionSelect::IfcConditionCriterionSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcConditionCriterionSelect::IfcConditionCriterionSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcConditionCriterionSelect::~IfcConditionCriterionSelect() {
    deleteUnion();
}

bool IfcConditionCriterionSelect::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcConditionCriterionSelect(this);
}

bool IfcConditionCriterionSelect::init() {
    return false;
}

const std::string &IfcConditionCriterionSelect::type() {
    return IfcConditionCriterionSelect::s_type.getName();
}

Step::ClassType IfcConditionCriterionSelect::getClassType() {
    return IfcConditionCriterionSelect::s_type;
}

Step::ClassType IfcConditionCriterionSelect::getType() const {
    return IfcConditionCriterionSelect::s_type;
}

bool IfcConditionCriterionSelect::isOfType(Step::ClassType t) {
    return IfcConditionCriterionSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcConditionCriterionSelect::copy(const IfcConditionCriterionSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCLABEL:
        setIfcLabel(*obj.m_IfcConditionCriterionSelect_union.m_IfcLabel);
        break;
    case IFCMEASUREWITHUNIT:
        setIfcMeasureWithUnit(copyop(obj.m_IfcConditionCriterionSelect_union.m_IfcMeasureWithUnit));
        break;
        }
}

char *IfcConditionCriterionSelect::currentTypeName() {
    switch(m_type) {
    case IFCLABEL:
        return "IfcLabel";
        break;
    case IFCMEASUREWITHUNIT:
        return "IfcMeasureWithUnit";
        break;
    default:
        return "UNSET";
    }
}

IfcConditionCriterionSelect::IfcConditionCriterionSelect_select IfcConditionCriterionSelect::currentType() {
    return m_type;
}

void IfcConditionCriterionSelect::deleteUnion() {
    switch(m_type) {
    case IFCLABEL:
        delete m_IfcConditionCriterionSelect_union.m_IfcLabel;
        break;
    case IFCMEASUREWITHUNIT:
        m_IfcConditionCriterionSelect_union.m_IfcMeasureWithUnit->unref();
        break;
        }
    m_type = UNSET;
}

IfcLabel IfcConditionCriterionSelect::getIfcLabel() {
    return *m_IfcConditionCriterionSelect_union.m_IfcLabel;
}

void IfcConditionCriterionSelect::setIfcLabel(const IfcLabel &value) {
    deleteUnion();
    m_IfcConditionCriterionSelect_union.m_IfcLabel = new IfcLabel(value);
    m_type = IFCLABEL;
}

IfcMeasureWithUnit *IfcConditionCriterionSelect::getIfcMeasureWithUnit() {
    return m_IfcConditionCriterionSelect_union.m_IfcMeasureWithUnit;
}

void IfcConditionCriterionSelect::setIfcMeasureWithUnit(IfcMeasureWithUnit *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcConditionCriterionSelect_union.m_IfcMeasureWithUnit = value;
    if (value) {
        value->ref();
        m_type = IFCMEASUREWITHUNIT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCMEASUREWITHUNIT;
}

void IfcConditionCriterionSelect::set(Step::BaseObject *v) {
    if (v->isOfType(IfcMeasureWithUnit::getClassType())) {
        setIfcMeasureWithUnit(static_cast< IfcMeasureWithUnit* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcConditionCriterionSelect::s_type("IfcConditionCriterionSelect");
