/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include "ifc2x3/IfcDimensionCalloutRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDraughtingCalloutRelationship.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDimensionCalloutRelationship::IfcDimensionCalloutRelationship(Step::Id id, Step::SPFData *args) : IfcDraughtingCalloutRelationship(id, args) {
}

IfcDimensionCalloutRelationship::~IfcDimensionCalloutRelationship() {
}

bool IfcDimensionCalloutRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDimensionCalloutRelationship(this);
}

const std::string &IfcDimensionCalloutRelationship::type() {
    return IfcDimensionCalloutRelationship::s_type.getName();
}

Step::ClassType IfcDimensionCalloutRelationship::getClassType() {
    return IfcDimensionCalloutRelationship::s_type;
}

Step::ClassType IfcDimensionCalloutRelationship::getType() const {
    return IfcDimensionCalloutRelationship::s_type;
}

bool IfcDimensionCalloutRelationship::isOfType(Step::ClassType t) {
    return IfcDimensionCalloutRelationship::s_type == t ? true : IfcDraughtingCalloutRelationship::isOfType(t);
}

void IfcDimensionCalloutRelationship::release() {
    IfcDraughtingCalloutRelationship::release();
}

bool IfcDimensionCalloutRelationship::init() {
    bool status = IfcDraughtingCalloutRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDimensionCalloutRelationship::copy(const IfcDimensionCalloutRelationship &obj, const CopyOp &copyop) {
    IfcDraughtingCalloutRelationship::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionCalloutRelationship::s_type("IfcDimensionCalloutRelationship");
