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

#include "ifc2x3/IfcStyledRepresentation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStyleModel.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcStyledRepresentation::IfcStyledRepresentation(Step::Id id, Step::SPFData *args) : IfcStyleModel(id, args) {
}

IfcStyledRepresentation::~IfcStyledRepresentation() {
}

bool IfcStyledRepresentation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStyledRepresentation(this);
}

const std::string &IfcStyledRepresentation::type() const {
    return IfcStyledRepresentation::s_type.getName();
}

const Step::ClassType &IfcStyledRepresentation::getClassType() {
    return IfcStyledRepresentation::s_type;
}

const Step::ClassType &IfcStyledRepresentation::getType() const {
    return IfcStyledRepresentation::s_type;
}

bool IfcStyledRepresentation::isOfType(const Step::ClassType &t) const {
    return IfcStyledRepresentation::s_type == t ? true : IfcStyleModel::isOfType(t);
}

bool IfcStyledRepresentation::init() {
    bool status = IfcStyleModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStyledRepresentation::copy(const IfcStyledRepresentation &obj, const CopyOp &copyop) {
    IfcStyleModel::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStyledRepresentation::s_type("IfcStyledRepresentation");
