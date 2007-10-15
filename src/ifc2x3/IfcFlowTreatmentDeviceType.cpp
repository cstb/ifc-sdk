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

#include "ifc2x3/IfcFlowTreatmentDeviceType.h"

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

IfcFlowTreatmentDeviceType::IfcFlowTreatmentDeviceType(Step::Id id, Step::SPFData *args) : IfcDistributionFlowElementType(id, args) {
}

IfcFlowTreatmentDeviceType::~IfcFlowTreatmentDeviceType() {
}

bool IfcFlowTreatmentDeviceType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowTreatmentDeviceType(this);
}

const std::string &IfcFlowTreatmentDeviceType::type() {
    return IfcFlowTreatmentDeviceType::s_type.getName();
}

Step::ClassType IfcFlowTreatmentDeviceType::getClassType() {
    return IfcFlowTreatmentDeviceType::s_type;
}

Step::ClassType IfcFlowTreatmentDeviceType::getType() const {
    return IfcFlowTreatmentDeviceType::s_type;
}

bool IfcFlowTreatmentDeviceType::isOfType(Step::ClassType t) {
    return IfcFlowTreatmentDeviceType::s_type == t ? true : IfcDistributionFlowElementType::isOfType(t);
}

void IfcFlowTreatmentDeviceType::release() {
    IfcDistributionFlowElementType::release();
}

bool IfcFlowTreatmentDeviceType::init() {
    bool status = IfcDistributionFlowElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFlowTreatmentDeviceType::copy(const IfcFlowTreatmentDeviceType &obj, const CopyOp &copyop) {
    IfcDistributionFlowElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowTreatmentDeviceType::s_type("IfcFlowTreatmentDeviceType");
