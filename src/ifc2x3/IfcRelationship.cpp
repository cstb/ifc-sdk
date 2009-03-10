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

#include "ifc2x3/IfcRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRoot.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelationship::IfcRelationship(Step::Id id, Step::SPFData *args) : IfcRoot(id, args) {
}

IfcRelationship::~IfcRelationship() {
}

bool IfcRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelationship(this);
}

const std::string &IfcRelationship::type() const {
    return IfcRelationship::s_type.getName();
}

const Step::ClassType &IfcRelationship::getClassType() {
    return IfcRelationship::s_type;
}

const Step::ClassType &IfcRelationship::getType() const {
    return IfcRelationship::s_type;
}

bool IfcRelationship::isOfType(const Step::ClassType &t) const {
    return IfcRelationship::s_type == t ? true : IfcRoot::isOfType(t);
}

bool IfcRelationship::init() {
    bool status = IfcRoot::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcRelationship::copy(const IfcRelationship &obj, const CopyOp &copyop) {
    IfcRoot::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelationship::s_type("IfcRelationship");
