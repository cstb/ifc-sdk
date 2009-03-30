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
 *     Copyright (C) 2009 CSTB                                             *
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

#include "ifc2x3/IfcBlock.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCsgPrimitive3D.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBlock::IfcBlock(Step::Id id, Step::SPFData *args) : IfcCsgPrimitive3D(id, args) {
    m_xLength = Step::getUnset(m_xLength);
    m_yLength = Step::getUnset(m_yLength);
    m_zLength = Step::getUnset(m_zLength);
}

IfcBlock::~IfcBlock() {
}

bool IfcBlock::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBlock(this);
}

const std::string &IfcBlock::type() const {
    return IfcBlock::s_type.getName();
}

const Step::ClassType &IfcBlock::getClassType() {
    return IfcBlock::s_type;
}

const Step::ClassType &IfcBlock::getType() const {
    return IfcBlock::s_type;
}

bool IfcBlock::isOfType(const Step::ClassType &t) const {
    return IfcBlock::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcBlock::getXLength() {
    if (Step::BaseObject::inited()) {
        return m_xLength;
    }
    else {
        return Step::getUnset(m_xLength);
    }
}

const IfcPositiveLengthMeasure IfcBlock::getXLength() const {
    IfcBlock * deConstObject = const_cast< IfcBlock * > (this);
    return deConstObject->getXLength();
}

void IfcBlock::setXLength(IfcPositiveLengthMeasure value) {
    m_xLength = value;
}

void IfcBlock::unsetXLength() {
    m_xLength = Step::getUnset(getXLength());
}

bool IfcBlock::testXLength() const {
    return !Step::isUnset(getXLength());
}

IfcPositiveLengthMeasure IfcBlock::getYLength() {
    if (Step::BaseObject::inited()) {
        return m_yLength;
    }
    else {
        return Step::getUnset(m_yLength);
    }
}

const IfcPositiveLengthMeasure IfcBlock::getYLength() const {
    IfcBlock * deConstObject = const_cast< IfcBlock * > (this);
    return deConstObject->getYLength();
}

void IfcBlock::setYLength(IfcPositiveLengthMeasure value) {
    m_yLength = value;
}

void IfcBlock::unsetYLength() {
    m_yLength = Step::getUnset(getYLength());
}

bool IfcBlock::testYLength() const {
    return !Step::isUnset(getYLength());
}

IfcPositiveLengthMeasure IfcBlock::getZLength() {
    if (Step::BaseObject::inited()) {
        return m_zLength;
    }
    else {
        return Step::getUnset(m_zLength);
    }
}

const IfcPositiveLengthMeasure IfcBlock::getZLength() const {
    IfcBlock * deConstObject = const_cast< IfcBlock * > (this);
    return deConstObject->getZLength();
}

void IfcBlock::setZLength(IfcPositiveLengthMeasure value) {
    m_zLength = value;
}

void IfcBlock::unsetZLength() {
    m_zLength = Step::getUnset(getZLength());
}

bool IfcBlock::testZLength() const {
    return !Step::isUnset(getZLength());
}

bool IfcBlock::init() {
    bool status = IfcCsgPrimitive3D::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_xLength = Step::getUnset(m_xLength);
    }
    else {
        m_xLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yLength = Step::getUnset(m_yLength);
    }
    else {
        m_yLength = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_zLength = Step::getUnset(m_zLength);
    }
    else {
        m_zLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcBlock::copy(const IfcBlock &obj, const CopyOp &copyop) {
    IfcCsgPrimitive3D::copy(obj, copyop);
    setXLength(obj.m_xLength);
    setYLength(obj.m_yLength);
    setZLength(obj.m_zLength);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBlock::s_type("IfcBlock");
