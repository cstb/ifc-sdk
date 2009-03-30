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

#include "ifc2x3/IfcCrewResource.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConstructionResource.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcCrewResource::IfcCrewResource(Step::Id id, Step::SPFData *args) : IfcConstructionResource(id, args) {
}

IfcCrewResource::~IfcCrewResource() {
}

bool IfcCrewResource::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCrewResource(this);
}

const std::string &IfcCrewResource::type() const {
    return IfcCrewResource::s_type.getName();
}

const Step::ClassType &IfcCrewResource::getClassType() {
    return IfcCrewResource::s_type;
}

const Step::ClassType &IfcCrewResource::getType() const {
    return IfcCrewResource::s_type;
}

bool IfcCrewResource::isOfType(const Step::ClassType &t) const {
    return IfcCrewResource::s_type == t ? true : IfcConstructionResource::isOfType(t);
}

bool IfcCrewResource::init() {
    bool status = IfcConstructionResource::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCrewResource::copy(const IfcCrewResource &obj, const CopyOp &copyop) {
    IfcConstructionResource::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCrewResource::s_type("IfcCrewResource");
