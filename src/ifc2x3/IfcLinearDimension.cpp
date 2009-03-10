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

#include "ifc2x3/IfcLinearDimension.h"

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

IfcLinearDimension::IfcLinearDimension(Step::Id id, Step::SPFData *args) : IfcDimensionCurveDirectedCallout(id, args) {
}

IfcLinearDimension::~IfcLinearDimension() {
}

bool IfcLinearDimension::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLinearDimension(this);
}

const std::string &IfcLinearDimension::type() const {
    return IfcLinearDimension::s_type.getName();
}

const Step::ClassType &IfcLinearDimension::getClassType() {
    return IfcLinearDimension::s_type;
}

const Step::ClassType &IfcLinearDimension::getType() const {
    return IfcLinearDimension::s_type;
}

bool IfcLinearDimension::isOfType(const Step::ClassType &t) const {
    return IfcLinearDimension::s_type == t ? true : IfcDimensionCurveDirectedCallout::isOfType(t);
}

bool IfcLinearDimension::init() {
    bool status = IfcDimensionCurveDirectedCallout::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcLinearDimension::copy(const IfcLinearDimension &obj, const CopyOp &copyop) {
    IfcDimensionCurveDirectedCallout::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcLinearDimension::s_type("IfcLinearDimension");
