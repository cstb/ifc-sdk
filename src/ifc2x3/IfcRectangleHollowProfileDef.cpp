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

#include "ifc2x3/IfcRectangleHollowProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRectangleProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRectangleHollowProfileDef::IfcRectangleHollowProfileDef(Step::Id id, Step::SPFData *args) : IfcRectangleProfileDef(id, args) {
    m_wallThickness = Step::getUnset(m_wallThickness);
    m_innerFilletRadius = Step::getUnset(m_innerFilletRadius);
    m_outerFilletRadius = Step::getUnset(m_outerFilletRadius);
}

IfcRectangleHollowProfileDef::~IfcRectangleHollowProfileDef() {
}

bool IfcRectangleHollowProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRectangleHollowProfileDef(this);
}

const std::string &IfcRectangleHollowProfileDef::type() const {
    return IfcRectangleHollowProfileDef::s_type.getName();
}

const Step::ClassType &IfcRectangleHollowProfileDef::getClassType() {
    return IfcRectangleHollowProfileDef::s_type;
}

const Step::ClassType &IfcRectangleHollowProfileDef::getType() const {
    return IfcRectangleHollowProfileDef::s_type;
}

bool IfcRectangleHollowProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcRectangleHollowProfileDef::s_type == t ? true : IfcRectangleProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getWallThickness() {
    if (Step::BaseObject::inited()) {
        return m_wallThickness;
    }
    else {
        return Step::getUnset(m_wallThickness);
    }
}

const IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getWallThickness() const {
    IfcRectangleHollowProfileDef * deConstObject = const_cast< IfcRectangleHollowProfileDef * > (this);
    return deConstObject->getWallThickness();
}

void IfcRectangleHollowProfileDef::setWallThickness(IfcPositiveLengthMeasure value) {
    m_wallThickness = value;
}

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getInnerFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_innerFilletRadius;
    }
    else {
        return Step::getUnset(m_innerFilletRadius);
    }
}

const IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getInnerFilletRadius() const {
    IfcRectangleHollowProfileDef * deConstObject = const_cast< IfcRectangleHollowProfileDef * > (this);
    return deConstObject->getInnerFilletRadius();
}

void IfcRectangleHollowProfileDef::setInnerFilletRadius(IfcPositiveLengthMeasure value) {
    m_innerFilletRadius = value;
}

IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getOuterFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_outerFilletRadius;
    }
    else {
        return Step::getUnset(m_outerFilletRadius);
    }
}

const IfcPositiveLengthMeasure IfcRectangleHollowProfileDef::getOuterFilletRadius() const {
    IfcRectangleHollowProfileDef * deConstObject = const_cast< IfcRectangleHollowProfileDef * > (this);
    return deConstObject->getOuterFilletRadius();
}

void IfcRectangleHollowProfileDef::setOuterFilletRadius(IfcPositiveLengthMeasure value) {
    m_outerFilletRadius = value;
}

bool IfcRectangleHollowProfileDef::init() {
    bool status = IfcRectangleProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wallThickness = Step::getUnset(m_wallThickness);
    }
    else {
        m_wallThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_innerFilletRadius = Step::getUnset(m_innerFilletRadius);
    }
    else {
        m_innerFilletRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outerFilletRadius = Step::getUnset(m_outerFilletRadius);
    }
    else {
        m_outerFilletRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcRectangleHollowProfileDef::copy(const IfcRectangleHollowProfileDef &obj, const CopyOp &copyop) {
    IfcRectangleProfileDef::copy(obj, copyop);
    setWallThickness(obj.m_wallThickness);
    setInnerFilletRadius(obj.m_innerFilletRadius);
    setOuterFilletRadius(obj.m_outerFilletRadius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRectangleHollowProfileDef::s_type("IfcRectangleHollowProfileDef");
