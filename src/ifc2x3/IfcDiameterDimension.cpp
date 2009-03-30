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
 *     Copyright (C) 2009 CSTB                                             *
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

using namespace ifc2x3;

IfcDiameterDimension::IfcDiameterDimension(Step::Id id, Step::SPFData *args) : IfcDimensionCurveDirectedCallout(id, args) {
}

IfcDiameterDimension::~IfcDiameterDimension() {
}

bool IfcDiameterDimension::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDiameterDimension(this);
}

const std::string &IfcDiameterDimension::type() const {
    return IfcDiameterDimension::s_type.getName();
}

const Step::ClassType &IfcDiameterDimension::getClassType() {
    return IfcDiameterDimension::s_type;
}

const Step::ClassType &IfcDiameterDimension::getType() const {
    return IfcDiameterDimension::s_type;
}

bool IfcDiameterDimension::isOfType(const Step::ClassType &t) const {
    return IfcDiameterDimension::s_type == t ? true : IfcDimensionCurveDirectedCallout::isOfType(t);
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
