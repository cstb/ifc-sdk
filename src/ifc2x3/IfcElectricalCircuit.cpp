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

#include "ifc2x3/IfcElectricalCircuit.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSystem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcElectricalCircuit::IfcElectricalCircuit(Step::Id id, Step::SPFData *args) : IfcSystem(id, args) {
}

IfcElectricalCircuit::~IfcElectricalCircuit() {
}

bool IfcElectricalCircuit::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElectricalCircuit(this);
}

const std::string &IfcElectricalCircuit::type() {
    return IfcElectricalCircuit::s_type.getName();
}

Step::ClassType IfcElectricalCircuit::getClassType() {
    return IfcElectricalCircuit::s_type;
}

Step::ClassType IfcElectricalCircuit::getType() const {
    return IfcElectricalCircuit::s_type;
}

bool IfcElectricalCircuit::isOfType(Step::ClassType t) {
    return IfcElectricalCircuit::s_type == t ? true : IfcSystem::isOfType(t);
}

void IfcElectricalCircuit::release() {
    IfcSystem::release();
}

bool IfcElectricalCircuit::init() {
    bool status = IfcSystem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcElectricalCircuit::copy(const IfcElectricalCircuit &obj, const CopyOp &copyop) {
    IfcSystem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricalCircuit::s_type("IfcElectricalCircuit");
