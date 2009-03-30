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

#include "ifc2x3/IfcAnnotationSurfaceOccurrence.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAnnotationOccurrence.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcAnnotationSurfaceOccurrence::IfcAnnotationSurfaceOccurrence(Step::Id id, Step::SPFData *args) : IfcAnnotationOccurrence(id, args) {
}

IfcAnnotationSurfaceOccurrence::~IfcAnnotationSurfaceOccurrence() {
}

bool IfcAnnotationSurfaceOccurrence::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAnnotationSurfaceOccurrence(this);
}

const std::string &IfcAnnotationSurfaceOccurrence::type() const {
    return IfcAnnotationSurfaceOccurrence::s_type.getName();
}

const Step::ClassType &IfcAnnotationSurfaceOccurrence::getClassType() {
    return IfcAnnotationSurfaceOccurrence::s_type;
}

const Step::ClassType &IfcAnnotationSurfaceOccurrence::getType() const {
    return IfcAnnotationSurfaceOccurrence::s_type;
}

bool IfcAnnotationSurfaceOccurrence::isOfType(const Step::ClassType &t) const {
    return IfcAnnotationSurfaceOccurrence::s_type == t ? true : IfcAnnotationOccurrence::isOfType(t);
}

bool IfcAnnotationSurfaceOccurrence::init() {
    bool status = IfcAnnotationOccurrence::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcAnnotationSurfaceOccurrence::copy(const IfcAnnotationSurfaceOccurrence &obj, const CopyOp &copyop) {
    IfcAnnotationOccurrence::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcAnnotationSurfaceOccurrence::s_type("IfcAnnotationSurfaceOccurrence");
