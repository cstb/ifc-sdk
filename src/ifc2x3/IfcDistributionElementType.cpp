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

#include "ifc2x3/IfcDistributionElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDistributionElementType::IfcDistributionElementType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcDistributionElementType::~IfcDistributionElementType() {
}

bool IfcDistributionElementType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDistributionElementType(this);
}

const std::string &IfcDistributionElementType::type() {
    return IfcDistributionElementType::s_type.getName();
}

Step::ClassType IfcDistributionElementType::getClassType() {
    return IfcDistributionElementType::s_type;
}

Step::ClassType IfcDistributionElementType::getType() const {
    return IfcDistributionElementType::s_type;
}

bool IfcDistributionElementType::isOfType(Step::ClassType t) {
    return IfcDistributionElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

void IfcDistributionElementType::release() {
    IfcElementType::release();
}

bool IfcDistributionElementType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDistributionElementType::copy(const IfcDistributionElementType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionElementType::s_type("IfcDistributionElementType");
