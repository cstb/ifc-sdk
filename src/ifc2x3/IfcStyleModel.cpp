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

#include "ifc2x3/IfcStyleModel.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentation.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStyleModel::IfcStyleModel(Step::Id id, Step::SPFData *args) : IfcRepresentation(id, args) {
}

IfcStyleModel::~IfcStyleModel() {
}

bool IfcStyleModel::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStyleModel(this);
}

const std::string &IfcStyleModel::type() {
    return IfcStyleModel::s_type.getName();
}

Step::ClassType IfcStyleModel::getClassType() {
    return IfcStyleModel::s_type;
}

Step::ClassType IfcStyleModel::getType() const {
    return IfcStyleModel::s_type;
}

bool IfcStyleModel::isOfType(Step::ClassType t) {
    return IfcStyleModel::s_type == t ? true : IfcRepresentation::isOfType(t);
}

void IfcStyleModel::release() {
    IfcRepresentation::release();
}

bool IfcStyleModel::init() {
    bool status = IfcRepresentation::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStyleModel::copy(const IfcStyleModel &obj, const CopyOp &copyop) {
    IfcRepresentation::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStyleModel::s_type("IfcStyleModel");
