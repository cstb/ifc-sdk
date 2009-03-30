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

#include "ifc2x3/IfcConnectionGeometry.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcConnectionGeometry::IfcConnectionGeometry(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
}

IfcConnectionGeometry::~IfcConnectionGeometry() {
}

bool IfcConnectionGeometry::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConnectionGeometry(this);
}

const std::string &IfcConnectionGeometry::type() const {
    return IfcConnectionGeometry::s_type.getName();
}

const Step::ClassType &IfcConnectionGeometry::getClassType() {
    return IfcConnectionGeometry::s_type;
}

const Step::ClassType &IfcConnectionGeometry::getType() const {
    return IfcConnectionGeometry::s_type;
}

bool IfcConnectionGeometry::isOfType(const Step::ClassType &t) const {
    return IfcConnectionGeometry::s_type == t ? true : Step::BaseObject::isOfType(t);
}

bool IfcConnectionGeometry::init() {
    std::string arg;
    return true;
}

void IfcConnectionGeometry::copy(const IfcConnectionGeometry &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcConnectionGeometry::s_type("IfcConnectionGeometry");
