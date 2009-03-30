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

#include "ifc2x3/IfcTopologyRepresentation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcShapeModel.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcTopologyRepresentation::IfcTopologyRepresentation(Step::Id id, Step::SPFData *args) : IfcShapeModel(id, args) {
}

IfcTopologyRepresentation::~IfcTopologyRepresentation() {
}

bool IfcTopologyRepresentation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTopologyRepresentation(this);
}

const std::string &IfcTopologyRepresentation::type() const {
    return IfcTopologyRepresentation::s_type.getName();
}

const Step::ClassType &IfcTopologyRepresentation::getClassType() {
    return IfcTopologyRepresentation::s_type;
}

const Step::ClassType &IfcTopologyRepresentation::getType() const {
    return IfcTopologyRepresentation::s_type;
}

bool IfcTopologyRepresentation::isOfType(const Step::ClassType &t) const {
    return IfcTopologyRepresentation::s_type == t ? true : IfcShapeModel::isOfType(t);
}

bool IfcTopologyRepresentation::init() {
    bool status = IfcShapeModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcTopologyRepresentation::copy(const IfcTopologyRepresentation &obj, const CopyOp &copyop) {
    IfcShapeModel::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTopologyRepresentation::s_type("IfcTopologyRepresentation");
