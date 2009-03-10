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

bool IfcBezierCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBezierCurve(this);
}

const std::string &IfcBezierCurve::type() const {
    return IfcBezierCurve::s_type.getName();
}

const Step::ClassType &IfcBezierCurve::getClassType() {
    return IfcBezierCurve::s_type;
}

const Step::ClassType &IfcBezierCurve::getType() const {
    return IfcBezierCurve::s_type;
}

bool IfcBezierCurve::isOfType(const Step::ClassType &t) const {
    return IfcBezierCurve::s_type == t ? true : IfcBSplineCurve::isOfType(t);
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
