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

#include "ifc2x3/IfcCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCurve::IfcCurve(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
}

IfcCurve::~IfcCurve() {
}

bool IfcCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCurve(this);
}

const std::string &IfcCurve::type() {
    return IfcCurve::s_type.getName();
}

Step::ClassType IfcCurve::getClassType() {
    return IfcCurve::s_type;
}

Step::ClassType IfcCurve::getType() const {
    return IfcCurve::s_type;
}

bool IfcCurve::isOfType(Step::ClassType t) {
    return IfcCurve::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

void IfcCurve::release() {
    IfcGeometricRepresentationItem::release();
}

bool IfcCurve::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcCurve::copy(const IfcCurve &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCurve::s_type("IfcCurve");
