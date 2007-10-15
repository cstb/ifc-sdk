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

#include "ifc2x3/IfcDimensionCurveTerminator.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcTerminatorSymbol.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDimensionCurveTerminator::IfcDimensionCurveTerminator(Step::Id id, Step::SPFData *args) : IfcTerminatorSymbol(id, args) {
    m_role = IfcDimensionExtentUsage_UNSET;
}

IfcDimensionCurveTerminator::~IfcDimensionCurveTerminator() {
}

bool IfcDimensionCurveTerminator::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDimensionCurveTerminator(this);
}

const std::string &IfcDimensionCurveTerminator::type() {
    return IfcDimensionCurveTerminator::s_type.getName();
}

Step::ClassType IfcDimensionCurveTerminator::getClassType() {
    return IfcDimensionCurveTerminator::s_type;
}

Step::ClassType IfcDimensionCurveTerminator::getType() const {
    return IfcDimensionCurveTerminator::s_type;
}

bool IfcDimensionCurveTerminator::isOfType(Step::ClassType t) {
    return IfcDimensionCurveTerminator::s_type == t ? true : IfcTerminatorSymbol::isOfType(t);
}

IfcDimensionExtentUsage IfcDimensionCurveTerminator::getRole() {
    if (Step::BaseObject::inited()) {
        return m_role;
    }
    else {
        return IfcDimensionExtentUsage_UNSET;
    }
}

void IfcDimensionCurveTerminator::setRole(IfcDimensionExtentUsage value) {
    m_role = value;
}

void IfcDimensionCurveTerminator::release() {
    IfcTerminatorSymbol::release();
}

bool IfcDimensionCurveTerminator::init() {
    bool status = IfcTerminatorSymbol::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_role = IfcDimensionExtentUsage_UNSET;
    }
    else {
        if (arg == ".ORIGIN.") {
            m_role = IfcDimensionExtentUsage_ORIGIN;
        }
        else if (arg == ".TARGET.") {
            m_role = IfcDimensionExtentUsage_TARGET;
        }
    }
    return true;
}

void IfcDimensionCurveTerminator::copy(const IfcDimensionCurveTerminator &obj, const CopyOp &copyop) {
    IfcTerminatorSymbol::copy(obj, copyop);
    setRole(obj.m_role);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionCurveTerminator::s_type("IfcDimensionCurveTerminator");
