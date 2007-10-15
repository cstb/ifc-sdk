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

#include "ifc2x3/IfcRectangleProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcParameterizedProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRectangleProfileDef::IfcRectangleProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_xDim = Step::getUnset(m_xDim);
    m_yDim = Step::getUnset(m_yDim);
}

IfcRectangleProfileDef::~IfcRectangleProfileDef() {
}

bool IfcRectangleProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRectangleProfileDef(this);
}

const std::string &IfcRectangleProfileDef::type() {
    return IfcRectangleProfileDef::s_type.getName();
}

Step::ClassType IfcRectangleProfileDef::getClassType() {
    return IfcRectangleProfileDef::s_type;
}

Step::ClassType IfcRectangleProfileDef::getType() const {
    return IfcRectangleProfileDef::s_type;
}

bool IfcRectangleProfileDef::isOfType(Step::ClassType t) {
    return IfcRectangleProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcRectangleProfileDef::getXDim() {
    if (Step::BaseObject::inited()) {
        return m_xDim;
    }
    else {
        return Step::getUnset(m_xDim);
    }
}

void IfcRectangleProfileDef::setXDim(IfcPositiveLengthMeasure value) {
    m_xDim = value;
}

IfcPositiveLengthMeasure IfcRectangleProfileDef::getYDim() {
    if (Step::BaseObject::inited()) {
        return m_yDim;
    }
    else {
        return Step::getUnset(m_yDim);
    }
}

void IfcRectangleProfileDef::setYDim(IfcPositiveLengthMeasure value) {
    m_yDim = value;
}

void IfcRectangleProfileDef::release() {
    IfcParameterizedProfileDef::release();
}

bool IfcRectangleProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_xDim = Step::getUnset(m_xDim);
    }
    else {
        m_xDim = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_yDim = Step::getUnset(m_yDim);
    }
    else {
        m_yDim = Step::spfToReal(arg);
    }
    return true;
}

void IfcRectangleProfileDef::copy(const IfcRectangleProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setXDim(obj.m_xDim);
    setYDim(obj.m_yDim);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRectangleProfileDef::s_type("IfcRectangleProfileDef");
