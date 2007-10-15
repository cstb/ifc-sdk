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

#include "ifc2x3/IfcFaceOuterBound.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFaceBound.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFaceOuterBound::IfcFaceOuterBound(Step::Id id, Step::SPFData *args) : IfcFaceBound(id, args) {
}

IfcFaceOuterBound::~IfcFaceOuterBound() {
}

bool IfcFaceOuterBound::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFaceOuterBound(this);
}

const std::string &IfcFaceOuterBound::type() {
    return IfcFaceOuterBound::s_type.getName();
}

Step::ClassType IfcFaceOuterBound::getClassType() {
    return IfcFaceOuterBound::s_type;
}

Step::ClassType IfcFaceOuterBound::getType() const {
    return IfcFaceOuterBound::s_type;
}

bool IfcFaceOuterBound::isOfType(Step::ClassType t) {
    return IfcFaceOuterBound::s_type == t ? true : IfcFaceBound::isOfType(t);
}

void IfcFaceOuterBound::release() {
    IfcFaceBound::release();
}

bool IfcFaceOuterBound::init() {
    bool status = IfcFaceBound::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFaceOuterBound::copy(const IfcFaceOuterBound &obj, const CopyOp &copyop) {
    IfcFaceBound::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFaceOuterBound::s_type("IfcFaceOuterBound");
