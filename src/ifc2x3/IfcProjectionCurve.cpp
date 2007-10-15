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

#include "ifc2x3/IfcProjectionCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationCurveOccurrence.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProjectionCurve::IfcProjectionCurve(Step::Id id, Step::SPFData *args) : IfcAnnotationCurveOccurrence(id, args) {
}

IfcProjectionCurve::~IfcProjectionCurve() {
}

bool IfcProjectionCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProjectionCurve(this);
}

const std::string &IfcProjectionCurve::type() {
    return IfcProjectionCurve::s_type.getName();
}

Step::ClassType IfcProjectionCurve::getClassType() {
    return IfcProjectionCurve::s_type;
}

Step::ClassType IfcProjectionCurve::getType() const {
    return IfcProjectionCurve::s_type;
}

bool IfcProjectionCurve::isOfType(Step::ClassType t) {
    return IfcProjectionCurve::s_type == t ? true : IfcAnnotationCurveOccurrence::isOfType(t);
}

void IfcProjectionCurve::release() {
    IfcAnnotationCurveOccurrence::release();
}

bool IfcProjectionCurve::init() {
    bool status = IfcAnnotationCurveOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcProjectionCurve::copy(const IfcProjectionCurve &obj, const CopyOp &copyop) {
    IfcAnnotationCurveOccurrence::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProjectionCurve::s_type("IfcProjectionCurve");
