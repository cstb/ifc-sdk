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

#include "ifc2x3/IfcFlowTreatmentDevice.h"

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

IfcFlowTreatmentDevice::IfcFlowTreatmentDevice(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElement(id, args) {
}

IfcFlowTreatmentDevice::~IfcFlowTreatmentDevice() {
}

bool IfcFlowTreatmentDevice::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowTreatmentDevice(this);
}

const std::string &IfcFlowTreatmentDevice::type() {
    return IfcFlowTreatmentDevice::s_type.getName();
}

Step::ClassType IfcFlowTreatmentDevice::getClassType() {
    return IfcFlowTreatmentDevice::s_type;
}

Step::ClassType IfcFlowTreatmentDevice::getType() const {
    return IfcFlowTreatmentDevice::s_type;
}

bool IfcFlowTreatmentDevice::isOfType(Step::ClassType t) {
    return IfcFlowTreatmentDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
}

void IfcFlowTreatmentDevice::release() {
    IfcDistributionFlowElement::release();
}

bool IfcFlowTreatmentDevice::init() {
    bool status = IfcDistributionFlowElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowTreatmentDevice::copy(const IfcFlowTreatmentDevice &obj, const CopyOp &copyop) {
    IfcDistributionFlowElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowTreatmentDevice::s_type("IfcFlowTreatmentDevice");
