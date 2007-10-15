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

#include "ifc2x3/IfcDiameterDimension.h"

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

IfcDiameterDimension::IfcDiameterDimension(Step::Id id, Step::SPFData *args) : IfcDimensionCurveDirectedCallout(id, args) {
}

IfcDiameterDimension::~IfcDiameterDimension() {
}

bool IfcDiameterDimension::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDiameterDimension(this);
}

const std::string &IfcDiameterDimension::type() {
    return IfcDiameterDimension::s_type.getName();
}

Step::ClassType IfcDiameterDimension::getClassType() {
    return IfcDiameterDimension::s_type;
}

Step::ClassType IfcDiameterDimension::getType() const {
    return IfcDiameterDimension::s_type;
}

bool IfcDiameterDimension::isOfType(Step::ClassType t) {
    return IfcDiameterDimension::s_type == t ? true : IfcDimensionCurveDirectedCallout::isOfType(t);
}

void IfcDiameterDimension::release() {
    IfcDimensionCurveDirectedCallout::release();
}

bool IfcDiameterDimension::init() {
    bool status = IfcDimensionCurveDirectedCallout::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDiameterDimension::copy(const IfcDiameterDimension &obj, const CopyOp &copyop) {
    IfcDimensionCurveDirectedCallout::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDiameterDimension::s_type("IfcDiameterDimension");
