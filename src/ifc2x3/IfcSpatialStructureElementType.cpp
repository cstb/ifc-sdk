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

#include "ifc2x3/IfcSpatialStructureElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcSpatialStructureElementType::IfcSpatialStructureElementType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcSpatialStructureElementType::~IfcSpatialStructureElementType() {
}

bool IfcSpatialStructureElementType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpatialStructureElementType(this);
}

const std::string &IfcSpatialStructureElementType::type() const {
    return IfcSpatialStructureElementType::s_type.getName();
}

const Step::ClassType &IfcSpatialStructureElementType::getClassType() {
    return IfcSpatialStructureElementType::s_type;
}

const Step::ClassType &IfcSpatialStructureElementType::getType() const {
    return IfcSpatialStructureElementType::s_type;
}

bool IfcSpatialStructureElementType::isOfType(const Step::ClassType &t) const {
    return IfcSpatialStructureElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

bool IfcSpatialStructureElementType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcSpatialStructureElementType::copy(const IfcSpatialStructureElementType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSpatialStructureElementType::s_type("IfcSpatialStructureElementType");
