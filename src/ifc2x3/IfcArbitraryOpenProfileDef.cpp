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

#include "ifc2x3/IfcArbitraryOpenProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundedCurve.h"
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

IfcArbitraryOpenProfileDef::IfcArbitraryOpenProfileDef(Step::Id id, Step::SPFData *args) : IfcProfileDef(id, args) {
    m_curve = NULL;
}

IfcArbitraryOpenProfileDef::~IfcArbitraryOpenProfileDef() {
}

bool IfcArbitraryOpenProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcArbitraryOpenProfileDef(this);
}

const std::string &IfcArbitraryOpenProfileDef::type() {
    return IfcArbitraryOpenProfileDef::s_type.getName();
}

Step::ClassType IfcArbitraryOpenProfileDef::getClassType() {
    return IfcArbitraryOpenProfileDef::s_type;
}

Step::ClassType IfcArbitraryOpenProfileDef::getType() const {
    return IfcArbitraryOpenProfileDef::s_type;
}

bool IfcArbitraryOpenProfileDef::isOfType(Step::ClassType t) {
    return IfcArbitraryOpenProfileDef::s_type == t ? true : IfcProfileDef::isOfType(t);
}

IfcBoundedCurve *IfcArbitraryOpenProfileDef::getCurve() {
    if (Step::BaseObject::inited()) {
        return m_curve.get();
    }
    else {
        return NULL;
    }
}

void IfcArbitraryOpenProfileDef::setCurve(const Step::RefPtr< IfcBoundedCurve > &value) {
    m_curve = value;
}

void IfcArbitraryOpenProfileDef::release() {
    IfcProfileDef::release();
    m_curve.release();
}

bool IfcArbitraryOpenProfileDef::init() {
    bool status = IfcProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curve = NULL;
    }
    else {
        m_curve = static_cast< IfcBoundedCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcArbitraryOpenProfileDef::copy(const IfcArbitraryOpenProfileDef &obj, const CopyOp &copyop) {
    IfcProfileDef::copy(obj, copyop);
    setCurve(copyop(obj.m_curve.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcArbitraryOpenProfileDef::s_type("IfcArbitraryOpenProfileDef");
