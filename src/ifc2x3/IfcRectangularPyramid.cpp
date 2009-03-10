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

#include "ifc2x3/IfcRectangularPyramid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCsgPrimitive3D.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRectangularPyramid::IfcRectangularPyramid(Step::Id id, Step::SPFData *args) : IfcCsgPrimitive3D(id, args) {
    m_xLength = Step::getUnset(m_xLength);
    m_yLength = Step::getUnset(m_yLength);
    m_height = Step::getUnset(m_height);
}

IfcRectangularPyramid::~IfcRectangularPyramid() {
}

bool IfcRectangularPyramid::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRectangularPyramid(this);
}

const std::string &IfcRectangularPyramid::type() const {
    return IfcRectangularPyramid::s_type.getName();
}

const Step::ClassType &IfcRectangularPyramid::getClassType() {
    return IfcRectangularPyramid::s_type;
}

const Step::ClassType &IfcRectangularPyramid::getType() const {
    return IfcRectangularPyramid::s_type;
}

bool IfcRectangularPyramid::isOfType(const Step::ClassType &t) const {
    return IfcRectangularPyramid::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getXLength() {
    if (Step::BaseObject::inited()) {
        return m_xLength;
    }
    else {
        return Step::getUnset(m_xLength);
    }
}

const IfcPositiveLengthMeasure IfcRectangularPyramid::getXLength() const {
    IfcRectangularPyramid * deConstObject = const_cast< IfcRectangularPyramid * > (this);
    return deConstObject->getXLength();
}

void IfcRectangularPyramid::setXLength(IfcPositiveLengthMeasure value) {
    m_xLength = value;
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getYLength() {
    if (Step::BaseObject::inited()) {
        return m_yLength;
    }
    else {
        return Step::getUnset(m_yLength);
    }
}

const IfcPositiveLengthMeasure IfcRectangularPyramid::getYLength() const {
    IfcRectangularPyramid * deConstObject = const_cast< IfcRectangularPyramid * > (this);
    return deConstObject->getYLength();
}

void IfcRectangularPyramid::setYLength(IfcPositiveLengthMeasure value) {
    m_yLength = value;
}

IfcPositiveLengthMeasure IfcRectangularPyramid::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

const IfcPositiveLengthMeasure IfcRectangularPyramid::getHeight() const {
    IfcRectangularPyramid * deConstObject = const_cast< IfcRectangularPyramid * > (this);
    return deConstObject->getHeight();
}

void IfcRectangularPyramid::setHeight(IfcPositiveLengthMeasure value) {
    m_height = value;
}

bool IfcRectangularPyramid::init() {
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
        m_height = Step::getUnset(m_height);
    }
    else {
        m_height = Step::spfToReal(arg);
    }
    return true;
}

void IfcRectangularPyramid::copy(const IfcRectangularPyramid &obj, const CopyOp &copyop) {
    IfcCsgPrimitive3D::copy(obj, copyop);
    setXLength(obj.m_xLength);
    setYLength(obj.m_yLength);
    setHeight(obj.m_height);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRectangularPyramid::s_type("IfcRectangularPyramid");
