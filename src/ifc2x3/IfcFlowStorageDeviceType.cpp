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

#include "ifc2x3/IfcFlowStorageDeviceType.h"

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

IfcFlowStorageDeviceType::IfcFlowStorageDeviceType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowStorageDeviceType::~IfcFlowStorageDeviceType() {
}

bool IfcFlowStorageDeviceType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowStorageDeviceType(this);
}

const std::string &IfcFlowStorageDeviceType::type() {
    return IfcFlowStorageDeviceType::s_type.getName();
}

Step::ClassType IfcFlowStorageDeviceType::getClassType() {
    return IfcFlowStorageDeviceType::s_type;
}

Step::ClassType IfcFlowStorageDeviceType::getType() const {
    return IfcFlowStorageDeviceType::s_type;
}

bool IfcFlowStorageDeviceType::isOfType(Step::ClassType t) {
    return IfcFlowStorageDeviceType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

void IfcFlowStorageDeviceType::release() {
    IfcDistributionFlowElementType::release();
}

bool IfcFlowStorageDeviceType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowStorageDeviceType::copy(const IfcFlowStorageDeviceType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowStorageDeviceType::s_type("IfcFlowStorageDeviceType");
