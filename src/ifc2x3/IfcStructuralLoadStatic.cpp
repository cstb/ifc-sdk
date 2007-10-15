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

#include "ifc2x3/IfcStructuralLoadStatic.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralLoad.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLoadStatic::IfcStructuralLoadStatic(Step::Id id, Step::SPFData *args) : IfcStructuralLoad(id, args) {
}

IfcStructuralLoadStatic::~IfcStructuralLoadStatic() {
}

bool IfcStructuralLoadStatic::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoadStatic(this);
}

const std::string &IfcStructuralLoadStatic::type() {
    return IfcStructuralLoadStatic::s_type.getName();
}

Step::ClassType IfcStructuralLoadStatic::getClassType() {
    return IfcStructuralLoadStatic::s_type;
}

Step::ClassType IfcStructuralLoadStatic::getType() const {
    return IfcStructuralLoadStatic::s_type;
}

bool IfcStructuralLoadStatic::isOfType(Step::ClassType t) {
    return IfcStructuralLoadStatic::s_type == t ? true : IfcStructuralLoad::isOfType(t);
}

void IfcStructuralLoadStatic::release() {
    IfcStructuralLoad::release();
}

bool IfcStructuralLoadStatic::init() {
    bool status = IfcStructuralLoad::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralLoadStatic::copy(const IfcStructuralLoadStatic &obj, const CopyOp &copyop) {
    IfcStructuralLoad::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadStatic::s_type("IfcStructuralLoadStatic");
