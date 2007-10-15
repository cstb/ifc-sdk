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

#include "ifc2x3/IfcRelAggregates.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRelDecomposes.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelAggregates::IfcRelAggregates(Step::Id id, Step::SPFData *args) : IfcRelDecomposes(id, args) {
}

IfcRelAggregates::~IfcRelAggregates() {
}

bool IfcRelAggregates::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelAggregates(this);
}

const std::string &IfcRelAggregates::type() {
    return IfcRelAggregates::s_type.getName();
}

Step::ClassType IfcRelAggregates::getClassType() {
    return IfcRelAggregates::s_type;
}

Step::ClassType IfcRelAggregates::getType() const {
    return IfcRelAggregates::s_type;
}

bool IfcRelAggregates::isOfType(Step::ClassType t) {
    return IfcRelAggregates::s_type == t ? true : IfcRelDecomposes::isOfType(t);
}

void IfcRelAggregates::release() {
    IfcRelDecomposes::release();
}

bool IfcRelAggregates::init() {
    bool status = IfcRelDecomposes::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelAggregates::copy(const IfcRelAggregates &obj, const CopyOp &copyop) {
    IfcRelDecomposes::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAggregates::s_type("IfcRelAggregates");
