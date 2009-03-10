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

bool IfcFlowTreatmentDevice::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcFlowTreatmentDevice(this);
}

const std::string &IfcFlowTreatmentDevice::type() const {
    return IfcFlowTreatmentDevice::s_type.getName();
}

const Step::ClassType &IfcFlowTreatmentDevice::getClassType() {
    return IfcFlowTreatmentDevice::s_type;
}

const Step::ClassType &IfcFlowTreatmentDevice::getType() const {
    return IfcFlowTreatmentDevice::s_type;
}

bool IfcFlowTreatmentDevice::isOfType(const Step::ClassType &t) const {
    return IfcFlowTreatmentDevice::s_type == t ? true : IfcDistributionFlowElement::isOfType(t);
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
