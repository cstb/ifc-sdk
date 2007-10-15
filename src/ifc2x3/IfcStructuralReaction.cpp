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

#include "ifc2x3/IfcStructuralReaction.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralAction.h"
#include "ifc2x3/IfcStructuralActivity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralReaction::IfcStructuralReaction(Step::Id id, Step::SPFData *args) : IfcStructuralActivity(id, args) {
    m_causes.setUnset(true);
}

IfcStructuralReaction::~IfcStructuralReaction() {
}

bool IfcStructuralReaction::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralReaction(this);
}

const std::string &IfcStructuralReaction::type() {
    return IfcStructuralReaction::s_type.getName();
}

Step::ClassType IfcStructuralReaction::getClassType() {
    return IfcStructuralReaction::s_type;
}

Step::ClassType IfcStructuralReaction::getType() const {
    return IfcStructuralReaction::s_type;
}

bool IfcStructuralReaction::isOfType(Step::ClassType t) {
    return IfcStructuralReaction::s_type == t ? true : IfcStructuralActivity::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcStructuralAction > > &IfcStructuralReaction::getCauses() {
    if (Step::BaseObject::inited()) {
        return m_causes;
    }
    else {
        m_causes.setUnset(true);
        return m_causes;
    }
}

void IfcStructuralReaction::release() {
    IfcStructuralActivity::release();
}

bool IfcStructuralReaction::init() {
    bool status = IfcStructuralActivity::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcStructuralAction::getClassType(), 10);
    if (inverses) {
        unsigned int i;
        m_causes.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_causes.insert(static_cast< IfcStructuralAction * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralReaction::copy(const IfcStructuralReaction &obj, const CopyOp &copyop) {
    IfcStructuralActivity::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralReaction::s_type("IfcStructuralReaction");
