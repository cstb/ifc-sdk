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

#include "ifc2x3/IfcStyledRepresentation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStyleModel.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStyledRepresentation::IfcStyledRepresentation(Step::Id id, Step::SPFData *args) : IfcStyleModel(id, args) {
}

IfcStyledRepresentation::~IfcStyledRepresentation() {
}

bool IfcStyledRepresentation::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStyledRepresentation(this);
}

const std::string &IfcStyledRepresentation::type() {
    return IfcStyledRepresentation::s_type.getName();
}

Step::ClassType IfcStyledRepresentation::getClassType() {
    return IfcStyledRepresentation::s_type;
}

Step::ClassType IfcStyledRepresentation::getType() const {
    return IfcStyledRepresentation::s_type;
}

bool IfcStyledRepresentation::isOfType(Step::ClassType t) {
    return IfcStyledRepresentation::s_type == t ? true : IfcStyleModel::isOfType(t);
}

void IfcStyledRepresentation::release() {
    IfcStyleModel::release();
}

bool IfcStyledRepresentation::init() {
    bool status = IfcStyleModel::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStyledRepresentation::copy(const IfcStyledRepresentation &obj, const CopyOp &copyop) {
    IfcStyleModel::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStyledRepresentation::s_type("IfcStyledRepresentation");
