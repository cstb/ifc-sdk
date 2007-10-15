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

#include "ifc2x3/Ifc2DCompositeCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCompositeCurve.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

Ifc2DCompositeCurve::Ifc2DCompositeCurve(Step::Id id, Step::SPFData *args) : IfcCompositeCurve(id, args) {
}

Ifc2DCompositeCurve::~Ifc2DCompositeCurve() {
}

bool Ifc2DCompositeCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfc2DCompositeCurve(this);
}

const std::string &Ifc2DCompositeCurve::type() {
    return Ifc2DCompositeCurve::s_type.getName();
}

Step::ClassType Ifc2DCompositeCurve::getClassType() {
    return Ifc2DCompositeCurve::s_type;
}

Step::ClassType Ifc2DCompositeCurve::getType() const {
    return Ifc2DCompositeCurve::s_type;
}

bool Ifc2DCompositeCurve::isOfType(Step::ClassType t) {
    return Ifc2DCompositeCurve::s_type == t ? true : IfcCompositeCurve::isOfType(t);
}

void Ifc2DCompositeCurve::release() {
    IfcCompositeCurve::release();
}

bool Ifc2DCompositeCurve::init() {
    bool status = IfcCompositeCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void Ifc2DCompositeCurve::copy(const Ifc2DCompositeCurve &obj, const CopyOp &copyop) {
    IfcCompositeCurve::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType Ifc2DCompositeCurve::s_type("Ifc2DCompositeCurve");
