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

#include "ifc2x3/IfcStructuralCurveMemberVarying.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralCurveMember.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralCurveMemberVarying::IfcStructuralCurveMemberVarying(Step::Id id, Step::SPFData *args) : IfcStructuralCurveMember(id, args) {
}

IfcStructuralCurveMemberVarying::~IfcStructuralCurveMemberVarying() {
}

bool IfcStructuralCurveMemberVarying::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralCurveMemberVarying(this);
}

const std::string &IfcStructuralCurveMemberVarying::type() const {
    return IfcStructuralCurveMemberVarying::s_type.getName();
}

const Step::ClassType &IfcStructuralCurveMemberVarying::getClassType() {
    return IfcStructuralCurveMemberVarying::s_type;
}

const Step::ClassType &IfcStructuralCurveMemberVarying::getType() const {
    return IfcStructuralCurveMemberVarying::s_type;
}

bool IfcStructuralCurveMemberVarying::isOfType(const Step::ClassType &t) const {
    return IfcStructuralCurveMemberVarying::s_type == t ? true : IfcStructuralCurveMember::isOfType(t);
}

bool IfcStructuralCurveMemberVarying::init() {
    bool status = IfcStructuralCurveMember::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcStructuralCurveMemberVarying::copy(const IfcStructuralCurveMemberVarying &obj, const CopyOp &copyop) {
    IfcStructuralCurveMember::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralCurveMemberVarying::s_type("IfcStructuralCurveMemberVarying");
