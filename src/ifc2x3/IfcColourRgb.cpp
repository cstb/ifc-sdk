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

#include "ifc2x3/IfcColourRgb.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcColourSpecification.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcColourRgb::IfcColourRgb(Step::Id id, Step::SPFData *args) : IfcColourSpecification(id, args) {
    m_red = Step::getUnset(m_red);
    m_green = Step::getUnset(m_green);
    m_blue = Step::getUnset(m_blue);
}

IfcColourRgb::~IfcColourRgb() {
}

bool IfcColourRgb::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcColourRgb(this);
}

const std::string &IfcColourRgb::type() {
    return IfcColourRgb::s_type.getName();
}

Step::ClassType IfcColourRgb::getClassType() {
    return IfcColourRgb::s_type;
}

Step::ClassType IfcColourRgb::getType() const {
    return IfcColourRgb::s_type;
}

bool IfcColourRgb::isOfType(Step::ClassType t) {
    return IfcColourRgb::s_type == t ? true : IfcColourSpecification::isOfType(t);
}

IfcNormalisedRatioMeasure IfcColourRgb::getRed() {
    if (Step::BaseObject::inited()) {
        return m_red;
    }
    else {
        return Step::getUnset(m_red);
    }
}

void IfcColourRgb::setRed(IfcNormalisedRatioMeasure value) {
    m_red = value;
}

IfcNormalisedRatioMeasure IfcColourRgb::getGreen() {
    if (Step::BaseObject::inited()) {
        return m_green;
    }
    else {
        return Step::getUnset(m_green);
    }
}

void IfcColourRgb::setGreen(IfcNormalisedRatioMeasure value) {
    m_green = value;
}

IfcNormalisedRatioMeasure IfcColourRgb::getBlue() {
    if (Step::BaseObject::inited()) {
        return m_blue;
    }
    else {
        return Step::getUnset(m_blue);
    }
}

void IfcColourRgb::setBlue(IfcNormalisedRatioMeasure value) {
    m_blue = value;
}

void IfcColourRgb::release() {
    IfcColourSpecification::release();
}

bool IfcColourRgb::init() {
    bool status = IfcColourSpecification::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_red = Step::getUnset(m_red);
    }
    else {
        m_red = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_green = Step::getUnset(m_green);
    }
    else {
        m_green = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_blue = Step::getUnset(m_blue);
    }
    else {
        m_blue = Step::spfToReal(arg);
    }
    return true;
}

void IfcColourRgb::copy(const IfcColourRgb &obj, const CopyOp &copyop) {
    IfcColourSpecification::copy(obj, copyop);
    setRed(obj.m_red);
    setGreen(obj.m_green);
    setBlue(obj.m_blue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcColourRgb::s_type("IfcColourRgb");
