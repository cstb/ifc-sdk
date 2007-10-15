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

#include "ifc2x3/IfcStructuralSurfaceConnection.h"

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

IfcStructuralSurfaceConnection::IfcStructuralSurfaceConnection(Step::Id id, Step::SPFData *args) : IfcStructuralConnection(id, args) {
}

IfcStructuralSurfaceConnection::~IfcStructuralSurfaceConnection() {
}

bool IfcStructuralSurfaceConnection::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralSurfaceConnection(this);
}

const std::string &IfcStructuralSurfaceConnection::type() {
    return IfcStructuralSurfaceConnection::s_type.getName();
}

Step::ClassType IfcStructuralSurfaceConnection::getClassType() {
    return IfcStructuralSurfaceConnection::s_type;
}

Step::ClassType IfcStructuralSurfaceConnection::getType() const {
    return IfcStructuralSurfaceConnection::s_type;
}

bool IfcStructuralSurfaceConnection::isOfType(Step::ClassType t) {
    return IfcStructuralSurfaceConnection::s_type == t ? true : IfcStructuralConnection::isOfType(t);
}

void IfcStructuralSurfaceConnection::release() {
    IfcStructuralConnection::release();
}

bool IfcStructuralSurfaceConnection::init() {
    bool status = IfcStructuralConnection::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralSurfaceConnection::copy(const IfcStructuralSurfaceConnection &obj, const CopyOp &copyop) {
    IfcStructuralConnection::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralSurfaceConnection::s_type("IfcStructuralSurfaceConnection");
