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

#include "ifc2x3/IfcFaceOuterBound.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFaceBound.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFaceOuterBound::IfcFaceOuterBound(Step::Id id, Step::SPFData *args) : IfcFaceBound(id, args) {
}

IfcFaceOuterBound::~IfcFaceOuterBound() {
}

bool IfcFaceOuterBound::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFaceOuterBound(this);
}

const std::string &IfcFaceOuterBound::type() const {
    return IfcFaceOuterBound::s_type.getName();
}

const Step::ClassType &IfcFaceOuterBound::getClassType() {
    return IfcFaceOuterBound::s_type;
}

const Step::ClassType &IfcFaceOuterBound::getType() const {
    return IfcFaceOuterBound::s_type;
}

bool IfcFaceOuterBound::isOfType(const Step::ClassType &t) const {
    return IfcFaceOuterBound::s_type == t ? true : IfcFaceBound::isOfType(t);
}

bool IfcFaceOuterBound::init() {
    bool status = IfcFaceBound::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFaceOuterBound::copy(const IfcFaceOuterBound &obj, const CopyOp &copyop) {
    IfcFaceBound::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFaceOuterBound::s_type("IfcFaceOuterBound");
