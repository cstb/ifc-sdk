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

#include "ifc2x3/IfcEnergyConversionDevice.h"

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

IfcEnergyConversionDevice::IfcEnergyConversionDevice(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcEnergyConversionDevice::~IfcEnergyConversionDevice() {
}

bool IfcEnergyConversionDevice::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEnergyConversionDevice(this);
}

const std::string &IfcEnergyConversionDevice::type() {
    return IfcEnergyConversionDevice::s_type.getName();
}

Step::ClassType IfcEnergyConversionDevice::getClassType() {
    return IfcEnergyConversionDevice::s_type;
}

Step::ClassType IfcEnergyConversionDevice::getType() const {
    return IfcEnergyConversionDevice::s_type;
}

bool IfcEnergyConversionDevice::isOfType(Step::ClassType t) {
    return IfcEnergyConversionDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

void IfcEnergyConversionDevice::release() {
    IfcDistributionFlowElement::release();
}

bool IfcEnergyConversionDevice::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcEnergyConversionDevice::copy(const IfcEnergyConversionDevice &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEnergyConversionDevice::s_type("IfcEnergyConversionDevice");
