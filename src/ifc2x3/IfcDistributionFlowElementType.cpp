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

#include "ifc2x3/IfcDistributionFlowElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDistributionFlowElementType::IfcDistributionFlowElementType(Step::Id id, Step::SPFData *args) : IfcDistributionElementType(id, args) {
}

IfcDistributionFlowElementType::~IfcDistributionFlowElementType() {
}

bool IfcDistributionFlowElementType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDistributionFlowElementType(this);
}

const std::string &IfcDistributionFlowElementType::type() {
    return IfcDistributionFlowElementType::s_type.getName();
}

Step::ClassType IfcDistributionFlowElementType::getClassType() {
    return IfcDistributionFlowElementType::s_type;
}

Step::ClassType IfcDistributionFlowElementType::getType() const {
    return IfcDistributionFlowElementType::s_type;
}

bool IfcDistributionFlowElementType::isOfType(Step::ClassType t) {
    return IfcDistributionFlowElementType::s_type == t ? true : IfcDistributionElementType::isOfType(t);
}

void IfcDistributionFlowElementType::release() {
    IfcDistributionElementType::release();
}

bool IfcDistributionFlowElementType::init() {
    bool status = IfcDistributionElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcDistributionFlowElementType::copy(const IfcDistributionFlowElementType &obj, const CopyOp &copyop) {
    IfcDistributionElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDistributionFlowElementType::s_type("IfcDistributionFlowElementType");
