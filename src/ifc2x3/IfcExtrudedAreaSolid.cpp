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

#include "ifc2x3/IfcExtrudedAreaSolid.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
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

IfcExtrudedAreaSolid::IfcExtrudedAreaSolid(Step::Id id, Step::SPFData *args) : IfcSweptAreaSolid(id, args) {
    m_extrudedDirection = NULL;
    m_depth = Step::getUnset(m_depth);
}

IfcExtrudedAreaSolid::~IfcExtrudedAreaSolid() {
}

bool IfcExtrudedAreaSolid::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcExtrudedAreaSolid(this);
}

const std::string &IfcExtrudedAreaSolid::type() {
    return IfcExtrudedAreaSolid::s_type.getName();
}

Step::ClassType IfcExtrudedAreaSolid::getClassType() {
    return IfcExtrudedAreaSolid::s_type;
}

Step::ClassType IfcExtrudedAreaSolid::getType() const {
    return IfcExtrudedAreaSolid::s_type;
}

bool IfcExtrudedAreaSolid::isOfType(Step::ClassType t) {
    return IfcExtrudedAreaSolid::s_type == t ? true : IfcSweptAreaSolid::isOfType(t);
}

IfcDirection *IfcExtrudedAreaSolid::getExtrudedDirection() {
    if (Step::BaseObject::inited()) {
        return m_extrudedDirection.get();
    }
    else {
        return NULL;
    }
}

void IfcExtrudedAreaSolid::setExtrudedDirection(const Step::RefPtr< IfcDirection > &value) {
    m_extrudedDirection = value;
}

IfcPositiveLengthMeasure IfcExtrudedAreaSolid::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

void IfcExtrudedAreaSolid::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

void IfcExtrudedAreaSolid::release() {
    IfcSweptAreaSolid::release();
    m_extrudedDirection.release();
}

bool IfcExtrudedAreaSolid::init() {
    bool status = IfcSweptAreaSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_extrudedDirection = NULL;
    }
    else {
        m_extrudedDirection = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depth = Step::getUnset(m_depth);
    }
    else {
        m_depth = Step::spfToReal(arg);
    }
    return true;
}

void IfcExtrudedAreaSolid::copy(const IfcExtrudedAreaSolid &obj, const CopyOp &copyop) {
    IfcSweptAreaSolid::copy(obj, copyop);
    setExtrudedDirection(copyop(obj.m_extrudedDirection.get()));
    setDepth(obj.m_depth);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcExtrudedAreaSolid::s_type("IfcExtrudedAreaSolid");
