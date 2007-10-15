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

#include "ifc2x3/IfcStructuralPlanarAction.h"

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

IfcStructuralPlanarAction::IfcStructuralPlanarAction(Step::Id id, Step::SPFData *args) : IfcStructuralAction(id, args) {
    m_projectedOrTrue = IfcProjectedOrTrueLengthEnum_UNSET;
}

IfcStructuralPlanarAction::~IfcStructuralPlanarAction() {
}

bool IfcStructuralPlanarAction::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralPlanarAction(this);
}

const std::string &IfcStructuralPlanarAction::type() {
    return IfcStructuralPlanarAction::s_type.getName();
}

Step::ClassType IfcStructuralPlanarAction::getClassType() {
    return IfcStructuralPlanarAction::s_type;
}

Step::ClassType IfcStructuralPlanarAction::getType() const {
    return IfcStructuralPlanarAction::s_type;
}

bool IfcStructuralPlanarAction::isOfType(Step::ClassType t) {
    return IfcStructuralPlanarAction::s_type == t ? true : IfcStructuralAction::isOfType(t);
}

IfcProjectedOrTrueLengthEnum IfcStructuralPlanarAction::getProjectedOrTrue() {
    if (Step::BaseObject::inited()) {
        return m_projectedOrTrue;
    }
    else {
        return IfcProjectedOrTrueLengthEnum_UNSET;
    }
}

void IfcStructuralPlanarAction::setProjectedOrTrue(IfcProjectedOrTrueLengthEnum value) {
    m_projectedOrTrue = value;
}

void IfcStructuralPlanarAction::release() {
    IfcStructuralAction::release();
}

bool IfcStructuralPlanarAction::init() {
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

void IfcStructuralPlanarAction::copy(const IfcStructuralPlanarAction &obj, const CopyOp &copyop) {
    IfcStructuralAction::copy(obj, copyop);
    setProjectedOrTrue(obj.m_projectedOrTrue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralPlanarAction::s_type("IfcStructuralPlanarAction");
