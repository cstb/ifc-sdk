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

#include "ifc2x3/IfcReferenceCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcReferenceCurvePlacementSystem.h"
#include "ifc2x3/IfcReferenceElement.h"
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

IfcReferenceCurve::IfcReferenceCurve(Step::Id id, Step::SPFData *args) : IfcReferenceElement(id, args) {
    m_hasPlacements.setUnset(true);
}

IfcReferenceCurve::~IfcReferenceCurve() {
}

bool IfcReferenceCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferenceCurve(this);
}

const std::string &IfcReferenceCurve::type() {
    return IfcReferenceCurve::s_type.getName();
}

Step::ClassType IfcReferenceCurve::getClassType() {
    return IfcReferenceCurve::s_type;
}

Step::ClassType IfcReferenceCurve::getType() const {
    return IfcReferenceCurve::s_type;
}

bool IfcReferenceCurve::isOfType(Step::ClassType t) {
    return IfcReferenceCurve::s_type == t ? true : IfcReferenceElement::isOfType(t);
}

Step::Set< Step::ObsPtr< IfcReferenceCurvePlacementSystem > > &IfcReferenceCurve::getHasPlacements() {
    if (Step::BaseObject::inited()) {
        return m_hasPlacements;
    }
    else {
        m_hasPlacements.setUnset(true);
        return m_hasPlacements;
    }
}

void IfcReferenceCurve::release() {
    IfcReferenceElement::release();
}

bool IfcReferenceCurve::init() {
    bool status = IfcReferenceElement::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcReferenceCurvePlacementSystem::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_hasPlacements.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasPlacements.insert(static_cast< IfcReferenceCurvePlacementSystem * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcReferenceCurve::copy(const IfcReferenceCurve &obj, const CopyOp &copyop) {
    IfcReferenceElement::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferenceCurve::s_type("IfcReferenceCurve");
