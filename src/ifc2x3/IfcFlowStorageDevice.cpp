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

#include "ifc2x3/IfcFlowStorageDevice.h"

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

IfcFlowStorageDevice::IfcFlowStorageDevice(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowStorageDevice::~IfcFlowStorageDevice() {
}

bool IfcFlowStorageDevice::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowStorageDevice(this);
}

const std::string &IfcFlowStorageDevice::type() {
    return IfcFlowStorageDevice::s_type.getName();
}

Step::ClassType IfcFlowStorageDevice::getClassType() {
    return IfcFlowStorageDevice::s_type;
}

Step::ClassType IfcFlowStorageDevice::getType() const {
    return IfcFlowStorageDevice::s_type;
}

bool IfcFlowStorageDevice::isOfType(Step::ClassType t) {
    return IfcFlowStorageDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

void IfcFlowStorageDevice::release() {
    IfcDistributionFlowElement::release();
}

bool IfcFlowStorageDevice::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowStorageDevice::copy(const IfcFlowStorageDevice &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowStorageDevice::s_type("IfcFlowStorageDevice");
