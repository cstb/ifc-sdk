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

#include "ifc2x3/IfcFlowMovingDevice.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFlowMovingDevice::IfcFlowMovingDevice(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowMovingDevice::~IfcFlowMovingDevice() {
}

bool IfcFlowMovingDevice::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowMovingDevice(this);
}

const std::string &IfcFlowMovingDevice::type() {
    return IfcFlowMovingDevice::s_type.getName();
}

Step::ClassType IfcFlowMovingDevice::getClassType() {
    return IfcFlowMovingDevice::s_type;
}

Step::ClassType IfcFlowMovingDevice::getType() const {
    return IfcFlowMovingDevice::s_type;
}

bool IfcFlowMovingDevice::isOfType(Step::ClassType t) {
    return IfcFlowMovingDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

void IfcFlowMovingDevice::release() {
    IfcDistributionFlowElement::release();
}

bool IfcFlowMovingDevice::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowMovingDevice::copy(const IfcFlowMovingDevice &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowMovingDevice::s_type("IfcFlowMovingDevice");
