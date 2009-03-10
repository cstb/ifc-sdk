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
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcConversionBasedUnit.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcMeasureWithUnit.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcConversionBasedUnit::IfcConversionBasedUnit(Step::Id id, Step::SPFData *args) : IfcNamedUnit(id, args) {
    m_name = Step::getUnset(m_name);
    m_conversionFactor = NULL;
}

IfcConversionBasedUnit::~IfcConversionBasedUnit() {
}

bool IfcConversionBasedUnit::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConversionBasedUnit(this);
}

const std::string &IfcConversionBasedUnit::type() const {
    return IfcConversionBasedUnit::s_type.getName();
}

const Step::ClassType &IfcConversionBasedUnit::getClassType() {
    return IfcConversionBasedUnit::s_type;
}

const Step::ClassType &IfcConversionBasedUnit::getType() const {
    return IfcConversionBasedUnit::s_type;
}

bool IfcConversionBasedUnit::isOfType(const Step::ClassType &t) const {
    return IfcConversionBasedUnit::s_type == t ? true : IfcNamedUnit::isOfType(t);
}

IfcLabel IfcConversionBasedUnit::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcConversionBasedUnit::getName() const {
    IfcConversionBasedUnit * deConstObject = const_cast< IfcConversionBasedUnit * > (this);
    return deConstObject->getName();
}

void IfcConversionBasedUnit::setName(const IfcLabel &value) {
    m_name = value;
}

IfcMeasureWithUnit *IfcConversionBasedUnit::getConversionFactor() {
    if (Step::BaseObject::inited()) {
        return m_conversionFactor.get();
    }
    else {
        return NULL;
    }
}

const IfcMeasureWithUnit *IfcConversionBasedUnit::getConversionFactor() const {
    IfcConversionBasedUnit * deConstObject = const_cast< IfcConversionBasedUnit * > (this);
    return deConstObject->getConversionFactor();
}

void IfcConversionBasedUnit::setConversionFactor(const Step::RefPtr< IfcMeasureWithUnit > &value) {
    m_conversionFactor = value;
}

bool IfcConversionBasedUnit::init() {
    bool status = IfcNamedUnit::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_conversionFactor = NULL;
    }
    else {
        m_conversionFactor = static_cast< IfcMeasureWithUnit * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcConversionBasedUnit::copy(const IfcConversionBasedUnit &obj, const CopyOp &copyop) {
    IfcNamedUnit::copy(obj, copyop);
    setName(obj.m_name);
    setConversionFactor((IfcMeasureWithUnit*)copyop(obj.m_conversionFactor.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConversionBasedUnit::s_type("IfcConversionBasedUnit");
