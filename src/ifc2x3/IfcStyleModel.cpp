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

#include "ifc2x3/IfcStyleModel.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcStyleModel::IfcStyleModel(Step::Id id, Step::SPFData *args) : IfcRepresentation(id, args) {
}

IfcStyleModel::~IfcStyleModel() {
}

bool IfcStyleModel::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStyleModel(this);
}

const std::string &IfcStyleModel::type() const {
    return IfcStyleModel::s_type.getName();
}

const Step::ClassType &IfcStyleModel::getClassType() {
    return IfcStyleModel::s_type;
}

const Step::ClassType &IfcStyleModel::getType() const {
    return IfcStyleModel::s_type;
}

bool IfcStyleModel::isOfType(const Step::ClassType &t) const {
    return IfcStyleModel::s_type == t ? true : IfcRepresentation::isOfType(t);
}

bool IfcStyleModel::init() {
    bool status = IfcRepresentation::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStyleModel::copy(const IfcStyleModel &obj, const CopyOp &copyop) {
    IfcRepresentation::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStyleModel::s_type("IfcStyleModel");
