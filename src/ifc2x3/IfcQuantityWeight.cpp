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

bool IfcQuantityWeight::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcQuantityWeight(this);
}

const std::string &IfcQuantityWeight::type() const {
    return IfcQuantityWeight::s_type.getName();
}

const Step::ClassType &IfcQuantityWeight::getClassType() {
    return IfcQuantityWeight::s_type;
}

const Step::ClassType &IfcQuantityWeight::getType() const {
    return IfcQuantityWeight::s_type;
}

bool IfcQuantityWeight::isOfType(const Step::ClassType &t) const {
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

const IfcMassMeasure IfcQuantityWeight::getWeightValue() const {
    IfcQuantityWeight * deConstObject = const_cast< IfcQuantityWeight * > (this);
    return deConstObject->getWeightValue();
}

void IfcQuantityWeight::setWeightValue(IfcMassMeasure value) {
    m_weightValue = value;
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
