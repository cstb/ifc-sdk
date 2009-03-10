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

#include "ifc2x3/IfcQuantityTime.h"

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

IfcQuantityTime::IfcQuantityTime(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_timeValue = Step::getUnset(m_timeValue);
}

IfcQuantityTime::~IfcQuantityTime() {
}

bool IfcQuantityTime::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcQuantityTime(this);
}

const std::string &IfcQuantityTime::type() const {
    return IfcQuantityTime::s_type.getName();
}

const Step::ClassType &IfcQuantityTime::getClassType() {
    return IfcQuantityTime::s_type;
}

const Step::ClassType &IfcQuantityTime::getType() const {
    return IfcQuantityTime::s_type;
}

bool IfcQuantityTime::isOfType(const Step::ClassType &t) const {
    return IfcQuantityTime::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcTimeMeasure IfcQuantityTime::getTimeValue() {
    if (Step::BaseObject::inited()) {
        return m_timeValue;
    }
    else {
        return Step::getUnset(m_timeValue);
    }
}

const IfcTimeMeasure IfcQuantityTime::getTimeValue() const {
    IfcQuantityTime * deConstObject = const_cast< IfcQuantityTime * > (this);
    return deConstObject->getTimeValue();
}

void IfcQuantityTime::setTimeValue(IfcTimeMeasure value) {
    m_timeValue = value;
}

bool IfcQuantityTime::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeValue = Step::getUnset(m_timeValue);
    }
    else {
        m_timeValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcQuantityTime::copy(const IfcQuantityTime &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setTimeValue(obj.m_timeValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityTime::s_type("IfcQuantityTime");
