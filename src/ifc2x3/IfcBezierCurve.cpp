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

#include "ifc2x3/IfcBezierCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBSplineCurve.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBezierCurve::IfcBezierCurve(Step::Id id, Step::SPFData *args) : IfcBSplineCurve(id, args) {
}

IfcBezierCurve::~IfcBezierCurve() {
}

bool IfcBezierCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBezierCurve(this);
}

const std::string &IfcBezierCurve::type() {
    return IfcBezierCurve::s_type.getName();
}

Step::ClassType IfcBezierCurve::getClassType() {
    return IfcBezierCurve::s_type;
}

Step::ClassType IfcBezierCurve::getType() const {
    return IfcBezierCurve::s_type;
}

bool IfcBezierCurve::isOfType(Step::ClassType t) {
    return IfcBezierCurve::s_type == t ? true : IfcBSplineCurve::isOfType(t);
}

void IfcBezierCurve::release() {
    IfcBSplineCurve::release();
}

bool IfcBezierCurve::init() {
    bool status = IfcBSplineCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBezierCurve::copy(const IfcBezierCurve &obj, const CopyOp &copyop) {
    IfcBSplineCurve::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBezierCurve::s_type("IfcBezierCurve");
