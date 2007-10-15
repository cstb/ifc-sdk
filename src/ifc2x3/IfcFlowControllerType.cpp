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

#include "ifc2x3/IfcFlowControllerType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFlowControllerType::IfcFlowControllerType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowControllerType::~IfcFlowControllerType() {
}

bool IfcFlowControllerType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowControllerType(this);
}

const std::string &IfcFlowControllerType::type() {
    return IfcFlowControllerType::s_type.getName();
}

Step::ClassType IfcFlowControllerType::getClassType() {
    return IfcFlowControllerType::s_type;
}

Step::ClassType IfcFlowControllerType::getType() const {
    return IfcFlowControllerType::s_type;
}

bool IfcFlowControllerType::isOfType(Step::ClassType t) {
    return IfcFlowControllerType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

void IfcFlowControllerType::release() {
    IfcDistributionFlowElementType::release();
}

bool IfcFlowControllerType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowControllerType::copy(const IfcFlowControllerType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowControllerType::s_type("IfcFlowControllerType");
