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

#include "ifc2x3/IfcAngularDimension.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDimensionCurveDirectedCallout.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcAngularDimension::IfcAngularDimension(Step::Id id, Step::SPFData *args) : IfcDimensionCurveDirectedCallout(id, args) {
}

IfcAngularDimension::~IfcAngularDimension() {
}

bool IfcAngularDimension::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAngularDimension(this);
}

const std::string &IfcAngularDimension::type() const {
    return IfcAngularDimension::s_type.getName();
}

const Step::ClassType &IfcAngularDimension::getClassType() {
    return IfcAngularDimension::s_type;
}

const Step::ClassType &IfcAngularDimension::getType() const {
    return IfcAngularDimension::s_type;
}

bool IfcAngularDimension::isOfType(const Step::ClassType &t) const {
    return IfcAngularDimension::s_type == t ? true : IfcDimensionCurveDirectedCallout::isOfType(t);
}

bool IfcAngularDimension::init() {
    bool status = IfcDimensionCurveDirectedCallout::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAngularDimension::copy(const IfcAngularDimension &obj, const CopyOp &copyop) {
    IfcDimensionCurveDirectedCallout::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAngularDimension::s_type("IfcAngularDimension");
