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

#include "ifc2x3/IfcFlowMovingDeviceType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDistributionFlowElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcFlowMovingDeviceType::IfcFlowMovingDeviceType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowMovingDeviceType::~IfcFlowMovingDeviceType() {
}

bool IfcFlowMovingDeviceType::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowMovingDeviceType(this);
}

const std::string &IfcFlowMovingDeviceType::type() const {
    return IfcFlowMovingDeviceType::s_type.getName();
}

const Step::ClassType &IfcFlowMovingDeviceType::getClassType() {
    return IfcFlowMovingDeviceType::s_type;
}

const Step::ClassType &IfcFlowMovingDeviceType::getType() const {
    return IfcFlowMovingDeviceType::s_type;
}

bool IfcFlowMovingDeviceType::isOfType(const Step::ClassType &t) const {
    return IfcFlowMovingDeviceType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

bool IfcFlowMovingDeviceType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowMovingDeviceType::copy(const IfcFlowMovingDeviceType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowMovingDeviceType::s_type("IfcFlowMovingDeviceType");
