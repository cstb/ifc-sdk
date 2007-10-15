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

#include "ifc2x3/IfcGridAxis.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcGrid.h"
#include "ifc2x3/IfcVirtualGridIntersection.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcGridAxis::IfcGridAxis(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_axisTag = Step::getUnset(m_axisTag);
    m_axisCurve = NULL;
    m_sameSense = Step::getUnset(m_sameSense);
    m_partOfW.setUnset(true);
    m_partOfV.setUnset(true);
    m_partOfU.setUnset(true);
    m_hasIntersections.setUnset(true);
}

IfcGridAxis::~IfcGridAxis() {
}

bool IfcGridAxis::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcGridAxis(this);
}

const std::string &IfcGridAxis::type() {
    return IfcGridAxis::s_type.getName();
}

Step::ClassType IfcGridAxis::getClassType() {
    return IfcGridAxis::s_type;
}

Step::ClassType IfcGridAxis::getType() const {
    return IfcGridAxis::s_type;
}

bool IfcGridAxis::isOfType(Step::ClassType t) {
    return IfcGridAxis::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcGridAxis::getAxisTag() {
    if (Step::BaseObject::inited()) {
        return m_axisTag;
    }
    else {
        return Step::getUnset(m_axisTag);
    }
}

void IfcGridAxis::setAxisTag(const IfcLabel &value) {
    m_axisTag = value;
}

IfcCurve *IfcGridAxis::getAxisCurve() {
    if (Step::BaseObject::inited()) {
        return m_axisCurve.get();
    }
    else {
        return NULL;
    }
}

void IfcGridAxis::setAxisCurve(const Step::RefPtr< IfcCurve > &value) {
    m_axisCurve = value;
}

IfcBoolean IfcGridAxis::getSameSense() {
    if (Step::BaseObject::inited()) {
        return m_sameSense;
    }
    else {
        return Step::getUnset(m_sameSense);
    }
}

void IfcGridAxis::setSameSense(IfcBoolean value) {
    m_sameSense = value;
}

Step::Set< Step::ObsPtr< IfcGrid > > &IfcGridAxis::getPartOfW() {
    if (Step::BaseObject::inited()) {
        return m_partOfW;
    }
    else {
        m_partOfW.setUnset(true);
        return m_partOfW;
    }
}

Step::Set< Step::ObsPtr< IfcGrid > > &IfcGridAxis::getPartOfV() {
    if (Step::BaseObject::inited()) {
        return m_partOfV;
    }
    else {
        m_partOfV.setUnset(true);
        return m_partOfV;
    }
}

Step::Set< Step::ObsPtr< IfcGrid > > &IfcGridAxis::getPartOfU() {
    if (Step::BaseObject::inited()) {
        return m_partOfU;
    }
    else {
        m_partOfU.setUnset(true);
        return m_partOfU;
    }
}

Step::Set< Step::ObsPtr< IfcVirtualGridIntersection > > &IfcGridAxis::getHasIntersections() {
    if (Step::BaseObject::inited()) {
        return m_hasIntersections;
    }
    else {
        m_hasIntersections.setUnset(true);
        return m_hasIntersections;
    }
}

void IfcGridAxis::release() {
    m_axisCurve.release();
}

bool IfcGridAxis::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axisTag = Step::getUnset(m_axisTag);
    }
    else {
        m_axisTag = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axisCurve = NULL;
    }
    else {
        m_axisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sameSense = Step::getUnset(m_sameSense);
    }
    else {
        m_sameSense = Step::spfToBool(arg);
    }
    inverses = m_args->getInverses(IfcGrid::getClassType(), 9);
    if (inverses) {
        unsigned int i;
        m_partOfW.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_partOfW.insert(static_cast< IfcGrid * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcGrid::getClassType(), 8);
    if (inverses) {
        unsigned int i;
        m_partOfV.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_partOfV.insert(static_cast< IfcGrid * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcGrid::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_partOfU.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_partOfU.insert(static_cast< IfcGrid * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcVirtualGridIntersection::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_hasIntersections.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasIntersections.insert(static_cast< IfcVirtualGridIntersection * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcGridAxis::copy(const IfcGridAxis &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setAxisTag(obj.m_axisTag);
    setAxisCurve(copyop(obj.m_axisCurve.get()));
    setSameSense(obj.m_sameSense);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcGridAxis::s_type("IfcGridAxis");
