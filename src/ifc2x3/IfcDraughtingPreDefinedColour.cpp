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

#include "ifc2x3/IfcDraughtingPreDefinedColour.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPreDefinedColour.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcDraughtingPreDefinedColour::IfcDraughtingPreDefinedColour(Step::Id id, Step::SPFData *args) : IfcPreDefinedColour(id, args) {
}

IfcDraughtingPreDefinedColour::~IfcDraughtingPreDefinedColour() {
}

bool IfcDraughtingPreDefinedColour::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDraughtingPreDefinedColour(this);
}

const std::string &IfcDraughtingPreDefinedColour::type() const {
    return IfcDraughtingPreDefinedColour::s_type.getName();
}

const Step::ClassType &IfcDraughtingPreDefinedColour::getClassType() {
    return IfcDraughtingPreDefinedColour::s_type;
}

const Step::ClassType &IfcDraughtingPreDefinedColour::getType() const {
    return IfcDraughtingPreDefinedColour::s_type;
}

bool IfcDraughtingPreDefinedColour::isOfType(const Step::ClassType &t) const {
    return IfcDraughtingPreDefinedColour::s_type == t ? true : IfcPreDefinedColour::isOfType(t);
}

bool IfcDraughtingPreDefinedColour::init() {
    bool status = IfcPreDefinedColour::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDraughtingPreDefinedColour::copy(const IfcDraughtingPreDefinedColour &obj, const CopyOp &copyop) {
    IfcPreDefinedColour::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDraughtingPreDefinedColour::s_type("IfcDraughtingPreDefinedColour");
