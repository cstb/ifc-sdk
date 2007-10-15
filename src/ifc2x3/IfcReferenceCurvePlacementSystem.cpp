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

#include "ifc2x3/IfcReferenceCurvePlacementSystem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcReferenceCurve.h"
#include "ifc2x3/IfcReferenceCurvePlacement.h"
#include "ifc2x3/IfcReferencePlacement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcReferenceCurvePlacementSystem::IfcReferenceCurvePlacementSystem(Step::Id id, Step::SPFData *args) : IfcReferencePlacement(id, args) {
    m_label = Step::getUnset(m_label);
    m_basedOn = NULL;
    m_includes.setUnset(true);
}

IfcReferenceCurvePlacementSystem::~IfcReferenceCurvePlacementSystem() {
}

bool IfcReferenceCurvePlacementSystem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferenceCurvePlacementSystem(this);
}

const std::string &IfcReferenceCurvePlacementSystem::type() {
    return IfcReferenceCurvePlacementSystem::s_type.getName();
}

Step::ClassType IfcReferenceCurvePlacementSystem::getClassType() {
    return IfcReferenceCurvePlacementSystem::s_type;
}

Step::ClassType IfcReferenceCurvePlacementSystem::getType() const {
    return IfcReferenceCurvePlacementSystem::s_type;
}

bool IfcReferenceCurvePlacementSystem::isOfType(Step::ClassType t) {
    return IfcReferenceCurvePlacementSystem::s_type == t ? true : IfcReferencePlacement::isOfType(t);
}

std::string IfcReferenceCurvePlacementSystem::getLabel() {
    if (Step::BaseObject::inited()) {
        return m_label;
    }
    else {
        return Step::getUnset(m_label);
    }
}

void IfcReferenceCurvePlacementSystem::setLabel(const std::string &value) {
    m_label = value;
}

IfcReferenceCurve *IfcReferenceCurvePlacementSystem::getBasedOn() {
    if (Step::BaseObject::inited()) {
        return m_basedOn.get();
    }
    else {
        return NULL;
    }
}

void IfcReferenceCurvePlacementSystem::setBasedOn(const Step::RefPtr< IfcReferenceCurve > &value) {
    m_basedOn = value;
    m_basedOn->m_hasPlacements.insert(this);
}

Step::Set< Step::ObsPtr< IfcReferenceCurvePlacement > > &IfcReferenceCurvePlacementSystem::getIncludes() {
    if (Step::BaseObject::inited()) {
        return m_includes;
    }
    else {
        m_includes.setUnset(true);
        return m_includes;
    }
}

void IfcReferenceCurvePlacementSystem::release() {
    IfcReferencePlacement::release();
    m_basedOn.release();
}

bool IfcReferenceCurvePlacementSystem::init() {
    bool status = IfcReferencePlacement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_label = Step::getUnset(m_label);
    }
    else {
        m_label = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basedOn = NULL;
    }
    else {
        m_basedOn = static_cast< IfcReferenceCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    inverses = m_args->getInverses(IfcReferenceCurvePlacement::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_includes.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_includes.insert(static_cast< IfcReferenceCurvePlacement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcReferenceCurvePlacementSystem::copy(const IfcReferenceCurvePlacementSystem &obj, const CopyOp &copyop) {
    IfcReferencePlacement::copy(obj, copyop);
    setLabel(obj.m_label);
    setBasedOn(copyop(obj.m_basedOn.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferenceCurvePlacementSystem::s_type("IfcReferenceCurvePlacementSystem");
