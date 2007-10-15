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

#include "ifc2x3/IfcStructuralCurveConnection.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralConnection.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralCurveConnection::IfcStructuralCurveConnection(Step::Id id, Step::SPFData *args) : IfcStructuralConnection(id, args) {
}

IfcStructuralCurveConnection::~IfcStructuralCurveConnection() {
}

bool IfcStructuralCurveConnection::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralCurveConnection(this);
}

const std::string &IfcStructuralCurveConnection::type() {
    return IfcStructuralCurveConnection::s_type.getName();
}

Step::ClassType IfcStructuralCurveConnection::getClassType() {
    return IfcStructuralCurveConnection::s_type;
}

Step::ClassType IfcStructuralCurveConnection::getType() const {
    return IfcStructuralCurveConnection::s_type;
}

bool IfcStructuralCurveConnection::isOfType(Step::ClassType t) {
    return IfcStructuralCurveConnection::s_type == t ? true : IfcStructuralConnection::isOfType(t);
}

void IfcStructuralCurveConnection::release() {
    IfcStructuralConnection::release();
}

bool IfcStructuralCurveConnection::init() {
    bool status = IfcStructuralConnection::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralCurveConnection::copy(const IfcStructuralCurveConnection &obj, const CopyOp &copyop) {
    IfcStructuralConnection::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralCurveConnection::s_type("IfcStructuralCurveConnection");
