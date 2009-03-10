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
 *     Copyright (C) 2008 CSTB                                             *
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

#include "ifc2x3/IfcFlowTerminalType.h"

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

IfcFlowTerminalType::IfcFlowTerminalType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowTerminalType::~IfcFlowTerminalType() {
}

bool IfcFlowTerminalType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowTerminalType(this);
}

const std::string &IfcFlowTerminalType::type() const {
    return IfcFlowTerminalType::s_type.getName();
}

const Step::ClassType &IfcFlowTerminalType::getClassType() {
    return IfcFlowTerminalType::s_type;
}

const Step::ClassType &IfcFlowTerminalType::getType() const {
    return IfcFlowTerminalType::s_type;
}

bool IfcFlowTerminalType::isOfType(const Step::ClassType &t) const {
    return IfcFlowTerminalType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

bool IfcFlowTerminalType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowTerminalType::copy(const IfcFlowTerminalType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowTerminalType::s_type("IfcFlowTerminalType");
