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

#include "ifc2x3/IfcStructuralLinearAction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralAction.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLinearAction::IfcStructuralLinearAction(Step::Id id, Step::SPFData *args) : IfcStructuralAction(id, args) {
    m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}

IfcStructuralLinearAction::~IfcStructuralLinearAction() {
}

bool IfcStructuralLinearAction::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLinearAction(this);
}

const std::string &IfcStructuralLinearAction::type() {
    return IfcStructuralLinearAction::s_type.getName();
}

Step::ClassType IfcStructuralLinearAction::getClassType() {
    return IfcStructuralLinearAction::s_type;
}

Step::ClassType IfcStructuralLinearAction::getType() const {
    return IfcStructuralLinearAction::s_type;
}

bool IfcStructuralLinearAction::isOfType(Step::ClassType t) {
    return IfcStructuralLinearAction::s_type == t ? true : IfcStructuralAction::isOfType(t);
}

IfcProjectedOrTrueLengthEnum IfcStructuralLinearAction::getProjectedOrTrue() {
    if (Step::BaseObject::inited()) {
        return m_projectedOrTrue;
    }
    else {
        return IfcProjectedOrTrueLengthEnum_UNSET;
    }
}

void IfcStructuralLinearAction::setProjectedOrTrue(IfcProjectedOrTrueLengthEnum value) {
    m_projectedOrTrue = value;
}

void IfcStructuralLinearAction::release() {
    IfcStructuralAction::release();
}

bool IfcStructuralLinearAction::init() {
    bool status = IfcStructuralAction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
    }
    else {
        if (arg == ".PROJECTED_LENGTH.") {
            m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_PROJECTED_LENGTH;
        }
        else if (arg == ".TRUE_LENGTH.") {
            m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_TRUE_LENGTH;
        }
    }
    return true;
}

void IfcStructuralLinearAction::copy(const IfcStructuralLinearAction &obj, const CopyOp &copyop) {
    IfcStructuralAction::copy(obj, copyop);
    setProjectedOrTrue(obj.m_projectedOrTrue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLinearAction::s_type("IfcStructuralLinearAction");
