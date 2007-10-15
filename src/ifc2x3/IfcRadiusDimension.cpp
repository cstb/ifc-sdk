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

#include "ifc2x3/IfcRadiusDimension.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDimensionCurveDirectedCallout.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRadiusDimension::IfcRadiusDimension(Step::Id id, Step::SPFData *args) : IfcDimensionCurveDirectedCallout(id, args) {
}

IfcRadiusDimension::~IfcRadiusDimension() {
}

bool IfcRadiusDimension::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRadiusDimension(this);
}

const std::string &IfcRadiusDimension::type() {
    return IfcRadiusDimension::s_type.getName();
}

Step::ClassType IfcRadiusDimension::getClassType() {
    return IfcRadiusDimension::s_type;
}

Step::ClassType IfcRadiusDimension::getType() const {
    return IfcRadiusDimension::s_type;
}

bool IfcRadiusDimension::isOfType(Step::ClassType t) {
    return IfcRadiusDimension::s_type == t ? true : IfcDimensionCurveDirectedCallout::isOfType(t);
}

void IfcRadiusDimension::release() {
    IfcDimensionCurveDirectedCallout::release();
}

bool IfcRadiusDimension::init() {
    bool status = IfcDimensionCurveDirectedCallout::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRadiusDimension::copy(const IfcRadiusDimension &obj, const CopyOp &copyop) {
    IfcDimensionCurveDirectedCallout::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRadiusDimension::s_type("IfcRadiusDimension");
