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

#include "ifc2x3/IfcAppliedValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAppliedValueRelationship.h"
#include "ifc2x3/IfcAppliedValueSelect.h"
#include "ifc2x3/IfcDateTimeSelect.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/IfcReferencesValueDocument.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcAppliedValue::IfcAppliedValue(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_appliedValue = NULL;
    m_unitBasis = NULL;
    m_applicableDate = NULL;
    m_fixedUntilDate = NULL;
}

IfcAppliedValue::~IfcAppliedValue() {
}

bool IfcAppliedValue::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAppliedValue(this);
}

const std::string &IfcAppliedValue::type() const {
    return IfcAppliedValue::s_type.getName();
}

const Step::ClassType &IfcAppliedValue::getClassType() {
    return IfcAppliedValue::s_type;
}

const Step::ClassType &IfcAppliedValue::getType() const {
    return IfcAppliedValue::s_type;
}

bool IfcAppliedValue::isOfType(const Step::ClassType &t) const {
    return IfcAppliedValue::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcAppliedValue::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcAppliedValue::getName() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getName();
}

void IfcAppliedValue::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcAppliedValue::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcAppliedValue::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcAppliedValue::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcAppliedValue::getDescription() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getDescription();
}

void IfcAppliedValue::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcAppliedValue::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcAppliedValue::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcAppliedValueSelect *IfcAppliedValue::getAppliedValue() {
    if (Step::BaseObject::inited()) {
        return m_appliedValue.get();
    }
    else {
        return NULL;
    }
}

const IfcAppliedValueSelect *IfcAppliedValue::getAppliedValue() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getAppliedValue();
}

void IfcAppliedValue::setAppliedValue(const Step::RefPtr< IfcAppliedValueSelect > &value) {
    m_appliedValue = value;
}

void IfcAppliedValue::unsetAppliedValue() {
    m_appliedValue = Step::getUnset(getAppliedValue());
}

bool IfcAppliedValue::testAppliedValue() const {
    return !Step::isUnset(getAppliedValue());
}

IfcMeasureWithUnit *IfcAppliedValue::getUnitBasis() {
    if (Step::BaseObject::inited()) {
        return m_unitBasis.get();
    }
    else {
        return NULL;
    }
}

const IfcMeasureWithUnit *IfcAppliedValue::getUnitBasis() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getUnitBasis();
}

void IfcAppliedValue::setUnitBasis(const Step::RefPtr< IfcMeasureWithUnit > &value) {
    m_unitBasis = value;
}

void IfcAppliedValue::unsetUnitBasis() {
    m_unitBasis = Step::getUnset(getUnitBasis());
}

bool IfcAppliedValue::testUnitBasis() const {
    return !Step::isUnset(getUnitBasis());
}

IfcDateTimeSelect *IfcAppliedValue::getApplicableDate() {
    if (Step::BaseObject::inited()) {
        return m_applicableDate.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcAppliedValue::getApplicableDate() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getApplicableDate();
}

void IfcAppliedValue::setApplicableDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_applicableDate = value;
}

void IfcAppliedValue::unsetApplicableDate() {
    m_applicableDate = Step::getUnset(getApplicableDate());
}

bool IfcAppliedValue::testApplicableDate() const {
    return !Step::isUnset(getApplicableDate());
}

IfcDateTimeSelect *IfcAppliedValue::getFixedUntilDate() {
    if (Step::BaseObject::inited()) {
        return m_fixedUntilDate.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcAppliedValue::getFixedUntilDate() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getFixedUntilDate();
}

void IfcAppliedValue::setFixedUntilDate(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_fixedUntilDate = value;
}

void IfcAppliedValue::unsetFixedUntilDate() {
    m_fixedUntilDate = Step::getUnset(getFixedUntilDate());
}

bool IfcAppliedValue::testFixedUntilDate() const {
    return !Step::isUnset(getFixedUntilDate());
}

Inverse_Set_IfcReferencesValueDocument_0_n &IfcAppliedValue::getValuesReferenced() {
    if (Step::BaseObject::inited()) {
        return m_valuesReferenced;
    }
    else {
        m_valuesReferenced.setUnset(true);
        return m_valuesReferenced;
    }
}

const Inverse_Set_IfcReferencesValueDocument_0_n &IfcAppliedValue::getValuesReferenced() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getValuesReferenced();
}

bool IfcAppliedValue::testValuesReferenced() const {
    return !Step::isUnset(getValuesReferenced());
}

Inverse_Set_IfcAppliedValueRelationship_0_n &IfcAppliedValue::getValueOfComponents() {
    if (Step::BaseObject::inited()) {
        return m_valueOfComponents;
    }
    else {
        m_valueOfComponents.setUnset(true);
        return m_valueOfComponents;
    }
}

const Inverse_Set_IfcAppliedValueRelationship_0_n &IfcAppliedValue::getValueOfComponents() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getValueOfComponents();
}

bool IfcAppliedValue::testValueOfComponents() const {
    return !Step::isUnset(getValueOfComponents());
}

Inverse_Set_IfcAppliedValueRelationship_0_n &IfcAppliedValue::getIsComponentIn() {
    if (Step::BaseObject::inited()) {
        return m_isComponentIn;
    }
    else {
        m_isComponentIn.setUnset(true);
        return m_isComponentIn;
    }
}

const Inverse_Set_IfcAppliedValueRelationship_0_n &IfcAppliedValue::getIsComponentIn() const {
    IfcAppliedValue * deConstObject = const_cast< IfcAppliedValue * > (this);
    return deConstObject->getIsComponentIn();
}

bool IfcAppliedValue::testIsComponentIn() const {
    return !Step::isUnset(getIsComponentIn());
}

bool IfcAppliedValue::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_appliedValue = NULL;
    }
    else {
        m_appliedValue = new IfcAppliedValueSelect;
        if (arg[0] == '#') {
            m_appliedValue->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCRATIOMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_appliedValue->setIfcRatioMeasure(tmp_attr1);
                }
                if (type1 == "IFCMONETARYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_appliedValue->setIfcMonetaryMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unitBasis = NULL;
    }
    else {
        m_unitBasis = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicableDate = NULL;
    }
    else {
        m_applicableDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_applicableDate->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fixedUntilDate = NULL;
    }
    else {
        m_fixedUntilDate = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_fixedUntilDate->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    inverses = m_args->getInverses(IfcReferencesValueDocument::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_valuesReferenced.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_valuesReferenced.insert(static_cast< IfcReferencesValueDocument * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcAppliedValueRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_valueOfComponents.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_valueOfComponents.insert(static_cast< IfcAppliedValueRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcAppliedValueRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_isComponentIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isComponentIn.insert(static_cast< IfcAppliedValueRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcAppliedValue::copy(const IfcAppliedValue &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    m_appliedValue = new IfcAppliedValueSelect;
    m_appliedValue->copy(*(obj.m_appliedValue.get()), copyop);
    setUnitBasis((IfcMeasureWithUnit*)copyop(obj.m_unitBasis.get()));
    m_applicableDate = new IfcDateTimeSelect;
    m_applicableDate->copy(*(obj.m_applicableDate.get()), copyop);
    m_fixedUntilDate = new IfcDateTimeSelect;
    m_fixedUntilDate->copy(*(obj.m_fixedUntilDate.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAppliedValue::s_type("IfcAppliedValue");
