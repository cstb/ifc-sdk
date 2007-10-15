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

#include "ifc2x3/IfcCurrencyRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDateAndTime.h"
#include "ifc2x3/IfcLibraryInformation.h"
#include "ifc2x3/IfcMonetaryUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCurrencyRelationship::IfcCurrencyRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatingMonetaryUnit = NULL;
    m_relatedMonetaryUnit = NULL;
    m_exchangeRate = Step::getUnset(m_exchangeRate);
    m_rateDateTime = NULL;
    m_rateSource = NULL;
}

IfcCurrencyRelationship::~IfcCurrencyRelationship() {
}

bool IfcCurrencyRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCurrencyRelationship(this);
}

const std::string &IfcCurrencyRelationship::type() {
    return IfcCurrencyRelationship::s_type.getName();
}

Step::ClassType IfcCurrencyRelationship::getClassType() {
    return IfcCurrencyRelationship::s_type;
}

Step::ClassType IfcCurrencyRelationship::getType() const {
    return IfcCurrencyRelationship::s_type;
}

bool IfcCurrencyRelationship::isOfType(Step::ClassType t) {
    return IfcCurrencyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcMonetaryUnit *IfcCurrencyRelationship::getRelatingMonetaryUnit() {
    if (Step::BaseObject::inited()) {
        return m_relatingMonetaryUnit.get();
    }
    else {
        return NULL;
    }
}

void IfcCurrencyRelationship::setRelatingMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value) {
    m_relatingMonetaryUnit = value;
}

IfcMonetaryUnit *IfcCurrencyRelationship::getRelatedMonetaryUnit() {
    if (Step::BaseObject::inited()) {
        return m_relatedMonetaryUnit.get();
    }
    else {
        return NULL;
    }
}

void IfcCurrencyRelationship::setRelatedMonetaryUnit(const Step::RefPtr< IfcMonetaryUnit > &value) {
    m_relatedMonetaryUnit = value;
}

IfcPositiveRatioMeasure IfcCurrencyRelationship::getExchangeRate() {
    if (Step::BaseObject::inited()) {
        return m_exchangeRate;
    }
    else {
        return Step::getUnset(m_exchangeRate);
    }
}

void IfcCurrencyRelationship::setExchangeRate(IfcPositiveRatioMeasure value) {
    m_exchangeRate = value;
}

IfcDateAndTime *IfcCurrencyRelationship::getRateDateTime() {
    if (Step::BaseObject::inited()) {
        return m_rateDateTime.get();
    }
    else {
        return NULL;
    }
}

void IfcCurrencyRelationship::setRateDateTime(const Step::RefPtr< IfcDateAndTime > &value) {
    m_rateDateTime = value;
}

IfcLibraryInformation *IfcCurrencyRelationship::getRateSource() {
    if (Step::BaseObject::inited()) {
        return m_rateSource.get();
    }
    else {
        return NULL;
    }
}

void IfcCurrencyRelationship::setRateSource(const Step::RefPtr< IfcLibraryInformation > &value) {
    m_rateSource = value;
}

void IfcCurrencyRelationship::release() {
    m_relatingMonetaryUnit.release();
    m_relatedMonetaryUnit.release();
    m_rateDateTime.release();
    m_rateSource.release();
}

bool IfcCurrencyRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingMonetaryUnit = NULL;
    }
    else {
        m_relatingMonetaryUnit = static_cast< IfcMonetaryUnit * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedMonetaryUnit = NULL;
    }
    else {
        m_relatedMonetaryUnit = static_cast< IfcMonetaryUnit * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_exchangeRate = Step::getUnset(m_exchangeRate);
    }
    else {
        m_exchangeRate = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rateDateTime = NULL;
    }
    else {
        m_rateDateTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rateSource = NULL;
    }
    else {
        m_rateSource = static_cast< IfcLibraryInformation * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcCurrencyRelationship::copy(const IfcCurrencyRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRelatingMonetaryUnit(copyop(obj.m_relatingMonetaryUnit.get()));
    setRelatedMonetaryUnit(copyop(obj.m_relatedMonetaryUnit.get()));
    setExchangeRate(obj.m_exchangeRate);
    setRateDateTime(copyop(obj.m_rateDateTime.get()));
    setRateSource(copyop(obj.m_rateSource.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurrencyRelationship::s_type("IfcCurrencyRelationship");
