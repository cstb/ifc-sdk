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

#include "ifc2x3/IfcBoundedCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcBoundedCurve::IfcBoundedCurve(Step::Id id, Step::SPFData *args) : IfcCurve(id, args) {
}

IfcBoundedCurve::~IfcBoundedCurve() {
}

bool IfcBoundedCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundedCurve(this);
}

const std::string &IfcBoundedCurve::type() const {
    return IfcBoundedCurve::s_type.getName();
}

const Step::ClassType &IfcBoundedCurve::getClassType() {
    return IfcBoundedCurve::s_type;
}

const Step::ClassType &IfcBoundedCurve::getType() const {
    return IfcBoundedCurve::s_type;
}

bool IfcBoundedCurve::isOfType(const Step::ClassType &t) const {
    return IfcBoundedCurve::s_type == t ? true : IfcCurve::isOfType(t);
}

bool IfcBoundedCurve::init() {
    bool status = IfcCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcBoundedCurve::copy(const IfcBoundedCurve &obj, const CopyOp &copyop) {
    IfcCurve::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundedCurve::s_type("IfcBoundedCurve");
