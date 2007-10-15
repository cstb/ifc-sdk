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

#include "ifc2x3/IfcDimensionPair.h"

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

IfcDimensionPair::IfcDimensionPair(Step::Id id, Step::SPFData *args) : IfcDraughtingCalloutRelationship(id, args) {
}

IfcDimensionPair::~IfcDimensionPair() {
}

bool IfcDimensionPair::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDimensionPair(this);
}

const std::string &IfcDimensionPair::type() {
    return IfcDimensionPair::s_type.getName();
}

Step::ClassType IfcDimensionPair::getClassType() {
    return IfcDimensionPair::s_type;
}

Step::ClassType IfcDimensionPair::getType() const {
    return IfcDimensionPair::s_type;
}

bool IfcDimensionPair::isOfType(Step::ClassType t) {
    return IfcDimensionPair::s_type == t ? true : IfcDraughtingCalloutRelationship::isOfType(t);
}

void IfcDimensionPair::release() {
    IfcDraughtingCalloutRelationship::release();
}

bool IfcDimensionPair::init() {
    bool status = IfcDraughtingCalloutRelationship::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDimensionPair::copy(const IfcDimensionPair &obj, const CopyOp &copyop) {
    IfcDraughtingCalloutRelationship::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDimensionPair::s_type("IfcDimensionPair");
