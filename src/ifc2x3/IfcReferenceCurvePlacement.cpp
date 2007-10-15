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

#include "ifc2x3/IfcReferenceCurvePlacement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDirection.h"
#include "ifc2x3/IfcReferenceCurvePlacementSystem.h"
#include "ifc2x3/IfcReferencePlacement.h"
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

IfcReferenceCurvePlacement::IfcReferenceCurvePlacement(Step::Id id, Step::SPFData *args) : IfcReferencePlacement(id, args) {
    m_curvilinearAbscissa = Step::getUnset(m_curvilinearAbscissa);
    m_axis = NULL;
    m_refDirection = NULL;
    m_relativeTo = NULL;
}

IfcReferenceCurvePlacement::~IfcReferenceCurvePlacement() {
}

bool IfcReferenceCurvePlacement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcReferenceCurvePlacement(this);
}

const std::string &IfcReferenceCurvePlacement::type() {
    return IfcReferenceCurvePlacement::s_type.getName();
}

Step::ClassType IfcReferenceCurvePlacement::getClassType() {
    return IfcReferenceCurvePlacement::s_type;
}

Step::ClassType IfcReferenceCurvePlacement::getType() const {
    return IfcReferenceCurvePlacement::s_type;
}

bool IfcReferenceCurvePlacement::isOfType(Step::ClassType t) {
    return IfcReferenceCurvePlacement::s_type == t ? true : IfcReferencePlacement::isOfType(t);
}

IfcLengthMeasure IfcReferenceCurvePlacement::getCurvilinearAbscissa() {
    if (Step::BaseObject::inited()) {
        return m_curvilinearAbscissa;
    }
    else {
        return Step::getUnset(m_curvilinearAbscissa);
    }
}

void IfcReferenceCurvePlacement::setCurvilinearAbscissa(IfcLengthMeasure value) {
    m_curvilinearAbscissa = value;
}

IfcDirection *IfcReferenceCurvePlacement::getAxis() {
    if (Step::BaseObject::inited()) {
        return m_axis.get();
    }
    else {
        return NULL;
    }
}

void IfcReferenceCurvePlacement::setAxis(const Step::RefPtr< IfcDirection > &value) {
    m_axis = value;
}

IfcDirection *IfcReferenceCurvePlacement::getRefDirection() {
    if (Step::BaseObject::inited()) {
        return m_refDirection.get();
    }
    else {
        return NULL;
    }
}

void IfcReferenceCurvePlacement::setRefDirection(const Step::RefPtr< IfcDirection > &value) {
    m_refDirection = value;
}

IfcReferenceCurvePlacementSystem *IfcReferenceCurvePlacement::getRelativeTo() {
    if (Step::BaseObject::inited()) {
        return m_relativeTo.get();
    }
    else {
        return NULL;
    }
}

void IfcReferenceCurvePlacement::setRelativeTo(const Step::RefPtr< IfcReferenceCurvePlacementSystem > &value) {
    m_relativeTo = value;
    m_relativeTo->m_includes.insert(this);
}

void IfcReferenceCurvePlacement::release() {
    IfcReferencePlacement::release();
    m_axis.release();
    m_refDirection.release();
    m_relativeTo.release();
}

bool IfcReferenceCurvePlacement::init() {
    bool status = IfcReferencePlacement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curvilinearAbscissa = Step::getUnset(m_curvilinearAbscissa);
    }
    else {
        m_curvilinearAbscissa = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis = NULL;
    }
    else {
        m_axis = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refDirection = NULL;
    }
    else {
        m_refDirection = static_cast< IfcDirection * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relativeTo = NULL;
    }
    else {
        m_relativeTo = static_cast< IfcReferenceCurvePlacementSystem * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcReferenceCurvePlacement::copy(const IfcReferenceCurvePlacement &obj, const CopyOp &copyop) {
    IfcReferencePlacement::copy(obj, copyop);
    setCurvilinearAbscissa(obj.m_curvilinearAbscissa);
    setAxis(copyop(obj.m_axis.get()));
    setRefDirection(copyop(obj.m_refDirection.get()));
    setRelativeTo(copyop(obj.m_relativeTo.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcReferenceCurvePlacement::s_type("IfcReferenceCurvePlacement");
