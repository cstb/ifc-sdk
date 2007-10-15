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

#include "ifc2x3/IfcDoor.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDoor::IfcDoor(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_overallHeight = Step::getUnset(m_overallHeight);
    m_overallWidth = Step::getUnset(m_overallWidth);
}

IfcDoor::~IfcDoor() {
}

bool IfcDoor::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDoor(this);
}

const std::string &IfcDoor::type() {
    return IfcDoor::s_type.getName();
}

Step::ClassType IfcDoor::getClassType() {
    return IfcDoor::s_type;
}

Step::ClassType IfcDoor::getType() const {
    return IfcDoor::s_type;
}

bool IfcDoor::isOfType(Step::ClassType t) {
    return IfcDoor::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcDoor::getOverallHeight() {
    if (Step::BaseObject::inited()) {
        return m_overallHeight;
    }
    else {
        return Step::getUnset(m_overallHeight);
    }
}

void IfcDoor::setOverallHeight(IfcPositiveLengthMeasure value) {
    m_overallHeight = value;
}

IfcPositiveLengthMeasure IfcDoor::getOverallWidth() {
    if (Step::BaseObject::inited()) {
        return m_overallWidth;
    }
    else {
        return Step::getUnset(m_overallWidth);
    }
}

void IfcDoor::setOverallWidth(IfcPositiveLengthMeasure value) {
    m_overallWidth = value;
}

void IfcDoor::release() {
    IfcBuildingElement::release();
}

bool IfcDoor::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallHeight = Step::getUnset(m_overallHeight);
    }
    else {
        m_overallHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallWidth = Step::getUnset(m_overallWidth);
    }
    else {
        m_overallWidth = Step::spfToReal(arg);
    }
    return true;
}

void IfcDoor::copy(const IfcDoor &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setOverallHeight(obj.m_overallHeight);
    setOverallWidth(obj.m_overallWidth);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDoor::s_type("IfcDoor");
