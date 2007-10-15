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

#include "ifc2x3/IfcEnergyConversionDeviceType.h"

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

IfcEnergyConversionDeviceType::IfcEnergyConversionDeviceType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcEnergyConversionDeviceType::~IfcEnergyConversionDeviceType() {
}

bool IfcEnergyConversionDeviceType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEnergyConversionDeviceType(this);
}

const std::string &IfcEnergyConversionDeviceType::type() {
    return IfcEnergyConversionDeviceType::s_type.getName();
}

Step::ClassType IfcEnergyConversionDeviceType::getClassType() {
    return IfcEnergyConversionDeviceType::s_type;
}

Step::ClassType IfcEnergyConversionDeviceType::getType() const {
    return IfcEnergyConversionDeviceType::s_type;
}

bool IfcEnergyConversionDeviceType::isOfType(Step::ClassType t) {
    return IfcEnergyConversionDeviceType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

void IfcEnergyConversionDeviceType::release() {
    IfcDistributionFlowElementType::release();
}

bool IfcEnergyConversionDeviceType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcEnergyConversionDeviceType::copy(const IfcEnergyConversionDeviceType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEnergyConversionDeviceType::s_type("IfcEnergyConversionDeviceType");
