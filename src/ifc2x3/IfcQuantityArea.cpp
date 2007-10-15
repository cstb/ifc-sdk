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

#include "ifc2x3/IfcQuantityArea.h"

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

IfcQuantityArea::IfcQuantityArea(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_areaValue = Step::getUnset(m_areaValue);
}

IfcQuantityArea::~IfcQuantityArea() {
}

bool IfcQuantityArea::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcQuantityArea(this);
}

const std::string &IfcQuantityArea::type() {
    return IfcQuantityArea::s_type.getName();
}

Step::ClassType IfcQuantityArea::getClassType() {
    return IfcQuantityArea::s_type;
}

Step::ClassType IfcQuantityArea::getType() const {
    return IfcQuantityArea::s_type;
}

bool IfcQuantityArea::isOfType(Step::ClassType t) {
    return IfcQuantityArea::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcAreaMeasure IfcQuantityArea::getAreaValue() {
    if (Step::BaseObject::inited()) {
        return m_areaValue;
    }
    else {
        return Step::getUnset(m_areaValue);
    }
}

void IfcQuantityArea::setAreaValue(IfcAreaMeasure value) {
    m_areaValue = value;
}

void IfcQuantityArea::release() {
    IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityArea::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_areaValue = Step::getUnset(m_areaValue);
    }
    else {
        m_areaValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcQuantityArea::copy(const IfcQuantityArea &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setAreaValue(obj.m_areaValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityArea::s_type("IfcQuantityArea");
