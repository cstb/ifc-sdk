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

#include "ifc2x3/IfcElectricalCircuit.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcSystem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcElectricalCircuit::IfcElectricalCircuit(Step::Id id, Step::SPFData *args) : IfcSystem(id, args) {
}

IfcElectricalCircuit::~IfcElectricalCircuit() {
}

bool IfcElectricalCircuit::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElectricalCircuit(this);
}

const std::string &IfcElectricalCircuit::type() const {
    return IfcElectricalCircuit::s_type.getName();
}

const Step::ClassType &IfcElectricalCircuit::getClassType() {
    return IfcElectricalCircuit::s_type;
}

const Step::ClassType &IfcElectricalCircuit::getType() const {
    return IfcElectricalCircuit::s_type;
}

bool IfcElectricalCircuit::isOfType(const Step::ClassType &t) const {
    return IfcElectricalCircuit::s_type == t ? true : IfcSystem::isOfType(t);
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
