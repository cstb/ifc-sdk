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

#include "ifc2x3/IfcFlowFittingType.h"

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

IfcFlowFittingType::IfcFlowFittingType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowFittingType::~IfcFlowFittingType() {
}

bool IfcFlowFittingType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowFittingType(this);
}

const std::string &IfcFlowFittingType::type() {
    return IfcFlowFittingType::s_type.getName();
}

Step::ClassType IfcFlowFittingType::getClassType() {
    return IfcFlowFittingType::s_type;
}

Step::ClassType IfcFlowFittingType::getType() const {
    return IfcFlowFittingType::s_type;
}

bool IfcFlowFittingType::isOfType(Step::ClassType t) {
    return IfcFlowFittingType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

void IfcFlowFittingType::release() {
    IfcDistributionFlowElementType::release();
}

bool IfcFlowFittingType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowFittingType::copy(const IfcFlowFittingType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowFittingType::s_type("IfcFlowFittingType");
