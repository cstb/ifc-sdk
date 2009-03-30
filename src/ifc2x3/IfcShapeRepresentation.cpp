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

#include "ifc2x3/IfcShapeRepresentation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcShapeModel.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcShapeRepresentation::IfcShapeRepresentation(Step::Id id, Step::SPFData *args) : IfcShapeModel(id, args) {
}

IfcShapeRepresentation::~IfcShapeRepresentation() {
}

bool IfcShapeRepresentation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcShapeRepresentation(this);
}

const std::string &IfcShapeRepresentation::type() const {
    return IfcShapeRepresentation::s_type.getName();
}

const Step::ClassType &IfcShapeRepresentation::getClassType() {
    return IfcShapeRepresentation::s_type;
}

const Step::ClassType &IfcShapeRepresentation::getType() const {
    return IfcShapeRepresentation::s_type;
}

bool IfcShapeRepresentation::isOfType(const Step::ClassType &t) const {
    return IfcShapeRepresentation::s_type == t ? true : IfcShapeModel::isOfType(t);
}

bool IfcShapeRepresentation::init() {
    bool status = IfcShapeModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcShapeRepresentation::copy(const IfcShapeRepresentation &obj, const CopyOp &copyop) {
    IfcShapeModel::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcShapeRepresentation::s_type("IfcShapeRepresentation");
