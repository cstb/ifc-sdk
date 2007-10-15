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

#include "ifc2x3/IfcQuantityWeight.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPhysicalSimpleQuantity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcQuantityWeight::IfcQuantityWeight(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_weightValue = Step::getUnset(m_weightValue);
}

IfcQuantityWeight::~IfcQuantityWeight() {
}

bool IfcQuantityWeight::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcQuantityWeight(this);
}

const std::string &IfcQuantityWeight::type() {
    return IfcQuantityWeight::s_type.getName();
}

Step::ClassType IfcQuantityWeight::getClassType() {
    return IfcQuantityWeight::s_type;
}

Step::ClassType IfcQuantityWeight::getType() const {
    return IfcQuantityWeight::s_type;
}

bool IfcQuantityWeight::isOfType(Step::ClassType t) {
    return IfcQuantityWeight::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcMassMeasure IfcQuantityWeight::getWeightValue() {
    if (Step::BaseObject::inited()) {
        return m_weightValue;
    }
    else {
        return Step::getUnset(m_weightValue);
    }
}

void IfcQuantityWeight::setWeightValue(IfcMassMeasure value) {
    m_weightValue = value;
}

void IfcQuantityWeight::release() {
    IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityWeight::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_weightValue = Step::getUnset(m_weightValue);
    }
    else {
        m_weightValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcQuantityWeight::copy(const IfcQuantityWeight &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setWeightValue(obj.m_weightValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityWeight::s_type("IfcQuantityWeight");
