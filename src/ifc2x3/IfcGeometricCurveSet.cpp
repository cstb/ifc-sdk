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

#include "ifc2x3/IfcGeometricCurveSet.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricSet.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcGeometricCurveSet::IfcGeometricCurveSet(Step::Id id, Step::SPFData *args) : IfcGeometricSet(id, args) {
}

IfcGeometricCurveSet::~IfcGeometricCurveSet() {
}

bool IfcGeometricCurveSet::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcGeometricCurveSet(this);
}

const std::string &IfcGeometricCurveSet::type() {
    return IfcGeometricCurveSet::s_type.getName();
}

Step::ClassType IfcGeometricCurveSet::getClassType() {
    return IfcGeometricCurveSet::s_type;
}

Step::ClassType IfcGeometricCurveSet::getType() const {
    return IfcGeometricCurveSet::s_type;
}

bool IfcGeometricCurveSet::isOfType(Step::ClassType t) {
    return IfcGeometricCurveSet::s_type == t ? true : IfcGeometricSet::isOfType(t);
}

void IfcGeometricCurveSet::release() {
    IfcGeometricSet::release();
}

bool IfcGeometricCurveSet::init() {
    bool status = IfcGeometricSet::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcGeometricCurveSet::copy(const IfcGeometricCurveSet &obj, const CopyOp &copyop) {
    IfcGeometricSet::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGeometricCurveSet::s_type("IfcGeometricCurveSet");
