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

#include "ifc2x3/IfcCostValue.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAppliedValue.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCostValue::IfcCostValue(Step::Id id, Step::SPFData *args) : IfcAppliedValue(id, args) {
    m_costType = Step::getUnset(m_costType);
    m_condition = Step::getUnset(m_condition);
}

IfcCostValue::~IfcCostValue() {
}

bool IfcCostValue::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCostValue(this);
}

const std::string &IfcCostValue::type() {
    return IfcCostValue::s_type.getName();
}

Step::ClassType IfcCostValue::getClassType() {
    return IfcCostValue::s_type;
}

Step::ClassType IfcCostValue::getType() const {
    return IfcCostValue::s_type;
}

bool IfcCostValue::isOfType(Step::ClassType t) {
    return IfcCostValue::s_type == t ? true : IfcAppliedValue::isOfType(t);
}

IfcLabel IfcCostValue::getCostType() {
    if (Step::BaseObject::inited()) {
        return m_costType;
    }
    else {
        return Step::getUnset(m_costType);
    }
}

void IfcCostValue::setCostType(const IfcLabel &value) {
    m_costType = value;
}

IfcText IfcCostValue::getCondition() {
    if (Step::BaseObject::inited()) {
        return m_condition;
    }
    else {
        return Step::getUnset(m_condition);
    }
}

void IfcCostValue::setCondition(const IfcText &value) {
    m_condition = value;
}

void IfcCostValue::release() {
    IfcAppliedValue::release();
}

bool IfcCostValue::init() {
    bool status = IfcAppliedValue::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_costType = Step::getUnset(m_costType);
    }
    else {
        m_costType = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_condition = Step::getUnset(m_condition);
    }
    else {
        m_condition = Step::spfToString(arg);
    }
    return true;
}

void IfcCostValue::copy(const IfcCostValue &obj, const CopyOp &copyop) {
    IfcAppliedValue::copy(obj, copyop);
    setCostType(obj.m_costType);
    setCondition(obj.m_condition);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCostValue::s_type("IfcCostValue");
