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

#include "ifc2x3/IfcStairFlight.h"

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

IfcStairFlight::IfcStairFlight(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_numberOfRiser = Step::getUnset(m_numberOfRiser);
    m_numberOfTreads = Step::getUnset(m_numberOfTreads);
    m_riserHeight = Step::getUnset(m_riserHeight);
    m_treadLength = Step::getUnset(m_treadLength);
}

IfcStairFlight::~IfcStairFlight() {
}

bool IfcStairFlight::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStairFlight(this);
}

const std::string &IfcStairFlight::type() {
    return IfcStairFlight::s_type.getName();
}

Step::ClassType IfcStairFlight::getClassType() {
    return IfcStairFlight::s_type;
}

Step::ClassType IfcStairFlight::getType() const {
    return IfcStairFlight::s_type;
}

bool IfcStairFlight::isOfType(Step::ClassType t) {
    return IfcStairFlight::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

Step::Integer IfcStairFlight::getNumberOfRiser() {
    if (Step::BaseObject::inited()) {
        return m_numberOfRiser;
    }
    else {
        return Step::getUnset(m_numberOfRiser);
    }
}

void IfcStairFlight::setNumberOfRiser(Step::Integer value) {
    m_numberOfRiser = value;
}

Step::Integer IfcStairFlight::getNumberOfTreads() {
    if (Step::BaseObject::inited()) {
        return m_numberOfTreads;
    }
    else {
        return Step::getUnset(m_numberOfTreads);
    }
}

void IfcStairFlight::setNumberOfTreads(Step::Integer value) {
    m_numberOfTreads = value;
}

IfcPositiveLengthMeasure IfcStairFlight::getRiserHeight() {
    if (Step::BaseObject::inited()) {
        return m_riserHeight;
    }
    else {
        return Step::getUnset(m_riserHeight);
    }
}

void IfcStairFlight::setRiserHeight(IfcPositiveLengthMeasure value) {
    m_riserHeight = value;
}

IfcPositiveLengthMeasure IfcStairFlight::getTreadLength() {
    if (Step::BaseObject::inited()) {
        return m_treadLength;
    }
    else {
        return Step::getUnset(m_treadLength);
    }
}

void IfcStairFlight::setTreadLength(IfcPositiveLengthMeasure value) {
    m_treadLength = value;
}

void IfcStairFlight::release() {
    IfcBuildingElement::release();
}

bool IfcStairFlight::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_numberOfRiser = Step::getUnset(m_numberOfRiser);
    }
    else {
        m_numberOfRiser = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_numberOfTreads = Step::getUnset(m_numberOfTreads);
    }
    else {
        m_numberOfTreads = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_riserHeight = Step::getUnset(m_riserHeight);
    }
    else {
        m_riserHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_treadLength = Step::getUnset(m_treadLength);
    }
    else {
        m_treadLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcStairFlight::copy(const IfcStairFlight &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setNumberOfRiser(obj.m_numberOfRiser);
    setNumberOfTreads(obj.m_numberOfTreads);
    setRiserHeight(obj.m_riserHeight);
    setTreadLength(obj.m_treadLength);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStairFlight::s_type("IfcStairFlight");
