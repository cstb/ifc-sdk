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

#include "ifc2x3/IfcRelConnectsWithEccentricity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConnectionGeometry.h"
#include "ifc2x3/IfcRelConnectsStructuralMember.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRelConnectsWithEccentricity::IfcRelConnectsWithEccentricity(Step::Id id, Step::SPFData *args) : IfcRelConnectsStructuralMember(id, args) {
    m_connectionConstraint = NULL;
}

IfcRelConnectsWithEccentricity::~IfcRelConnectsWithEccentricity() {
}

bool IfcRelConnectsWithEccentricity::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRelConnectsWithEccentricity(this);
}

const std::string &IfcRelConnectsWithEccentricity::type() {
    return IfcRelConnectsWithEccentricity::s_type.getName();
}

Step::ClassType IfcRelConnectsWithEccentricity::getClassType() {
    return IfcRelConnectsWithEccentricity::s_type;
}

Step::ClassType IfcRelConnectsWithEccentricity::getType() const {
    return IfcRelConnectsWithEccentricity::s_type;
}

bool IfcRelConnectsWithEccentricity::isOfType(Step::ClassType t) {
    return IfcRelConnectsWithEccentricity::s_type == t ? true : IfcRelConnectsStructuralMember::isOfType(t);
}

IfcConnectionGeometry *IfcRelConnectsWithEccentricity::getConnectionConstraint() {
    if (Step::BaseObject::inited()) {
        return m_connectionConstraint.get();
    }
    else {
        return NULL;
    }
}

void IfcRelConnectsWithEccentricity::setConnectionConstraint(const Step::RefPtr< IfcConnectionGeometry > &value) {
    m_connectionConstraint = value;
}

void IfcRelConnectsWithEccentricity::release() {
    IfcRelConnectsStructuralMember::release();
    m_connectionConstraint.release();
}

bool IfcRelConnectsWithEccentricity::init() {
    bool status = IfcRelConnectsStructuralMember::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_connectionConstraint = NULL;
    }
    else {
        m_connectionConstraint = static_cast< IfcConnectionGeometry * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcRelConnectsWithEccentricity::copy(const IfcRelConnectsWithEccentricity &obj, const CopyOp &copyop) {
    IfcRelConnectsStructuralMember::copy(obj, copyop);
    setConnectionConstraint(copyop(obj.m_connectionConstraint.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelConnectsWithEccentricity::s_type("IfcRelConnectsWithEccentricity");
