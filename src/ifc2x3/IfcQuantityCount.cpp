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

#include "ifc2x3/IfcQuantityCount.h"

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

IfcQuantityCount::IfcQuantityCount(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_countValue = Step::getUnset(m_countValue);
}

IfcQuantityCount::~IfcQuantityCount() {
}

bool IfcQuantityCount::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcQuantityCount(this);
}

const std::string &IfcQuantityCount::type() const {
    return IfcQuantityCount::s_type.getName();
}

const Step::ClassType &IfcQuantityCount::getClassType() {
    return IfcQuantityCount::s_type;
}

const Step::ClassType &IfcQuantityCount::getType() const {
    return IfcQuantityCount::s_type;
}

bool IfcQuantityCount::isOfType(const Step::ClassType &t) const {
    return IfcQuantityCount::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcCountMeasure IfcQuantityCount::getCountValue() {
    if (Step::BaseObject::inited()) {
        return m_countValue;
    }
    else {
        return Step::getUnset(m_countValue);
    }
}

const IfcCountMeasure IfcQuantityCount::getCountValue() const {
    IfcQuantityCount * deConstObject = const_cast< IfcQuantityCount * > (this);
    return deConstObject->getCountValue();
}

void IfcQuantityCount::setCountValue(IfcCountMeasure value) {
    m_countValue = value;
}

bool IfcQuantityCount::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_countValue = Step::getUnset(m_countValue);
    }
    else {
        m_countValue = Step::spfToInteger(arg);
    }
    return true;
}

void IfcQuantityCount::copy(const IfcQuantityCount &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setCountValue(obj.m_countValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityCount::s_type("IfcQuantityCount");
