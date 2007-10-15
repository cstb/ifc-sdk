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

#include "ifc2x3/IfcReinforcingBar.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcReinforcingElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcReinforcingBar::IfcReinforcingBar(Step::Id id, Step::SPFData *args) : IfcReinforcingElement(id, args) {
    m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    m_crossSectionArea = Step::getUnset(m_crossSectionArea);
    m_barLength = Step::getUnset(m_barLength);
    m_barRole = IfcReinforcingBarRoleEnum_UNSET;
    m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
}

IfcReinforcingBar::~IfcReinforcingBar() {
}

bool IfcReinforcingBar::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReinforcingBar(this);
}

const std::string &IfcReinforcingBar::type() {
    return IfcReinforcingBar::s_type.getName();
}

Step::ClassType IfcReinforcingBar::getClassType() {
    return IfcReinforcingBar::s_type;
}

Step::ClassType IfcReinforcingBar::getType() const {
    return IfcReinforcingBar::s_type;
}

bool IfcReinforcingBar::isOfType(Step::ClassType t) {
    return IfcReinforcingBar::s_type == t ? true : IfcReinforcingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcReinforcingBar::getNominalDiameter() {
    if (Step::BaseObject::inited()) {
        return m_nominalDiameter;
    }
    else {
        return Step::getUnset(m_nominalDiameter);
    }
}

void IfcReinforcingBar::setNominalDiameter(IfcPositiveLengthMeasure value) {
    m_nominalDiameter = value;
}

IfcAreaMeasure IfcReinforcingBar::getCrossSectionArea() {
    if (Step::BaseObject::inited()) {
        return m_crossSectionArea;
    }
    else {
        return Step::getUnset(m_crossSectionArea);
    }
}

void IfcReinforcingBar::setCrossSectionArea(IfcAreaMeasure value) {
    m_crossSectionArea = value;
}

IfcPositiveLengthMeasure IfcReinforcingBar::getBarLength() {
    if (Step::BaseObject::inited()) {
        return m_barLength;
    }
    else {
        return Step::getUnset(m_barLength);
    }
}

void IfcReinforcingBar::setBarLength(IfcPositiveLengthMeasure value) {
    m_barLength = value;
}

IfcReinforcingBarRoleEnum IfcReinforcingBar::getBarRole() {
    if (Step::BaseObject::inited()) {
        return m_barRole;
    }
    else {
        return IfcReinforcingBarRoleEnum_UNSET;
    }
}

void IfcReinforcingBar::setBarRole(IfcReinforcingBarRoleEnum value) {
    m_barRole = value;
}

IfcReinforcingBarSurfaceEnum IfcReinforcingBar::getBarSurface() {
    if (Step::BaseObject::inited()) {
        return m_barSurface;
    }
    else {
        return IfcReinforcingBarSurfaceEnum_UNSET;
    }
}

void IfcReinforcingBar::setBarSurface(IfcReinforcingBarSurfaceEnum value) {
    m_barSurface = value;
}

void IfcReinforcingBar::release() {
    IfcReinforcingElement::release();
}

bool IfcReinforcingBar::init() {
    bool status = IfcReinforcingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    }
    else {
        m_nominalDiameter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_crossSectionArea = Step::getUnset(m_crossSectionArea);
    }
    else {
        m_crossSectionArea = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_barLength = Step::getUnset(m_barLength);
    }
    else {
        m_barLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_barRole = IfcReinforcingBarRoleEnum_UNSET;
    }
    else {
        if (arg == ".MAIN.") {
            m_barRole = IfcReinforcingBarRoleEnum_MAIN;
        }
        else if (arg == ".SHEAR.") {
            m_barRole = IfcReinforcingBarRoleEnum_SHEAR;
        }
        else if (arg == ".LIGATURE.") {
            m_barRole = IfcReinforcingBarRoleEnum_LIGATURE;
        }
        else if (arg == ".STUD.") {
            m_barRole = IfcReinforcingBarRoleEnum_STUD;
        }
        else if (arg == ".PUNCHING.") {
            m_barRole = IfcReinforcingBarRoleEnum_PUNCHING;
        }
        else if (arg == ".EDGE.") {
            m_barRole = IfcReinforcingBarRoleEnum_EDGE;
        }
        else if (arg == ".RING.") {
            m_barRole = IfcReinforcingBarRoleEnum_RING;
        }
        else if (arg == ".USERDEFINED.") {
            m_barRole = IfcReinforcingBarRoleEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_barRole = IfcReinforcingBarRoleEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_barSurface = IfcReinforcingBarSurfaceEnum_UNSET;
    }
    else {
        if (arg == ".PLAIN.") {
            m_barSurface = IfcReinforcingBarSurfaceEnum_PLAIN;
        }
        else if (arg == ".TEXTURED.") {
            m_barSurface = IfcReinforcingBarSurfaceEnum_TEXTURED;
        }
    }
    return true;
}

void IfcReinforcingBar::copy(const IfcReinforcingBar &obj, const CopyOp &copyop) {
    IfcReinforcingElement::copy(obj, copyop);
    setNominalDiameter(obj.m_nominalDiameter);
    setCrossSectionArea(obj.m_crossSectionArea);
    setBarLength(obj.m_barLength);
    setBarRole(obj.m_barRole);
    setBarSurface(obj.m_barSurface);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReinforcingBar::s_type("IfcReinforcingBar");
