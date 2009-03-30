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
 *     Copyright (C) 2009 CSTB                                             *
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

using namespace ifc2x3;

IfcFlowMovingDevice::IfcFlowMovingDevice(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowMovingDevice::~IfcFlowMovingDevice() {
}

bool IfcFlowMovingDevice::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowMovingDevice(this);
}

const std::string &IfcFlowMovingDevice::type() const {
    return IfcFlowMovingDevice::s_type.getName();
}

const Step::ClassType &IfcFlowMovingDevice::getClassType() {
    return IfcFlowMovingDevice::s_type;
}

const Step::ClassType &IfcFlowMovingDevice::getType() const {
    return IfcFlowMovingDevice::s_type;
}

bool IfcFlowMovingDevice::isOfType(const Step::ClassType &t) const {
    return IfcFlowMovingDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
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
