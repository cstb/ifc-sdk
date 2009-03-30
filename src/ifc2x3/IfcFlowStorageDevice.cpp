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

#include "ifc2x3/IfcFlowStorageDevice.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowStorageDevice::IfcFlowStorageDevice(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowStorageDevice::~IfcFlowStorageDevice() {
}

bool IfcFlowStorageDevice::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowStorageDevice(this);
}

const std::string &IfcFlowStorageDevice::type() const {
    return IfcFlowStorageDevice::s_type.getName();
}

const Step::ClassType &IfcFlowStorageDevice::getClassType() {
    return IfcFlowStorageDevice::s_type;
}

const Step::ClassType &IfcFlowStorageDevice::getType() const {
    return IfcFlowStorageDevice::s_type;
}

bool IfcFlowStorageDevice::isOfType(const Step::ClassType &t) const {
    return IfcFlowStorageDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
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
