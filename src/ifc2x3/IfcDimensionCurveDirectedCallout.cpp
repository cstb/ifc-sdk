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

#include "ifc2x3/IfcDimensionCurveDirectedCallout.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDraughtingCallout.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDimensionCurveDirectedCallout::IfcDimensionCurveDirectedCallout(Step::Id id, Step::SPFData *args) : IfcDraughtingCallout(id, args) {
}

IfcDimensionCurveDirectedCallout::~IfcDimensionCurveDirectedCallout() {
}

bool IfcDimensionCurveDirectedCallout::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDimensionCurveDirectedCallout(this);
}

const std::string &IfcDimensionCurveDirectedCallout::type() {
    return IfcDimensionCurveDirectedCallout::s_type.getName();
}

Step::ClassType IfcDimensionCurveDirectedCallout::getClassType() {
    return IfcDimensionCurveDirectedCallout::s_type;
}

Step::ClassType IfcDimensionCurveDirectedCallout::getType() const {
    return IfcDimensionCurveDirectedCallout::s_type;
}

bool IfcDimensionCurveDirectedCallout::isOfType(Step::ClassType t) {
    return IfcDimensionCurveDirectedCallout::s_type == t ? true : IfcDraughtingCallout::isOfType(t);
}

void IfcDimensionCurveDirectedCallout::release() {
    IfcDraughtingCallout::release();
}

bool IfcDimensionCurveDirectedCallout::init() {
    bool status = IfcDraughtingCallout::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDimensionCurveDirectedCallout::copy(const IfcDimensionCurveDirectedCallout &obj, const CopyOp &copyop) {
    IfcDraughtingCallout::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionCurveDirectedCallout::s_type("IfcDimensionCurveDirectedCallout");
