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

#include "ifc2x3/IfcRevolvedAreaSolid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis1Placement.h"
#include "ifc2x3/IfcSweptAreaSolid.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRevolvedAreaSolid::IfcRevolvedAreaSolid(Step::Id id, Step::SPFData *args) : IfcSweptAreaSolid(id, args) {
    m_axis = NULL;
    m_angle = Step::getUnset(m_angle);
}

IfcRevolvedAreaSolid::~IfcRevolvedAreaSolid() {
}

bool IfcRevolvedAreaSolid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRevolvedAreaSolid(this);
}

const std::string &IfcRevolvedAreaSolid::type() {
    return IfcRevolvedAreaSolid::s_type.getName();
}

Step::ClassType IfcRevolvedAreaSolid::getClassType() {
    return IfcRevolvedAreaSolid::s_type;
}

Step::ClassType IfcRevolvedAreaSolid::getType() const {
    return IfcRevolvedAreaSolid::s_type;
}

bool IfcRevolvedAreaSolid::isOfType(Step::ClassType t) {
    return IfcRevolvedAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcAxis1Placement *IfcRevolvedAreaSolid::getAxis() {
    if (Step::BaseObject::inited()) {
        return m_axis.get();
    }
    else {
        return NULL;
    }
}

void IfcRevolvedAreaSolid::setAxis(const Step::RefPtr< IfcAxis1Placement > &value) {
    m_axis = value;
}

IfcPlaneAngleMeasure IfcRevolvedAreaSolid::getAngle() {
    if (Step::BaseObject::inited()) {
        return m_angle;
    }
    else {
        return Step::getUnset(m_angle);
    }
}

void IfcRevolvedAreaSolid::setAngle(IfcPlaneAngleMeasure value) {
    m_angle = value;
}

void IfcRevolvedAreaSolid::release() {
    IfcSweptAreaSolid::release();
    m_axis.release();
}

bool IfcRevolvedAreaSolid::init() {
    bool status = IfcSweptAreaSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis = NULL;
    }
    else {
        m_axis = static_cast< IfcAxis1Placement * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_angle = Step::getUnset(m_angle);
    }
    else {
        m_angle = Step::spfToReal(arg);
    }
    return true;
}

void IfcRevolvedAreaSolid::copy(const IfcRevolvedAreaSolid &obj, const CopyOp &copyop) {
    IfcSweptAreaSolid::copy(obj, copyop);
    setAxis(copyop(obj.m_axis.get()));
    setAngle(obj.m_angle);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRevolvedAreaSolid::s_type("IfcRevolvedAreaSolid");
