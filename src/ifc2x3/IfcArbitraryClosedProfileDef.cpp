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

#include "ifc2x3/IfcArbitraryClosedProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcProfileDef.h"
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

IfcArbitraryClosedProfileDef::IfcArbitraryClosedProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_outerCurve = NULL;
}

IfcArbitraryClosedProfileDef::~IfcArbitraryClosedProfileDef() {
}

bool IfcArbitraryClosedProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcArbitraryClosedProfileDef(this);
}

const std::string &IfcArbitraryClosedProfileDef::type() {
    return IfcArbitraryClosedProfileDef::s_type.getName();
}

Step::ClassType IfcArbitraryClosedProfileDef::getClassType() {
    return IfcArbitraryClosedProfileDef::s_type;
}

Step::ClassType IfcArbitraryClosedProfileDef::getType() const {
    return IfcArbitraryClosedProfileDef::s_type;
}

bool IfcArbitraryClosedProfileDef::isOfType(Step::ClassType t) {
    return IfcArbitraryClosedProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcCurve *IfcArbitraryClosedProfileDef::getOuterCurve() {
    if (Step::BaseObject::inited()) {
        return m_outerCurve.get();
    }
    else {
        return NULL;
    }
}

void IfcArbitraryClosedProfileDef::setOuterCurve(const Step::RefPtr< IfcCurve > &value) {
    m_outerCurve = value;
}

void IfcArbitraryClosedProfileDef::release() {
    IfcProfileDef::release();
    m_outerCurve.release();
}

bool IfcArbitraryClosedProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_outerCurve = NULL;
    }
    else {
        m_outerCurve = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcArbitraryClosedProfileDef::copy(const IfcArbitraryClosedProfileDef &obj, const CopyOp &copyop) {
    IfcProfileDef::copy(obj, copyop);
    setOuterCurve(copyop(obj.m_outerCurve.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcArbitraryClosedProfileDef::s_type("IfcArbitraryClosedProfileDef");
